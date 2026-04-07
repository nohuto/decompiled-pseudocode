/*
 * XREFs of ??4CVisualBrush@@QEAAAEAV0@AEBV0@@Z @ 0x180095DA0
 * Callers:
 *     ?EnsureVisualBrush@CTopLevelWindow3D@@AEAAJXZ @ 0x180082790 (-EnsureVisualBrush@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?SetSharedVisualBrush@CAnimatedTransitionVisual@@QEAAXAEBVCVisualBrush@@@Z @ 0x180096B38 (-SetSharedVisualBrush@CAnimatedTransitionVisual@@QEAAXAEBVCVisualBrush@@@Z.c)
 *     ?SetSharedVisualBrush@CAnimatedTransitionVisual@@QEAAXAEBVCVisualBrush@@AEBUD2D_POINT_3F@@@Z @ 0x180096B4C (-SetSharedVisualBrush@CAnimatedTransitionVisual@@QEAAXAEBVCVisualBrush@@AEBUD2D_POINT_3F@@@Z.c)
 *     ?InitializeVisualTreeClone@CDesktopThumbnailCVIVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x1800ADDBC (-InitializeVisualTreeClone@CDesktopThumbnailCVIVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?GetSharedVisualBrush@CSecondaryWindowRepresentation@@QEAAJPEAVCVisualBrush@@@Z @ 0x1800BF560 (-GetSharedVisualBrush@CSecondaryWindowRepresentation@@QEAAJPEAVCVisualBrush@@@Z.c)
 *     ?GetSharedVisualBrush@CTransitionWindowSnapshot@@QEAAJPEAVCVisualBrush@@PEAM@Z @ 0x1800D03F4 (-GetSharedVisualBrush@CTransitionWindowSnapshot@@QEAAJPEAVCVisualBrush@@PEAM@Z.c)
 * Callees:
 *     ??4?$com_ptr_t@UICompositionVisualSurface@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x180095D4C (--4-$com_ptr_t@UICompositionVisualSurface@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall CVisualBrush::operator=(__int64 *a1, __int64 *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdi

  v4 = *a2;
  v5 = *a1;
  *a1 = *a2;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  wil::com_ptr_t<Windows::UI::Composition::ICompositionVisualSurface,wil::err_returncode_policy>::operator=(
    a1 + 1,
    a2 + 1);
  return a1;
}
