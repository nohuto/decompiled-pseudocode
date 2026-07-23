/*
 * XREFs of WheapGetErrorSource @ 0x1403E13D0
 * Callers:
 *     WheaReportHwError @ 0x1403E0F70 (WheaReportHwError.c)
 *     WheaGetErrorSource @ 0x1403E19F0 (WheaGetErrorSource.c)
 *     HalpMcaReportError @ 0x14044C030 (HalpMcaReportError.c)
 *     HalHandleNMI @ 0x140580F40 (HalHandleNMI.c)
 *     KiMcheckAlternateReturn @ 0x1405FF7C0 (KiMcheckAlternateReturn.c)
 *     WheapReportBootError @ 0x1406D8A2C (WheapReportBootError.c)
 *     WheaErrorSourceGetState @ 0x1406D8BE0 (WheaErrorSourceGetState.c)
 *     WheapAttemptArchitecturalErrorRecovery @ 0x1406D8D64 (WheapAttemptArchitecturalErrorRecovery.c)
 *     WheaAddHwErrorReportSectionDeviceDriver @ 0x1406D9040 (WheaAddHwErrorReportSectionDeviceDriver.c)
 *     WheaHwErrorReportSubmitDeviceDriver @ 0x1406D9310 (WheaHwErrorReportSubmitDeviceDriver.c)
 *     WheapFreeDriverPacketBuffer @ 0x1406D9778 (WheapFreeDriverPacketBuffer.c)
 *     WheapGetPreallocatedPacketBuffer @ 0x1406D97F4 (WheapGetPreallocatedPacketBuffer.c)
 *     WheapInitErrorReportDeviceDriver @ 0x1406D98F4 (WheapInitErrorReportDeviceDriver.c)
 *     WheapWmiExecuteErrorSourceMethod @ 0x1406DC4CC (WheapWmiExecuteErrorSourceMethod.c)
 *     WheaRemoveErrorSource @ 0x14084DC80 (WheaRemoveErrorSource.c)
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
