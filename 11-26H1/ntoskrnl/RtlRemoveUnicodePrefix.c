/*
 * XREFs of RtlRemoveUnicodePrefix @ 0x140ABBF80
 * Callers:
 *     <none>
 * Callees:
 *     RtlDelete @ 0x14030A0F0 (RtlDelete.c)
 */

void __stdcall RtlRemoveUnicodePrefix(PUNICODE_PREFIX_TABLE PrefixTable, PUNICODE_PREFIX_TABLE_ENTRY PrefixTableEntry)
{
  _UNICODE_PREFIX_TABLE_ENTRY *CaseMatch; // r9
  RTL_SPLAY_LINKS *p_Links; // rcx
  _RTL_SPLAY_LINKS *Parent; // rdx
  RTL_SPLAY_LINKS *i; // rdi
  RTL_SPLAY_LINKS *v6; // rbx
  PRTL_SPLAY_LINKS v7; // rax
  _RTL_SPLAY_LINKS *LeftChild; // r8
  PRTL_SPLAY_LINKS v9; // rdx
  RTL_SPLAY_LINKS *j; // rcx
  _RTL_SPLAY_LINKS *v11; // rdx
  _RTL_SPLAY_LINKS *v12; // r8
  RTL_SPLAY_LINKS *k; // rcx
  _UNICODE_PREFIX_TABLE_ENTRY *v14; // r8
  _UNICODE_PREFIX_TABLE_ENTRY *v15; // r9
  _UNICODE_PREFIX_TABLE_ENTRY *ii; // rcx
  _UNICODE_PREFIX_TABLE_ENTRY *v17; // rcx
  _UNICODE_PREFIX_TABLE_ENTRY *m; // r8
  RTL_SPLAY_LINKS *v19; // rcx
  _UNICODE_PREFIX_TABLE_ENTRY *v20; // rax
  _UNICODE_PREFIX_TABLE_ENTRY *NextPrefixTree; // r10
  _UNICODE_PREFIX_TABLE_ENTRY *n; // r9
  _RTL_SPLAY_LINKS *v23; // rax
  _RTL_SPLAY_LINKS *RightChild; // rax

  PrefixTable->LastNextEntry = 0LL;
  if ( PrefixTableEntry->NodeTypeCode == 2049 || PrefixTableEntry->NodeTypeCode == 2050 )
  {
    CaseMatch = PrefixTableEntry->CaseMatch;
    if ( CaseMatch == PrefixTableEntry )
    {
      p_Links = &PrefixTableEntry->Links;
      Parent = PrefixTableEntry->Links.Parent;
      for ( i = p_Links; Parent != i; Parent = Parent->Parent )
        i = Parent;
      v6 = i - 1;
      v7 = RtlDelete(p_Links);
      if ( v7 )
      {
        if ( i != v7 )
        {
          LeftChild = v6->LeftChild;
          v9 = v7 - 1;
          for ( j = LeftChild->LeftChild; j != v6; j = j->LeftChild )
            LeftChild = j;
          LOWORD(v9->Parent) = 2049;
          LeftChild->LeftChild = v9;
          v9->LeftChild = v6->LeftChild;
          LOWORD(v6->Parent) = 2050;
          v6->LeftChild = 0LL;
        }
      }
      else
      {
        v11 = v6->LeftChild;
        v12 = v11;
        for ( k = v11->LeftChild; k != v6; k = k->LeftChild )
          v12 = k;
        v12->LeftChild = v11;
      }
    }
    else
    {
      v17 = CaseMatch->CaseMatch;
      for ( m = PrefixTableEntry->CaseMatch; v17 != PrefixTableEntry; v17 = v17->CaseMatch )
        m = v17;
      m->CaseMatch = CaseMatch;
      v19 = &m->Links;
      m->NodeTypeCode = PrefixTableEntry->NodeTypeCode;
      m->NextPrefixTree = PrefixTableEntry->NextPrefixTree;
      m->Links = PrefixTableEntry->Links;
      v20 = (_UNICODE_PREFIX_TABLE_ENTRY *)PrefixTableEntry->Links.Parent;
      if ( v20 == (_UNICODE_PREFIX_TABLE_ENTRY *)&PrefixTableEntry->Links )
      {
        v19->Parent = v19;
        NextPrefixTree = PrefixTableEntry->NextPrefixTree;
        for ( n = NextPrefixTree->NextPrefixTree; n != PrefixTableEntry; n = n->NextPrefixTree )
          NextPrefixTree = n;
        NextPrefixTree->NextPrefixTree = m;
      }
      else if ( v20->NextPrefixTree == (_UNICODE_PREFIX_TABLE_ENTRY *)&PrefixTableEntry->Links )
      {
        v20->NextPrefixTree = (_UNICODE_PREFIX_TABLE_ENTRY *)v19;
      }
      else
      {
        v20->CaseMatch = (_UNICODE_PREFIX_TABLE_ENTRY *)v19;
      }
      v23 = m->Links.LeftChild;
      if ( v23 )
        v23->Parent = v19;
      RightChild = m->Links.RightChild;
      if ( RightChild )
        RightChild->Parent = v19;
    }
  }
  else if ( PrefixTableEntry->NodeTypeCode == 2051 )
  {
    v14 = PrefixTableEntry->CaseMatch;
    v15 = v14;
    for ( ii = v14->CaseMatch; ii != PrefixTableEntry; ii = ii->CaseMatch )
      v15 = ii;
    v15->CaseMatch = v14;
  }
}
