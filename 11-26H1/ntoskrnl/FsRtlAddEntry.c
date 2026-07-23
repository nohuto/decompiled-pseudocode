/*
 * XREFs of FsRtlAddEntry @ 0x1403BF7C0
 * Callers:
 *     FsRtlRemoveBaseMcbEntry @ 0x1403BE9D0 (FsRtlRemoveBaseMcbEntry.c)
 *     FsRtlAddBaseMcbEntryEx @ 0x1403BEF30 (FsRtlAddBaseMcbEntryEx.c)
 *     FsRtlSplitBaseMcb @ 0x1405B7E20 (FsRtlSplitBaseMcb.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402CA4E0 (RtlRaiseStatus.c)
 *     ExFreeToNPagedLookasideList @ 0x1403BF960 (ExFreeToNPagedLookasideList.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140C16340 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

char __fastcall FsRtlAddEntry(__int64 a1, unsigned int a2, int a3)
{
  __int64 v4; // r14
  unsigned int v5; // ecx
  unsigned int v7; // eax
  unsigned int v9; // edx
  unsigned __int64 v10; // rax
  unsigned int v11; // ebp
  PVOID PoolWithTag; // rax
  PVOID v13; // rbx
  void *v14; // rdx

  v4 = a2;
  v5 = *(_DWORD *)a1;
  if ( a3 + *(_DWORD *)(a1 + 4) <= v5 )
  {
LABEL_2:
    v7 = *(_DWORD *)(a1 + 4);
    if ( (unsigned int)v4 < v7 )
      memmove(
        (void *)(*(_QWORD *)(a1 + 16) + 8LL * (unsigned int)(v4 + a3)),
        (const void *)(*(_QWORD *)(a1 + 16) + 8 * v4),
        8LL * (v7 - (unsigned int)v4));
    *(_DWORD *)(a1 + 4) += a3;
    return 1;
  }
  v9 = 2 * v5;
  if ( v5 >= 0x800 )
    v9 = v5 + 2048;
  v10 = 8LL * v9;
  v11 = v9;
  if ( v10 <= 0xFFFFFFFF )
  {
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)*(unsigned __int16 *)(a1 + 8), (unsigned int)v10, 0x6D695346u);
    v13 = PoolWithTag;
    if ( PoolWithTag )
    {
      memmove(PoolWithTag, *(const void **)(a1 + 16), 8LL * *(unsigned int *)(a1 + 4));
      if ( *(_DWORD *)a1 == 15 )
      {
        v14 = *(void **)(a1 + 16);
        if ( *(_WORD *)(a1 + 8) == 1 )
          ExFreeToNPagedLookasideList((PPAGED_LOOKASIDE_LIST)&FsRtlFirstPagedMappingLookasideList, v14);
        else
          ExFreeToNPagedLookasideList(&FsRtlFirstNonPagedMappingLookasideList, v14);
        *(_QWORD *)(a1 + 16) = v13;
        *(_DWORD *)a1 = v11;
      }
      else
      {
        ExFreePoolWithTag(*(PVOID *)(a1 + 16), 0);
        *(_QWORD *)(a1 + 16) = v13;
        *(_DWORD *)a1 = v11;
      }
      goto LABEL_2;
    }
  }
  if ( (*(_BYTE *)(a1 + 10) & 1) != 0 )
    RtlRaiseStatus(-1073741670);
  return 0;
}
