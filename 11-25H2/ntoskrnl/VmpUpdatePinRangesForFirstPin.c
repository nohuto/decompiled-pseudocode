/*
 * XREFs of VmpUpdatePinRangesForFirstPin @ 0x14063F7DC
 * Callers:
 *     VmpPinMemoryRange @ 0x14063ED00 (VmpPinMemoryRange.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x1402E2370 (RtlRbInsertNodeEx.c)
 */

void __fastcall VmpUpdatePinRangesForFirstPin(
        __int64 a1,
        _RTL_BALANCED_NODE *a2,
        _RTL_BALANCED_NODE *a3,
        _RTL_BALANCED_NODE **a4)
{
  _RTL_BALANCED_NODE *v8; // rdx
  BOOLEAN v9; // r8
  _RTL_BALANCED_NODE *v10; // rax
  _RTL_BALANCED_NODE *v11; // rdi
  _RTL_BALANCED_NODE *v12; // rax
  _RTL_BALANCED_NODE *v13; // rcx
  __int64 v14; // rbx
  int Right; // ecx
  unsigned int v16; // ecx
  _RTL_BALANCED_NODE *v17; // rbx

  while ( 2 )
  {
    v8 = *(_RTL_BALANCED_NODE **)(a1 + 40);
    v9 = 0;
    if ( !v8 )
      goto LABEL_9;
    while ( 1 )
    {
      if ( a2 < v8[1].Children[0] )
      {
        v10 = v8->Children[0];
        if ( !v8->Children[0] )
          goto LABEL_9;
        goto LABEL_7;
      }
      if ( a2 <= v8[1].Children[1] )
        goto LABEL_12;
      v10 = v8->Children[1];
      if ( !v10 )
        break;
LABEL_7:
      v8 = v10;
    }
    v9 = 1;
LABEL_9:
    v11 = *a4;
    if ( (_RTL_BALANCED_NODE **)(*a4)->Children[1] != a4
      || (v12 = v11->Children[0], v11->Children[0]->Children[1] != v11) )
    {
      __fastfail(3u);
    }
    *a4 = v12;
    v12->Children[1] = (_RTL_BALANCED_NODE *)a4;
    v13 = (_RTL_BALANCED_NODE *)((char *)a2 - ((unsigned __int64)a2 & (*(_QWORD *)(a1 + 64) - 1LL)));
    v11[1].Children[0] = v13;
    v11[1].Children[1] = (_RTL_BALANCED_NODE *)((char *)v13 + *(_QWORD *)(a1 + 64) - 1);
    RtlRbInsertNodeEx((PRTL_RB_TREE)(a1 + 40), v8, v9, v11);
    v8 = v11;
LABEL_12:
    if ( a2 <= v8[1].Children[0] )
      v14 = 0LL;
    else
      v14 = (unsigned int)((_DWORD)a2 - LODWORD(v8[1].Children[0]));
    Right = (int)a3;
    if ( a3 >= v8[1].Children[1] )
      Right = (int)v8[1].Right;
    v16 = Right - LODWORD(v8[1].Children[0]);
    while ( (unsigned int)v14 <= v16 )
    {
      ++*((_BYTE *)&v8[1].0 + v14);
      v14 = (unsigned int)(v14 + 1);
    }
    v17 = v8[1].Children[1];
    if ( a3 > v17 )
    {
      a2 = (_RTL_BALANCED_NODE *)((char *)v17->Children + 1);
      continue;
    }
    break;
  }
}
