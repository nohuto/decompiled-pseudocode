/*
 * XREFs of ACPIEcStopDevice @ 0x1400602A0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x140024510 (ACPIInternalGetDeviceExtension.c)
 *     ACPIEcStopRemoveDeviceCommon @ 0x1400602F0 (ACPIEcStopRemoveDeviceCommon.c)
 *     ACPIBusIrpStopDevice @ 0x1400AE270 (ACPIBusIrpStopDevice.c)
 */

__int64 __fastcall ACPIEcStopDevice(ULONG_PTR a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 result; // rax

  v4 = *(_QWORD *)(ACPIInternalGetDeviceExtension(a1) + 184);
  result = ACPIBusIrpStopDevice(a1, a2);
  if ( (int)result >= 0 )
    return ACPIEcStopRemoveDeviceCommon(v4);
  return result;
}
