/*
 * XREFs of RtlPrefetchMemoryNonTemporal @ 0x1801632B0
 * Callers:
 *     RtlPrefetchMemoryNonTemporal @ 0x1801632B0 (RtlPrefetchMemoryNonTemporal.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlPrefetchMemoryNonTemporal(const char *a1, unsigned __int64 a2)
{
  bool v2; // cc

  do
  {
    _mm_prefetch(a1, 0);
    a1 += 64;
    v2 = a2 <= 0x40;
    a2 -= 64LL;
  }
  while ( !v2 );
}
