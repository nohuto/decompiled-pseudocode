/*
 * XREFs of MiInsertNewCombineBlocks @ 0x1404CADD8
 * Callers:
 *     MiAllocateCombineBlock @ 0x140488D08 (MiAllocateCombineBlock.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

_QWORD *__fastcall MiInsertNewCombineBlocks(__int64 a1, _QWORD *a2)
{
  volatile LONG *v2; // rsi
  KIRQL v5; // al
  int v6; // edx
  __int64 *v7; // rbx
  __int64 v8; // rcx

  v2 = (volatile LONG *)(a1 + 88);
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 88));
  v6 = 54;
  v7 = (__int64 *)(a1 + 72);
  do
  {
    v8 = *v7;
    if ( *(__int64 **)(*v7 + 8) != v7 )
      __fastfail(3u);
    *a2 = v8;
    a2[1] = v7;
    *(_QWORD *)(v8 + 8) = a2;
    *v7 = (__int64)a2;
    a2 += 9;
    --v6;
  }
  while ( v6 );
  if ( v5 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  else
    ExReleaseSpinLockExclusive(v2, v5);
  return a2;
}
