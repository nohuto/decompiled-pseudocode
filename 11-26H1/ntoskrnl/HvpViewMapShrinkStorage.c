/*
 * XREFs of HvpViewMapShrinkStorage @ 0x140862EC8
 * Callers:
 *     HvFreeHivePartial @ 0x1408BE014 (HvFreeHivePartial.c)
 *     HvpAddBin @ 0x140B87980 (HvpAddBin.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x140379A10 (RtlRbRemoveNode.c)
 *     HvpViewMapMakeViewRangeInvalid @ 0x1408BDCE4 (HvpViewMapMakeViewRangeInvalid.c)
 *     HvpViewMapFreeView @ 0x1408BE3D0 (HvpViewMapFreeView.c)
 *     HvpViewMapFindViewForFileOffset @ 0x1408BFACC (HvpViewMapFindViewForFileOffset.c)
 */

_QWORD *__fastcall HvpViewMapShrinkStorage(__int64 a1, int a2)
{
  __int64 v2; // r15
  __int64 v3; // r14
  _RTL_BALANCED_NODE *v5; // r10
  _QWORD *result; // rax
  _RTL_BALANCED_NODE *ViewForFileOffset; // rbx
  _RTL_BALANCED_NODE *v8; // rsi
  __int64 v9; // r10
  _RTL_BALANCED_NODE **v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // [rsp+20h] [rbp-10h] BYREF
  _RTL_BALANCED_NODE *v13; // [rsp+28h] [rbp-8h]

  v2 = *(_QWORD *)(a1 + 8);
  v3 = (unsigned int)(a2 + 4096);
  v5 = (_RTL_BALANCED_NODE *)v3;
  v13 = (_RTL_BALANCED_NODE *)&v12;
  result = &v12;
  v12 = &v12;
  if ( v3 < v2 )
  {
    do
    {
      ViewForFileOffset = (_RTL_BALANCED_NODE *)HvpViewMapFindViewForFileOffset(a1, v5);
      v8 = ViewForFileOffset[2].Children[0];
      HvpViewMapMakeViewRangeInvalid(a1, ViewForFileOffset, v9, v8);
      if ( (_RTL_BALANCED_NODE *)ViewForFileOffset[1].ParentValue == ViewForFileOffset[2].Children[0] )
      {
        RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 40), ViewForFileOffset);
        v10 = (_RTL_BALANCED_NODE **)v13;
        if ( v13->Children[0] != (_RTL_BALANCED_NODE *)&v12 )
LABEL_13:
          __fastfail(3u);
        ViewForFileOffset->Children[1] = v13;
        ViewForFileOffset->Children[0] = (_RTL_BALANCED_NODE *)&v12;
        *v10 = ViewForFileOffset;
        v13 = ViewForFileOffset;
      }
      v5 = v8;
    }
    while ( (__int64)v8 < v2 );
    result = v12;
  }
  *(_QWORD *)(a1 + 8) = v3;
  while ( 1 )
  {
    if ( (_QWORD **)result[1] != &v12 )
      goto LABEL_13;
    v11 = *result;
    if ( *(_QWORD **)(*result + 8LL) != result )
      goto LABEL_13;
    v12 = (_QWORD *)*result;
    *(_QWORD *)(v11 + 8) = &v12;
    if ( result == &v12 )
      return result;
    HvpViewMapFreeView(a1, result);
    result = v12;
  }
}
