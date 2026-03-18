/*
 * XREFs of WheapGetErrorSource @ 0x1403541D8
 * Callers:
 *     WheaGetErrorSource @ 0x140353D00 (WheaGetErrorSource.c)
 *     WheaReportHwError @ 0x140353D30 (WheaReportHwError.c)
 *     HalpMcaReportError @ 0x14053D8B4 (HalpMcaReportError.c)
 *     HalHandleNMI @ 0x140541310 (HalHandleNMI.c)
 *     KiMcheckAlternateReturn @ 0x1405C5660 (KiMcheckAlternateReturn.c)
 *     WheapReportBootError @ 0x14064FAA4 (WheapReportBootError.c)
 *     WheaErrorSourceGetState @ 0x14064FBF0 (WheaErrorSourceGetState.c)
 *     WheapAttemptArchitecturalErrorRecovery @ 0x14064FD70 (WheapAttemptArchitecturalErrorRecovery.c)
 *     WheaAddHwErrorReportSectionDeviceDriver @ 0x140650040 (WheaAddHwErrorReportSectionDeviceDriver.c)
 *     WheaHwErrorReportSubmitDeviceDriver @ 0x140650320 (WheaHwErrorReportSubmitDeviceDriver.c)
 *     WheapFreeDriverPacketBuffer @ 0x140650788 (WheapFreeDriverPacketBuffer.c)
 *     WheapGetPreallocatedPacketBuffer @ 0x140650804 (WheapGetPreallocatedPacketBuffer.c)
 *     WheapInitErrorReportDeviceDriver @ 0x1406508B8 (WheapInitErrorReportDeviceDriver.c)
 *     WheapWmiExecuteErrorSourceMethod @ 0x140652FA0 (WheapWmiExecuteErrorSourceMethod.c)
 *     WheaRemoveErrorSource @ 0x1407B7430 (WheaRemoveErrorSource.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall WheapGetErrorSource(__int64 a1, unsigned int a2)
{
  __int64 *v2; // r8
  int i; // r9d

  if ( *(_DWORD *)a1 == 1279410516 && a2 && a2 < *(_DWORD *)(a1 + 8) )
  {
    v2 = *(__int64 **)(a1 + 16);
    for ( i = 0; i < *(_DWORD *)(a1 + 4); ++i )
    {
      if ( *((_DWORD *)v2 + 31) == a2 && !*((_BYTE *)v2 + 88) && (unsigned int)(*((_DWORD *)v2 + 27) - 1) <= 1 )
        return v2;
      v2 = (__int64 *)*v2;
    }
  }
  return 0LL;
}
