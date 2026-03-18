/*
 * XREFs of HvpViewMapPromoteRangeToMapping @ 0x1408DD1F4
 * Callers:
 *     HvpRemapAndEnlistHiveBins @ 0x1408DBDF0 (HvpRemapAndEnlistHiveBins.c)
 *     HvpAddBin @ 0x140B7EAA0 (HvpAddBin.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x1403774B0 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x140377C60 (RtlRbRemoveNode.c)
 *     CmSiGetMemoryAllocationGranularity @ 0x1404E5654 (CmSiGetMemoryAllocationGranularity.c)
 *     HvpViewMapMigrateCOWData @ 0x14085C9CC (HvpViewMapMigrateCOWData.c)
 *     HvpViewMapMakeViewRangeInvalid @ 0x1408B7714 (HvpViewMapMakeViewRangeInvalid.c)
 *     HvpViewMapFreeView @ 0x1408B7E00 (HvpViewMapFreeView.c)
 *     HvpViewMapCreateView @ 0x1408B868C (HvpViewMapCreateView.c)
 *     HvpViewMapFindViewForFileOffset @ 0x1408B94FC (HvpViewMapFindViewForFileOffset.c)
 *     HvpViewMapMakeViewRangeValid @ 0x1408B9648 (HvpViewMapMakeViewRangeValid.c)
 */

__int64 __fastcall HvpViewMapPromoteRangeToMapping(unsigned __int64 a1, int a2, unsigned int a3, _QWORD *a4)
{
  __int64 v4; // r13
  __int64 v5; // rbx
  __int64 v6; // r12
  __int64 v7; // r15
  bool v8; // zf
  int v10; // ecx
  __int64 v11; // rax
  int ViewRangeValid; // edi
  __int64 MemoryAllocationGranularity; // rax
  int View; // eax
  _QWORD *v16; // r14
  __int64 i; // rdx
  _QWORD *v18; // rdi
  __int64 v19; // rax
  _QWORD *v20; // rax
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  bool v23; // r8
  unsigned __int64 v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // rcx
  __int64 *v27; // rax
  _QWORD *v28; // r13
  _QWORD *v29; // rax
  _QWORD **v30; // [rsp+30h] [rbp-10h] BYREF
  _QWORD **v31; // [rsp+38h] [rbp-8h]
  _QWORD *ViewForFileOffset; // [rsp+80h] [rbp+40h] BYREF
  _QWORD *v33; // [rsp+98h] [rbp+58h]

  v33 = a4;
  v4 = a1 + 40;
  v31 = &v30;
  v5 = *(_QWORD *)(a1 + 40);
  v6 = (unsigned int)(a2 + 4096);
  v7 = v6 + a3;
  ViewForFileOffset = 0LL;
  v8 = (*(_BYTE *)(a1 + 48) & 1) == 0;
  v30 = &v30;
  if ( !v8 && v5 )
    v5 ^= v4;
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
  View = HvpViewMapCreateView(a1, (LARGE_INTEGER)(v6 & -MemoryAllocationGranularity), v7, (__int64 *)&ViewForFileOffset);
  v16 = ViewForFileOffset;
  ViewRangeValid = View;
  if ( View < 0 || (ViewRangeValid = HvpViewMapMakeViewRangeValid(a1, ViewForFileOffset, v6, v7, 0), ViewRangeValid < 0) )
  {
LABEL_47:
    if ( v16 )
      HvpViewMapFreeView(a1, (__int64)v16);
    return (unsigned int)ViewRangeValid;
  }
  for ( i = v6; i < v7; i = ViewForFileOffset[6] )
  {
    ViewForFileOffset = (_QWORD *)HvpViewMapFindViewForFileOffset(a1, i);
    ViewRangeValid = HvpViewMapMigrateCOWData(a1, v16, ViewForFileOffset);
    if ( ViewRangeValid < 0 )
      goto LABEL_47;
  }
  v18 = (_QWORD *)HvpViewMapFindViewForFileOffset(a1, v7 - 1);
  v19 = *(_QWORD *)(v5 + 48);
  if ( v19 < v18[5] )
  {
    do
    {
      v28 = (_QWORD *)HvpViewMapFindViewForFileOffset(a1, v19);
      RtlRbRemoveNode(a1 + 40, (__int64)v28);
      v29 = v31;
      if ( *v31 != &v30 )
        goto LABEL_28;
      v28[1] = v31;
      *v28 = &v30;
      *v29 = v28;
      v31 = (_QWORD **)v28;
      v19 = v28[6];
    }
    while ( v19 < v18[5] );
    v4 = a1 + 40;
  }
  if ( *(_QWORD *)(v5 + 40) == v6 )
  {
    RtlRbRemoveNode(v4, v5);
    v27 = (__int64 *)v31;
    if ( *v31 != &v30 )
LABEL_28:
      __fastfail(3u);
    *(_QWORD *)(v5 + 8) = v31;
    *(_QWORD *)v5 = &v30;
    *v27 = v5;
    v31 = (_QWORD **)v5;
  }
  else
  {
    HvpViewMapMakeViewRangeInvalid(a1, (_QWORD *)v5, v6, *(_QWORD *)(v5 + 48));
  }
  if ( v18[6] == v7 )
  {
    RtlRbRemoveNode(a1 + 40, (__int64)v18);
    v20 = v31;
    if ( *v31 != &v30 )
      goto LABEL_28;
    v18[1] = v31;
    *v18 = &v30;
    *v20 = v18;
    v31 = (_QWORD **)v18;
  }
  else
  {
    HvpViewMapMakeViewRangeInvalid(a1, v18, v18[5], v7);
  }
  v21 = a1 + 40;
  if ( (*(_BYTE *)(a1 + 48) & 1) != 0 )
  {
    if ( *(_QWORD *)v21 )
      v22 = *(_QWORD *)v21 ^ v21;
    else
      v22 = 0LL;
  }
  else
  {
    v22 = *(_QWORD *)v21;
  }
  v23 = 0;
  if ( !v22 )
    goto LABEL_37;
  while ( 1 )
  {
    if ( v16[5] >= *(_QWORD *)(v22 + 40) )
    {
      v24 = *(_QWORD *)(v22 + 8);
      if ( (*(_BYTE *)(a1 + 48) & 1) != 0 )
      {
        if ( !v24 )
          goto LABEL_36;
        v24 ^= v22;
      }
      if ( !v24 )
      {
LABEL_36:
        v23 = 1;
        goto LABEL_37;
      }
      goto LABEL_46;
    }
    v24 = *(_QWORD *)v22;
    if ( (*(_BYTE *)(a1 + 48) & 1) != 0 )
    {
      if ( !v24 )
        break;
      v24 ^= v22;
    }
    if ( !v24 )
      break;
LABEL_46:
    v22 = v24;
  }
  v23 = 0;
LABEL_37:
  RtlRbInsertNodeEx(v21, v22, v23, (unsigned __int64)v16);
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
  *v33 = v6 + v16[7] - v16[3];
  return 0;
}
