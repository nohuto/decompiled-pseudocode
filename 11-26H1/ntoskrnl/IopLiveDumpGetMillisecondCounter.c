/*
 * XREFs of IopLiveDumpGetMillisecondCounter @ 0x1404E48C0
 * Callers:
 *     IopLiveDumpAllocateDumpBuffers @ 0x1404E439C (IopLiveDumpAllocateDumpBuffers.c)
 *     IoCaptureLiveDump @ 0x14051255C (IoCaptureLiveDump.c)
 *     IoWriteDeferredLiveDumpData @ 0x1405CC298 (IoWriteDeferredLiveDumpData.c)
 *     IopLiveDumpAllocAndInitResources @ 0x1405CC998 (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpAllocateExtraBuffers @ 0x1405CD084 (IopLiveDumpAllocateExtraBuffers.c)
 *     IopLiveDumpCaptureMemoryPages @ 0x1405CE6D0 (IopLiveDumpCaptureMemoryPages.c)
 *     IopLiveDumpCollectPages @ 0x1405CE958 (IopLiveDumpCollectPages.c)
 *     IopLiveDumpCorralProcessors @ 0x1405CED50 (IopLiveDumpCorralProcessors.c)
 *     IopLiveDumpEnterCorralledState @ 0x1405CF050 (IopLiveDumpEnterCorralledState.c)
 *     IopLiveDumpEstimateMemoryPages @ 0x1405CF098 (IopLiveDumpEstimateMemoryPages.c)
 *     IopLiveDumpGenerateIptSecondaryData @ 0x1405CF6F8 (IopLiveDumpGenerateIptSecondaryData.c)
 *     IopLiveDumpInitiateCorralStateChange @ 0x1405D010C (IopLiveDumpInitiateCorralStateChange.c)
 *     IopLiveDumpMarkImportantDumpData @ 0x1405D035C (IopLiveDumpMarkImportantDumpData.c)
 *     IopLiveDumpMarkRequiredDumpData @ 0x1405D0778 (IopLiveDumpMarkRequiredDumpData.c)
 *     IopLiveDumpMirrorPhysicalMemoryCallback @ 0x1405D0970 (IopLiveDumpMirrorPhysicalMemoryCallback.c)
 *     IopLiveDumpPopulateBitmapForDump @ 0x1405D10C0 (IopLiveDumpPopulateBitmapForDump.c)
 *     IopLiveDumpRemoveSystemCacheFromDump @ 0x1405D18B0 (IopLiveDumpRemoveSystemCacheFromDump.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021C3F0 (KeQueryPerformanceCounter.c)
 */

__int64 __fastcall IopLiveDumpGetMillisecondCounter(char a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = 1000LL * *(_QWORD *)&KeQueryPerformanceCounter(0LL) / PerformanceFrequency.QuadPart;
  result = 0LL;
  if ( !a1 )
    result = v2 + qword_140E65FB8 - qword_140E65FB0;
  qword_140E65FB8 = result;
  qword_140E65FB0 = v2;
  return result;
}
