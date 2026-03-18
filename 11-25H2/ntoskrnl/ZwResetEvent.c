/*
 * XREFs of ZwResetEvent @ 0x14069E220
 * Callers:
 *     DifZwResetEventWrapper @ 0x14063B5E0 (DifZwResetEventWrapper.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x14070E608 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     PfSnVolumeCheckIsSdBus @ 0x1408EB938 (PfSnVolumeCheckIsSdBus.c)
 *     PfSnVolumeCheckSeekPenalty @ 0x1408EBC00 (PfSnVolumeCheckSeekPenalty.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140A776C0 (PiDrvDbLoadNodeWorkerCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwResetEvent(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
