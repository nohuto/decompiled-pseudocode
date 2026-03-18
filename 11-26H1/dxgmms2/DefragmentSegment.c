/*
 * XREFs of DefragmentSegment @ 0x1400B1AB8
 * Callers:
 *     ?TryDefragmentSegments@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAA_NI@Z @ 0x1400B29D0 (-TryDefragmentSegments@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAA_NI@Z.c)
 * Callees:
 *     ?VidMmiTickCountTo100ns@@YA_KT_LARGE_INTEGER@@0@Z @ 0x1400451F8 (-VidMmiTickCountTo100ns@@YA_KT_LARGE_INTEGER@@0@Z.c)
 *     ?Defragment@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x140099F08 (-Defragment@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 *     ?LogFullDefragPass@VIDMM_COMMIT_TELEMETRY@@QEAAXK@Z @ 0x1401270CC (-LogFullDefragPass@VIDMM_COMMIT_TELEMETRY@@QEAAXK@Z.c)
 */

__int64 __fastcall DefragmentSegment(__int64 a1, struct VIDMM_SEGMENT *a2)
{
  LARGE_INTEGER PerformanceCounter; // rdi
  LARGE_INTEGER v5; // rbx
  unsigned __int64 v6; // rsi
  __int64 result; // rax

  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  VIDMM_GLOBAL::Defragment(*(VIDMM_GLOBAL **)a1, a2);
  v5 = KeQueryPerformanceCounter(0LL);
  v6 = VidMmiTickCountTo100ns(PerformanceCounter, v5);
  VIDMM_COMMIT_TELEMETRY::LogFullDefragPass((VIDMM_COMMIT_TELEMETRY *)(a1 + 216), v6);
  result = WdLogSingleEntry1(4LL, v6 / 0xA / 0x3E8);
  *(_QWORD *)(a1 + 344) += v5.QuadPart - PerformanceCounter.QuadPart;
  ++*(_DWORD *)(a1 + 380);
  WdLogGlobalForLineNumber = 2019;
  return result;
}
