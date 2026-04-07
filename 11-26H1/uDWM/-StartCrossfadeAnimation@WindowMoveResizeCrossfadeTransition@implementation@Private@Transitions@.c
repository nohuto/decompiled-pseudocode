/*
 * XREFs of ?StartCrossfadeAnimation@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x180050CAC
 * Callers:
 *     ?PostTransition@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x180040774 (-PostTransition@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winr.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIBitmapManager@@@winrt@@AEAAXXZ @ 0x1800306A4 (-unconditional_release_ref@-$com_ptr@UIBitmapManager@@@winrt@@AEAAXXZ.c)
 *     ?reset@?$com_ptr_t@VCAnimationResource@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180041818 (-reset@-$com_ptr_t@VCAnimationResource@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$as@UITransitionAnimationVisualNative@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UITransitionAnimationVisualNative@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x180041B2C (--$as@UITransitionAnimationVisualNative@@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@.c)
 *     ?Create@CAnimationResource@@SAJPEAPEAV1@@Z @ 0x1800504DC (-Create@CAnimationResource@@SAJPEAPEAV1@@Z.c)
 *     ?AddBinding@CAnimationResource@@QEAAJPEAVCResourceProxy@@W4Enum@DwmResourceProperty@@@Z @ 0x1800505FC (-AddBinding@CAnimationResource@@QEAAJPEAVCResourceProxy@@W4Enum@DwmResourceProperty@@@Z.c)
 *     ?End@CAnimationResource@@UEAAJNM@Z @ 0x1800507E0 (-End@CAnimationResource@@UEAAJNM@Z.c)
 *     ?AddCubic@CAnimationResource@@UEAAJNMMMM@Z @ 0x180050880 (-AddCubic@CAnimationResource@@UEAAJNMMMM@Z.c)
 *     ?GetWindowAnimationSettings@CDesktopManager@@SAAEBUWindowAnimationSettings@1@XZ @ 0x180052918 (-GetWindowAnimationSettings@CDesktopManager@@SAAEBUWindowAnimationSettings@1@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800D13DC (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition::StartCrossfadeAnimation(
        CAnimationResource **this)
{
  struct CAnimationResource **v2; // rdi
  int v3; // eax
  float v4; // xmm7_4
  int v5; // eax
  const struct CDesktopManager::WindowAnimationSettings *WindowAnimationSettings; // rax
  int v7; // eax
  const struct CDesktopManager::WindowAnimationSettings *v8; // rax
  int v9; // eax
  struct CAnimationResource *v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rax
  int v13; // eax
  int v14; // [rsp+20h] [rbp-38h]
  int v15; // [rsp+20h] [rbp-38h]
  int v16; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v18; // [rsp+60h] [rbp+8h] BYREF

  v2 = this + 8;
  wil::com_ptr_t<CAnimationResource,wil::err_returncode_policy>::reset(this + 8);
  v3 = CAnimationResource::Create(v2);
  if ( v3 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x11A,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\transitions.windowmoveresizecrossfadetransition.cpp",
      (const char *)(unsigned int)v3,
      v14);
  v4 = *((float *)CDesktopManager::GetWindowAnimationSettings() + 7);
  v5 = CAnimationResource::AddCubic(*v2, 0.0, 1.0, 0.0, 0.0, 0.0);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x124,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\transitions.windowmoveresizecrossfadetransition.cpp",
      (const char *)(unsigned int)v5,
      v15);
  WindowAnimationSettings = CDesktopManager::GetWindowAnimationSettings();
  v7 = CAnimationResource::AddCubic(*v2, *((float *)WindowAnimationSettings + 6), 1.0, -1.0 / v4, 0.0, 0.0);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x12D,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\transitions.windowmoveresizecrossfadetransition.cpp",
      (const char *)(unsigned int)v7,
      v16);
  v8 = CDesktopManager::GetWindowAnimationSettings();
  v9 = CAnimationResource::End(*v2, (float)(v4 + *((float *)v8 + 6)), 0.0);
  if ( v9 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x132,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\transitions.windowmoveresizecrossfadetransition.cpp",
      (const char *)(unsigned int)v9,
      v16);
  v10 = *v2;
  winrt::impl::as<ITransitionAnimationVisualNative,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    &v18,
    (__int64 (__fastcall ***)(_QWORD, __int64 *, __int64 *))this[5]);
  v11 = v18;
  v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 48LL))(v18);
  v13 = CAnimationResource::AddBinding((__int64)v10, v12, 7u);
  if ( v13 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x138,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\transitions.windowmoveresizecrossfadetransition.cpp",
      (const char *)(unsigned int)v13,
      v16);
  if ( v11 )
    winrt::com_ptr<IBitmapManager>::unconditional_release_ref(&v18);
}
