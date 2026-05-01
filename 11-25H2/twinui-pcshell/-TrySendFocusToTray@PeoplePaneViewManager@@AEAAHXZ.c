/*
 * XREFs of ?TrySendFocusToTray@PeoplePaneViewManager@@AEAAHXZ @ 0x180403070
 * Callers:
 *     ?LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z @ 0x180401A70 (-LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z.c)
 *     ?LaunchPeoplePaneForContactWithArgs@PeoplePaneViewManager@@AEAAJPEBG0@Z @ 0x180402010 (-LaunchPeoplePaneForContactWithArgs@PeoplePaneViewManager@@AEAAJPEBG0@Z.c)
 *     ?LaunchPeopleShare@PeoplePaneViewManager@@UEAAJPEBGPEAUIInspectable@@@Z @ 0x1804021E0 (-LaunchPeopleShare@PeoplePaneViewManager@@UEAAJPEBGPEAUIInspectable@@@Z.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall PeoplePaneViewManager::TrySendFocusToTray(PeoplePaneViewManager *this)
{
  HWND WindowW; // rax

  WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
  return SetForegroundWindow(WindowW);
}
