/*
 * XREFs of RtlSplay @ 0x1402C0DB0
 * Callers:
 *     RtlDelete @ 0x1402BF430 (RtlDelete.c)
 *     FsRtlPrivateCheckForExclusiveLockAccess @ 0x1402BFFA4 (FsRtlPrivateCheckForExclusiveLockAccess.c)
 *     FsRtlPrivateLock @ 0x1402C0190 (FsRtlPrivateLock.c)
 *     FsRtlPrivateInsertSharedLock @ 0x1402C0A10 (FsRtlPrivateInsertSharedLock.c)
 *     RtlLookupElementGenericTableFull @ 0x1402C0C60 (RtlLookupElementGenericTableFull.c)
 *     RtlLookupElementGenericTable @ 0x1402C0D30 (RtlLookupElementGenericTable.c)
 *     RtlInsertElementGenericTable @ 0x1402C0FD0 (RtlInsertElementGenericTable.c)
 *     RtlInsertElementGenericTableFull @ 0x1402C1120 (RtlInsertElementGenericTableFull.c)
 *     RtlEnumerateGenericTable @ 0x1402C17C0 (RtlEnumerateGenericTable.c)
 *     FsRtlPrivateCheckForSharedLockAccess @ 0x1402C1EC0 (FsRtlPrivateCheckForSharedLockAccess.c)
 *     FsRtlCheckNoExclusiveConflict @ 0x1402C22BC (FsRtlCheckNoExclusiveConflict.c)
 *     FsRtlCheckNoSharedConflict @ 0x1402C4230 (FsRtlCheckNoSharedConflict.c)
 *     PfxFindPrefix @ 0x140802BA0 (PfxFindPrefix.c)
 *     PfxInsertPrefix @ 0x140802CA0 (PfxInsertPrefix.c)
 *     RtlFindUnicodePrefix @ 0x140A17AA0 (RtlFindUnicodePrefix.c)
 *     RtlInsertUnicodePrefix @ 0x140A17DC0 (RtlInsertUnicodePrefix.c)
 * Callees:
 *     <none>
 */

PRTL_SPLAY_LINKS __stdcall RtlSplay(PRTL_SPLAY_LINKS Links)
{
  _RTL_SPLAY_LINKS *i; // r8
  RTL_SPLAY_LINKS *LeftChild; // rax
  _RTL_SPLAY_LINKS *Parent; // r9
  _RTL_SPLAY_LINKS *v5; // rax
  _RTL_SPLAY_LINKS *v6; // rax
  __int64 v7; // rax
  _RTL_SPLAY_LINKS *v8; // rax
  _RTL_SPLAY_LINKS *RightChild; // rax
  _RTL_SPLAY_LINKS *v10; // rax
  _RTL_SPLAY_LINKS *v11; // rax
  _RTL_SPLAY_LINKS *v12; // rax
  __int64 v13; // rax
  _RTL_SPLAY_LINKS *v14; // rax
  _RTL_SPLAY_LINKS *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax

  for ( i = Links->Parent; Links->Parent != Links; i = Links->Parent )
  {
    LeftChild = i->LeftChild;
    Parent = i->Parent;
    if ( LeftChild == Links )
    {
      if ( Parent == i )
      {
        RightChild = Links->RightChild;
        i->LeftChild = RightChild;
        if ( RightChild )
          RightChild->Parent = i;
        Links->RightChild = i;
        i->Parent = Links;
        Links->Parent = Links;
      }
      else if ( Parent->LeftChild == i )
      {
        v5 = Links->RightChild;
        i->LeftChild = v5;
        if ( v5 )
          v5->Parent = i;
        v6 = i->RightChild;
        Parent->LeftChild = v6;
        if ( v6 )
          v6->Parent = Parent;
        if ( Parent->Parent == Parent )
        {
          Links->Parent = Links;
        }
        else
        {
          Links->Parent = Parent->Parent;
          v7 = 16LL;
          if ( Parent->Parent->LeftChild == Parent )
            v7 = 8LL;
          *(_RTL_SPLAY_LINKS **)((char *)&Parent->Parent->Parent + v7) = Links;
        }
        Links->RightChild = i;
        i->Parent = Links;
        i->RightChild = Parent;
        Parent->Parent = i;
      }
      else
      {
        v11 = Links->LeftChild;
        Parent->RightChild = v11;
        if ( v11 )
          v11->Parent = Parent;
        v12 = Links->RightChild;
        i->LeftChild = v12;
        if ( v12 )
          v12->Parent = i;
        if ( Parent->Parent == Parent )
        {
          Links->Parent = Links;
          Links->LeftChild = Parent;
          Parent->Parent = Links;
          Links->RightChild = i;
          i->Parent = Links;
        }
        else
        {
          Links->Parent = Parent->Parent;
          v13 = 16LL;
          if ( Parent->Parent->LeftChild == Parent )
            v13 = 8LL;
          *(_RTL_SPLAY_LINKS **)((char *)&Parent->Parent->Parent + v13) = Links;
          Links->LeftChild = Parent;
          Parent->Parent = Links;
          Links->RightChild = i;
          i->Parent = Links;
        }
      }
    }
    else if ( Parent == i )
    {
      v8 = Links->LeftChild;
      i->RightChild = v8;
      if ( v8 )
        v8->Parent = i;
      Links->LeftChild = i;
      i->Parent = Links;
      Links->Parent = Links;
    }
    else if ( Parent->RightChild == i )
    {
      Parent->RightChild = LeftChild;
      if ( LeftChild )
        LeftChild->Parent = Parent;
      v10 = Links->LeftChild;
      i->RightChild = v10;
      if ( v10 )
        v10->Parent = i;
      if ( Parent->Parent == Parent )
      {
        Links->Parent = Links;
      }
      else
      {
        Links->Parent = Parent->Parent;
        v17 = 16LL;
        if ( Parent->Parent->LeftChild == Parent )
          v17 = 8LL;
        *(_RTL_SPLAY_LINKS **)((char *)&Parent->Parent->Parent + v17) = Links;
      }
      Links->LeftChild = i;
      i->Parent = Links;
      i->LeftChild = Parent;
      Parent->Parent = i;
    }
    else
    {
      v14 = Links->LeftChild;
      i->RightChild = v14;
      if ( v14 )
        v14->Parent = i;
      v15 = Links->RightChild;
      Parent->LeftChild = v15;
      if ( v15 )
        v15->Parent = Parent;
      if ( Parent->Parent == Parent )
      {
        Links->Parent = Links;
        Links->LeftChild = i;
        i->Parent = Links;
        Links->RightChild = Parent;
        Parent->Parent = Links;
      }
      else
      {
        Links->Parent = Parent->Parent;
        v16 = 16LL;
        if ( Parent->Parent->LeftChild == Parent )
          v16 = 8LL;
        *(_RTL_SPLAY_LINKS **)((char *)&Parent->Parent->Parent + v16) = Links;
        Links->LeftChild = i;
        i->Parent = Links;
        Links->RightChild = Parent;
        Parent->Parent = Links;
      }
    }
  }
  return Links;
}
