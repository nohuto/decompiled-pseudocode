/*
 * XREFs of ?InvokeSearch@CopilotHotkeyManager@@QEAAXXZ @ 0x180601894
 * Callers:
 *     ?InvokeCopilotOrCustomOption@CopilotHotkeyManager@@QEAA_NW4IMMERSIVE_HOT_KEY_ID@@@Z @ 0x180601124 (-InvokeCopilotOrCustomOption@CopilotHotkeyManager@@QEAA_NW4IMMERSIVE_HOT_KEY_ID@@@Z.c)
 *     CopilotHotkeyManager::TryInvokeCopilotOrCustomAppFromHardwareKeyAsync$_ResumeCoro$1 @ 0x18060FD80 (CopilotHotkeyManager--TryInvokeCopilotOrCustomAppFromHardwareKeyAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAA@AEBW4ShellView@1234@@Z @ 0x1800A6600 (--0ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAA@AEBW4ShellView@1234@@Z.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x1800AA2B4 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1801B5CB8 (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ??0DismissShellViewOptions@Shell@UI@WindowsUdk@winrt@@QEAA@XZ @ 0x18021859C (--0DismissShellViewOptions@Shell@UI@WindowsUdk@winrt@@QEAA@XZ.c)
 *     ?Visibility@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18022A3EC (-Visibility@-$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Shell@UI@.c)
 *     ??0ShowShellViewOptions@Shell@UI@WindowsUdk@winrt@@QEAA@XZ @ 0x1802AF1DC (--0ShowShellViewOptions@Shell@UI@WindowsUdk@winrt@@QEAA@XZ.c)
 *     ?TryDismissAsync@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUDismissShellViewOptions@Shell@UI@WindowsUdk@3@@Z @ 0x180387A38 (-TryDismissAsync@-$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Shel.c)
 *     ?Context@?$consume_WindowsUdk_UI_Shell_IShowShellViewOptions@UIShowShellViewOptions@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x18056CDC4 (-Context@-$consume_WindowsUdk_UI_Shell_IShowShellViewOptions@UIShowShellViewOptions@Shell@UI@Win.c)
 *     ?TryShowAsync@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUShowShellViewOptions@Shell@UI@WindowsUdk@3@@Z @ 0x18056FAAC (-TryShowAsync@-$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Shell@U.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CopilotHotkeyManager::InvokeSearch(CopilotHotkeyManager *this)
{
  __int64 *v1; // rbx
  __int64 *v2; // rax
  __int64 *v3; // rax
  __int64 v4[4]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v5; // [rsp+50h] [rbp+10h] BYREF
  __int64 v6; // [rsp+58h] [rbp+18h] BYREF

  v1 = (__int64 *)((char *)this + 144);
  if ( !*((_QWORD *)this + 18) )
  {
    LODWORD(v5) = 1;
    v2 = (__int64 *)winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::ShellViewCoordinator(
                      (winrt::WindowsUdk::UI::Shell::ShellViewCoordinator *)&v6,
                      (const enum winrt::WindowsUdk::UI::Shell::ShellView *)&v5);
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=(v1, v2);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v6);
  }
  if ( (unsigned int)winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>::Visibility(v1) == 1 )
  {
    winrt::WindowsUdk::UI::Shell::ShowShellViewOptions::ShowShellViewOptions((winrt::WindowsUdk::UI::Shell::ShowShellViewOptions *)&v5);
    winrt::param::hstring::hstring((winrt::param::hstring *)v4, L"QuerySource=HWCoPilot");
    winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewOptions<winrt::WindowsUdk::UI::Shell::IShowShellViewOptions>::Context(
      &v5,
      v4);
    winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>::TryShowAsync(
      (__int64 **)v1,
      &v6,
      &v5);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v6);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v5);
  }
  else
  {
    v3 = (__int64 *)winrt::WindowsUdk::UI::Shell::DismissShellViewOptions::DismissShellViewOptions((winrt::WindowsUdk::UI::Shell::DismissShellViewOptions *)&v6);
    winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>::TryDismissAsync(
      (__int64 **)v1,
      &v5,
      v3);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v5);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v6);
  }
}
