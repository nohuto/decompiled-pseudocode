/*
 * XREFs of RtlpHpVaMgrAlloc @ 0x18008C3AC
 * Callers:
 *     RtlpHpAllocVA @ 0x18008BB10 (RtlpHpAllocVA.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlRbRemoveNode @ 0x18006B8B0 (RtlRbRemoveNode.c)
 *     RtlpHpVaMgrRegionAllocate @ 0x18008A9A4 (RtlpHpVaMgrRegionAllocate.c)
 *     RtlpHpVaMgrAllocAligned @ 0x18008AA8C (RtlpHpVaMgrAllocAligned.c)
 *     RtlpHpVaMgrRangeCreate @ 0x18008B22C (RtlpHpVaMgrRangeCreate.c)
 *     RtlpHpVaMgrRangeFind @ 0x18008C698 (RtlpHpVaMgrRangeFind.c)
 *     RtlpHpVaMgrRangeSplit @ 0x18008C7D4 (RtlpHpVaMgrRangeSplit.c)
 *     RtlpHpVaMgrFree @ 0x18008C844 (RtlpHpVaMgrFree.c)
 *     ZwFreeVirtualMemory @ 0x18015F300 (ZwFreeVirtualMemory.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlpHpVaMgrAlloc(__int64 a1, unsigned __int64 *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r14
  unsigned __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // r8
  char v18; // al
  __int128 v19; // [rsp+30h] [rbp-38h] BYREF
  __int64 v20; // [rsp+40h] [rbp-28h]
  unsigned __int64 v21; // [rsp+48h] [rbp-20h]
  unsigned __int64 v22; // [rsp+70h] [rbp+8h] BYREF
  __int64 v23; // [rsp+78h] [rbp+10h] BYREF
  __int64 v24; // [rsp+88h] [rbp+20h] BYREF

  v3 = *a2;
  v24 = 0LL;
  if ( !v3 )
    NT_ASSERT("*SizeInOut > 0");
  if ( v3 <= *(unsigned __int16 *)(a1 + 40) << 20 )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int64 *)a1, (__int64)a2);
    v7 = v3 >> 20;
    v8 = RtlpHpVaMgrRangeFind(a1, (unsigned __int16)v7, (unsigned __int16)(a3 >> 20), &v24);
    v9 = v8;
    if ( v8 )
    {
      RtlRbRemoveNode(a1 + 8, v8);
      v10 = v24;
      if ( v24 != v9 )
      {
        *(_OWORD *)v9 = 0LL;
        *(_QWORD *)(v9 + 16) = 0LL;
        *(_BYTE *)v9 = 1;
        *(_BYTE *)(v9 + 1) = *(_BYTE *)(a1 + 44);
        RtlpHpVaMgrRangeSplit(a1, v9, (v10 - v9) >> 5);
        RtlpHpVaMgrFree(a1, v9);
        v9 = v10;
      }
      goto LABEL_6;
    }
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1);
    v9 = RtlpHpVaMgrRegionAllocate(a1);
    if ( v9 )
    {
      RtlAcquireSRWLockExclusive((volatile signed __int64 *)a1, v15);
LABEL_6:
      v11 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL)
          + ((unsigned __int64)(v9 - *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL)) >> *(_DWORD *)(*(_QWORD *)(a1 + 24) + 24LL) << 20);
      *(_OWORD *)v9 = 0LL;
      *(_QWORD *)(v9 + 16) = 0LL;
      *(_BYTE *)v9 = 1;
      *(_BYTE *)(v9 + 1) = *(_BYTE *)(a1 + 44);
      if ( *(_WORD *)(v9 + 24) > (unsigned __int16)v7 )
      {
        v12 = RtlpHpVaMgrRangeSplit(a1, v9, (unsigned __int16)v7);
        RtlpHpVaMgrFree(a1, v12);
      }
      v23 = v11;
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1);
      return v23;
    }
    return 0LL;
  }
  v16 = 0x200000LL;
  if ( a3 > 0x200000 )
    v16 = a3;
  v17 = (unsigned int)`RtlpHpMemoryTypePageSize'::`2'::PageSize[((unsigned __int64)*(unsigned __int8 *)(a1 + 46) >> 1) & 7];
  if ( v16 > v17 )
    v17 = v16;
  v22 = v3 + v17 - ((v17 - 1) & (v17 + v3 - 1)) - 1;
  v23 = RtlpHpVaMgrAllocAligned(a1, (int)&v22, v17);
  v13 = v23;
  if ( v23 )
  {
    v20 = 0LL;
    v18 = *(_BYTE *)(a1 + 44);
    v19 = 0LL;
    BYTE1(v19) = v18;
    v21 = v22 >> 20;
    LOBYTE(v19) = 5;
    if ( RtlpHpVaMgrRangeCreate(a1, v23, (__int64)&v19) )
    {
      *a2 = v22;
      return v23;
    }
    if ( (*(_BYTE *)(a1 + 46) & 0xE) == 0xA )
      ((void (__fastcall *)(__int64, __int64, __int64 *, unsigned __int64 *, int))(RtlpHpHeapGlobals ^ *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) ^ *(_QWORD *)(a1 + 32)))(
        RtlpHpHeapGlobals ^ **(_QWORD **)(a1 + 32) ^ *(_QWORD *)(a1 + 32),
        -1LL,
        &v23,
        &v22,
        0x8000);
    else
      ZwFreeVirtualMemory(-1LL, &v23, &v22, 0x8000LL);
    return 0LL;
  }
  return v13;
}
