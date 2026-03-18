/*
 * XREFs of HUBFDO_EvtDeviceDisarmWakeFromS0 @ 0x14000DC00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBFDO_EvtDeviceDisarmWakeFromS0(__int64 a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
             WdfDriverGlobals,
             a1,
             off_14006D270);
  _InterlockedAnd((volatile signed __int32 *)(result + 40), 0xFFFFFDFF);
  _InterlockedAnd((volatile signed __int32 *)(result + 40), 0xFFFFFBFF);
  return result;
}
