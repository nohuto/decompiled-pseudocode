/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180001008
 * Callers:
 *     ?LowPowerEpochNotificationCallback@@YAKPEAXK0@Z @ 0x180005D70 (-LowPowerEpochNotificationCallback@@YAKPEAXK0@Z.c)
 *     ?OnPoStandbyAudioRequestReceived@CWindowsPolicyManager@@UEAAJ_N@Z @ 0x180029520 (-OnPoStandbyAudioRequestReceived@CWindowsPolicyManager@@UEAAJ_N@Z.c)
 *     ?OnPowerResumeSuspend@CWindowsPolicyManager@@UEAAJ_N@Z @ 0x180046A50 (-OnPowerResumeSuspend@CWindowsPolicyManager@@UEAAJ_N@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180020290 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18002F820 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
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
  v7[7] = 4LL;
  v7[5] = 1LL;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL, 0LL, 4, v7);
}
