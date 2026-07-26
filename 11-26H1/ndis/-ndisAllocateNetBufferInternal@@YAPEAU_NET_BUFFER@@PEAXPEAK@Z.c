/*
 * XREFs of ?ndisAllocateNetBufferInternal@@YAPEAU_NET_BUFFER@@PEAXPEAK@Z @ 0x14002A200
 * Callers:
 *     NdisAllocateCloneNetBufferList @ 0x140028220 (NdisAllocateCloneNetBufferList.c)
 * Callees:
 *     ?ndisPplAllocateFromSpecialPool@@YAPEAXPEBU_NDIS_POOL_HEADER@@@Z @ 0x14002A4D0 (-ndisPplAllocateFromSpecialPool@@YAPEAXPEBU_NDIS_POOL_HEADER@@@Z.c)
 */

struct _NET_BUFFER *__fastcall ndisAllocateNetBufferInternal(char *a1, unsigned int *a2)
{
  unsigned int Number; // r12d
  bool v5; // zf
  char *v6; // rbx
  PFREE_FUNCTION_EX *v7; // rdi
  KIRQL v8; // r15
  PSLIST_ENTRY v9; // rdi
  KIRQL v11; // al
  __int64 v12; // rdx
  unsigned __int64 v13; // rax
  _SLIST_ENTRY *Pool2; // rax
  KSPIN_LOCK *v15; // rbx
  KIRQL v16; // al
  __int64 v17; // rcx
  _QWORD *v18; // rdx
  _QWORD *v19; // rsi

  if ( a1 )
  {
    if ( (*((_DWORD *)a1 + 1) & 1) != 0 )
    {
      *a2 = 0;
      return (struct _NET_BUFFER *)ndisPplAllocateFromSpecialPool((const struct _NDIS_POOL_HEADER *)a1);
    }
    Number = KeGetPcr()->Prcb.Number;
    v5 = ndisMaxNumberOfProcessors == 1;
    *a2 = 1;
    if ( !v5 )
    {
      v6 = &a1[256 * (unsigned __int64)Number + 384];
      if ( !v6[216] )
      {
        v7 = (PFREE_FUNCTION_EX *)(a1 + 384);
        v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v6 + 26);
        if ( !v6[216] )
        {
          ExInitializeLookasideListEx(
            (PLOOKASIDE_LIST_EX)v6,
            ndisAllocateFromNPagedPool,
            *(v7 - 25),
            NonPagedPoolNx,
            0,
            *((unsigned int *)v7 - 53),
            *((_DWORD *)v7 - 54),
            0x400u);
          v6[216] = 1;
        }
        KeReleaseSpinLock((PKSPIN_LOCK)v6 + 26, v8);
      }
      _InterlockedIncrement((volatile signed __int32 *)v6 + 5);
      v9 = ExpInterlockedPopEntrySList(*((PSLIST_HEADER *)v6 + 24));
      if ( v9 )
        return (struct _NET_BUFFER *)v9;
      if ( ExQueryDepthSList(*((PSLIST_HEADER *)v6 + 25)) >= 0xAu )
      {
        v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v6 + 26);
        v12 = *((_QWORD *)v6 + 24);
        *((_QWORD *)v6 + 24) = *((_QWORD *)v6 + 25);
        *((_QWORD *)v6 + 25) = v12;
        KeReleaseSpinLock((PKSPIN_LOCK)v6 + 26, v11);
        v9 = ExpInterlockedPopEntrySList(*((PSLIST_HEADER *)v6 + 24));
        if ( v9 )
          return (struct _NET_BUFFER *)v9;
      }
      _InterlockedIncrement((volatile signed __int32 *)v6 + 6);
    }
    _InterlockedIncrement((volatile signed __int32 *)a1 + 37);
    v9 = ExpInterlockedPopEntrySList((PSLIST_HEADER)a1 + 8);
    if ( !v9 )
    {
      _InterlockedIncrement((volatile signed __int32 *)a1 + 38);
      v13 = *((unsigned int *)a1 + 43);
      if ( v13 + 32 >= v13
        && (Pool2 = (_SLIST_ENTRY *)ExAllocatePool2(66LL, v13 + 32, *((unsigned int *)a1 + 42))) != 0LL )
      {
        v9 = Pool2 + 2;
        Pool2->Next = 0LL;
        if ( Pool2 != (_SLIST_ENTRY *)-32LL )
        {
          v15 = (KSPIN_LOCK *)(a1 + 8);
          Pool2->Next = (_SLIST_ENTRY *)a1;
          v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 1);
          v17 = *((_QWORD *)a1 + 2);
          v18 = &v9[-2].Next + 1;
          v19 = a1 + 16;
          if ( *(_QWORD **)(v17 + 8) != v19 )
            __fastfail(3u);
          *v18 = v17;
          v18[1] = v19;
          *(_QWORD *)(v17 + 8) = v18;
          *v19 = v18;
          KeReleaseSpinLock(v15, v16);
          *a2 = 0;
          goto LABEL_20;
        }
      }
      else
      {
        v9 = 0LL;
      }
      *a2 = 0;
      return (struct _NET_BUFFER *)v9;
    }
LABEL_20:
    *((_DWORD *)&v9[-1].Next + 2) = Number;
    return (struct _NET_BUFFER *)v9;
  }
  return 0LL;
}
