/*
 * XREFs of ?MoveToDesktop@?$produce@UDesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@UIPlatformTaskGroupsSwitchItemController@TaskGroups@4567@@impl@winrt@@UEAAHPEAX0@Z @ 0x1805668D0
 * Callers:
 *     <none>
 * Callees:
 *     ?MoveToDesktop@DesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@QEAAXAEBUISwitchItem@Multitasking@ComposableShell@567@AEBUIVirtualDesktop@9ComposableShell@567@@Z @ 0x180566910 (-MoveToDesktop@DesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@Inte.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController,winrt::Windows::Internal::Shell::TaskGroups::IPlatformTaskGroupsSwitchItemController>::MoveToDesktop(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController *v3; // rcx
  __int64 result; // rax
  int v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = a3;
  v6 = a2;
  v3 = (winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController *)((a1 - 16) & -(__int64)(a1 != 0));
  try
  {
    winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController::MoveToDesktop(
      v3,
      (const struct winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem *)&v6,
      (const struct winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *)&v7);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v5);
  }
  return result;
}
