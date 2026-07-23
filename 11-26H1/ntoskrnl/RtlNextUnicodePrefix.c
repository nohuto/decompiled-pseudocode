/*
 * XREFs of RtlNextUnicodePrefix @ 0x140ABE1C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRealSuccessor @ 0x14030C4F0 (RtlRealSuccessor.c)
 */

PUNICODE_PREFIX_TABLE_ENTRY __stdcall RtlNextUnicodePrefix(PUNICODE_PREFIX_TABLE PrefixTable, BOOLEAN Restart)
{
  PUNICODE_PREFIX_TABLE_ENTRY LastNextEntry; // rbx
  PUNICODE_PREFIX_TABLE_ENTRY result; // rax
  PRTL_SPLAY_LINKS p_Links; // rcx
  PUNICODE_PREFIX_TABLE_ENTRY NextPrefixTree; // rcx
  RTL_SPLAY_LINKS *v7; // rcx
  RTL_SPLAY_LINKS *Parent; // rdx
  _RTL_SPLAY_LINKS *v9; // rcx
  _RTL_SPLAY_LINKS *v10; // rax
  _RTL_SPLAY_LINKS *LeftChild; // rax

  if ( Restart || (LastNextEntry = PrefixTable->LastNextEntry) == 0LL )
  {
    NextPrefixTree = PrefixTable->NextPrefixTree;
    if ( NextPrefixTree->NodeTypeCode != 2048 )
    {
      LeftChild = NextPrefixTree->Links.LeftChild;
      p_Links = &NextPrefixTree->Links;
      while ( LeftChild )
      {
        p_Links = LeftChild;
        LeftChild = LeftChild->LeftChild;
      }
      goto LABEL_5;
    }
  }
  else
  {
    result = LastNextEntry->CaseMatch;
    if ( result->NodeTypeCode == 2051 )
    {
LABEL_6:
      PrefixTable->LastNextEntry = result;
      return result;
    }
    p_Links = RtlRealSuccessor(&result->Links);
    if ( p_Links )
    {
LABEL_5:
      result = (PUNICODE_PREFIX_TABLE_ENTRY)&p_Links[-1];
      goto LABEL_6;
    }
    v7 = &LastNextEntry->Links;
    Parent = LastNextEntry->Links.Parent;
    if ( Parent != &LastNextEntry->Links )
    {
      do
      {
        v7 = Parent;
        Parent = Parent->Parent;
      }
      while ( Parent != v7 );
    }
    v9 = v7[-1].LeftChild;
    if ( SWORD1(v9->Parent) > 0 )
    {
      v10 = v9[1].LeftChild;
      p_Links = v9 + 1;
      while ( v10 )
      {
        p_Links = v10;
        v10 = v10->LeftChild;
      }
      goto LABEL_5;
    }
  }
  return 0LL;
}
