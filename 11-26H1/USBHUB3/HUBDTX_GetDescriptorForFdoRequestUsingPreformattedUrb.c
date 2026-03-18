/*
 * XREFs of HUBDTX_GetDescriptorForFdoRequestUsingPreformattedUrb @ 0x14002B680
 * Callers:
 *     HUBDSM_QueryingDescriptorForFdoRequestFromStoppedEnumerated @ 0x1400235C0 (HUBDSM_QueryingDescriptorForFdoRequestFromStoppedEnumerated.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1400068F8 (WPP_RECORDER_SF_.c)
 *     HUBSM_AddEvent @ 0x14000A81C (HUBSM_AddEvent.c)
 *     HUBFDO_CompleteGetDescriptorRequest @ 0x14000CE30 (HUBFDO_CompleteGetDescriptorRequest.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBDTX_GetDescriptorForFdoRequestUsingPreformattedUrb(__int64 *a1)
{
  __int64 result; // rax
  int v3; // edx
  __int64 v4; // rax

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(), __int64 *))(WdfFunctions_01015 + 2080))(
    WdfDriverGlobals,
    a1[63],
    HUBDTX_GetDeviceDescriptorComplete,
    a1);
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, _QWORD))(WdfFunctions_01015 + 2024))(
             WdfDriverGlobals,
             a1[63],
             *(_QWORD *)(*a1 + 32),
             0LL);
  if ( !(_BYTE)result )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v3) = 2;
      WPP_RECORDER_SF_(*(_QWORD *)(a1[1] + 1432), v3, 5, 112, (__int64)&WPP_736cb17edbb73fe74dd9f642bb1bec68_Traceguids);
    }
    HUBSM_AddEvent((__int64)(a1 + 64), 4004);
    HUBFDO_CompleteGetDescriptorRequest(*a1, *(_WORD *)(a1[1] + 200), a1[63], -1073741823, 0);
    v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
             WdfDriverGlobals,
             v4,
             "User Mode FDO Request",
             6371LL,
             "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\devicexfer.c");
  }
  return result;
}
