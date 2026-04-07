/*
 * XREFs of ?UpdateColor@CSolidRectangleVisual@@QEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x18004CCFC
 * Callers:
 *     ?EnsureCaptionSprite@CLegacyNonClientBackground@@AEAAJXZ @ 0x18000B35C (-EnsureCaptionSprite@CLegacyNonClientBackground@@AEAAJXZ.c)
 *     ?ConfigureBackground@CDisplayAnimatedVisual@@AEAAJXZ @ 0x18004B0EC (-ConfigureBackground@CDisplayAnimatedVisual@@AEAAJXZ.c)
 *     ?SetCaptionColor@CLegacyNonClientBackground@@QEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x18004C930 (-SetCaptionColor@CLegacyNonClientBackground@@QEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?CreateDesktopWindowReplacement@CDesktopManager@@SAX_K@Z @ 0x18004CB60 (-CreateDesktopWindowReplacement@CDesktopManager@@SAX_K@Z.c)
 *     ?EnsureBackgroundEffects@CAcrylicSheet@@AEAAJXZ @ 0x18005E6A8 (-EnsureBackgroundEffects@CAcrylicSheet@@AEAAJXZ.c)
 *     ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x180065E90 (-UpdateClientBlur@CTopLevelWindow@@AEAAJXZ.c)
 *     ?Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z @ 0x1800B7C30 (-Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z.c)
 *     ?UpdateOpacityAndLocation@CTouchPressHoldVisual@@IEAAJXZ @ 0x1800CD870 (-UpdateOpacityAndLocation@CTouchPressHoldVisual@@IEAAJXZ.c)
 *     ?DrawBackground@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800D2D38 (-DrawBackground@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ.c)
 *     ?StartFirstAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800D38AC (-StartFirstAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEA.c)
 *     ?StartSecondAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800D3D34 (-StartSecondAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AE.c)
 *     ?AddIconPlate@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800DD3F4 (-AddIconPlate@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ.c)
 * Callees:
 *     ??$SetBrush@PEAUICompositionColorBrush@Composition@UI@Windows@@@CSpriteVisual@@QEAAJPEAUICompositionColorBrush@Composition@UI@Windows@@@Z @ 0x18000ABC4 (--$SetBrush@PEAUICompositionColorBrush@Composition@UI@Windows@@@CSpriteVisual@@QEAAJPEAUIComposi.c)
 *     ??$GetBrush@UICompositionColorBrush@Composition@UI@Windows@@@CSpriteVisual@@QEBAJPEAPEAUICompositionColorBrush@Composition@UI@Windows@@@Z @ 0x18004CE98 (--$GetBrush@UICompositionColorBrush@Composition@UI@Windows@@@CSpriteVisual@@QEBAJPEAPEAUIComposi.c)
 *     ?WUColorFromD2DColor@@YA?AUColor@UI@Windows@@AEBU_D3DCOLORVALUE@@@Z @ 0x18004D000 (-WUColorFromD2DColor@@YA-AUColor@UI@Windows@@AEBU_D3DCOLORVALUE@@@Z.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050208 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CSolidRectangleVisual::UpdateColor(CSolidRectangleVisual *this, const struct _D3DCOLORVALUE *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 *v6; // rcx
  __int64 v7; // rax
  int v8; // eax
  int v9; // eax
  __int64 v10; // r8
  unsigned int v11; // eax
  int v12; // eax
  int savedregs; // [rsp+20h] [rbp+0h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+8h]
  __int64 v16; // [rsp+40h] [rbp+20h] BYREF

  v16 = 0LL;
  v4 = CSpriteVisual::GetBrush<Windows::UI::Composition::ICompositionColorBrush>(this, &v16);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x24,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\solidrectanglevisual.cpp",
      (const char *)(unsigned int)v4,
      savedregs);
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    return v5;
  }
  if ( !v16 )
  {
    v6 = *(__int64 **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6) + 40LL);
    v7 = *v6;
    v16 = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v7 + 56))(v6, &v16);
    v5 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x28,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\solidrectanglevisual.cpp",
        (const char *)(unsigned int)v8,
        savedregs);
      if ( v16 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      return v5;
    }
    v9 = CSpriteVisual::SetBrush<Windows::UI::Composition::ICompositionColorBrush *>((__int64)this, v16);
    v5 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x29,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\solidrectanglevisual.cpp",
        (const char *)(unsigned int)v9,
        savedregs);
      wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v16);
      return v5;
    }
  }
  WUColorFromD2DColor(a2);
  v12 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 56LL))(v10, v11);
  v5 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2C,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\solidrectanglevisual.cpp",
      (const char *)(unsigned int)v12,
      savedregs);
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    return v5;
  }
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  return 0LL;
}
