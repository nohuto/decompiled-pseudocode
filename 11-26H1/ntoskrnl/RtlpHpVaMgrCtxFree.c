/*
 * XREFs of RtlpHpVaMgrCtxFree @ 0x140351F7C
 * Callers:
 *     RtlpHpSegMgrCommit @ 0x140350BD0 (RtlpHpSegMgrCommit.c)
 *     RtlpHpFreeVA @ 0x140352258 (RtlpHpFreeVA.c)
 *     RtlpHpLargeAlloc @ 0x140353E20 (RtlpHpLargeAlloc.c)
 *     RtlpHpLargeFree @ 0x14035645C (RtlpHpLargeFree.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x14027D6E0 (RtlpHpAcquireLockExclusive.c)
 *     RtlpHpReleaseLockExclusive @ 0x14034F380 (RtlpHpReleaseLockExclusive.c)
 *     MmFreePoolMemory @ 0x14035231C (MmFreePoolMemory.c)
 *     RtlSparseArrayElementAllocated @ 0x140352638 (RtlSparseArrayElementAllocated.c)
 *     RtlpHpVaMgrRangeFree @ 0x140352980 (RtlpHpVaMgrRangeFree.c)
 *     RtlpHpVaMgrRangeSplit @ 0x140352A0C (RtlpHpVaMgrRangeSplit.c)
 *     RtlpHpVaMgrFree @ 0x140352A80 (RtlpHpVaMgrFree.c)
 *     RtlSparseArrayElementFindCapped @ 0x14053193C (RtlSparseArrayElementFindCapped.c)
 */

void __fastcall RtlpHpVaMgrCtxFree(__int64 a1, unsigned __int64 *a2, unsigned __int64 *a3)
{
  unsigned __int64 v6; // rdi
  _BYTE *v7; // rax
  struct _KLOCK_ENTRIES *v8; // r9
  __int64 v9; // rbx
  __int64 v10; // rsi
  unsigned __int8 v11; // dl
  __int64 v12; // r8
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // rbp
  __int64 v15; // rax
  unsigned __int64 v16; // r11
  _WORD *v17; // r10
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rdx
  __int64 v22; // rbp
  char v23; // cl
  __int64 v24; // rax
  unsigned __int64 v25; // rax
  __int64 v26; // rdi
  char v27; // r14
  __int64 Capped; // rbx
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // r8

  v6 = *a3 >> 20;
  v7 = (_BYTE *)RtlSparseArrayElementAllocated(a1 + 16, (*a2 - *(_QWORD *)(a1 + 8)) >> 20);
  v9 = (__int64)v7;
  if ( v7 )
  {
    v10 = a1 + 48 * ((unsigned __int8)v7[1] + 45LL);
    if ( (*v7 & 4) != 0 )
    {
      *v7 &= ~1u;
LABEL_27:
      RtlpHpVaMgrRangeFree(v10, v9);
      return;
    }
    v11 = *(_BYTE *)(v10 + 46);
    v12 = 0x100000LL;
    if ( (unsigned int)`RtlpHpMemoryTypePageSize'::`2'::PageSize[((unsigned __int64)v11 >> 1) & 7] <= 0x100000 )
    {
      v13 = *a2;
      v14 = *a3;
      v15 = RtlSparseArrayElementAllocated(
              *(_QWORD *)(v10 + 24) + 16LL,
              (*a2 - *(_QWORD *)(*(_QWORD *)(v10 + 24) + 8LL)) >> 20);
      if ( v14 )
      {
        v16 = v14;
        v17 = (_WORD *)(v15 + 2);
        v18 = v13;
        do
        {
          v19 = *(_QWORD *)(*(_QWORD *)(v10 + 24) + 8LL)
              + (((unsigned __int64)v17 - *(_QWORD *)(*(_QWORD *)(v10 + 24) + 40LL) - 2) >> *(_DWORD *)(*(_QWORD *)(v10 + 24) + 24LL) << 20);
          v20 = v19 + 0x100000;
          if ( v18 + v16 <= v19 || v20 <= v18 )
          {
            BYTE2(v19) = 0;
            v21 = 0LL;
          }
          else
          {
            if ( v18 > v19 )
              v19 = v18;
            if ( v18 + v16 < v20 )
              v20 = v18 + v16;
            v21 = v20 - v19;
          }
          v13 += v21;
          v14 -= v21;
          v16 = v14;
          v18 = v13;
          *v17 &= ~(((1 << SBYTE2(v21)) - 1) << (BYTE2(v19) & 0xF));
          v17 += 16;
        }
        while ( v14 );
      }
      MmFreePoolMemory(a2, a3, 0x4000LL);
      v11 = *(_BYTE *)(v10 + 46);
    }
    v22 = v9;
    if ( (*(_BYTE *)v9 & 2) != 0 )
    {
      v26 = v9;
      do
        v9 -= 32LL;
      while ( (*(_BYTE *)v9 & 2) != 0 );
    }
    else
    {
      v23 = *(_BYTE *)v9 & 4;
      if ( ((v11 >> 5) & (v23 == 0)) == 0 )
      {
        v24 = v23 ? *(_QWORD *)(v9 + 24) : *(unsigned __int16 *)(v9 + 24);
        if ( v6 != v24 )
          NT_ASSERT("(Range->Standalone == 0 && Allocator->AllowFreeHead == 1) || ChunksToFree == RtlpHpVaMgrRangeSize(Range)");
      }
      if ( v23 )
        v25 = *(_QWORD *)(v9 + 24);
      else
        v25 = *(unsigned __int16 *)(v9 + 24);
      if ( v6 < v25 )
        v26 = v9 + 32 * v6;
      else
        v26 = 0LL;
    }
    v27 = RtlpHpAcquireLockExclusive((int *)v10, *(_BYTE *)(v10 + 46) & 1, v12, v8);
    if ( v26 )
      RtlpHpVaMgrRangeSplit(v10, v9, (v26 - v9) >> 5);
    v9 = RtlpHpVaMgrFree(v10, v22);
    RtlpHpReleaseLockExclusive((struct _KTHREAD *)v10, *(_BYTE *)(v10 + 46) & 1, v27);
    if ( v9 )
      goto LABEL_27;
  }
  else
  {
    Capped = RtlSparseArrayElementFindCapped(
               a1 + 16,
               (__int64)(*a2 - *(_QWORD *)(a1 + 8)) / 0x100000,
               ~((__int64)(*a2 - *(_QWORD *)(a1 + 8)) / 0x100000));
    v29 = (*a2 + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL;
    v30 = *a2 + *a3 - v29;
    *a2 = v29;
    *a3 = v30;
    if ( v30 )
      MmFreePoolMemory(a2, a3, 0x8000LL);
    *(_QWORD *)(Capped + 24) -= *a3 >> 20;
  }
}
