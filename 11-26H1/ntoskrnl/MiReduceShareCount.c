/*
 * XREFs of MiReduceShareCount @ 0x1402BC9E0
 * Callers:
 *     MiDecommitFreePagesTail @ 0x1402BC510 (MiDecommitFreePagesTail.c)
 *     MiPurgeFinish @ 0x1402EBEC0 (MiPurgeFinish.c)
 *     MiDeleteRotateVa @ 0x140314480 (MiDeleteRotateVa.c)
 *     MiDeleteNonPagedPoolTail @ 0x140364AB0 (MiDeleteNonPagedPoolTail.c)
 *     MiZeroAndFlushGoodCitizen @ 0x1404F2994 (MiZeroAndFlushGoodCitizen.c)
 * Callees:
 *     MiBadShareCount @ 0x1402BE4D0 (MiBadShareCount.c)
 *     MiPfnShareCountIsZero @ 0x1402BE530 (MiPfnShareCountIsZero.c)
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
