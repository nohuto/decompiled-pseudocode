/*
 * XREFs of ?ForceAtlasInitialize@CContactManager@@QEAAXXZ @ 0x1800A8950
 * Callers:
 *     ?EnsureImages@CTopLevelWindow@@SAJXZ @ 0x1800CB09C (-EnsureImages@CTopLevelWindow@@SAJXZ.c)
 * Callees:
 *     ?CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x18000504C (-CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x180005198 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006344 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050208 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UICompositionSurface@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800544EC (-reset@-$com_ptr_t@UICompositionSurface@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180084EB4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCompSurface@CBitmapSource@@QEAAJPEAPEAUICompositionSurface@Composition@UI@Windows@@@Z @ 0x180089BD0 (-GetCompSurface@CBitmapSource@@QEAAJPEAPEAUICompositionSurface@Composition@UI@Windows@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CContactManager::ForceAtlasInitialize(CContactManager *this)
{
  void *Theme; // rax
  int v2; // edx
  int v3; // eax
  int CompSurface; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CBitmapSource *v6; // [rsp+30h] [rbp+8h] BYREF
  struct Windows::UI::Composition::ICompositionSurface *v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0LL;
  v6 = 0LL;
  Theme = (void *)CDesktopManager::GetTheme(1);
  v3 = CTopLevelWindow::CreateBitmapFromAtlas(Theme, v2, 0LL, &v6);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x813,
      (int)"clientcore\\windows\\dwm\\udwm\\contactmanager.cpp",
      (const char *)(unsigned int)v3);
  if ( v6 )
  {
    wil::com_ptr_t<Windows::UI::Composition::ICompositionSurface,wil::err_returncode_policy>::reset((__int64 *)&v7);
    CompSurface = CBitmapSource::GetCompSurface(v6, &v7);
    if ( CompSurface < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x81A,
        (int)"clientcore\\windows\\dwm\\udwm\\contactmanager.cpp",
        (const char *)(unsigned int)CompSurface);
  }
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)&v7);
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v6);
}
