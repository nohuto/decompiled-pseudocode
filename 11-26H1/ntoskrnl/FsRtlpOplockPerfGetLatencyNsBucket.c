/*
 * XREFs of FsRtlpOplockPerfGetLatencyNsBucket @ 0x140791D20
 * Callers:
 *     FsRtlpOplockPerfSummarizeData @ 0x140791EDC (FsRtlpOplockPerfSummarizeData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FsRtlpOplockPerfGetLatencyNsBucket(__int64 a1)
{
  unsigned __int16 i; // dx
  __int64 result; // rax

  for ( i = 0; i < (unsigned __int16)word_140E65DA8; ++i )
  {
    result = g_OplockPerfLatencyLevels[i + 16];
    if ( a1 < result )
      return result;
  }
  return g_OplockPerfLatencyLevels[(unsigned __int16)word_140E65DA8 + 16];
}
