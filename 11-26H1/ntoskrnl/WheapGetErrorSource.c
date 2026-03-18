/*
 * XREFs of WheapGetErrorSource @ 0x1403DE1E0
 * Callers:
 *     WheaReportHwError @ 0x1403DDD80 (WheaReportHwError.c)
 *     WheaGetErrorSource @ 0x1403DE800 (WheaGetErrorSource.c)
 *     HalpMcaReportError @ 0x140453F00 (HalpMcaReportError.c)
 *     HalHandleNMI @ 0x14057EA20 (HalHandleNMI.c)
 *     KiMcheckAlternateReturn @ 0x1405FCD70 (KiMcheckAlternateReturn.c)
 *     WheapReportBootError @ 0x1406D49AC (WheapReportBootError.c)
 *     WheaErrorSourceGetState @ 0x1406D4B00 (WheaErrorSourceGetState.c)
 *     WheapAttemptArchitecturalErrorRecovery @ 0x1406D4C84 (WheapAttemptArchitecturalErrorRecovery.c)
 *     WheaAddHwErrorReportSectionDeviceDriver @ 0x1406D4F60 (WheaAddHwErrorReportSectionDeviceDriver.c)
 *     WheaHwErrorReportSubmitDeviceDriver @ 0x1406D5230 (WheaHwErrorReportSubmitDeviceDriver.c)
 *     WheapFreeDriverPacketBuffer @ 0x1406D5698 (WheapFreeDriverPacketBuffer.c)
 *     WheapGetPreallocatedPacketBuffer @ 0x1406D5714 (WheapGetPreallocatedPacketBuffer.c)
 *     WheapInitErrorReportDeviceDriver @ 0x1406D5814 (WheapInitErrorReportDeviceDriver.c)
 *     WheapWmiExecuteErrorSourceMethod @ 0x1406D833C (WheapWmiExecuteErrorSourceMethod.c)
 *     WheaRemoveErrorSource @ 0x1408479F0 (WheaRemoveErrorSource.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall WheapGetErrorSource(__int64 a1, unsigned int a2)
{
  __int64 *result; // rax
  int v3; // r8d
  int v4; // r9d
  int v5; // ecx

  if ( *(_DWORD *)a1 == 1279410516 && a2 && a2 < *(_DWORD *)(a1 + 8) )
  {
    result = *(__int64 **)(a1 + 16);
    v3 = 0;
    v4 = *(_DWORD *)(a1 + 4);
    while ( v3 < v4 )
    {
      if ( *((_DWORD *)result + 31) == a2 && !*((_BYTE *)result + 88) )
      {
        v5 = *((_DWORD *)result + 27);
        if ( v5 == 2 || v5 == 1 )
          return result;
      }
      result = (__int64 *)*result;
      ++v3;
    }
  }
  return 0LL;
}
