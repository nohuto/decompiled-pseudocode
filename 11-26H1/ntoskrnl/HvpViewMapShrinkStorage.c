/*
 * XREFs of HvpViewMapShrinkStorage @ 0x14085CBD8
 * Callers:
 *     HvFreeHivePartial @ 0x1408B7A44 (HvFreeHivePartial.c)
 *     HvpAddBin @ 0x140B7EAA0 (HvpAddBin.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x140377C60 (RtlRbRemoveNode.c)
 *     HvpViewMapMakeViewRangeInvalid @ 0x1408B7714 (HvpViewMapMakeViewRangeInvalid.c)
 *     HvpViewMapFreeView @ 0x1408B7E00 (HvpViewMapFreeView.c)
 *     HvpViewMapFindViewForFileOffset @ 0x1408B94FC (HvpViewMapFindViewForFileOffset.c)
 */

_QWORD *__fastcall HvpViewMapShrinkStorage(__int64 a1, int a2)
{
  __int64 v2; // r15
  __int64 v3; // r14
  __int64 v5; // r10
  _QWORD *result; // rax
  _QWORD *ViewForFileOffset; // rbx
  __int64 v8; // rsi
  __int64 v9; // r10
  _QWORD *v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // [rsp+20h] [rbp-10h] BYREF
  _QWORD **v13; // [rsp+28h] [rbp-8h]

  v2 = *(_QWORD *)(a1 + 8);
  v3 = (unsigned int)(a2 + 4096);
  v5 = v3;
  v13 = &v12;
  result = &v12;
  v12 = &v12;
  if ( v3 < v2 )
  {
    do
    {
      ViewForFileOffset = (_QWORD *)HvpViewMapFindViewForFileOffset(a1, v5);
      v8 = ViewForFileOffset[6];
      HvpViewMapMakeViewRangeInvalid(a1, ViewForFileOffset, v9, v8);
      if ( ViewForFileOffset[5] == ViewForFileOffset[6] )
      {
        RtlRbRemoveNode(a1 + 40, (__int64)ViewForFileOffset);
        v10 = v13;
        if ( *v13 != &v12 )
LABEL_13:
          __fastfail(3u);
        ViewForFileOffset[1] = v13;
        *ViewForFileOffset = &v12;
        *v10 = ViewForFileOffset;
        v13 = (_QWORD **)ViewForFileOffset;
      }
      v5 = v8;
    }
    while ( v8 < v2 );
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
