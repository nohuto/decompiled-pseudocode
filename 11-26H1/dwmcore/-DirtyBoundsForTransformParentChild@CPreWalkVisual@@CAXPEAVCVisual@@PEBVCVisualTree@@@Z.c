/*
 * XREFs of ?DirtyBoundsForTransformParentChild@CPreWalkVisual@@CAXPEAVCVisual@@PEBVCVisualTree@@@Z @ 0x1801E5470
 * Callers:
 *     ?CleanTrees@CComposition@@IEAAJXZ @ 0x18008E700 (-CleanTrees@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x180021C20 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ?clear_region@?$vector_facade@PEAVCVisual@@V?$buffer_impl@PEAVCVisual@@$0EA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18008DC40 (-clear_region@-$vector_facade@PEAVCVisual@@V-$buffer_impl@PEAVCVisual@@$0EA@$00Vliberal_expansio.c)
 *     ?push_back@?$vector_facade@PEAVCVisual@@V?$buffer_impl@PEAVCVisual@@$0EA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXAEBQEAVCVisual@@@Z @ 0x18008DDC0 (-push_back@-$vector_facade@PEAVCVisual@@V-$buffer_impl@PEAVCVisual@@$0EA@$00Vliberal_expansion_p.c)
 *     ?EnsureLayoutSize@CVisual@@QEAAXXZ @ 0x18008E040 (-EnsureLayoutSize@CVisual@@QEAAXXZ.c)
 *     ?GetTransformParent@CVisual@@QEBAPEBV1@PEBVCVisualTree@@PEA_N@Z @ 0x1800D4660 (-GetTransformParent@CVisual@@QEBAPEBV1@PEBVCVisualTree@@PEA_N@Z.c)
 *     ?EnsureTreeData@CVisual@@QEAAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800D47B0 (-EnsureTreeData@CVisual@@QEAAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z @ 0x1800D4AA0 (-EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z.c)
 *     ?IsInfinite@?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18016E2A8 (-IsInfinite@-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeede.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Comp_Racy@@@details@wil@@QEAA_NXZ @ 0x180226608 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Comp_Racy@@@details@wil@@QEAA_NXZ.c)
 */

void __fastcall CPreWalkVisual::DirtyBoundsForTransformParentChild(CVisual **a1, CVisual **a2, bool *a3)
{
  float *v5; // rcx
  bool *v6; // r8
  CVisual *v7; // rbx
  CVisual *TransformParent; // rax
  __int64 v9; // rax
  __int64 v10; // rdi
  CVisual *v11; // rbp
  void ***v12; // rbx
  __int64 v13; // r8
  void *v14; // rbx
  bool v15; // zf
  HANDLE ProcessHeap; // rax
  CVisual *v17; // [rsp+20h] [rbp-248h] BYREF
  _BYTE *v18; // [rsp+28h] [rbp-240h] BYREF
  _BYTE *v19; // [rsp+30h] [rbp-238h]
  __int64 *v20; // [rsp+38h] [rbp-230h]
  _BYTE v21[512]; // [rsp+40h] [rbp-228h] BYREF
  __int64 v22; // [rsp+240h] [rbp-28h] BYREF

  if ( !CVisual::GetTransformParent((CVisual *)a1, a2, a3) || ((_BYTE)a1[12] & 1) != 0 )
    return;
  v5 = (float *)(a2 + 10);
  if ( a1 != (CVisual **)a2[9] )
    v5 = (float *)a1 + 37;
  if ( TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>::IsInfinite(v5) )
    return;
  v18 = v21;
  v19 = v21;
  v20 = &v22;
  v17 = a1[11];
  if ( v17 )
  {
    while ( 1 )
    {
      detail::vector_facade<CVisual *,detail::buffer_impl<CVisual *,64,1,detail::liberal_expansion_policy>>::push_back(
        (__int64 *)&v18,
        (__int64 *)&v17);
      v7 = v17;
      if ( v17 == a2[9] )
        break;
      TransformParent = CVisual::GetTransformParent(v17, a2, v6);
      if ( TransformParent )
      {
        v17 = TransformParent;
      }
      else
      {
        v17 = (CVisual *)*((_QWORD *)v7 + 11);
        if ( !v17 )
          break;
      }
    }
  }
  v9 = (v19 - v18) >> 3;
  if ( (int)v9 <= 0 )
    goto LABEL_16;
  v10 = (int)v9;
  while ( 1 )
  {
    v11 = *(CVisual **)&v18[8 * v10 - 8];
    v12 = CVisual::EnsureTreeData(v11, (const struct CVisualTree *)a2);
    CVisual::EnsureLayoutSize(v11);
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Comp_Racy>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Comp_Racy>::GetImpl'::`2'::impl) )
      break;
    if ( CVisual::EnsureWorldTransform(v11, (const struct CVisualTree *)a2, (RTL_SRWLOCK *)v12) )
      goto LABEL_15;
LABEL_25:
    if ( --v10 <= 0 )
      goto LABEL_16;
  }
  CVisual::EnsureWorldTransform(v11, (const struct CVisualTree *)a2, (RTL_SRWLOCK *)v12);
  if ( !*((_BYTE *)v12 + 15) || v12[28] != *((void ***)v12[31][3] + 110) )
    goto LABEL_25;
LABEL_15:
  CVisual::PropagateFlags((__int64)a1, 1u);
LABEL_16:
  v13 = (v19 - v18) >> 3;
  if ( v13 )
    detail::vector_facade<CVisual *,detail::buffer_impl<CVisual *,64,1,detail::liberal_expansion_policy>>::clear_region(
      (__int64 *)&v18,
      0LL,
      v13);
  v14 = v18;
  v15 = v18 == v21;
  v18 = 0LL;
  if ( v15 )
    v14 = 0LL;
  if ( v14 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v14);
  }
}
