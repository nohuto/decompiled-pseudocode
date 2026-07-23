/*
 * XREFs of RtlInsertElementGenericTableFullAvl @ 0x1403C2E00
 * Callers:
 *     PiPnpRtlObjectEventCreate @ 0x140964B70 (PiPnpRtlObjectEventCreate.c)
 *     PiPnpRtlCacheObjectBaseKey @ 0x140967630 (PiPnpRtlCacheObjectBaseKey.c)
 *     PiDmAddCacheReferenceForObject @ 0x1409A9E30 (PiDmAddCacheReferenceForObject.c)
 * Callees:
 *     RebalanceNode @ 0x1403C2F40 (RebalanceNode.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

PVOID __stdcall RtlInsertElementGenericTableFullAvl(
        PRTL_AVL_TABLE Table,
        PVOID Buffer,
        CLONG BufferSize,
        PBOOLEAN NewElement,
        PVOID NodeOrParent,
        TABLE_SEARCH_RESULT SearchResult)
{
  size_t v7; // rsi
  __int64 v10; // rdx
  __int64 v11; // rax
  char *v12; // rdi
  _BYTE *v13; // rcx
  _BYTE *v14; // r8
  _QWORD *i; // rdx
  bool v16; // zf
  char v17; // al
  char v18; // dl

  v7 = BufferSize;
  if ( SearchResult == TableFoundNode )
  {
    v12 = (char *)NodeOrParent;
LABEL_16:
    if ( NewElement )
      *NewElement = SearchResult != TableFoundNode;
    Table->WhichOrderedElement = 0;
    Table->OrderedPointer = 0LL;
    return v12 + 32;
  }
  v10 = BufferSize + 32;
  if ( (unsigned int)v10 >= BufferSize )
  {
    v11 = guard_dispatch_icall_no_overrides(Table, v10);
    v12 = (char *)v11;
    if ( v11 )
    {
      *(_OWORD *)v11 = 0LL;
      *(_OWORD *)(v11 + 16) = 0LL;
      ++Table->NumberGenericTableElements;
      if ( SearchResult )
      {
        v13 = NodeOrParent;
        v14 = (_BYTE *)v11;
        if ( SearchResult == TableInsertAsLeft )
          *((_QWORD *)NodeOrParent + 1) = v11;
        else
          *((_QWORD *)NodeOrParent + 2) = v11;
        *(_QWORD *)v11 = NodeOrParent;
        Table->BalancedRoot.Balance = -1;
        for ( i = *(_QWORD **)v11; ; v13 = i )
        {
          v16 = i[1] == (_QWORD)v14;
          v17 = -1;
          v18 = v13[24];
          if ( !v16 )
            v17 = 1;
          if ( v18 )
            break;
          i = *(_QWORD **)v13;
          v14 = v13;
          v13[24] = v17;
        }
        if ( v18 == v17 )
        {
          RebalanceNode(v13);
        }
        else
        {
          v13[24] = 0;
          if ( !Table->BalancedRoot.Balance )
            ++Table->DepthOfTree;
        }
      }
      else
      {
        Table->BalancedRoot.RightChild = (_RTL_BALANCED_LINKS *)v11;
        *(_QWORD *)v11 = Table;
        Table->DepthOfTree = 1;
      }
      memmove(v12 + 32, Buffer, v7);
      goto LABEL_16;
    }
  }
  if ( NewElement )
    *NewElement = 0;
  return 0LL;
}
