/*
 * XREFs of RtlpHpVaMgrAlloc @ 0x18006F7E8
 * Callers:
 *     RtlpHpAllocVA @ 0x18006EF50 (RtlpHpAllocVA.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpVaMgrRegionAllocate @ 0x18006DDDC (RtlpHpVaMgrRegionAllocate.c)
 *     RtlpHpVaMgrAllocAligned @ 0x18006DEC4 (RtlpHpVaMgrAllocAligned.c)
 *     RtlpHpVaMgrRangeCreate @ 0x18006E664 (RtlpHpVaMgrRangeCreate.c)
 *     RtlpHpVaMgrRangeFind @ 0x18006FAD4 (RtlpHpVaMgrRangeFind.c)
 *     RtlpHpVaMgrRangeSplit @ 0x18006FC10 (RtlpHpVaMgrRangeSplit.c)
 *     RtlpHpVaMgrFree @ 0x18006FC80 (RtlpHpVaMgrFree.c)
 *     RtlRbRemoveNode @ 0x18008BD00 (RtlRbRemoveNode.c)
 *     ZwFreeVirtualMemory @ 0x18015F200 (ZwFreeVirtualMemory.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

PVOID __fastcall RtlpHpVaMgrAlloc(PRTL_SRWLOCK SRWLock, unsigned __int64 *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r14
  unsigned __int64 v7; // r14
  _RTL_BALANCED_NODE *v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rsi
  void *v11; // rsi
  __int64 v12; // rax
  PVOID v13; // rcx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r8
  char v17; // al
  __int128 v18; // [rsp+30h] [rbp-38h] BYREF
  __int64 v19; // [rsp+40h] [rbp-28h]
  ULONG_PTR v20; // [rsp+48h] [rbp-20h]
  ULONG_PTR RegionSize; // [rsp+70h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+78h] [rbp+10h] BYREF
  __int64 v23; // [rsp+88h] [rbp+20h] BYREF

  v3 = *a2;
  v23 = 0LL;
  if ( !v3 )
    NT_ASSERT("*SizeInOut > 0");
  if ( v3 <= LOWORD(SRWLock[5].Value) << 20 )
  {
    RtlAcquireSRWLockExclusive(SRWLock);
    v7 = v3 >> 20;
    v8 = (_RTL_BALANCED_NODE *)RtlpHpVaMgrRangeFind(SRWLock, (unsigned __int16)v7, (unsigned __int16)(a3 >> 20), &v23);
    v9 = (__int64)v8;
    if ( v8 )
    {
      RtlRbRemoveNode((PRTL_RB_TREE)&SRWLock[1], v8);
      v10 = v23;
      if ( v23 != v9 )
      {
        *(_OWORD *)v9 = 0LL;
        *(_QWORD *)(v9 + 16) = 0LL;
        *(_BYTE *)v9 = 1;
        *(_BYTE *)(v9 + 1) = BYTE4(SRWLock[5].Ptr);
        RtlpHpVaMgrRangeSplit(SRWLock, v9, (v10 - v9) >> 5);
        RtlpHpVaMgrFree(SRWLock, v9);
        v9 = v10;
      }
      goto LABEL_6;
    }
    RtlReleaseSRWLockExclusive(SRWLock);
    v9 = RtlpHpVaMgrRegionAllocate((__int64)SRWLock);
    if ( v9 )
    {
      RtlAcquireSRWLockExclusive(SRWLock);
LABEL_6:
      v11 = (void *)(*(_QWORD *)(SRWLock[3].Value + 8)
                   + ((unsigned __int64)(v9 - *(_QWORD *)(SRWLock[3].Value + 40)) >> *(_DWORD *)(SRWLock[3].Value + 24) << 20));
      *(_OWORD *)v9 = 0LL;
      *(_QWORD *)(v9 + 16) = 0LL;
      *(_BYTE *)v9 = 1;
      *(_BYTE *)(v9 + 1) = BYTE4(SRWLock[5].Ptr);
      if ( *(_WORD *)(v9 + 24) > (unsigned __int16)v7 )
      {
        v12 = RtlpHpVaMgrRangeSplit(SRWLock, v9, (unsigned __int16)v7);
        RtlpHpVaMgrFree(SRWLock, v12);
      }
      BaseAddress = v11;
      RtlReleaseSRWLockExclusive(SRWLock);
      return BaseAddress;
    }
    return 0LL;
  }
  v15 = 0x200000LL;
  if ( a3 > 0x200000 )
    v15 = a3;
  v16 = (unsigned int)`RtlpHpMemoryTypePageSize'::`2'::PageSize[((unsigned __int64)BYTE6(SRWLock[5].Ptr) >> 1) & 7];
  if ( v15 > v16 )
    v16 = v15;
  RegionSize = v3 + v16 - ((v16 - 1) & (v16 + v3 - 1)) - 1;
  BaseAddress = RtlpHpVaMgrAllocAligned((__int64)SRWLock, &RegionSize);
  v13 = BaseAddress;
  if ( BaseAddress )
  {
    v19 = 0LL;
    v17 = BYTE4(SRWLock[5].Ptr);
    v18 = 0LL;
    BYTE1(v18) = v17;
    v20 = RegionSize >> 20;
    LOBYTE(v18) = 5;
    if ( RtlpHpVaMgrRangeCreate((__int64)SRWLock, (__int64)BaseAddress, (__int64)&v18) )
    {
      *a2 = RegionSize;
      return BaseAddress;
    }
    if ( (BYTE6(SRWLock[5].Ptr) & 0xE) == 0xA )
      ((void (__fastcall *)(unsigned __int64, __int64, PVOID *, ULONG_PTR *, int))(RtlpHpHeapGlobals ^ *(_QWORD *)(SRWLock[4].Value + 16) ^ SRWLock[4].Value))(
        RtlpHpHeapGlobals ^ *(_QWORD *)SRWLock[4].Value ^ SRWLock[4].Value,
        -1LL,
        &BaseAddress,
        &RegionSize,
        0x8000);
    else
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    return 0LL;
  }
  return v13;
}
