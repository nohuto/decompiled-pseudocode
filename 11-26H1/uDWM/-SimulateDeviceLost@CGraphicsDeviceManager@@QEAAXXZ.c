/*
 * XREFs of ?SimulateDeviceLost@CGraphicsDeviceManager@@QEAAXXZ @ 0x1800B5EAC
 * Callers:
 *     ?UpdateText@CDWriteText@@AEAAJXZ @ 0x18000723C (-UpdateText@CDWriteText@@AEAAJXZ.c)
 *     ?CreateCompSurfaceFromWICBitmap@CBitmapSource@@SAJPEAUIWICBitmapSource@@PEAPEAUICompositionSurface@Composition@UI@Windows@@@Z @ 0x18000DC70 (-CreateCompSurfaceFromWICBitmap@CBitmapSource@@SAJPEAUIWICBitmapSource@@PEAPEAUICompositionSurfa.c)
 *     ?CreateBorderSurface@CCachedBorderBrush@CWindowBorder@@SAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4ShadowStyle@2@PEAPEAUICompositionSurface@Composition@UI@Windows@@@Z @ 0x18000E35C (-CreateBorderSurface@CCachedBorderBrush@CWindowBorder@@SAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@.c)
 *     ?CreateCompSurfaceFromWICBitmap@CBitmapSource@@SAJPEAUIWICBitmapSource@@PEAPEAUIDCompositionSurface@@@Z @ 0x180068490 (-CreateCompSurfaceFromWICBitmap@CBitmapSource@@SAJPEAUIWICBitmapSource@@PEAPEAUIDCompositionSurf.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x1800056CC (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050208 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CGraphicsDeviceManager::SimulateDeviceLost(CGraphicsDeviceManager *this)
{
  __int64 v1; // rax
  void (__fastcall ***v2)(_QWORD, GUID *, __int64); // r9
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  if ( rand() > 32018 )
  {
    v3 = 0LL;
    v1 = winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&v3);
    (**v2)(v2, &GUID_b898d4fd_b5b3_4ffc_8694_0259864ffcf8, v1);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 264LL))(v3, 2289696800LL);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v3);
  }
}
