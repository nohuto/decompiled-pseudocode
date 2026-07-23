/*
 * XREFs of RtlpHpVaMgrCtxFree @ 0x18006F4F4
 * Callers:
 *     RtlpHpSegMgrReserve @ 0x18006EA9C (RtlpHpSegMgrReserve.c)
 *     RtlpHpFreeVA @ 0x18006EE10 (RtlpHpFreeVA.c)
 *     RtlpHpLargeAlloc @ 0x18006FE4C (RtlpHpLargeAlloc.c)
 *     RtlpHpLargeReAlloc @ 0x1800710A8 (RtlpHpLargeReAlloc.c)
 *     RtlpHpLargeFree @ 0x18008058C (RtlpHpLargeFree.c)
 *     RtlpHpSegMgrCommit @ 0x18008A260 (RtlpHpSegMgrCommit.c)
 *     RtlpHpHeapDestroy @ 0x1800DFE7C (RtlpHpHeapDestroy.c)
 *     RtlpHpLargeAllocationDestroy @ 0x1800E0740 (RtlpHpLargeAllocationDestroy.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpVaMgrRangeSplit @ 0x18006FC10 (RtlpHpVaMgrRangeSplit.c)
 *     RtlpHpVaMgrFree @ 0x18006FC80 (RtlpHpVaMgrFree.c)
 *     RtlSparseArrayElementAllocated @ 0x1800706A0 (RtlSparseArrayElementAllocated.c)
 *     RtlpHpEnvFreeVA @ 0x180070900 (RtlpHpEnvFreeVA.c)
 *     RtlpHpVaMgrRangeFree @ 0x180070970 (RtlpHpVaMgrRangeFree.c)
 *     RtlSparseArrayElementFindCapped @ 0x18012038C (RtlSparseArrayElementFindCapped.c)
 */

void __fastcall RtlpHpVaMgrCtxFree(__int64 a1, PVOID *a2, ULONG_PTR *a3)
{
  ULONG_PTR v6; // rdi
  _BYTE *v7; // rax
  __int64 v8; // rbx
  _BYTE *v9; // r13
  __int64 v10; // rsi
  char *v11; // r12
  ULONG_PTR v12; // rbp
  __int64 v13; // rax
  ULONG_PTR v14; // r10
  _WORD *v15; // r9
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdx
  char v21; // cl
  char v22; // dl
  __int64 v23; // rax
  ULONG_PTR v24; // rax
  __int64 v25; // rdi
  __int64 Capped; // rbx

  v6 = *a3 >> 20;
  v7 = (_BYTE *)RtlSparseArrayElementAllocated(a1 + 16, ((unsigned __int64)*a2 - *(_QWORD *)(a1 + 8)) >> 20);
  v8 = (__int64)v7;
  if ( !v7 )
  {
    Capped = RtlSparseArrayElementFindCapped(
               a1 + 16,
               ((__int64)*a2 - *(_QWORD *)(a1 + 8)) / 0x100000,
               ~(((__int64)*a2 - *(_QWORD *)(a1 + 8)) / 0x100000));
    RtlpHpEnvFreeVA(a2, a3, *(_QWORD *)(a1 + 48 * (*(unsigned __int8 *)(Capped + 1) + 45LL) + 32));
    *(_QWORD *)(Capped + 24) -= *a3 >> 20;
    return;
  }
  v9 = v7;
  v10 = a1 + 48 * ((unsigned __int8)v7[1] + 45LL);
  if ( (*v7 & 4) != 0 )
  {
    *v7 &= ~1u;
LABEL_22:
    RtlpHpVaMgrRangeFree(v10, v8);
    return;
  }
  if ( (unsigned int)`RtlpHpMemoryTypePageSize'::`2'::PageSize[((unsigned __int64)*(unsigned __int8 *)(v10 + 46) >> 1) & 7] <= 0x100000 )
  {
    v11 = (char *)*a2;
    v12 = *a3;
    v13 = RtlSparseArrayElementAllocated(
            *(_QWORD *)(v10 + 24) + 16LL,
            ((unsigned __int64)*a2 - *(_QWORD *)(*(_QWORD *)(v10 + 24) + 8LL)) >> 20);
    if ( v12 )
    {
      v14 = v12;
      v15 = (_WORD *)(v13 + 2);
      v16 = (unsigned __int64)v11;
      do
      {
        v17 = (((unsigned __int64)v15 - *(_QWORD *)(*(_QWORD *)(v10 + 24) + 40LL) - 2) >> *(_DWORD *)(*(_QWORD *)(v10 + 24) + 24LL) << 20)
            + *(_QWORD *)(*(_QWORD *)(v10 + 24) + 8LL);
        v18 = v16 + v14;
        v19 = v17 + 0x100000;
        if ( v16 + v14 <= v17 || v19 <= v16 )
        {
          BYTE2(v16) = 0;
          v20 = 0LL;
        }
        else
        {
          if ( v16 <= v17 )
            v16 = (((unsigned __int64)v15 - *(_QWORD *)(*(_QWORD *)(v10 + 24) + 40LL) - 2) >> *(_DWORD *)(*(_QWORD *)(v10 + 24) + 24LL) << 20)
                + *(_QWORD *)(*(_QWORD *)(v10 + 24) + 8LL);
          if ( v18 >= v19 )
            v18 = v17 + 0x100000;
          v20 = v18 - v16;
        }
        v11 += v20;
        v12 -= v20;
        v14 = v12;
        v21 = BYTE2(v16) & 0xF;
        v16 = (unsigned __int64)v11;
        *v15 &= ~(((1 << SBYTE2(v20)) - 1) << v21);
        v15 += 16;
      }
      while ( v12 );
    }
    RtlpHpEnvFreeVA(a2, a3, *(_QWORD *)(v10 + 32));
  }
  if ( (*(_BYTE *)v8 & 2) != 0 )
  {
    v25 = v8;
    do
      v8 -= 32LL;
    while ( (*(_BYTE *)v8 & 2) != 0 );
  }
  else
  {
    v22 = *(_BYTE *)v8 & 4;
    if ( ((*(_BYTE *)(v10 + 46) >> 5) & (v22 == 0)) == 0 )
    {
      v23 = v22 ? *(_QWORD *)(v8 + 24) : *(unsigned __int16 *)(v8 + 24);
      if ( v6 != v23 )
        NT_ASSERT("(Range->Standalone == 0 && Allocator->AllowFreeHead == 1) || ChunksToFree == RtlpHpVaMgrRangeSize(Range)");
    }
    if ( v22 )
      v24 = *(_QWORD *)(v8 + 24);
    else
      v24 = *(unsigned __int16 *)(v8 + 24);
    if ( v6 < v24 )
      v25 = v8 + 32 * v6;
    else
      v25 = 0LL;
  }
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)v10);
  if ( v25 )
    RtlpHpVaMgrRangeSplit(v10, v8, (v25 - v8) >> 5);
  v8 = RtlpHpVaMgrFree(v10, v9);
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)v10);
  if ( v8 )
    goto LABEL_22;
}
