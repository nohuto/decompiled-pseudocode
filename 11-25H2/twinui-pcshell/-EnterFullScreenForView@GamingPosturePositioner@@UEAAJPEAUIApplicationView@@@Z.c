/*
 * XREFs of ?EnterFullScreenForView@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x1804E24C0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180190B5C (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?AddView@ApplicationViewCollection@@QEAA_NPEAUIApplicationView@@@Z @ 0x1804DD894 (-AddView@ApplicationViewCollection@@QEAA_NPEAUIApplicationView@@@Z.c)
 *     ?Provider@GamingPosturePositionerTraceProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1804E47FC (-Provider@GamingPosturePositionerTraceProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 */

__int64 __fastcall GamingPosturePositioner::EnterFullScreenForView(RTL_SRWLOCK *this, struct IApplicationView *a2)
{
  const struct _tlgProvider_t *v4; // rax
  __int64 v5; // r9
  const char *v6; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IApplicationView *v9; // [rsp+40h] [rbp+8h] BYREF

  v4 = GamingPosturePositionerTraceProvider::Provider();
  if ( *(_DWORD *)v4 > 4u )
  {
    v9 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
      (__int64)v4,
      byte_1807DC9B4,
      0LL,
      v5,
      (__int64)&v9);
  }
  try
  {
    ApplicationViewCollection::AddView(this + 73, a2);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x3AE,
                           (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
                           v6);
  }
  return result;
}
