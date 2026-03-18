/*
 * XREFs of HUBPDO_EvtDeviceDisableWakeAtBus @ 0x1400160B0
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_WaitForSignal @ 0x14003436C (HUBMISC_WaitForSignal.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBPDO_EvtDeviceDisableWakeAtBus(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdi
  __int64 v3; // rbx

  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
             WdfDriverGlobals,
             a1,
             off_14006D1D0);
  v2 = result;
  _InterlockedAnd((volatile signed __int32 *)(result + 32), 0xFFFFFFFB);
  _InterlockedAnd((volatile signed __int32 *)(result + 32), 0xFFFFFFF7);
  if ( (*(_DWORD *)(result + 32) & 0x4010) == 0x4000 )
  {
    _InterlockedAnd((volatile signed __int32 *)(result + 32), 0xFFFFBFFF);
    v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           *(_QWORD *)(result + 264),
           off_14006D128);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2064))(
      WdfDriverGlobals,
      *(_QWORD *)(v2 + 264));
    return HUBMISC_WaitForSignal((PVOID)(v3 + 24));
  }
  return result;
}
