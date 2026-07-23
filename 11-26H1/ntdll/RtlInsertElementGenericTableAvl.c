/*
 * XREFs of RtlInsertElementGenericTableAvl @ 0x1800BBD20
 * Callers:
 *     <none>
 * Callees:
 *     RebalanceNode @ 0x1800BBEF0 (RebalanceNode.c)
 *     memmove @ 0x180164600 (memmove.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

PVOID __cdecl RtlInsertElementGenericTableAvl(
        PRTL_AVL_TABLE Table,
        PVOID Buffer,
        CLONG BufferSize,
        PBOOLEAN NewElement)
{
  size_t v4; // r13
  _RTL_BALANCED_LINKS *i; // rbx
  _RTL_BALANCED_LINKS **p_RightChild; // r14
  _RTL_GENERIC_COMPARE_RESULTS v10; // eax
  int v11; // ebp
  PVOID result; // rax
  _RTL_BALANCED_LINKS *v13; // rax
  _RTL_BALANCED_LINKS *v14; // rcx
  _RTL_BALANCED_LINKS *j; // r9
  bool v16; // zf
  char v17; // dl
  char Balance; // al

  v4 = BufferSize;
  i = 0LL;
  p_RightChild = &Table->BalancedRoot.RightChild;
  if ( Table->NumberGenericTableElements )
  {
    for ( i = *p_RightChild; ; i = i->RightChild )
    {
      while ( 1 )
      {
        v10 = Table->CompareRoutine(Table, Buffer, &i[1]);
        if ( v10 )
          break;
        if ( !i->LeftChild )
        {
          v11 = 2;
          goto LABEL_14;
        }
        i = i->LeftChild;
      }
      if ( v10 != GenericGreaterThan )
      {
        v11 = 1;
        goto LABEL_10;
      }
      if ( !i->RightChild )
        break;
    }
    v11 = 3;
  }
  else
  {
    v11 = 0;
  }
LABEL_14:
  if ( (int)v4 + 32 >= (unsigned int)v4 )
  {
    v13 = (_RTL_BALANCED_LINKS *)((__int64 (__fastcall *)(PRTL_AVL_TABLE))Table->AllocateRoutine)(Table);
    if ( v13 )
    {
      *(_OWORD *)&v13->Parent = 0LL;
      *(_OWORD *)&v13->RightChild = 0LL;
      ++Table->NumberGenericTableElements;
      if ( !v11 )
      {
        *p_RightChild = v13;
        v13->Parent = &Table->BalancedRoot;
        Table->DepthOfTree = 1;
        i = v13;
        memmove(&v13[1], Buffer, v4);
        goto LABEL_10;
      }
      v14 = i;
      if ( v11 == 2 )
        i->LeftChild = v13;
      else
        i->RightChild = v13;
      v13->Parent = i;
      Table->BalancedRoot.Balance = -1;
      i = v13;
      for ( j = v13->Parent; ; v14 = j )
      {
        v16 = j->LeftChild == v13;
        v17 = -1;
        Balance = v14->Balance;
        if ( !v16 )
          v17 = 1;
        if ( Balance )
          break;
        j = v14->Parent;
        v13 = v14;
        v14->Balance = v17;
      }
      if ( Balance == v17 )
      {
        RebalanceNode(v14);
      }
      else
      {
        v14->Balance = 0;
        if ( !Table->BalancedRoot.Balance )
        {
          ++Table->DepthOfTree;
          memmove(&i[1], Buffer, v4);
          goto LABEL_10;
        }
      }
      memmove(&i[1], Buffer, v4);
LABEL_10:
      if ( NewElement )
        *NewElement = v11 != 1;
      Table->WhichOrderedElement = 0;
      result = &i[1];
      Table->OrderedPointer = 0LL;
      return result;
    }
  }
  if ( NewElement )
    *NewElement = 0;
  return 0LL;
}
