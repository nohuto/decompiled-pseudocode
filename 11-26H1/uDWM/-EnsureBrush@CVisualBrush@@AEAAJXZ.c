/*
 * XREFs of ?EnsureBrush@CVisualBrush@@AEAAJXZ @ 0x18009B3D0
 * Callers:
 *     ?Clone@CVisualBrush@@QEBAJPEAV1@@Z @ 0x18009B2A0 (-Clone@CVisualBrush@@QEBAJPEAV1@@Z.c)
 *     ?SetRealizationSize@CVisualBrush@@QEAAJAEBUD2D_SIZE_F@@@Z @ 0x18009B9F0 (-SetRealizationSize@CVisualBrush@@QEAAJAEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x1800056CC (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050208 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UICompositionSurface@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800544EC (-reset@-$com_ptr_t@UICompositionSurface@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil.c)
 *     ?reset@?$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005451C (-reset@-$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$com_ptr_t@UICompositionSurfaceBrush@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18009B1EC (--4-$com_ptr_t@UICompositionSurfaceBrush@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     ?ConfigureBrushDefaults@CSurfaceBrush@@SAJPEAUICompositionSurfaceBrush@Composition@UI@Windows@@@Z @ 0x18009B328 (-ConfigureBrushDefaults@CSurfaceBrush@@SAJPEAUICompositionSurfaceBrush@Composition@UI@Windows@@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVisualBrush::EnsureBrush(CVisualBrush *this)
{
  unsigned int v2; // ebx
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 (__fastcall ***v6)(_QWORD, GUID *, __int64); // r9
  int v7; // eax
  __int64 v8; // rdx
  __int64 (__fastcall *v9)(__int64, __int64, struct Windows::UI::Composition::ICompositionSurfaceBrush **); // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  struct Windows::UI::Composition::ICompositionSurfaceBrush *v11; // [rsp+40h] [rbp+20h] BYREF
  __int64 v12; // [rsp+48h] [rbp+28h] BYREF

  if ( !*((_QWORD *)this + 1) )
  {
    v2 = -2147020579;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13E,
      (int)"clientcore\\windows\\dwm\\udwm\\brushes.cpp",
      (const char *)0x800710DDLL);
    return v2;
  }
  if ( !*(_QWORD *)this )
  {
    v12 = 0LL;
    v11 = 0LL;
    v4 = *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6) + 40LL);
    wil::com_ptr_t<Windows::UI::Composition::ICompositionSurface,wil::err_returncode_policy>::reset(&v12);
    v5 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&v12);
    v7 = (**v6)(v6, &GUID_1527540d_42c7_47a6_a408_668f79a90dfb, v5);
    v2 = v7;
    if ( v7 < 0 )
    {
      v8 = 326LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (int)"clientcore\\windows\\dwm\\udwm\\brushes.cpp",
        (const char *)(unsigned int)v7);
      wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)&v11);
      wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v12);
      return v2;
    }
    v9 = *(__int64 (__fastcall **)(__int64, __int64, struct Windows::UI::Composition::ICompositionSurfaceBrush **))(*(_QWORD *)v4 + 192LL);
    wil::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>::reset((__int64 *)&v11);
    v7 = v9(v4, v12, &v11);
    v2 = v7;
    if ( v7 < 0 )
    {
      v8 = 327LL;
      goto LABEL_11;
    }
    v7 = CSurfaceBrush::ConfigureBrushDefaults(v11);
    v2 = v7;
    if ( v7 < 0 )
    {
      v8 = 328LL;
      goto LABEL_11;
    }
    wil::com_ptr_t<Windows::UI::Composition::ICompositionSurfaceBrush,wil::err_returncode_policy>::operator=(
      (__int64 *)this,
      (__int64 *)&v11);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)&v11);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v12);
  }
  return 0LL;
}
