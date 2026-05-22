/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$00@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@3@Z @ 0x1800021B4
 * Callers:
 *     ?MPC3DStateHelper_FireEventsOnInputThread_@ISMTracing@@QEAAX_N0@Z @ 0x1800B11FC (-MPC3DStateHelper_FireEventsOnInputThread_@ISMTracing@@QEAAX_N0@Z.c)
 *     ?MPCHolographicInputManager_InputDisableFlagsChanged_@ISMTracing@@QEAAXAEB_N0@Z @ 0x1800BAD78 (-MPCHolographicInputManager_InputDisableFlagsChanged_@ISMTracing@@QEAAXAEB_N0@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18000BEAC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  _QWORD v7[8]; // [rsp+30h] [rbp-58h] BYREF

  v7[6] = a6;
  v7[4] = a5;
  v7[7] = 1LL;
  v7[5] = 1LL;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL, 0LL, 4, v7);
}
