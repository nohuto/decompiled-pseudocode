/*
 * XREFs of FsRtlpComputeLargeRatio @ 0x1405B98C4
 * Callers:
 *     FsRtlpOplockPerfInitializeLatencyInfo @ 0x140791D5C (FsRtlpOplockPerfInitializeLatencyInfo.c)
 *     FsRtlpOplockPerfSummarizeData @ 0x140791EDC (FsRtlpOplockPerfSummarizeData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FsRtlpComputeLargeRatio(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 v4; // r11
  bool v6; // zf
  unsigned __int64 v7; // r11
  unsigned __int64 v8; // r8

  v3 = 0LL;
  v4 = a2;
  if ( !a3 )
    return 0LL;
  if ( a1 <= (0x7FFFFFFFFFFFFFFFLL - a3 / 2) / a2 )
    return (v4 * a1 + a3 / 2) / a3;
  do
  {
    if ( v4 <= 0 )
      break;
    v6 = a3 == 0;
    if ( a3 <= 0 )
      goto LABEL_8;
    v7 = (__int64)((unsigned __int128)(v4 * (__int128)0x6666666666666667LL) >> 64) >> 2;
    v4 = (v7 >> 63) + v7;
    v8 = (__int64)((unsigned __int128)(a3 * (__int128)0x6666666666666667LL) >> 64) >> 2;
    a3 = (v8 >> 63) + v8;
  }
  while ( a1 > (0x7FFFFFFFFFFFFFFFLL - a3 / 2) / v4 );
  v6 = a3 == 0;
LABEL_8:
  if ( !v6 )
    return (v4 * a1 + a3 / 2) / a3;
  return v3;
}
