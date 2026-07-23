/*
 * XREFs of RtlpHpVaMgrAlloc @ 0x140352C2C
 * Callers:
 *     RtlpHpAllocVA @ 0x1403660F0 (RtlpHpAllocVA.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x14027D6E0 (RtlpHpAcquireLockExclusive.c)
 *     RtlpHpReleaseLockExclusive @ 0x14034F380 (RtlpHpReleaseLockExclusive.c)
 *     MmFreePoolMemory @ 0x14035231C (MmFreePoolMemory.c)
 *     RtlpHpVaMgrRangeSplit @ 0x140352A0C (RtlpHpVaMgrRangeSplit.c)
 *     RtlpHpVaMgrFree @ 0x140352A80 (RtlpHpVaMgrFree.c)
 *     RtlpHpVaMgrRangeFind @ 0x140352E90 (RtlpHpVaMgrRangeFind.c)
 *     RtlpHpVaMgrRegionAllocate @ 0x140353158 (RtlpHpVaMgrRegionAllocate.c)
 *     RtlpHpVaMgrAllocAligned @ 0x1403531DC (RtlpHpVaMgrAllocAligned.c)
 *     RtlpHpVaMgrRangeCreate @ 0x140353268 (RtlpHpVaMgrRangeCreate.c)
 *     RtlRbRemoveNode @ 0x140379A10 (RtlRbRemoveNode.c)
 */

__int64 __fastcall RtlpHpVaMgrAlloc(
        struct _KTHREAD *a1,
        unsigned __int64 *a2,
        unsigned __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  unsigned __int64 v4; // r14
  unsigned __int64 v8; // r14
  char v9; // r15
  _RTL_BALANCED_NODE *v10; // rax
  __int64 v11; // rsi
  __int64 v12; // r8
  struct _KLOCK_ENTRIES *v13; // r9
  __int64 v14; // rbx
  ULONG_PTR v16; // rbx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // r8
  __int64 v20; // rax
  ULONG_PTR v21; // rsi
  __int64 v22; // rdx
  char v23; // al
  __int128 v24; // [rsp+20h] [rbp-20h] BYREF
  __int64 v25; // [rsp+30h] [rbp-10h]
  ULONG_PTR v26; // [rsp+38h] [rbp-8h]
  ULONG_PTR v27; // [rsp+70h] [rbp+30h] BYREF
  ULONG_PTR v28; // [rsp+78h] [rbp+38h] BYREF

  v4 = *a2;
  v27 = 0LL;
  if ( !v4 )
    NT_ASSERT("*SizeInOut > 0");
  if ( v4 <= LOWORD(a1->InitialStack) << 20 )
  {
    v8 = v4 >> 20;
    v9 = RtlpHpAcquireLockExclusive(&a1->Header.LockNV, BYTE6(a1->InitialStack) & 1, a3, a4);
    v10 = (_RTL_BALANCED_NODE *)RtlpHpVaMgrRangeFind(a1, (unsigned __int16)v8, (unsigned __int16)(a3 >> 20), &v27);
    v11 = (__int64)v10;
    if ( v10 )
    {
      RtlRbRemoveNode((PRTL_RB_TREE)&a1->Header.WaitListHead, v10);
      v16 = v27;
      if ( v27 != v11 )
      {
        *(_OWORD *)v11 = 0LL;
        *(_QWORD *)(v11 + 16) = 0LL;
        *(_BYTE *)v11 = 1;
        *(_BYTE *)(v11 + 1) = BYTE4(a1->InitialStack);
        RtlpHpVaMgrRangeSplit((__int64)a1, v11, (__int64)(v16 - v11) >> 5);
        RtlpHpVaMgrFree((__int64)a1);
        v11 = v16;
      }
      goto LABEL_6;
    }
    RtlpHpReleaseLockExclusive(a1, BYTE6(a1->InitialStack) & 1, v9);
    v11 = RtlpHpVaMgrRegionAllocate(a1);
    if ( v11 )
    {
      v9 = RtlpHpAcquireLockExclusive(&a1->Header.LockNV, BYTE6(a1->InitialStack) & 1, v12, v13);
LABEL_6:
      v14 = *((_QWORD *)a1->SListFaultAddress + 1)
          + ((unsigned __int64)(v11 - *((_QWORD *)a1->SListFaultAddress + 5)) >> *((_DWORD *)a1->SListFaultAddress + 6) << 20);
      *(_OWORD *)v11 = 0LL;
      *(_QWORD *)(v11 + 16) = 0LL;
      *(_BYTE *)v11 = 1;
      *(_BYTE *)(v11 + 1) = BYTE4(a1->InitialStack);
      if ( *(_WORD *)(v11 + 24) > (unsigned __int16)v8 )
      {
        RtlpHpVaMgrRangeSplit((__int64)a1, v11, (unsigned __int16)v8);
        RtlpHpVaMgrFree((__int64)a1);
      }
      RtlpHpReleaseLockExclusive(a1, BYTE6(a1->InitialStack) & 1, v9);
      return v14;
    }
    return 0LL;
  }
  v17 = BYTE6(a1->InitialStack);
  v18 = 0x200000LL;
  if ( a3 > 0x200000 )
    v18 = a3;
  v19 = (unsigned int)`RtlpHpMemoryTypePageSize'::`2'::PageSize[(v17 >> 1) & 7];
  if ( v18 > v19 )
    v19 = v18;
  v27 = v4 + v19 - ((v19 - 1) & (v19 + v4 - 1)) - 1;
  v20 = RtlpHpVaMgrAllocAligned(a1, &v27);
  v14 = v20;
  if ( v20 )
  {
    v21 = v27;
    v25 = 0LL;
    v22 = v20;
    v23 = BYTE4(a1->InitialStack);
    v24 = 0LL;
    BYTE1(v24) = v23;
    v26 = v27 >> 20;
    LOBYTE(v24) = 5;
    if ( RtlpHpVaMgrRangeCreate(a1, v22, &v24) )
    {
      *a2 = v21;
      return v14;
    }
    v28 = (v14 + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL;
    v27 = v14 - v28 + v21;
    if ( v27 )
      MmFreePoolMemory(&v28, &v27, 0x8000u);
    return 0LL;
  }
  return v14;
}
