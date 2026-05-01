/*
 * XREFs of _anonymous_namespace_::StartAnimationTelemetryForInputViewKeyMoment @ 0x1802AD654
 * Callers:
 *     ?AnimateInputView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEAUHWND__@@_N@Z @ 0x1802086D0 (-AnimateInputView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEAUHWND__@@_N@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180054B64 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?Run@?$consume_Windows_Internal_Shell_SnapComponent_IImmersiveShellThreadDispatcherCallback@UIImmersiveShellThreadDispatcherCallback@SnapComponent@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1802187CC (-Run@-$consume_Windows_Internal_Shell_SnapComponent_IImmersiveShellThreadDispatcherCallback@UIIm.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?GetForScenario@AnimationLastFrameTelemetry@Composition@UI@WindowsUdk@winrt@@SA@AEBUguid@5@@Z @ 0x18046DCE0 (-GetForScenario@AnimationLastFrameTelemetry@Composition@UI@WindowsUdk@winrt@@SA@AEBUguid@5@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall anonymous_namespace_::StartAnimationTelemetryForInputViewKeyMoment(__int64 *a1, int a2)
{
  __int64 *v3; // rax
  _BYTE v5[8]; // [rsp+28h] [rbp-28h] BYREF
  __int64 *v6; // [rsp+30h] [rbp-20h]
  int v7; // [rsp+38h] [rbp-18h]
  int v8; // [rsp+3Ch] [rbp-14h]
  int v9; // [rsp+40h] [rbp-10h]
  int v10; // [rsp+44h] [rbp-Ch]

  v6 = a1;
  *a1 = 0LL;
  if ( a2 )
  {
    if ( a2 != 4 )
      goto LABEL_6;
    v7 = 2090528749;
    v8 = 1270398842;
    v9 = -2096306546;
    v10 = 36653633;
  }
  else
  {
    v7 = 1869747756;
    v8 = 1141780962;
    v9 = -1773868912;
    v10 = 273230182;
  }
  v3 = (__int64 *)winrt::WindowsUdk::UI::Composition::AnimationLastFrameTelemetry::GetForScenario((const struct winrt::guid *)v5);
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=(a1, v3);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v5);
LABEL_6:
  if ( *a1 )
    winrt::impl::consume_Windows_Internal_Shell_SnapComponent_IImmersiveShellThreadDispatcherCallback<winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcherCallback>::Run(a1);
  return a1;
}
