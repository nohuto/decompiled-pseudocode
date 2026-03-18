/*
 * XREFs of ?EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z @ 0x1800D4AA0
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A1720 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x1800D2EB0 (-GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z.c)
 *     ?EnsureVisualTransform@CVisualTree@@QEBAJPEAVCVisual@@@Z @ 0x1800D4500 (-EnsureVisualTransform@CVisualTree@@QEBAJPEAVCVisual@@@Z.c)
 *     ?CalcTransform@CPreWalkVisual@@AEAAXPEAVCVisual@@PEBVCVisualTree@@_K@Z @ 0x1801E4FF0 (-CalcTransform@CPreWalkVisual@@AEAAXPEAVCVisual@@PEBVCVisualTree@@_K@Z.c)
 *     ?DirtyBoundsForTransformParentChild@CPreWalkVisual@@CAXPEAVCVisual@@PEBVCVisualTree@@@Z @ 0x1801E5470 (-DirtyBoundsForTransformParentChild@CPreWalkVisual@@CAXPEAVCVisual@@PEBVCVisualTree@@@Z.c)
 *     ?GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@PEAVCMILMatrix@@PEA_N1@Z @ 0x180260DD4 (-GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@PEAVCMILMatrix@@PEA_N1@Z.c)
 * Callees:
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x1800D5790 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?GetParentTreeData@CVisual@@AEBAPEBVCTreeData@@PEBVCVisualTree@@PEAV2@PEA_N@Z @ 0x1801221F0 (-GetParentTreeData@CVisual@@AEBAPEBVCTreeData@@PEBVCVisualTree@@PEAV2@PEA_N@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1801BB3E4 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802014E4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Comp_Racy@@@details@wil@@QEAA_NXZ @ 0x180226608 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Comp_Racy@@@details@wil@@QEAA_NXZ.c)
 *     ?UpdateWorldTransform@CVisual@@AEBAXPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x1802611CC (-UpdateWorldTransform@CVisual@@AEBAXPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z.c)
 */

bool __fastcall CVisual::EnsureWorldTransform(CVisual *this, const struct CVisualTree *a2, RTL_SRWLOCK *a3)
{
  const struct CTreeData *ParentTreeData; // rax
  const char *v7; // r9
  const struct CTreeData *v8; // rbp
  unsigned __int64 CurrentFrameId; // rsi
  PVOID Ptr; // rcx
  RTL_SRWLOCK *v12; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  bool v14; // [rsp+78h] [rbp+20h] BYREF

  v14 = 0;
  ParentTreeData = CVisual::GetParentTreeData(this, a2, (struct CTreeData *)a3, &v14);
  v8 = ParentTreeData;
  if ( ParentTreeData )
  {
    CurrentFrameId = *((_QWORD *)ParentTreeData + 28);
    if ( !CurrentFrameId )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x6F6,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visual.cpp",
        v7);
  }
  else
  {
    CurrentFrameId = GetCurrentFrameId();
  }
  if ( a3[28].Ptr < (PVOID)CurrentFrameId )
  {
    AcquireSRWLockExclusive(a3 + 30);
    Ptr = a3[28].Ptr;
    v12 = a3 + 30;
    if ( (unsigned __int64)Ptr < CurrentFrameId )
      CVisual::UpdateWorldTransform(this, a2, (struct CTreeData *)a3, v14, v8);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v12);
  }
  return (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Comp_Racy>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Comp_Racy>::GetImpl'::`2'::impl)
      || a3[28].Ptr == *(PVOID *)(*((_QWORD *)a3[31].Ptr + 3) + 880LL);
}
