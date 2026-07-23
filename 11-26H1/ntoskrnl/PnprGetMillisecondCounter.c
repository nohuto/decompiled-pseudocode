/*
 * XREFs of PnprGetMillisecondCounter @ 0x140BF76E4
 * Callers:
 *     PnprMirrorPhysicalMemory @ 0x1405DE520 (PnprMirrorPhysicalMemory.c)
 *     PnprSwapFinalize @ 0x1405DE92C (PnprSwapFinalize.c)
 *     PnpReplacePartitionUnit @ 0x1407B0E20 (PnpReplacePartitionUnit.c)
 *     PnprQuiesceDevices @ 0x140BF80F0 (PnprQuiesceDevices.c)
 *     PnprQuiesceProcessors @ 0x140BF86B4 (PnprQuiesceProcessors.c)
 *     PnprWakeDevices @ 0x140BF8D2C (PnprWakeDevices.c)
 *     PnprWakeProcessors @ 0x140BF8DAC (PnprWakeProcessors.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 */

__int64 __fastcall PnprGetMillisecondCounter(char a1)
{
  unsigned int v2; // edi
  LONGLONG v3; // rax
  __int128 v4; // rtt
  __int64 result; // rax
  LARGE_INTEGER PerformanceFrequency; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  PerformanceFrequency.QuadPart = 0LL;
  v4 = 1000LL * *(_QWORD *)&KeQueryPerformanceCounter(&PerformanceFrequency);
  v3 = v4 / PerformanceFrequency.QuadPart;
  if ( !a1 )
    v2 = v3 + dword_140E66450 - dword_140E66454;
  dword_140E66454 = v3;
  result = v2;
  dword_140E66450 = v2;
  return result;
}
