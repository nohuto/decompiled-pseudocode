/*
 * XREFs of VmpUpdatePinRangesForFirstPin @ 0x1406C59DC
 * Callers:
 *     VmpPinMemoryRanges @ 0x1406C5B54 (VmpPinMemoryRanges.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x140379260 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x140379A10 (RtlRbRemoveNode.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall VmpUpdatePinRangesForFirstPin(
        __int64 a1,
        _RTL_BALANCED_NODE *a2,
        _RTL_BALANCED_NODE *a3,
        _RTL_RB_TREE *a4,
        int a5)
{
  unsigned int v5; // edi
  _RTL_BALANCED_NODE **p_Root; // rax
  _RTL_BALANCED_NODE *v9; // rbx
  BOOLEAN v10; // r14
  _RTL_BALANCED_NODE *v11; // rax
  _RTL_BALANCED_NODE *Pool2; // rbp
  _RTL_BALANCED_NODE *Min; // rax
  _RTL_BALANCED_NODE *v15; // rcx
  unsigned int v16; // esi
  int Right; // ecx
  unsigned int v18; // ecx
  _RTL_BALANCED_NODE *v19; // rsi
  _RTL_RB_TREE *Tree; // [rsp+68h] [rbp+10h]
  _RTL_BALANCED_NODE *v22; // [rsp+70h] [rbp+18h]

  v22 = a3;
  v5 = 0;
  if ( a5 )
    p_Root = &a4->Root;
  else
    p_Root = (_RTL_BALANCED_NODE **)(a1 + 56);
  Tree = (_RTL_RB_TREE *)p_Root;
  while ( 2 )
  {
    v9 = *p_Root;
    v10 = 0;
    if ( !*p_Root )
      goto LABEL_13;
    while ( 1 )
    {
      if ( a2 < v9[1].Children[0] )
      {
        v11 = v9->Children[0];
        if ( !v9->Children[0] )
          goto LABEL_13;
        goto LABEL_11;
      }
      if ( a2 <= v9[1].Children[1] )
        goto LABEL_24;
      v11 = v9->Children[1];
      if ( !v11 )
        break;
LABEL_11:
      v9 = v11;
    }
    v10 = 1;
LABEL_13:
    if ( a5 )
    {
      Pool2 = (_RTL_BALANCED_NODE *)ExAllocatePool2(0x40uLL);
      if ( !Pool2 )
        return (unsigned int)-1073741670;
    }
    else
    {
      Min = a4->Min;
      if ( ((unsigned __int8)Min & 1) != 0 )
      {
        if ( Min == (_RTL_BALANCED_NODE *)1 )
          Pool2 = 0LL;
        else
          Pool2 = (_RTL_BALANCED_NODE *)((unsigned __int64)Min ^ ((unsigned __int64)a4 | 1));
      }
      else
      {
        Pool2 = a4->Min;
      }
      RtlRbRemoveNode(a4, Pool2);
    }
    v15 = (_RTL_BALANCED_NODE *)((char *)a2 - ((unsigned __int64)a2 & (*(_QWORD *)(a1 + 80) - 1LL)));
    Pool2[1].Children[0] = v15;
    Pool2[1].Children[1] = (_RTL_BALANCED_NODE *)((char *)v15 + *(_QWORD *)(a1 + 80) - 1);
    RtlRbInsertNodeEx(Tree, v9, v10, Pool2);
    a3 = v22;
    v9 = Pool2;
LABEL_24:
    if ( !a5 )
    {
      if ( a2 <= v9[1].Children[0] )
        v16 = 0;
      else
        v16 = (_DWORD)a2 - LODWORD(v9[1].Children[0]);
      Right = (int)a3;
      if ( a3 >= v9[1].Children[1] )
        Right = (int)v9[1].Right;
      v18 = Right - LODWORD(v9[1].Children[0]);
      while ( v16 <= v18 )
        ++*((_BYTE *)&v9[1].0 + v16++);
    }
    v19 = v9[1].Children[1];
    if ( a3 > v19 )
    {
      p_Root = &Tree->Root;
      a2 = (_RTL_BALANCED_NODE *)((char *)v19->Children + 1);
      continue;
    }
    return v5;
  }
}
