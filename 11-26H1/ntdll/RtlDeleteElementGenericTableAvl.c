/*
 * XREFs of RtlDeleteElementGenericTableAvl @ 0x1800BB8D0
 * Callers:
 *     <none>
 * Callees:
 *     DeleteNodeFromTree @ 0x1800BB9F0 (DeleteNodeFromTree.c)
 *     RealPredecessor @ 0x1800BBB90 (RealPredecessor.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

BOOLEAN __cdecl RtlDeleteElementGenericTableAvl(PRTL_AVL_TABLE Table, PVOID Buffer)
{
  _RTL_BALANCED_LINKS *RightChild; // rbx
  _RTL_GENERIC_COMPARE_RESULTS v5; // eax
  _RTL_BALANCED_LINKS *LeftChild; // rax

  if ( !Table->NumberGenericTableElements )
    return 0;
  RightChild = Table->BalancedRoot.RightChild;
  while ( 1 )
  {
    v5 = Table->CompareRoutine(Table, Buffer, &RightChild[1]);
    if ( v5 )
      break;
    LeftChild = RightChild->LeftChild;
LABEL_5:
    RightChild = LeftChild;
    if ( !LeftChild )
      return 0;
  }
  if ( v5 == GenericGreaterThan )
  {
    LeftChild = RightChild->RightChild;
    goto LABEL_5;
  }
  if ( RightChild == Table->RestartKey )
    Table->RestartKey = (_RTL_BALANCED_LINKS *)RealPredecessor(RightChild);
  ++Table->DeleteCount;
  DeleteNodeFromTree(Table, RightChild);
  --Table->NumberGenericTableElements;
  Table->WhichOrderedElement = 0;
  Table->OrderedPointer = 0LL;
  Table->FreeRoutine(Table, RightChild);
  return 1;
}
