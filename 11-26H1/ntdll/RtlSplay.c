/*
 * XREFs of RtlSplay @ 0x1800B5480
 * Callers:
 *     RtlpTpIoLookup @ 0x1800B4A00 (RtlpTpIoLookup.c)
 *     RtlEnumerateGenericTable @ 0x1800B4C50 (RtlEnumerateGenericTable.c)
 *     RtlDelete @ 0x1800B4E60 (RtlDelete.c)
 *     RtlInsertElementGenericTable @ 0x1800B50D0 (RtlInsertElementGenericTable.c)
 *     RtlInsertElementGenericTableFull @ 0x1800B5230 (RtlInsertElementGenericTableFull.c)
 *     RtlLookupElementGenericTableFull @ 0x1800B5330 (RtlLookupElementGenericTableFull.c)
 *     RtlLookupElementGenericTable @ 0x1800B5400 (RtlLookupElementGenericTable.c)
 *     PfxFindPrefix @ 0x18013C790 (PfxFindPrefix.c)
 *     PfxInsertPrefix @ 0x18013C890 (PfxInsertPrefix.c)
 * Callees:
 *     <none>
 */

PRTL_SPLAY_LINKS __cdecl RtlSplay(PRTL_SPLAY_LINKS Links)
{
  _RTL_SPLAY_LINKS *i; // rax
  _RTL_SPLAY_LINKS *LeftChild; // rcx
  _RTL_SPLAY_LINKS *Parent; // r9
  _RTL_SPLAY_LINKS *v5; // rcx
  _RTL_SPLAY_LINKS *v7; // rcx
  _RTL_SPLAY_LINKS *v8; // rcx
  __int64 v9; // rcx
  _RTL_SPLAY_LINKS *v10; // rcx
  __int64 v11; // rcx
  _RTL_SPLAY_LINKS *v12; // rcx
  _RTL_SPLAY_LINKS *v13; // rcx
  __int64 v14; // rcx
  _RTL_SPLAY_LINKS *RightChild; // rcx
  _RTL_SPLAY_LINKS *v16; // rcx
  _RTL_SPLAY_LINKS *v17; // rcx
  __int64 v18; // rcx

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
        v7 = Links->RightChild;
        i->LeftChild = v7;
        if ( v7 )
          v7->Parent = i;
        v8 = i->RightChild;
        Parent->LeftChild = v8;
        if ( v8 )
          v8->Parent = Parent;
        if ( Parent->Parent == Parent )
        {
          Links->Parent = Links;
          Links->RightChild = i;
          i->Parent = Links;
          i->RightChild = Parent;
          Parent->Parent = i;
        }
        else
        {
          Links->Parent = Parent->Parent;
          v9 = 16LL;
          if ( Parent->Parent->LeftChild == Parent )
            v9 = 8LL;
          *(_RTL_SPLAY_LINKS **)((char *)&Parent->Parent->Parent + v9) = Links;
          Links->RightChild = i;
          i->Parent = Links;
          i->RightChild = Parent;
          Parent->Parent = i;
        }
      }
      else
      {
        v12 = Links->LeftChild;
        Parent->RightChild = v12;
        if ( v12 )
          v12->Parent = Parent;
        v13 = Links->RightChild;
        i->LeftChild = v13;
        if ( v13 )
          v13->Parent = i;
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
          v14 = 16LL;
          if ( Parent->Parent->LeftChild == Parent )
            v14 = 8LL;
          *(_RTL_SPLAY_LINKS **)((char *)&Parent->Parent->Parent + v14) = Links;
          Links->LeftChild = Parent;
          Parent->Parent = Links;
          Links->RightChild = i;
          i->Parent = Links;
        }
      }
    }
    else if ( Parent == i )
    {
      v5 = Links->LeftChild;
      i->RightChild = v5;
      if ( v5 )
        v5->Parent = i;
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
        Links->LeftChild = i;
        i->Parent = Links;
        i->LeftChild = Parent;
        Parent->Parent = i;
      }
      else
      {
        Links->Parent = Parent->Parent;
        v11 = 16LL;
        if ( Parent->Parent->LeftChild == Parent )
          v11 = 8LL;
        *(_RTL_SPLAY_LINKS **)((char *)&Parent->Parent->Parent + v11) = Links;
        Links->LeftChild = i;
        i->Parent = Links;
        i->LeftChild = Parent;
        Parent->Parent = i;
      }
    }
    else
    {
      v16 = Links->LeftChild;
      i->RightChild = v16;
      if ( v16 )
        v16->Parent = i;
      v17 = Links->RightChild;
      Parent->LeftChild = v17;
      if ( v17 )
        v17->Parent = Parent;
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
        v18 = 16LL;
        if ( Parent->Parent->LeftChild == Parent )
          v18 = 8LL;
        *(_RTL_SPLAY_LINKS **)((char *)&Parent->Parent->Parent + v18) = Links;
        Links->LeftChild = i;
        i->Parent = Links;
        Links->RightChild = Parent;
        Parent->Parent = Links;
      }
    }
  }
  return Links;
}
