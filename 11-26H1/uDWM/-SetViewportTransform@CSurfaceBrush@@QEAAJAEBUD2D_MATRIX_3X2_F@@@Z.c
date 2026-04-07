/*
 * XREFs of ?SetViewportTransform@CSurfaceBrush@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z @ 0x18009BC60
 * Callers:
 *     ?ApplyViewportTransformForView@CSurfaceBrush@@QEAAJAEBUtagRECT@@@Z @ 0x180083CD4 (-ApplyViewportTransformForView@CSurfaceBrush@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?UpdateGeometry2D@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180096EB8 (-UpdateGeometry2D@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?UpdateGeometry2DWithClip@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18009734C (-UpdateGeometry2DWithClip@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?ApplyViewportTransformForClippedView@CSurfaceBrush@@QEAAJAEBUtagRECT@@PEAU2@@Z @ 0x18009B228 (-ApplyViewportTransformForClippedView@CSurfaceBrush@@QEAAJAEBUtagRECT@@PEAU2@@Z.c)
 *     ?ValidateVisual@CDesktopThumbnailCVIVisual@@UEAAJXZ @ 0x1800ADF80 (-ValidateVisual@CDesktopThumbnailCVIVisual@@UEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050208 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$query_to@UICompositionSurfaceBrush2@Composition@UI@Windows@@@?$com_ptr_t@UICompositionSurfaceBrush@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUICompositionSurfaceBrush2@Composition@UI@Windows@@@Z @ 0x180075B5C (--$query_to@UICompositionSurfaceBrush2@Composition@UI@Windows@@@-$com_ptr_t@UICompositionSurface.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSurfaceBrush::SetViewportTransform(CSurfaceBrush *this, const struct D2D_MATRIX_3X2_F *a2)
{
  unsigned int v3; // ebx
  int v4; // eax
  __int64 v5; // rdx
  int v7[4]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  if ( *(_QWORD *)this )
  {
    v10 = 0LL;
    v4 = wil::com_ptr_t<Windows::UI::Composition::ICompositionSurfaceBrush,wil::err_returncode_policy>::query_to<Windows::UI::Composition::ICompositionSurfaceBrush2>(
           (__int64)this,
           (__int64)&v10);
    v3 = v4;
    if ( v4 >= 0 )
    {
      *(_OWORD *)v7 = *(_OWORD *)&a2->m11;
      v8 = *(_QWORD *)&a2->m[2][0];
      v4 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v10 + 152LL))(v10, v7);
      v3 = v4;
      if ( v4 >= 0 )
      {
        v3 = 0;
        goto LABEL_9;
      }
      v5 = 58LL;
    }
    else
    {
      v5 = 56LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"clientcore\\windows\\dwm\\udwm\\brushes.cpp",
      (const char *)(unsigned int)v4);
LABEL_9:
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v10);
    return v3;
  }
  v3 = -2147020579;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x35,
    (int)"clientcore\\windows\\dwm\\udwm\\brushes.cpp",
    (const char *)0x800710DDLL);
  return v3;
}
