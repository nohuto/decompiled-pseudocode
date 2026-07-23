/*
 * XREFs of MxRemoveFreeZeroMemoryDescriptor @ 0x140CFE650
 * Callers:
 *     MxCreateFreePageNode @ 0x140CFBE0C (MxCreateFreePageNode.c)
 *     MxGetFreePageDescriptor @ 0x140CFD020 (MxGetFreePageDescriptor.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x140379A10 (RtlRbRemoveNode.c)
 *     MxUpdateBootNodeFreePageCount @ 0x140CFE958 (MxUpdateBootNodeFreePageCount.c)
 */

__int64 __fastcall MxRemoveFreeZeroMemoryDescriptor(_RTL_RB_TREE *a1, _RTL_BALANCED_NODE *a2)
{
  unsigned __int64 ParentValue; // rdx
  _RTL_BALANCED_NODE *v5; // rcx
  _RTL_BALANCED_NODE *v6; // rax
  __int64 v7; // rax

  ParentValue = a2[1].ParentValue;
  if ( ParentValue < 0x40000 )
  {
    v5 = a2->Children[0];
    if ( a2->Children[0]->Children[1] != a2 || (v6 = a2->Children[1], v6->Children[0] != a2) )
      __fastfail(3u);
    v6->Children[0] = v5;
    v5->Children[1] = v6;
    v7 = ParentValue < 0x200 ? 0x20 : 0;
    --*(_RTL_BALANCED_NODE **)((char *)&a1[2].Min + v7);
    *(_RTL_BALANCED_NODE **)((char *)&a1[2].Root + v7) = (_RTL_BALANCED_NODE *)(*(char **)((char *)&a1[2].Root + v7)
                                                                              - a2[1].ParentValue);
  }
  else
  {
    RtlRbRemoveNode(a1, a2);
  }
  return MxUpdateBootNodeFreePageCount(a1, a2[1].ParentValue, 0LL);
}
