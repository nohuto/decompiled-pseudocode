/*
 * XREFs of HvpViewMapCreateViewsForRegion @ 0x1408BE958
 * Callers:
 *     HvpViewMapStart @ 0x1408BDEDC (HvpViewMapStart.c)
 *     HvpViewMapExtendStorage @ 0x1408BED58 (HvpViewMapExtendStorage.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x140379260 (RtlRbInsertNodeEx.c)
 *     CmSiGetMemoryAllocationGranularity @ 0x1404DEBF4 (CmSiGetMemoryAllocationGranularity.c)
 *     HvpViewMapFreeView @ 0x1408BE3D0 (HvpViewMapFreeView.c)
 *     HvpViewMapCreateView @ 0x1408BEC5C (HvpViewMapCreateView.c)
 *     HvpViewMapMakeViewRangeValid @ 0x1408BFC18 (HvpViewMapMakeViewRangeValid.c)
 */

__int64 __fastcall HvpViewMapCreateViewsForRegion(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  PRTL_BALANCED_NODE **v4; // rbx
  __int64 MemoryAllocationGranularity; // rcx
  __int64 v9; // r14
  __int64 v10; // r10
  __int64 v11; // rax
  __int64 i; // r8
  __int64 j; // rdx
  __int64 v14; // rdi
  __int64 v15; // rdi
  int v16; // ebx
  int ViewRangeValid; // esi
  int v18; // r9d
  PRTL_BALANCED_NODE *v19; // rax
  PRTL_BALANCED_NODE v20; // rcx
  _RTL_BALANCED_NODE *v21; // rax
  _RTL_BALANCED_NODE **v22; // rdi
  unsigned __int64 v23; // rdx
  BOOLEAN v24; // r8
  unsigned __int64 v25; // rax
  _RTL_BALANCED_NODE *v26; // rax
  PRTL_BALANCED_NODE v27; // rax
  _RTL_BALANCED_NODE *v29; // rcx
  _RTL_BALANCED_NODE *v30; // rcx
  PRTL_BALANCED_NODE Node; // [rsp+30h] [rbp-10h] BYREF
  PRTL_BALANCED_NODE *p_Node; // [rsp+38h] [rbp-8h]
  PRTL_BALANCED_NODE **v33; // [rsp+88h] [rbp+48h] BYREF
  __int64 v34; // [rsp+90h] [rbp+50h]
  char v35; // [rsp+98h] [rbp+58h]

  v35 = a4;
  v4 = 0LL;
  p_Node = &Node;
  v33 = 0LL;
  Node = (PRTL_BALANCED_NODE)&Node;
  MemoryAllocationGranularity = CmSiGetMemoryAllocationGranularity();
  v34 = MemoryAllocationGranularity;
  v9 = 0x200000LL;
  while ( a2 < a3 )
  {
    v10 = a2 & -MemoryAllocationGranularity;
    v11 = a3 - v10;
    if ( v9 <= a3 - v10 )
    {
      v15 = v9 + v10;
      v16 = v9 + v10;
    }
    else
    {
      for ( i = MemoryAllocationGranularity; i < v11; i *= 2LL )
        ;
      for ( j = 2 * i; v10 + j - a3 <= a3 / 8; j *= 2LL )
        i = j;
      v14 = v9;
      if ( i < v9 )
        v14 = i;
      v15 = v10 + v14;
      if ( (*(_DWORD *)(a1 + 32) & 1) != 0 && v15 >= *(_QWORD *)(a1 + 16) )
        v15 = *(_QWORD *)(a1 + 16);
      v16 = a3;
    }
    ViewRangeValid = HvpViewMapCreateView(a1, v10, v15, &v33);
    if ( ViewRangeValid < 0 )
    {
      MemoryAllocationGranularity = v34;
      v4 = v33;
      if ( v9 <= v34 )
        goto LABEL_32;
      v9 /= 2LL;
    }
    else
    {
      v18 = v16;
      v4 = v33;
      ViewRangeValid = HvpViewMapMakeViewRangeValid(a1, (_DWORD)v33, a2, v18, v35);
      if ( ViewRangeValid < 0 )
        goto LABEL_32;
      v19 = p_Node;
      if ( *p_Node != (PRTL_BALANCED_NODE)&Node )
        goto LABEL_16;
      v4[1] = p_Node;
      *v4 = &Node;
      a2 = v15;
      MemoryAllocationGranularity = v34;
      *v19 = (PRTL_BALANCED_NODE)v4;
      p_Node = (PRTL_BALANCED_NODE *)v4;
      v4 = 0LL;
      v33 = 0LL;
    }
  }
  v20 = Node;
  if ( (PRTL_BALANCED_NODE *)Node->Children[1] != &Node
    || (v21 = Node->Children[0], Node->Children[0]->Children[1] != Node) )
  {
LABEL_16:
    __fastfail(3u);
  }
  Node = Node->Children[0];
  v21->Children[1] = (_RTL_BALANCED_NODE *)&Node;
  if ( v20 != (PRTL_BALANCED_NODE)&Node )
  {
    v22 = (_RTL_BALANCED_NODE **)(a1 + 40);
    v4 = 0LL;
    do
    {
      v23 = (unsigned __int64)*v22;
      if ( (*(_BYTE *)(a1 + 48) & 1) != 0 && v23 )
        v23 ^= (unsigned __int64)v22;
      v24 = 0;
      if ( v23 )
      {
        while ( 1 )
        {
          if ( (signed __int64)v20[1].ParentValue < *(_QWORD *)(v23 + 40) )
          {
            v25 = *(_QWORD *)v23;
            if ( (*(_BYTE *)(a1 + 48) & 1) != 0 )
            {
              if ( !v25 )
                goto LABEL_50;
              v25 ^= v23;
            }
            if ( !v25 )
            {
LABEL_50:
              v24 = 0;
              break;
            }
          }
          else
          {
            v25 = *(_QWORD *)(v23 + 8);
            if ( (*(_BYTE *)(a1 + 48) & 1) != 0 )
            {
              if ( !v25 )
                goto LABEL_27;
              v25 ^= v23;
            }
            if ( !v25 )
            {
LABEL_27:
              v24 = 1;
              break;
            }
          }
          v23 = v25;
        }
      }
      RtlRbInsertNodeEx((PRTL_RB_TREE)(a1 + 40), (PRTL_BALANCED_NODE)v23, v24, v20);
      v20 = Node;
      if ( (PRTL_BALANCED_NODE *)Node->Children[1] != &Node )
        goto LABEL_16;
      v26 = Node->Children[0];
      if ( Node->Children[0]->Children[1] != Node )
        goto LABEL_16;
      Node = Node->Children[0];
      v26->Children[1] = (_RTL_BALANCED_NODE *)&Node;
    }
    while ( v20 != (PRTL_BALANCED_NODE)&Node );
  }
  ViewRangeValid = 0;
LABEL_32:
  if ( v4 )
    HvpViewMapFreeView(a1, (__int64)v4);
  v27 = Node;
  if ( Node != (PRTL_BALANCED_NODE)&Node )
  {
    if ( (PRTL_BALANCED_NODE *)Node->Children[1] == &Node )
    {
      v29 = Node->Children[0];
      if ( Node->Children[0]->Children[1] == Node )
      {
        Node = Node->Children[0];
        v29->Children[1] = (_RTL_BALANCED_NODE *)&Node;
        while ( 1 )
        {
          HvpViewMapFreeView(a1, (__int64)v27);
          v27 = Node;
          if ( (PRTL_BALANCED_NODE *)Node->Children[1] != &Node )
            break;
          v30 = Node->Children[0];
          if ( Node->Children[0]->Children[1] != Node )
            break;
          Node = Node->Children[0];
          v30->Children[1] = (_RTL_BALANCED_NODE *)&Node;
          if ( v27 == (PRTL_BALANCED_NODE)&Node )
            return (unsigned int)ViewRangeValid;
        }
      }
    }
    goto LABEL_16;
  }
  return (unsigned int)ViewRangeValid;
}
