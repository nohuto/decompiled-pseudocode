/*
 * XREFs of ?UndockedSearchAppExperienceManager_HideView@SearchAppExperienceManagerTelemetry@@SAXXZ @ 0x18020A4B0
 * Callers:
 *     ?HideView@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x18023C8E8 (-HideView@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?Provider@SearchAppLauncherLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800BCA70 (-Provider@SearchAppLauncherLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_HideView(__int64 a1)
{
  const struct _tlgProvider_t *v1; // rax

  v1 = SearchAppLauncherLogging::Provider(a1);
  if ( *(_DWORD *)v1 > 5u )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)v1,
      byte_1807FCA88,
      0LL);
}
