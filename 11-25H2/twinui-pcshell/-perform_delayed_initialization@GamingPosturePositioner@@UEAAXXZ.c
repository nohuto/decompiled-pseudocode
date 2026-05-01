/*
 * XREFs of ?perform_delayed_initialization@GamingPosturePositioner@@UEAAXXZ @ 0x1804E53C0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180015BDC (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?HandleViewRecovery@GamingPosturePositioner@@AEAAXXZ @ 0x1804E2EFC (-HandleViewRecovery@GamingPosturePositioner@@AEAAXXZ.c)
 *     ?OnGamingPostureChanged@GamingPosturePositioner@@AEAAJH@Z @ 0x1804E428C (-OnGamingPostureChanged@GamingPosturePositioner@@AEAAJH@Z.c)
 *     ?Provider@GamingPosturePositionerTraceProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1804E47FC (-Provider@GamingPosturePositionerTraceProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall GamingPosturePositioner::perform_delayed_initialization(GamingPosturePositioner *this)
{
  const struct _tlgProvider_t *v2; // rax
  __int64 v3; // rcx

  v2 = GamingPosturePositionerTraceProvider::Provider((__int64)this);
  if ( *(_DWORD *)v2 > 4u )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)v2,
      byte_1807DCE38,
      0LL);
  if ( (unsigned int)IsGamingFullScreenExperienceActive(v3) )
  {
    GamingPosturePositioner::OnGamingPostureChanged((GamingPosturePositioner *)((char *)this - 64), 1);
    GamingPosturePositioner::HandleViewRecovery((GamingPosturePositioner *)((char *)this - 64));
  }
}
