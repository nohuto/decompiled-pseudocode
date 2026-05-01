/*
 * XREFs of ?CanShow@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAH@Z @ 0x180613630
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CanShowControlCenterSwitcher@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x18061367C (-CanShowControlCenterSwitcher@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::InputSwitchingManager::CanShow(
        winrt::Windows::Internal::Shell::implementation::InputSwitchingManager *this,
        int *a2)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    *a2 = winrt::Windows::Internal::Shell::implementation::InputSwitchingManager::CanShowControlCenterSwitcher(this);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x29B,
      (int)"pcshell\\twinui\\inputswitchingmanager\\lib\\inputswitchingmanager.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
