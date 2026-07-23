/*
 * XREFs of MiReplenishCombineResources @ 0x14047CE9C
 * Callers:
 *     MiSharePagesLockPageTable @ 0x1402E932C (MiSharePagesLockPageTable.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiGetSlabPage @ 0x14033C304 (MiGetSlabPage.c)
 */

__int64 __fastcall MiReplenishCombineResources(__int64 *a1)
{
  __int64 v1; // rsi
  unsigned __int64 v3; // rdi
  _QWORD *v4; // rcx
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  __int64 *v7; // r10
  __int64 SlabPage; // rax
  __int64 result; // rax

  v1 = *a1;
  if ( !a1[37] )
  {
    v3 = 0LL;
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v1 + 88));
    v4 = (_QWORD *)(v1 + 72);
    v5 = *(_QWORD *)(v1 + 72);
    if ( v5 != v1 + 72 )
    {
      if ( *(_QWORD **)(v5 + 8) != v4 || (v6 = *(_QWORD *)v5, *(_QWORD *)(*(_QWORD *)v5 + 8LL) != v5) )
        __fastfail(3u);
      *v4 = v6;
      v3 = v5;
      *(_QWORD *)(v6 + 8) = v4;
      ++*(_DWORD *)((v5 & 0xFFFFFFFFFFFFF000uLL) + 8);
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v1 + 88));
    if ( !v3 )
      return 3221226029LL;
    a1[37] = v3;
  }
  if ( a1[38] )
    return 0LL;
  v7 = a1 + 39;
  if ( a1[39] )
    v7 = 0LL;
  SlabPage = MiGetSlabPage(
               *(_QWORD *)v1,
               6,
               *((_DWORD *)a1 + 82) ^ (unsigned int)(unsigned __int8)(*((_DWORD *)a1 + 82) ^ _InterlockedExchangeAdd(
                                                                                               (volatile signed __int32 *)a1[40],
                                                                                               1u)),
               0x11u,
               v7,
               0);
  if ( SlabPage != -1 )
  {
    a1[38] = 48 * SlabPage - 0x220000000000LL;
    return 0LL;
  }
  result = 3221226029LL;
  if ( (unsigned __int64)a1[39] <= 1 )
    return 3221225626LL;
  return result;
}
