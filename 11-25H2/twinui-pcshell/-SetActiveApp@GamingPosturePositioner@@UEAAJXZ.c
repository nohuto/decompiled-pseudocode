/*
 * XREFs of ?SetActiveApp@GamingPosturePositioner@@UEAAJXZ @ 0x1804E4C10
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180015BDC (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?HandleViewFallback@GamingPosturePositioner@@AEAAXXZ @ 0x1804E2E50 (-HandleViewFallback@GamingPosturePositioner@@AEAAXXZ.c)
 *     ?Provider@GamingPosturePositionerTraceProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1804E47FC (-Provider@GamingPosturePositionerTraceProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 */

__int64 __fastcall GamingPosturePositioner::SetActiveApp(GamingPosturePositioner *this)
{
  const struct _tlgProvider_t *v2; // rax
  const char *v3; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = GamingPosturePositionerTraceProvider::Provider((__int64)this);
  if ( *(_DWORD *)v2 > 4u )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)v2,
      byte_1807DC86A,
      0LL);
  try
  {
    GamingPosturePositioner::HandleViewFallback(this);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x591,
                           (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
                           v3);
  }
  return result;
}
