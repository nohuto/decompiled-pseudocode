/*
 * XREFs of PipAreDriversLoaded @ 0x14051BDC0
 * Callers:
 *     IoReportDetectedDevice @ 0x14079E000 (IoReportDetectedDevice.c)
 *     PiDevCfgProcessDeviceCallback @ 0x1407AA380 (PiDevCfgProcessDeviceCallback.c)
 *     PnpProcessQueryRemoveAndEject @ 0x140911B30 (PnpProcessQueryRemoveAndEject.c)
 *     PiControlGetUserFlagsFromDeviceNode @ 0x1409A7808 (PiControlGetUserFlagsFromDeviceNode.c)
 * Callees:
 *     PipAreDriversLoadedWorker @ 0x140491558 (PipAreDriversLoadedWorker.c)
 */

__int64 __fastcall PipAreDriversLoaded(__int64 a1)
{
  return PipAreDriversLoadedWorker(*(_DWORD *)(a1 + 300), *(_DWORD *)(a1 + 304));
}
