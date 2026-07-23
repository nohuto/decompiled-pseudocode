/*
 * XREFs of MxInsertFreeZeroMemoryDescriptor @ 0x140CFD8DC
 * Callers:
 *     MxConstructLoaderMemoryTree @ 0x140CFB74C (MxConstructLoaderMemoryTree.c)
 *     MxCreateFreePageNode @ 0x140CFBE0C (MxCreateFreePageNode.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x140379260 (RtlRbInsertNodeEx.c)
 *     MxUpdateBootNodeFreePageCount @ 0x140CFE958 (MxUpdateBootNodeFreePageCount.c)
 */

__int64 __fastcall MxInsertFreeZeroMemoryDescriptor(PRTL_RB_TREE Tree, PRTL_BALANCED_NODE Node)
{
  unsigned __int64 ParentValue; // r9
  unsigned __int64 Root; // rdx
  BOOLEAN v6; // r8
  int v7; // ecx
  unsigned __int64 v8; // rax
  _RTL_BALANCED_NODE *v9; // rcx
  _RTL_BALANCED_NODE *v10; // rax

  ParentValue = Node[1].ParentValue;
  if ( ParentValue < 0x40000 )
  {
    v9 = (_RTL_BALANCED_NODE *)((char *)&Tree[1] + (ParentValue < 0x200 ? 0x20 : 0));
    v10 = v9->Children[1];
    if ( v10->Children[0] != v9 )
      __fastfail(3u);
    Node->Children[0] = v9;
    Node->Children[1] = v10;
    v10->Children[0] = Node;
    v9->Children[1] = Node;
    ++v9[1].Children[0];
    v9->ParentValue += Node[1].ParentValue;
  }
  else
  {
    Root = (unsigned __int64)Tree->Root;
    v6 = 0;
    if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
    {
      if ( Root )
        Root ^= (unsigned __int64)Tree;
      else
        Root = 0LL;
    }
    v7 = *(_BYTE *)&Tree->0 & 1;
    if ( Root )
    {
      while ( 1 )
      {
        if ( ParentValue <= *(_QWORD *)(Root + 40) )
        {
          v8 = *(_QWORD *)(Root + 8);
          if ( v7 )
          {
            if ( !v8 )
              goto LABEL_18;
            v8 ^= Root;
          }
          if ( !v8 )
          {
LABEL_18:
            v6 = 1;
            break;
          }
        }
        else
        {
          v8 = *(_QWORD *)Root;
          if ( v7 )
          {
            if ( !v8 )
              break;
            v8 ^= Root;
          }
          if ( !v8 )
            break;
        }
        Root = v8;
      }
    }
    RtlRbInsertNodeEx(Tree, (PRTL_BALANCED_NODE)Root, v6, Node);
  }
  return MxUpdateBootNodeFreePageCount(Tree, Node[1].ParentValue, 1LL);
}
