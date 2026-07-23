/*
 * XREFs of RtlpInterlockedFlushSList @ 0x180162C50
 * Callers:
 *     RtlpLowFragHeapFlushCaches @ 0x180002680 (RtlpLowFragHeapFlushCaches.c)
 *     RtlpFreeNTHeapInternal @ 0x1800036C0 (RtlpFreeNTHeapInternal.c)
 *     RtlpHpVsContextCompact @ 0x180061C90 (RtlpHpVsContextCompact.c)
 *     RtlInterlockedFlushSList @ 0x1800DE700 (RtlInterlockedFlushSList.c)
 *     RtlpHpVsContextFree @ 0x1800E0118 (RtlpHpVsContextFree.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlpInterlockedFlushSList(__int128 *a1)
{
  __int128 v1; // rax
  signed __int64 v2; // rbx
  __int128 v3; // rt0
  unsigned __int8 v4; // tt

  _m_prefetchw(a1);
  v1 = *a1;
  do
  {
    v2 = v1;
    LOWORD(v2) = 0;
    v3 = v1;
    v4 = _InterlockedCompareExchange128((volatile signed __int64 *)a1, 0LL, v2, (signed __int64 *)&v3);
    v1 = v3;
  }
  while ( !v4 );
  return BYTE8(v1) & 0xF0;
}
