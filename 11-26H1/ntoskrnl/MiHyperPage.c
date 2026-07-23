/*
 * XREFs of MiHyperPage @ 0x140292560
 * Callers:
 *     MiNoTradePageClaimCandidate @ 0x140292040 (MiNoTradePageClaimCandidate.c)
 *     MiIdentifyPfn @ 0x1402D2F70 (MiIdentifyPfn.c)
 *     MiMultiShareCountPageClaimCandidate @ 0x1404A3E7C (MiMultiShareCountPageClaimCandidate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiHyperPage(unsigned __int64 a1)
{
  unsigned __int64 v1; // r8
  unsigned int v2; // edx
  int v3; // r9d

  v1 = (((unsigned __int64)qword_140E2DFC0 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v2 = 0;
  v3 = 0;
  while ( a1 >= 0xFFFFF68000000000uLL && a1 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    if ( a1 >= v1 && a1 <= (((unsigned __int64)qword_140E2DFD0 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
      return (unsigned int)(v3 != 0) + 1;
    ++v3;
    a1 = (__int64)(a1 << 25) >> 16;
    v1 &= 0xFFFFFFFFFFFFF000uLL;
  }
  return v2;
}
