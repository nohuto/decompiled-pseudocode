/*
 * XREFs of HvpViewMapPromoteRangeToMapping @ 0x1408E37B4
 * Callers:
 *     HvpRemapAndEnlistHiveBins @ 0x1408E23B0 (HvpRemapAndEnlistHiveBins.c)
 *     HvpAddBin @ 0x140B87980 (HvpAddBin.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x140379260 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x140379A10 (RtlRbRemoveNode.c)
 *     CmSiGetMemoryAllocationGranularity @ 0x1404DEBF4 (CmSiGetMemoryAllocationGranularity.c)
 *     HvpViewMapMigrateCOWData @ 0x140862CBC (HvpViewMapMigrateCOWData.c)
 *     HvpViewMapMakeViewRangeInvalid @ 0x1408BDCE4 (HvpViewMapMakeViewRangeInvalid.c)
 *     HvpViewMapFreeView @ 0x1408BE3D0 (HvpViewMapFreeView.c)
 *     HvpViewMapCreateView @ 0x1408BEC5C (HvpViewMapCreateView.c)
 *     HvpViewMapFindViewForFileOffset @ 0x1408BFACC (HvpViewMapFindViewForFileOffset.c)
 *     HvpViewMapMakeViewRangeValid @ 0x1408BFC18 (HvpViewMapMakeViewRangeValid.c)
 */

__int64 __fastcall HvpViewMapPromoteRangeToMapping(ULONG_PTR a1, int a2, unsigned int a3, _QWORD *a4)
{
  _RTL_RB_TREE *v4; // r13
  __int64 v5; // rbx
  __int64 v6; // r12
  __int64 v7; // r15
  bool v8; // zf
  int v10; // ecx
  __int64 v11; // rax
  int ViewRangeValid; // edi
  __int64 MemoryAllocationGranularity; // rax
  int View; // eax
  PRTL_BALANCED_NODE v16; // r14
  _RTL_BALANCED_NODE *i; // rdx
  _RTL_BALANCED_NODE *ViewForFileOffset; // rdi
  __int64 v19; // rax
  _RTL_BALANCED_NODE **v20; // rax
  _RTL_RB_TREE *v21; // rcx
  unsigned __int64 Root; // rdx
  BOOLEAN v23; // r8
  unsigned __int64 v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // rcx
  _RTL_BALANCED_NODE *v27; // rax
  _RTL_BALANCED_NODE *v28; // r13
  _RTL_BALANCED_NODE **v29; // rax
  _QWORD **v30; // [rsp+30h] [rbp-10h] BYREF
  _RTL_BALANCED_NODE *v31; // [rsp+38h] [rbp-8h]
  PRTL_BALANCED_NODE Node; // [rsp+80h] [rbp+40h] BYREF
  _QWORD *v33; // [rsp+98h] [rbp+58h]

  v33 = a4;
  v4 = (_RTL_RB_TREE *)(a1 + 40);
  v31 = (_RTL_BALANCED_NODE *)&v30;
  v5 = *(_QWORD *)(a1 + 40);
  v6 = (unsigned int)(a2 + 4096);
  v7 = v6 + a3;
  Node = 0LL;
  v8 = (*(_BYTE *)(a1 + 48) & 1) == 0;
  v30 = &v30;
  if ( !v8 && v5 )
    v5 ^= (unsigned __int64)v4;
  v10 = *(_BYTE *)(a1 + 48) & 1;
  while ( v5 )
  {
    if ( v6 < *(_QWORD *)(v5 + 40) )
    {
      v11 = *(_QWORD *)v5;
    }
    else
    {
      if ( v6 < *(_QWORD *)(v5 + 48) )
        break;
      v11 = *(_QWORD *)(v5 + 8);
    }
    if ( v10 && v11 )
      v5 ^= v11;
    else
      v5 = v11;
  }
  if ( *(_QWORD *)(v5 + 48) >= v7 )
  {
    *a4 = v6 + *(_QWORD *)(v5 + 56) - *(_QWORD *)(v5 + 24);
    return 0;
  }
  MemoryAllocationGranularity = CmSiGetMemoryAllocationGranularity();
  View = HvpViewMapCreateView(a1, (LARGE_INTEGER)(v6 & -MemoryAllocationGranularity), v7, (__int64 *)&Node);
  v16 = Node;
  ViewRangeValid = View;
  if ( View < 0 || (ViewRangeValid = HvpViewMapMakeViewRangeValid(a1, Node, v6, v7, 0), ViewRangeValid < 0) )
  {
LABEL_47:
    if ( v16 )
      HvpViewMapFreeView(a1, (__int64)v16);
    return (unsigned int)ViewRangeValid;
  }
  for ( i = (_RTL_BALANCED_NODE *)v6; (__int64)i < v7; i = Node[2].Children[0] )
  {
    Node = (PRTL_BALANCED_NODE)HvpViewMapFindViewForFileOffset(a1, (__int64)i);
    ViewRangeValid = HvpViewMapMigrateCOWData(a1, v16, Node);
    if ( ViewRangeValid < 0 )
      goto LABEL_47;
  }
  ViewForFileOffset = (_RTL_BALANCED_NODE *)HvpViewMapFindViewForFileOffset(a1, v7 - 1);
  v19 = *(_QWORD *)(v5 + 48);
  if ( v19 < (signed __int64)ViewForFileOffset[1].ParentValue )
  {
    do
    {
      v28 = (_RTL_BALANCED_NODE *)HvpViewMapFindViewForFileOffset(a1, v19);
      RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 40), v28);
      v29 = (_RTL_BALANCED_NODE **)v31;
      if ( v31->Children[0] != (_RTL_BALANCED_NODE *)&v30 )
        goto LABEL_28;
      v28->Children[1] = v31;
      v28->Children[0] = (_RTL_BALANCED_NODE *)&v30;
      *v29 = v28;
      v31 = v28;
      v19 = (__int64)v28[2].Children[0];
    }
    while ( v19 < (signed __int64)ViewForFileOffset[1].ParentValue );
    v4 = (_RTL_RB_TREE *)(a1 + 40);
  }
  if ( *(_QWORD *)(v5 + 40) == v6 )
  {
    RtlRbRemoveNode(v4, (PRTL_BALANCED_NODE)v5);
    v27 = v31;
    if ( v31->Children[0] != (_RTL_BALANCED_NODE *)&v30 )
LABEL_28:
      __fastfail(3u);
    *(_QWORD *)(v5 + 8) = v31;
    *(_QWORD *)v5 = &v30;
    v27->Children[0] = (_RTL_BALANCED_NODE *)v5;
    v31 = (_RTL_BALANCED_NODE *)v5;
  }
  else
  {
    HvpViewMapMakeViewRangeInvalid(a1, (_QWORD *)v5, v6, *(_QWORD *)(v5 + 48));
  }
  if ( ViewForFileOffset[2].Children[0] == (_RTL_BALANCED_NODE *)v7 )
  {
    RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 40), ViewForFileOffset);
    v20 = (_RTL_BALANCED_NODE **)v31;
    if ( v31->Children[0] != (_RTL_BALANCED_NODE *)&v30 )
      goto LABEL_28;
    ViewForFileOffset->Children[1] = v31;
    ViewForFileOffset->Children[0] = (_RTL_BALANCED_NODE *)&v30;
    *v20 = ViewForFileOffset;
    v31 = ViewForFileOffset;
  }
  else
  {
    HvpViewMapMakeViewRangeInvalid(a1, ViewForFileOffset, ViewForFileOffset[1].ParentValue, v7);
  }
  v21 = (_RTL_RB_TREE *)(a1 + 40);
  if ( (*(_BYTE *)(a1 + 48) & 1) != 0 )
  {
    if ( v21->Root )
      Root = (unsigned __int64)v21->Root ^ (unsigned __int64)v21;
    else
      Root = 0LL;
  }
  else
  {
    Root = (unsigned __int64)v21->Root;
  }
  v23 = 0;
  if ( !Root )
    goto LABEL_37;
  while ( 1 )
  {
    if ( (signed __int64)v16[1].ParentValue >= *(_QWORD *)(Root + 40) )
    {
      v24 = *(_QWORD *)(Root + 8);
      if ( (*(_BYTE *)(a1 + 48) & 1) != 0 )
      {
        if ( !v24 )
          goto LABEL_36;
        v24 ^= Root;
      }
      if ( !v24 )
      {
LABEL_36:
        v23 = 1;
        goto LABEL_37;
      }
      goto LABEL_46;
    }
    v24 = *(_QWORD *)Root;
    if ( (*(_BYTE *)(a1 + 48) & 1) != 0 )
    {
      if ( !v24 )
        break;
      v24 ^= Root;
    }
    if ( !v24 )
      break;
LABEL_46:
    Root = v24;
  }
  v23 = 0;
LABEL_37:
  RtlRbInsertNodeEx(v21, (PRTL_BALANCED_NODE)Root, v23, v16);
  while ( 1 )
  {
    v25 = v30;
    if ( v30[1] != &v30 )
      goto LABEL_28;
    v26 = (__int64)*v30;
    if ( (_QWORD **)(*v30)[1] != v30 )
      goto LABEL_28;
    v30 = (_QWORD **)*v30;
    *(_QWORD *)(v26 + 8) = &v30;
    if ( v25 == &v30 )
      break;
    HvpViewMapFreeView(a1, (__int64)v25);
  }
  *v33 = v6 + (char *)v16[2].Children[1] - (char *)v16[1].Children[0];
  return 0;
}
