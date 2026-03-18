/*
 * XREFs of ?EnsureVisualTransform@CVisualTree@@QEBAJPEAVCVisual@@@Z @ 0x1800D4500
 * Callers:
 *     ?OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCDesktopTree@@@Z @ 0x1800A8060 (-OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCDesktopTree@@@Z.c)
 *     ??$Walk@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCDrawingContext@@W4WalkReason@@PEAV2@@Z @ 0x1800D2D90 (--$Walk@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCDrawingC.c)
 *     ?GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x1800D2EB0 (-GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z.c)
 * Callees:
 *     ?_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@W4IsInTreeFlags@1@@Z @ 0x180057D90 (-_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@W4IsInTreeFlags@1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$vector_facade@PEAVCVisual@@V?$buffer_impl@PEAVCVisual@@$0EA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x18008DD40 (--1-$vector_facade@PEAVCVisual@@V-$buffer_impl@PEAVCVisual@@$0EA@$00Vliberal_expansion_policy@de.c)
 *     ?push_back@?$vector_facade@PEAVCVisual@@V?$buffer_impl@PEAVCVisual@@$0EA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXAEBQEAVCVisual@@@Z @ 0x18008DDC0 (-push_back@-$vector_facade@PEAVCVisual@@V-$buffer_impl@PEAVCVisual@@$0EA@$00Vliberal_expansion_p.c)
 *     ?GetTransformParent@CVisual@@QEBAPEBV1@PEBVCVisualTree@@PEA_N@Z @ 0x1800D4660 (-GetTransformParent@CVisual@@QEBAPEBV1@PEBVCVisualTree@@PEA_N@Z.c)
 *     ?EnsureTreeData@CVisual@@QEAAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800D47B0 (-EnsureTreeData@CVisual@@QEAAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800D49F0 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z @ 0x1800D4AA0 (-EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x1800D5790 (-GetCurrentFrameId@@YA_KXZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

__int64 __fastcall CVisualTree::EnsureVisualTransform(CVisualTree *this, struct CVisual *a2)
{
  unsigned __int64 CurrentFrameId; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  bool *v7; // r8
  unsigned int v8; // edi
  CVisual *TransformParent; // rax
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rsi
  CVisual *v13; // rbx
  struct CTreeData *TreeData; // rax
  struct CVisual *v16; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE *v17; // [rsp+28h] [rbp-D8h] BYREF
  _BYTE *v18; // [rsp+30h] [rbp-D0h]
  __int64 *v19; // [rsp+38h] [rbp-C8h]
  _BYTE v20[512]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v21; // [rsp+240h] [rbp+140h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+268h] [rbp+168h]

  v17 = v20;
  v18 = v20;
  v19 = &v21;
  CurrentFrameId = GetCurrentFrameId();
  v8 = 0;
  if ( CVisualTree::_IsInTree(v6, v5, 0) )
  {
    while ( a2 != *((struct CVisual **)this + 9) )
    {
      TransformParent = CVisual::GetTransformParent(a2, this, v7);
      v16 = TransformParent;
      if ( !TransformParent )
      {
        TransformParent = (CVisual *)*((_QWORD *)a2 + 11);
        v16 = TransformParent;
      }
      if ( *((_QWORD *)CVisual::EnsureTreeData(TransformParent, this) + 28) >= CurrentFrameId )
        break;
      detail::vector_facade<CVisual *,detail::buffer_impl<CVisual *,64,1,detail::liberal_expansion_policy>>::push_back(
        (__int64 *)&v17,
        (__int64 *)&v16);
      a2 = v16;
    }
    v10 = (__int64)v17;
    v11 = (v18 - v17) >> 3;
    v12 = (int)v11;
    if ( (int)v11 > 0 )
    {
      while ( 1 )
      {
        v13 = *(CVisual **)(v10 + 8 * v12 - 8);
        TreeData = CVisual::FindTreeData(v13, this);
        CVisual::EnsureWorldTransform(v13, this, TreeData);
        if ( --v12 <= 0 )
          break;
        v10 = (__int64)v17;
      }
    }
  }
  else
  {
    v8 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5A,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visualtree.cpp",
      (const char *)0x80070057LL);
  }
  detail::vector_facade<CVisual *,detail::buffer_impl<CVisual *,64,1,detail::liberal_expansion_policy>>::~vector_facade<CVisual *,detail::buffer_impl<CVisual *,64,1,detail::liberal_expansion_policy>>((__int64 *)&v17);
  return v8;
}
