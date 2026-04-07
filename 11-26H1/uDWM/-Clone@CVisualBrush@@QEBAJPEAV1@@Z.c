/*
 * XREFs of ?Clone@CVisualBrush@@QEBAJPEAV1@@Z @ 0x18009B2A0
 * Callers:
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x1800261CC (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 *     ?GetVisualBrush@CDesktopThumbnailCVI@@QEAAJPEAVCVisualBrush@@@Z @ 0x1800835F8 (-GetVisualBrush@CDesktopThumbnailCVI@@QEAAJPEAVCVisualBrush@@@Z.c)
 *     ?GetVisualBrush@CThumbnailVisual@@QEAAJAEBUtagRECT@@PEAVCVisualBrush@@PEAUD2D_POINT_3F@@@Z @ 0x1800C9C54 (-GetVisualBrush@CThumbnailVisual@@QEAAJAEBUtagRECT@@PEAVCVisualBrush@@PEAUD2D_POINT_3F@@@Z.c)
 *     ?GetVisualBrush@CWindowSnapshot@@QEAAJAEBUtagRECT@@PEAVCVisualBrush@@PEAM@Z @ 0x1800E5148 (-GetVisualBrush@CWindowSnapshot@@QEAAJAEBUtagRECT@@PEAVCVisualBrush@@PEAM@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005451C (-reset@-$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180088754 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??4?$com_ptr_t@UICompositionVisualSurface@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x180095D4C (--4-$com_ptr_t@UICompositionVisualSurface@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?EnsureBrush@CVisualBrush@@AEAAJXZ @ 0x18009B3D0 (-EnsureBrush@CVisualBrush@@AEAAJXZ.c)
 */

__int64 __fastcall CVisualBrush::Clone(CVisualBrush *this, struct CVisualBrush *a2, __int64 a3, const char *a4)
{
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 == this )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x116,
      (int)"clientcore\\windows\\dwm\\udwm\\brushes.cpp",
      a4);
  wil::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>::reset((__int64 *)a2);
  wil::com_ptr_t<Windows::UI::Composition::ICompositionVisualSurface,wil::err_returncode_policy>::operator=(
    (__int64 *)a2 + 1,
    (__int64 *)this + 1);
  if ( !*(_QWORD *)this )
    return 0LL;
  v6 = CVisualBrush::EnsureBrush(a2);
  v7 = v6;
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x11E,
    (int)"clientcore\\windows\\dwm\\udwm\\brushes.cpp",
    (const char *)(unsigned int)v6);
  return v7;
}
