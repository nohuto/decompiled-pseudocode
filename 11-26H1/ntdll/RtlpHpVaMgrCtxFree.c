/*
 * XREFs of RtlpHpVaMgrCtxFree @ 0x18008C0B4
 * Callers:
 *     RtlpHpSegMgrCommit @ 0x180069E10 (RtlpHpSegMgrCommit.c)
 *     RtlpHpLargeFree @ 0x18008918C (RtlpHpLargeFree.c)
 *     RtlpHpLargeReAlloc @ 0x180089604 (RtlpHpLargeReAlloc.c)
 *     RtlpHpLargeAlloc @ 0x18008A18C (RtlpHpLargeAlloc.c)
 *     RtlpHpSegMgrReserve @ 0x18008B664 (RtlpHpSegMgrReserve.c)
 *     RtlpHpFreeVA @ 0x18008B9D0 (RtlpHpFreeVA.c)
 *     RtlpHpHeapDestroy @ 0x18008E4B4 (RtlpHpHeapDestroy.c)
 *     RtlpHpLargeAllocationDestroy @ 0x18008ED18 (RtlpHpLargeAllocationDestroy.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpVaMgrRangeSplit @ 0x18008C7D4 (RtlpHpVaMgrRangeSplit.c)
 *     RtlpHpVaMgrFree @ 0x18008C844 (RtlpHpVaMgrFree.c)
 *     RtlSparseArrayElementAllocated @ 0x18008CD44 (RtlSparseArrayElementAllocated.c)
 *     RtlpHpEnvFreeVA @ 0x18008CFA0 (RtlpHpEnvFreeVA.c)
 *     RtlpHpVaMgrRangeFree @ 0x18008D010 (RtlpHpVaMgrRangeFree.c)
 *     RtlSparseArrayElementFindCapped @ 0x1801205DC (RtlSparseArrayElementFindCapped.c)
 */

__int64 __fastcall RtlpHpVaMgrCtxFree(__int64 a1, unsigned __int64 *a2, __int64 *a3)
{
  unsigned __int64 v6; // rdi
  _BYTE *v7; // rax
  __int64 v8; // rdx
  _BYTE *v9; // r14
  _BYTE *v10; // rbx
  __int64 v11; // rsi
  unsigned __int64 v12; // r13
  __int64 v13; // rbp
  __int64 v14; // rax
  __int64 v15; // r10
  _WORD *v16; // r9
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rdx
  char v22; // cl
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  _BYTE *v25; // rdi
  __int64 result; // rax
  __int64 Capped; // rbx

  v6 = (unsigned __int64)*a3 >> 20;
  v7 = (_BYTE *)RtlSparseArrayElementAllocated(a1 + 16, (*a2 - *(_QWORD *)(a1 + 8)) >> 20);
  v9 = v7;
  v10 = v7;
  if ( !v7 )
  {
    Capped = RtlSparseArrayElementFindCapped(
               a1 + 16,
               (__int64)(*a2 - *(_QWORD *)(a1 + 8)) / 0x100000,
               ~((__int64)(*a2 - *(_QWORD *)(a1 + 8)) / 0x100000));
    RtlpHpEnvFreeVA(
      (_DWORD)a2,
      (_DWORD)a3,
      0x8000,
      (*(unsigned __int8 *)(a1 + 48 * (*(unsigned __int8 *)(Capped + 1) + 45LL) + 46) >> 1) & 7,
      *(_QWORD *)(a1 + 48 * (*(unsigned __int8 *)(Capped + 1) + 45LL) + 32));
    result = (unsigned __int64)*a3 >> 20;
    *(_QWORD *)(Capped + 24) -= result;
    return result;
  }
  v11 = a1 + 48 * ((unsigned __int8)v7[1] + 45LL);
  if ( (*v7 & 4) != 0 )
  {
    *v7 &= ~1u;
    return RtlpHpVaMgrRangeFree(v11, v10);
  }
  if ( (unsigned int)`RtlpHpMemoryTypePageSize'::`2'::PageSize[((unsigned __int64)*(unsigned __int8 *)(v11 + 46) >> 1) & 7] <= 0x100000 )
  {
    v12 = *a2;
    v13 = *a3;
    v14 = RtlSparseArrayElementAllocated(
            *(_QWORD *)(v11 + 24) + 16LL,
            (*a2 - *(_QWORD *)(*(_QWORD *)(v11 + 24) + 8LL)) >> 20);
    if ( v13 )
    {
      v15 = v13;
      v16 = (_WORD *)(v14 + 2);
      v17 = v12;
      do
      {
        v18 = (((unsigned __int64)v16 - *(_QWORD *)(*(_QWORD *)(v11 + 24) + 40LL) - 2) >> *(_DWORD *)(*(_QWORD *)(v11 + 24) + 24LL) << 20)
            + *(_QWORD *)(*(_QWORD *)(v11 + 24) + 8LL);
        v19 = v17 + v15;
        v20 = v18 + 0x100000;
        if ( v17 + v15 <= v18 || v20 <= v17 )
        {
          BYTE2(v17) = 0;
          v21 = 0LL;
        }
        else
        {
          if ( v17 <= v18 )
            v17 = (((unsigned __int64)v16 - *(_QWORD *)(*(_QWORD *)(v11 + 24) + 40LL) - 2) >> *(_DWORD *)(*(_QWORD *)(v11 + 24) + 24LL) << 20)
                + *(_QWORD *)(*(_QWORD *)(v11 + 24) + 8LL);
          if ( v19 >= v20 )
            v19 = v18 + 0x100000;
          v21 = v19 - v17;
        }
        v12 += v21;
        v13 -= v21;
        v15 = v13;
        v22 = BYTE2(v17) & 0xF;
        v17 = v12;
        *v16 &= ~(((1 << SBYTE2(v21)) - 1) << v22);
        v16 += 16;
      }
      while ( v13 );
    }
    RtlpHpEnvFreeVA((_DWORD)a2, (_DWORD)a3, 0x4000, (*(unsigned __int8 *)(v11 + 46) >> 1) & 7, *(_QWORD *)(v11 + 32));
  }
  LOBYTE(v8) = *v9;
  if ( (*v9 & 2) != 0 )
  {
    v25 = v10;
    do
      v10 -= 32;
    while ( (*v10 & 2) != 0 );
  }
  else
  {
    LOBYTE(v8) = v8 & 4;
    if ( ((*(_BYTE *)(v11 + 46) >> 5) & ((_BYTE)v8 == 0)) == 0 )
    {
      v23 = (_BYTE)v8 ? *((_QWORD *)v9 + 3) : *((unsigned __int16 *)v9 + 12);
      if ( v6 != v23 )
        NT_ASSERT("(Range->Standalone == 0 && Allocator->AllowFreeHead == 1) || ChunksToFree == RtlpHpVaMgrRangeSize(Range)");
    }
    if ( (_BYTE)v8 )
      v24 = *((_QWORD *)v9 + 3);
    else
      v24 = *((unsigned __int16 *)v9 + 12);
    if ( v6 < v24 )
      v25 = &v10[32 * v6];
    else
      v25 = 0LL;
  }
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)v11, v8);
  if ( v25 )
    RtlpHpVaMgrRangeSplit(v11, v10, (v25 - v10) >> 5);
  v10 = (_BYTE *)RtlpHpVaMgrFree(v11, v9);
  result = (__int64)RtlReleaseSRWLockExclusive((volatile signed __int64 *)v11);
  if ( v10 )
    return RtlpHpVaMgrRangeFree(v11, v10);
  return result;
}
