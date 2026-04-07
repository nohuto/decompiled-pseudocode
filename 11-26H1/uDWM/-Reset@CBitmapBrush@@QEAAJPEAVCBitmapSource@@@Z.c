/*
 * XREFs of ?Reset@CBitmapBrush@@QEAAJPEAVCBitmapSource@@@Z @ 0x18009B69C
 * Callers:
 *     ?EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180082594 (-EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050208 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UICompositionSurface@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800544EC (-reset@-$com_ptr_t@UICompositionSurface@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil.c)
 *     ?reset@?$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005451C (-reset@-$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCompSurface@CBitmapSource@@QEAAJPEAPEAUICompositionSurface@Composition@UI@Windows@@@Z @ 0x180089BD0 (-GetCompSurface@CBitmapSource@@QEAAJPEAPEAUICompositionSurface@Composition@UI@Windows@@@Z.c)
 *     ??4?$com_ptr_t@UICompositionSurfaceBrush@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18009B1EC (--4-$com_ptr_t@UICompositionSurfaceBrush@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     ?ConfigureBrushDefaults@CSurfaceBrush@@SAJPEAUICompositionSurfaceBrush@Composition@UI@Windows@@@Z @ 0x18009B328 (-ConfigureBrushDefaults@CSurfaceBrush@@SAJPEAUICompositionSurfaceBrush@Composition@UI@Windows@@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CBitmapBrush::Reset(CBitmapBrush *this, struct CBitmapSource *a2)
{
  __int64 v4; // rsi
  int CompSurface; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 (__fastcall *v8)(__int64, struct Windows::UI::Composition::ICompositionSurface *, struct Windows::UI::Composition::ICompositionSurfaceBrush **); // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct Windows::UI::Composition::ICompositionSurfaceBrush *v11; // [rsp+40h] [rbp+18h] BYREF
  struct Windows::UI::Composition::ICompositionSurface *v12; // [rsp+48h] [rbp+20h] BYREF

  v12 = 0LL;
  v11 = 0LL;
  v4 = *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6) + 40LL);
  wil::com_ptr_t<Windows::UI::Composition::ICompositionSurface,wil::err_returncode_policy>::reset((__int64 *)&v12);
  CompSurface = CBitmapSource::GetCompSurface(a2, &v12);
  v6 = CompSurface;
  if ( CompSurface >= 0 )
  {
    v8 = *(__int64 (__fastcall **)(__int64, struct Windows::UI::Composition::ICompositionSurface *, struct Windows::UI::Composition::ICompositionSurfaceBrush **))(*(_QWORD *)v4 + 192LL);
    wil::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>::reset((__int64 *)&v11);
    CompSurface = v8(v4, v12, &v11);
    v6 = CompSurface;
    if ( CompSurface >= 0 )
    {
      CompSurface = CSurfaceBrush::ConfigureBrushDefaults(v11);
      v6 = CompSurface;
      if ( CompSurface >= 0 )
      {
        wil::com_ptr_t<Windows::UI::Composition::ICompositionSurfaceBrush,wil::err_returncode_policy>::operator=(
          (__int64 *)this,
          (__int64 *)&v11);
        v6 = 0;
        goto LABEL_9;
      }
      v7 = 147LL;
    }
    else
    {
      v7 = 146LL;
    }
  }
  else
  {
    v7 = 145LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (int)"clientcore\\windows\\dwm\\udwm\\brushes.cpp",
    (const char *)(unsigned int)CompSurface);
LABEL_9:
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)&v11);
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)&v12);
  return v6;
}
