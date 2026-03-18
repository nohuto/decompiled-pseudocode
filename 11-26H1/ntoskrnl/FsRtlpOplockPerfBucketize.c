/*
 * XREFs of FsRtlpOplockPerfBucketize @ 0x14078F0F8
 * Callers:
 *     FsRtlpOplockPerfSendData @ 0x140AE8CD4 (FsRtlpOplockPerfSendData.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021C3F0 (KeQueryPerformanceCounter.c)
 */

signed __int64 __fastcall FsRtlpOplockPerfBucketize(_QWORD *a1)
{
  LARGE_INTEGER PerformanceCounter; // r8
  unsigned __int16 v3; // ax
  LONGLONG v4; // r8
  unsigned __int16 i; // dx
  __int64 v6; // rdx
  __int64 v7; // rax

  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v3 = word_140E65C48;
  v4 = PerformanceCounter.QuadPart - *a1;
  for ( i = 0; i < (unsigned __int16)word_140E65C48; ++i )
  {
    if ( v4 < g_OplockPerfLatencyLevels[i] )
    {
      v3 = i;
      break;
    }
  }
  v6 = 16LL * v3;
  v7 = **(_QWORD **)g_OplockPerfData;
  ++*(_QWORD *)(v6 + v7);
  *(_QWORD *)(v6 + v7 + 8) += v4;
  if ( v4 > *(_QWORD *)(*(_QWORD *)g_OplockPerfData + 16LL) )
    *(_QWORD *)(*(_QWORD *)g_OplockPerfData + 16LL) = v4;
  return _InterlockedIncrement64((volatile signed __int64 *)(g_OplockPerfData + 16));
}
