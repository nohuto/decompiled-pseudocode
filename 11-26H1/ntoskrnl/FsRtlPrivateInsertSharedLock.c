/*
 * XREFs of FsRtlPrivateInsertSharedLock @ 0x14030B6D0
 * Callers:
 *     FsRtlPrivateLock @ 0x14030AE50 (FsRtlPrivateLock.c)
 *     FsRtlPrivateInsertLock @ 0x14030B510 (FsRtlPrivateInsertLock.c)
 * Callees:
 *     RtlSplay @ 0x14030BA70 (RtlSplay.c)
 *     RtlRealSuccessor @ 0x14030C4F0 (RtlRealSuccessor.c)
 *     ExFreeToNPagedLookasideList @ 0x1403BF960 (ExFreeToNPagedLookasideList.c)
 *     RtlDeleteNoSplay @ 0x1403C0570 (RtlDeleteNoSplay.c)
 *     FsRtlSplitLocks @ 0x1403C1168 (FsRtlSplitLocks.c)
 *     RtlpInterlockedPopEntrySList @ 0x140735860 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall FsRtlPrivateInsertSharedLock(__int64 a1, _RTL_SPLAY_LINKS *a2)
{
  _RTL_SPLAY_LINKS *v2; // r8
  _RTL_SPLAY_LINKS *v4; // rdx
  _RTL_SPLAY_LINKS *v5; // r9
  _RTL_SPLAY_LINKS *v6; // rbx
  char v7; // r14
  bool v9; // zf
  _RTL_SPLAY_LINKS *LeftChild; // r10
  _RTL_SPLAY_LINKS *Parent; // r11
  unsigned __int64 v12; // rax
  _RTL_SPLAY_LINKS *v13; // rcx
  _RTL_SPLAY_LINKS *v14; // rsi
  PSLIST_ENTRY v15; // rax
  PRTL_SPLAY_LINKS v16; // rdx
  _RTL_SPLAY_LINKS *v17; // rax
  _RTL_SPLAY_LINKS *v18; // rcx
  _RTL_SPLAY_LINKS *v19; // r8
  _RTL_SPLAY_LINKS *v20; // rax
  PRTL_SPLAY_LINKS i; // r14

  v2 = *(_RTL_SPLAY_LINKS **)(a1 + 8);
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0;
  v9 = v2 == 0LL;
  if ( v2 )
  {
    LeftChild = a2->LeftChild;
    while ( 1 )
    {
      v4 = v2 - 1;
      Parent = v2[-1].Parent;
      if ( v2[-1].RightChild >= LeftChild && ((v12 = (unsigned __int64)Parent->LeftChild) != 0 || Parent->RightChild) )
      {
        v13 = a2[2].Parent;
        if ( v12 <= (unsigned __int64)v13 && (v13 != (_RTL_SPLAY_LINKS *)-1LL || LeftChild) )
        {
          if ( v12 <= (unsigned __int64)LeftChild )
            goto LABEL_11;
          v5 = v2 - 1;
        }
        v6 = v2;
        v7 = 1;
        v2 = v2->LeftChild;
      }
      else
      {
        if ( Parent[2].Parent == a2[2].Parent && Parent->LeftChild == LeftChild )
        {
LABEL_11:
          v9 = v2 == 0LL;
          break;
        }
        v6 = v2;
        v7 = 0;
        v2 = v2->RightChild;
      }
      if ( !v2 )
        goto LABEL_11;
    }
  }
  if ( !v9 )
    v5 = v4;
  v14 = 0LL;
  if ( v5 )
    v14 = v5 + 1;
  if ( v14 )
  {
    v17 = v14[-1].Parent;
    v18 = v14 - 1;
    if ( v17 )
    {
      v19 = a2->LeftChild;
      do
      {
        if ( v19 < v17->LeftChild || v19 == v17->LeftChild && (!a2->RightChild || v17->RightChild) )
          break;
        v18 = v17;
        v17 = v17->Parent;
      }
      while ( v17 );
    }
    if ( !v18->Parent )
      v14[1].Parent = a2;
    a2->Parent = v18->Parent;
    v18->Parent = a2;
    *(_QWORD *)(a1 + 8) = RtlSplay(v14);
    v20 = a2[2].Parent;
    if ( v20 > v14[-1].RightChild )
    {
      v14[-1].RightChild = v20;
      for ( i = RtlRealSuccessor(v14); i; i = RtlRealSuccessor(v14) )
      {
        if ( i[-1].Parent->LeftChild > v14[-1].RightChild )
          break;
        if ( !LOBYTE(v14[-1].LeftChild) && LOBYTE(i[-1].LeftChild) )
          FsRtlSplitLocks(&i[-1], 0LL, 0LL, 0LL);
        v14[1].Parent->Parent = i[-1].Parent;
        v14[1].Parent = i[1].Parent;
        if ( i[-1].RightChild > v14[-1].RightChild )
        {
          if ( LOBYTE(i[-1].LeftChild) )
            LOBYTE(v14[-1].LeftChild) = 1;
          v14[-1].RightChild = i[-1].RightChild;
        }
        RtlDeleteNoSplay(i, (PRTL_SPLAY_LINKS *)(a1 + 8));
        ExFreeToNPagedLookasideList((PPAGED_LOOKASIDE_LIST)&FsRtlLockTreeNodeLookasideList, &i[-1]);
      }
    }
    if ( LOBYTE(v14[-1].LeftChild) )
      FsRtlSplitLocks(&v14[-1], 0LL, 0LL, 0LL);
    goto LABEL_24;
  }
  ++dword_140E11754;
  v15 = RtlpInterlockedPopEntrySList(&FsRtlLockTreeNodeLookasideList);
  if ( v15
    || (++dword_140E11758,
        (v15 = (PSLIST_ENTRY)guard_dispatch_icall_no_overrides(
                               (unsigned int)dword_140E11764,
                               (unsigned int)dword_140E1176C,
                               (unsigned int)dword_140E11768)) != 0LL) )
  {
    v15[2].Next = 0LL;
    v16 = (PRTL_SPLAY_LINKS)(&v15[1].Next + 1);
    *((_QWORD *)&v15[1].Next + 1) = (char *)v15 + 24;
    *((_QWORD *)&v15[2].Next + 1) = 0LL;
    *((_BYTE *)&v15->Next + 8) = 0;
    v15[3].Next = (_SLIST_ENTRY *)a2;
    v15->Next = (_SLIST_ENTRY *)a2;
    v15[1].Next = (_SLIST_ENTRY *)a2[2].Parent;
    a2->Parent = 0LL;
    if ( v6 )
    {
      if ( v7 )
        v6->LeftChild = v16;
      else
        v6->RightChild = v16;
      v16->Parent = v6;
      v16 = RtlSplay((PRTL_SPLAY_LINKS)(&v15[1].Next + 1));
    }
    *(_QWORD *)(a1 + 8) = v16;
LABEL_24:
    LOBYTE(v15) = 1;
  }
  return (char)v15;
}
