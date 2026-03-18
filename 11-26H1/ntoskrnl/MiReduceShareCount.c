/*
 * XREFs of MiReduceShareCount @ 0x1402DAC20
 * Callers:
 *     MiDecommitFreePagesTail @ 0x1402DA750 (MiDecommitFreePagesTail.c)
 *     MiPurgeFinish @ 0x140309E40 (MiPurgeFinish.c)
 *     MiDeleteRotateVa @ 0x140312450 (MiDeleteRotateVa.c)
 *     MiDeleteNonPagedPoolTail @ 0x140362D10 (MiDeleteNonPagedPoolTail.c)
 *     MiZeroAndFlushGoodCitizen @ 0x1404F9384 (MiZeroAndFlushGoodCitizen.c)
 * Callees:
 *     MiBadShareCount @ 0x1402DC710 (MiBadShareCount.c)
 *     MiPfnShareCountIsZero @ 0x1402DC770 (MiPfnShareCountIsZero.c)
 */

__int64 __fastcall MiReduceShareCount(__int64 a1, __int64 a2)
{
  __int64 v2; // r8

  if ( (*(_BYTE *)(a1 + 34) & 7) != 6 )
    MiBadShareCount(a1);
  v2 = (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL) - a2;
  *(_QWORD *)(a1 + 24) = v2 ^ (*(_QWORD *)(a1 + 24) ^ v2) & 0xC000000000000000uLL;
  if ( v2 )
    return 2LL;
  else
    return MiPfnShareCountIsZero(a1);
}
