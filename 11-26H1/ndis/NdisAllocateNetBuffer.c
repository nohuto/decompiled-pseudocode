/*
 * XREFs of NdisAllocateNetBuffer @ 0x140029EB0
 * Callers:
 *     NdisAllocateCloneNetBufferList @ 0x140028220 (NdisAllocateCloneNetBufferList.c)
 *     NdisAllocateFragmentNetBufferList @ 0x14002AEB0 (NdisAllocateFragmentNetBufferList.c)
 * Callees:
 *     ?ndisPplAllocateFromSpecialPool@@YAPEAXPEBU_NDIS_POOL_HEADER@@@Z @ 0x14002A4D0 (-ndisPplAllocateFromSpecialPool@@YAPEAXPEBU_NDIS_POOL_HEADER@@@Z.c)
 */

PNET_BUFFER __stdcall NdisAllocateNetBuffer(NDIS_HANDLE PoolHandle, PMDL MdlChain, ULONG DataOffset, SIZE_T DataLength)
{
  int v4; // edi
  PSLIST_ENTRY v8; // rbx
  unsigned int Number; // r13d
  char *v10; // rdi
  PFREE_FUNCTION_EX *v11; // rbx
  KIRQL v12; // r15
  ULONG v13; // edx
  PMDL v14; // rcx
  ULONG ByteCount; // eax
  KIRQL v17; // al
  __int64 v18; // rcx
  unsigned __int64 v19; // rax
  _SLIST_ENTRY *Pool2; // rax
  KIRQL v21; // al
  __int64 v22; // rdx
  _QWORD *v23; // rcx
  _QWORD *v24; // r8
  int v25; // [rsp+88h] [rbp+20h]

  v25 = DataLength;
  v4 = DataLength;
  v8 = 0LL;
  if ( !PoolHandle )
    return (PNET_BUFFER)v8;
  if ( (*((_DWORD *)PoolHandle + 20) & 1) != 0 )
  {
    DbgPrint("NdisAllocateNetBuffer: Pool %p wrong pool type.\n", PoolHandle);
    return (PNET_BUFFER)v8;
  }
  if ( (*((_DWORD *)PoolHandle + 1) & 1) == 0 )
  {
    Number = KeGetPcr()->Prcb.Number;
    if ( ndisMaxNumberOfProcessors != 1 )
    {
      v10 = (char *)PoolHandle + 256 * (unsigned __int64)Number + 384;
      if ( !v10[216] )
      {
        v11 = (PFREE_FUNCTION_EX *)((char *)PoolHandle + 384);
        v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v10 + 26);
        if ( !v10[216] )
        {
          ExInitializeLookasideListEx(
            (PLOOKASIDE_LIST_EX)v10,
            ndisAllocateFromNPagedPool,
            *(v11 - 25),
            NonPagedPoolNx,
            0,
            *((unsigned int *)v11 - 53),
            *((_DWORD *)v11 - 54),
            0x400u);
          v10[216] = 1;
        }
        KeReleaseSpinLock((PKSPIN_LOCK)v10 + 26, v12);
      }
      _InterlockedIncrement((volatile signed __int32 *)v10 + 5);
      v8 = ExpInterlockedPopEntrySList(*((PSLIST_HEADER *)v10 + 24));
      if ( v8 )
        goto LABEL_10;
      if ( ExQueryDepthSList(*((PSLIST_HEADER *)v10 + 25)) >= 0xAu )
      {
        v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v10 + 26);
        v18 = *((_QWORD *)v10 + 24);
        *((_QWORD *)v10 + 24) = *((_QWORD *)v10 + 25);
        *((_QWORD *)v10 + 25) = v18;
        KeReleaseSpinLock((PKSPIN_LOCK)v10 + 26, v17);
        v8 = ExpInterlockedPopEntrySList(*((PSLIST_HEADER *)v10 + 24));
        if ( v8 )
          goto LABEL_10;
      }
      _InterlockedIncrement((volatile signed __int32 *)v10 + 6);
    }
    _InterlockedIncrement((volatile signed __int32 *)PoolHandle + 37);
    v8 = ExpInterlockedPopEntrySList((PSLIST_HEADER)PoolHandle + 8);
    if ( !v8 )
    {
      _InterlockedIncrement((volatile signed __int32 *)PoolHandle + 38);
      v19 = *((unsigned int *)PoolHandle + 43);
      if ( v19 + 32 < v19
        || (Pool2 = (_SLIST_ENTRY *)ExAllocatePool2(66LL, v19 + 32, *((unsigned int *)PoolHandle + 42))) == 0LL )
      {
        v8 = 0LL;
        goto LABEL_10;
      }
      v8 = Pool2 + 2;
      Pool2->Next = 0LL;
      if ( Pool2 == (_SLIST_ENTRY *)-32LL )
      {
LABEL_10:
        v4 = v25;
        goto LABEL_11;
      }
      Pool2->Next = (_SLIST_ENTRY *)PoolHandle;
      v21 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)PoolHandle + 1);
      v22 = *((_QWORD *)PoolHandle + 2);
      v23 = (char *)PoolHandle + 16;
      v24 = &v8[-2].Next + 1;
      if ( *(NDIS_HANDLE *)(v22 + 8) != (char *)PoolHandle + 16 )
        __fastfail(3u);
      *v24 = v22;
      v24[1] = v23;
      *(_QWORD *)(v22 + 8) = v24;
      *v23 = v24;
      KeReleaseSpinLock((PKSPIN_LOCK)PoolHandle + 1, v21);
    }
    *((_DWORD *)&v8[-1].Next + 2) = Number;
    goto LABEL_10;
  }
  v8 = (PSLIST_ENTRY)ndisPplAllocateFromSpecialPool((const struct _NDIS_POOL_HEADER *)PoolHandle);
LABEL_11:
  if ( !v8 )
    return 0LL;
  *((_QWORD *)&v8->Next + 1) = 0LL;
  v13 = DataOffset;
  LODWORD(v8[1].Next) = 0;
  v14 = MdlChain;
  v8[2].Next = 0LL;
  *((_DWORD *)&v8[2].Next + 2) = 0;
  *((_DWORD *)&v8[1].Next + 2) = 0;
  *((_QWORD *)&v8[4].Next + 1) = 0LL;
  v8[4].Next = 0LL;
  *((_QWORD *)&v8[8].Next + 1) = 0LL;
  v8[8].Next = 0LL;
  v8->Next = 0LL;
  *((_QWORD *)&v8[3].Next + 1) = PoolHandle;
  LODWORD(v8[3].Next) = 0;
  for ( *((_QWORD *)&v8[10].Next + 1) = 0LL; v14; v13 -= ByteCount )
  {
    ByteCount = v14->ByteCount;
    if ( v13 < ByteCount )
      break;
    v14 = v14->Next;
  }
  v8[2].Next = (_SLIST_ENTRY *)MdlChain;
  *((_DWORD *)&v8[2].Next + 2) = DataOffset;
  *((_DWORD *)&v8[1].Next + 2) = v4;
  *((_QWORD *)&v8->Next + 1) = v14;
  LODWORD(v8[1].Next) = v13;
  return (PNET_BUFFER)v8;
}
