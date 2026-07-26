/*
 * XREFs of NdisAllocateNetBufferMdlAndData @ 0x14002B490
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisPplAllocateFromSpecialPool@@YAPEAXPEBU_NDIS_POOL_HEADER@@@Z @ 0x14002A4D0 (-ndisPplAllocateFromSpecialPool@@YAPEAXPEBU_NDIS_POOL_HEADER@@@Z.c)
 */

PNET_BUFFER __stdcall NdisAllocateNetBufferMdlAndData(NDIS_HANDLE PoolHandle)
{
  PSLIST_ENTRY v2; // rbx
  unsigned int Number; // r15d
  int v4; // r12d
  char *v5; // rdi
  PFREE_FUNCTION_EX *v6; // rbx
  KIRQL v7; // r14
  _SLIST_ENTRY *v8; // rdi
  int v9; // ecx
  __int64 v11; // r9
  unsigned __int64 v12; // r8
  __int16 v13; // dx
  int v14; // edx
  KIRQL v15; // al
  __int64 v16; // rcx
  unsigned __int64 v17; // rax
  _SLIST_ENTRY *Pool2; // rax
  KIRQL v19; // al
  __int64 v20; // rdx
  _QWORD *v21; // rcx
  _QWORD *v22; // r8

  v2 = 0LL;
  if ( !PoolHandle )
    return (PNET_BUFFER)v2;
  if ( (*((_DWORD *)PoolHandle + 20) & 1) == 0 )
  {
    DbgPrint("NdisAllocateNetBufferMdlAndData: Pool %p wrong pool type.\n", PoolHandle);
    return (PNET_BUFFER)v2;
  }
  if ( (*((_DWORD *)PoolHandle + 1) & 1) != 0 )
  {
    v4 = 0;
    v2 = (PSLIST_ENTRY)ndisPplAllocateFromSpecialPool((const struct _NDIS_POOL_HEADER *)PoolHandle);
    goto LABEL_10;
  }
  Number = KeGetPcr()->Prcb.Number;
  v4 = 1;
  if ( ndisMaxNumberOfProcessors != 1 )
  {
    v5 = (char *)PoolHandle + 256 * (unsigned __int64)Number + 384;
    if ( !v5[216] )
    {
      v6 = (PFREE_FUNCTION_EX *)((char *)PoolHandle + 384);
      v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v5 + 26);
      if ( !v5[216] )
      {
        ExInitializeLookasideListEx(
          (PLOOKASIDE_LIST_EX)v5,
          ndisAllocateFromNPagedPool,
          *(v6 - 25),
          NonPagedPoolNx,
          0,
          *((unsigned int *)v6 - 53),
          *((_DWORD *)v6 - 54),
          0x400u);
        v5[216] = 1;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)v5 + 26, v7);
    }
    _InterlockedIncrement((volatile signed __int32 *)v5 + 5);
    v2 = ExpInterlockedPopEntrySList(*((PSLIST_HEADER *)v5 + 24));
    if ( v2 )
      goto LABEL_10;
    if ( ExQueryDepthSList(*((PSLIST_HEADER *)v5 + 25)) >= 0xAu )
    {
      v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v5 + 26);
      v16 = *((_QWORD *)v5 + 24);
      *((_QWORD *)v5 + 24) = *((_QWORD *)v5 + 25);
      *((_QWORD *)v5 + 25) = v16;
      KeReleaseSpinLock((PKSPIN_LOCK)v5 + 26, v15);
      v2 = ExpInterlockedPopEntrySList(*((PSLIST_HEADER *)v5 + 24));
      if ( v2 )
        goto LABEL_10;
    }
    _InterlockedIncrement((volatile signed __int32 *)v5 + 6);
  }
  _InterlockedIncrement((volatile signed __int32 *)PoolHandle + 37);
  v2 = ExpInterlockedPopEntrySList((PSLIST_HEADER)PoolHandle + 8);
  if ( v2 )
    goto LABEL_28;
  _InterlockedIncrement((volatile signed __int32 *)PoolHandle + 38);
  v17 = *((unsigned int *)PoolHandle + 43);
  if ( v17 + 32 >= v17
    && (Pool2 = (_SLIST_ENTRY *)ExAllocatePool2(66LL, v17 + 32, *((unsigned int *)PoolHandle + 42))) != 0LL )
  {
    v2 = Pool2 + 2;
    Pool2->Next = 0LL;
    if ( Pool2 != (_SLIST_ENTRY *)-32LL )
    {
      Pool2->Next = (_SLIST_ENTRY *)PoolHandle;
      v19 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)PoolHandle + 1);
      v20 = *((_QWORD *)PoolHandle + 2);
      v21 = (char *)PoolHandle + 16;
      v22 = &v2[-2].Next + 1;
      if ( *(NDIS_HANDLE *)(v20 + 8) != (char *)PoolHandle + 16 )
        __fastfail(3u);
      *v22 = v20;
      v22[1] = v21;
      *(_QWORD *)(v20 + 8) = v22;
      *v21 = v22;
      KeReleaseSpinLock((PKSPIN_LOCK)PoolHandle + 1, v19);
      v4 = 0;
LABEL_28:
      *((_DWORD *)&v2[-1].Next + 2) = Number;
      goto LABEL_10;
    }
  }
  else
  {
    v2 = 0LL;
  }
  v4 = 0;
LABEL_10:
  if ( !v2 )
    return 0LL;
  v8 = v2 + 11;
  if ( v4 )
  {
    *((_DWORD *)&v2[13].Next + 2) = *((_DWORD *)PoolHandle + 21);
    v8->Next = 0LL;
  }
  else
  {
    v11 = *((unsigned int *)PoolHandle + 21);
    v12 = (unsigned __int64)v8 + *((unsigned int *)PoolHandle + 22);
    v13 = (_WORD)v8 + *((_DWORD *)PoolHandle + 22);
    v8->Next = 0LL;
    *((_WORD *)&v2[11].Next + 5) = 0;
    *((_DWORD *)&v2[13].Next + 2) = v11;
    v2[13].Next = (_SLIST_ENTRY *)(v12 & 0xFFFFFFFFFFFFF000uLL);
    v14 = v13 & 0xFFF;
    *((_DWORD *)&v2[13].Next + 3) = v14;
    *((_WORD *)&v2[11].Next + 4) = 8 * ((((unsigned __int64)(unsigned __int16)v14 + v11 + 4095) >> 12) + 6);
    MmBuildMdlForNonPagedPool((PMDL)&v2[11]);
  }
  v9 = *((_DWORD *)PoolHandle + 21);
  v2->Next = 0LL;
  *((_QWORD *)&v2[3].Next + 1) = PoolHandle;
  *((_QWORD *)&v2->Next + 1) = v8;
  LODWORD(v2[1].Next) = v9;
  v2[2].Next = v8;
  *((_DWORD *)&v2[2].Next + 2) = v9;
  *((_DWORD *)&v2[1].Next + 2) = 0;
  LODWORD(v2[3].Next) = 0;
  *((_QWORD *)&v2[4].Next + 1) = 0LL;
  v2[4].Next = 0LL;
  *((_QWORD *)&v2[8].Next + 1) = 0LL;
  v2[8].Next = 0LL;
  *((_QWORD *)&v2[10].Next + 1) = 0LL;
  return (PNET_BUFFER)v2;
}
