/*
 * XREFs of ?StartCrossfadeAnimation@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x180062510
 * Callers:
 *     ?PostTransition@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x180062034 (-PostTransition@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winr.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIBitmapManager@@@winrt@@AEAAXXZ @ 0x18002A93C (-unconditional_release_ref@-$com_ptr@UIBitmapManager@@@winrt@@AEAAXXZ.c)
 *     ??$as@UITransitionAnimationVisualNative@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UITransitionAnimationVisualNative@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x18002A99C (--$as@UITransitionAnimationVisualNative@@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@.c)
 *     ?AddBinding@CAnimationResource@@QEAAJPEAVCResourceProxy@@W4Enum@DwmResourceProperty@@@Z @ 0x180035BD0 (-AddBinding@CAnimationResource@@QEAAJPEAVCResourceProxy@@W4Enum@DwmResourceProperty@@@Z.c)
 *     ?GetWindowAnimationSettings@CDesktopManager@@SAAEBUWindowAnimationSettings@1@XZ @ 0x180048CA8 (-GetWindowAnimationSettings@CDesktopManager@@SAAEBUWindowAnimationSettings@1@XZ.c)
 *     ?AddCubic@CAnimationResource@@UEAAJNMMMM@Z @ 0x1800619B0 (-AddCubic@CAnimationResource@@UEAAJNMMMM@Z.c)
 *     ?Create@CAnimationResource@@SAJPEAPEAV1@@Z @ 0x180061E74 (-Create@CAnimationResource@@SAJPEAPEAV1@@Z.c)
 *     ?End@CAnimationResource@@UEAAJNM@Z @ 0x180061FA0 (-End@CAnimationResource@@UEAAJNM@Z.c)
 *     ?Release@CAnimationResource@@UEAAKXZ @ 0x1800756E0 (-Release@CAnimationResource@@UEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800D3EFC (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition::StartCrossfadeAnimation(
        winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition *this)
{
  struct CAnimationResource **v2; // rdi
  CAnimationResource *v3; // rcx
  int v4; // eax
  float v5; // xmm7_4
  int v6; // eax
  const struct CDesktopManager::WindowAnimationSettings *WindowAnimationSettings; // rax
  int v8; // eax
  const struct CDesktopManager::WindowAnimationSettings *v9; // rax
  int v10; // eax
  struct CAnimationResource *v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rax
  int v14; // eax
  int v15; // [rsp+20h] [rbp-38h]
  int v16; // [rsp+20h] [rbp-38h]
  int v17; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v19; // [rsp+60h] [rbp+8h] BYREF

  v2 = (struct CAnimationResource **)((char *)this + 64);
  v3 = (CAnimationResource *)*((_QWORD *)this + 8);
  *v2 = 0LL;
  if ( v3 )
    CAnimationResource::Release(v3);
  v4 = CAnimationResource::Create(v2);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x11A,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\transitions.windowmoveresizecrossfadetransition.cpp",
      (const char *)(unsigned int)v4,
      v15);
  v5 = *((float *)CDesktopManager::GetWindowAnimationSettings() + 13);
  v6 = CAnimationResource::AddCubic(*v2, 0.0, 1.0, 0.0, 0.0, 0.0);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x124,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\transitions.windowmoveresizecrossfadetransition.cpp",
      (const char *)(unsigned int)v6,
      v16);
  WindowAnimationSettings = CDesktopManager::GetWindowAnimationSettings();
  v8 = CAnimationResource::AddCubic(*v2, *((float *)WindowAnimationSettings + 12), 1.0, -1.0 / v5, 0.0, 0.0);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x12D,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\transitions.windowmoveresizecrossfadetransition.cpp",
      (const char *)(unsigned int)v8,
      v17);
  v9 = CDesktopManager::GetWindowAnimationSettings();
  v10 = CAnimationResource::End(*v2, (float)(v5 + *((float *)v9 + 12)), 0.0);
  if ( v10 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x132,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\transitions.windowmoveresizecrossfadetransition.cpp",
      (const char *)(unsigned int)v10,
      v17);
  v11 = *v2;
  winrt::impl::as<ITransitionAnimationVisualNative,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    &v19,
    *((__int64 (__fastcall ****)(_QWORD, __int64 *, __int64 *))this + 5));
  v12 = v19;
  v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 48LL))(v19);
  v14 = CAnimationResource::AddBinding((__int64)v11, v13, 8u);
  if ( v14 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x138,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\transitions.windowmoveresizecrossfadetransition.cpp",
      (const char *)(unsigned int)v14,
      v17);
  if ( v12 )
    winrt::com_ptr<IBitmapManager>::unconditional_release_ref(&v19);
}
