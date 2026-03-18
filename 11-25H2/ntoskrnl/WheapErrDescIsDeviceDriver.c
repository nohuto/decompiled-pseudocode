/*
 * XREFs of WheapErrDescIsDeviceDriver @ 0x140650754
 * Callers:
 *     WheaAddHwErrorReportSectionDeviceDriver @ 0x140650040 (WheaAddHwErrorReportSectionDeviceDriver.c)
 *     WheaHwErrorReportSubmitDeviceDriver @ 0x140650320 (WheaHwErrorReportSubmitDeviceDriver.c)
 *     WheapFreeDriverPacketBuffer @ 0x140650788 (WheapFreeDriverPacketBuffer.c)
 *     WheapGetPreallocatedPacketBuffer @ 0x140650804 (WheapGetPreallocatedPacketBuffer.c)
 *     WheapInitErrorReportDeviceDriver @ 0x1406508B8 (WheapInitErrorReportDeviceDriver.c)
 *     WheaRemoveErrorSourceDeviceDriver @ 0x1407B7800 (WheaRemoveErrorSourceDeviceDriver.c)
 * Callees:
 *     <none>
 */

bool __fastcall WheapErrDescIsDeviceDriver(__int64 a1)
{
  return a1 && *(_DWORD *)(a1 + 8) == 16;
}
