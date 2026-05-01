/*
 * XREFs of ?IsVisibleOnDesktop@?$produce@UDesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@UIPlatformTaskGroupsSwitchItemController@TaskGroups@4567@@impl@winrt@@UEAAHPEAX0PEA_N@Z @ 0x180566650
 * Callers:
 *     <none>
 * Callees:
 *     ?IsVisibleOnDesktop@DesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@QEAA_NAEBUISwitchItem@Multitasking@ComposableShell@567@AEBUIVirtualDesktop@9ComposableShell@567@@Z @ 0x180566694 (-IsVisibleOnDesktop@DesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController,winrt::Windows::Internal::Shell::TaskGroups::IPlatformTaskGroupsSwitchItemController>::IsVisibleOnDesktop(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _BYTE *a4)
{
  winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController *v4; // rcx
  __int64 result; // rax
  int v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v8 = a3;
  v7 = a2;
  v4 = (winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController *)((a1 - 16) & -(__int64)(a1 != 0));
  try
  {
    *a4 = winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController::IsVisibleOnDesktop(
            v4,
            (const struct winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItem *)&v7,
            (const struct winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *)&v8);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v6);
  }
  return result;
}
