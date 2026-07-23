/*
 * XREFs of MxCreateNodeFreeZeroList @ 0x140CFC0E0
 * Callers:
 *     MxCreateSparsePfnDatabase @ 0x140CFC864 (MxCreateSparsePfnDatabase.c)
 * Callees:
 *     MxCreateFreePages @ 0x140CFC028 (MxCreateFreePages.c)
 *     MxFindFreePageDescriptor @ 0x140CFCDB0 (MxFindFreePageDescriptor.c)
 */

unsigned __int64 __fastcall MxCreateNodeFreeZeroList(unsigned int a1)
{
  int v2; // ebp
  unsigned __int64 Root; // rdi
  _RTL_RB_TREE *v4; // rsi
  unsigned __int64 result; // rax
  unsigned __int64 v6; // r8
  _RTL_BALANCED_NODE *v7; // rdx

  v2 = 0;
  Root = 0x100000LL;
  v4 = (_RTL_RB_TREE *)&MxBootState[250 * a1];
  result = (unsigned __int64)v4[11].Root;
  if ( result <= 0x100000 )
  {
    Root = (unsigned __int64)v4[11].Root;
    if ( !result )
      return result;
  }
  do
  {
    result = (unsigned __int64)v4[12].Root;
    if ( result )
    {
      if ( (_RTL_BALANCED_NODE *)Root <= v4[8].Root )
        goto LABEL_7;
      v2 = 1;
    }
    result = MxFindFreePageDescriptor(a1);
    if ( !result )
      break;
LABEL_7:
    v6 = Root;
    if ( Root > *(_QWORD *)(result + 40) )
      v6 = *(_QWORD *)(result + 40);
    result = MxCreateFreePages(v4, (_RTL_BALANCED_NODE *)result, v6);
    if ( !result )
      break;
    Root -= result;
  }
  while ( Root );
  if ( Root )
  {
    if ( v2 )
    {
      v7 = v4[12].Root;
      if ( v7 )
      {
        if ( Root > v7[1].ParentValue )
          Root = v7[1].ParentValue;
        return MxCreateFreePages(v4, v7, Root);
      }
    }
  }
  return result;
}
