/*
 * XREFs of ?UndockedSearchExperienceManager_PrelaunchDeferralTimerStarted@SearchAppExperienceManagerTelemetry@@SAXXZ @ 0x1801FA480
 * Callers:
 *     ?StartPrelaunchDeferralTimer@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18023F994 (-StartPrelaunchDeferralTimer@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?Provider@SearchAppLauncherLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800BCA70 (-Provider@SearchAppLauncherLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall SearchAppExperienceManagerTelemetry::UndockedSearchExperienceManager_PrelaunchDeferralTimerStarted(
        __int64 a1)
{
  const struct _tlgProvider_t *v1; // rax

  v1 = SearchAppLauncherLogging::Provider(a1);
  if ( *(_DWORD *)v1 > 5u )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)v1,
      byte_1807FC5ED,
      0LL);
}
