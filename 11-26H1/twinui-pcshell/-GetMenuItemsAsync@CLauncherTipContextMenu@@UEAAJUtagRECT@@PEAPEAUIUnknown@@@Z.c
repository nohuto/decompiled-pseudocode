/*
 * XREFs of ?GetMenuItemsAsync@CLauncherTipContextMenu@@UEAAJUtagRECT@@PEAPEAUIUnknown@@@Z @ 0x180601C60
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?GetMenuItemsAsyncHelper@CLauncherTipContextMenu@@AEAA?AU?$IAsyncOperation@U?$IVectorView@UMenuItem@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@UtagRECT@@@Z @ 0x180602718 (-GetMenuItemsAsyncHelper@CLauncherTipContextMenu@@AEAA-AU-$IAsyncOperation@U-$IVectorView@UMenuI.c)
 */

__int64 __fastcall CLauncherTipContextMenu::GetMenuItemsAsync(
        CLauncherTipContextMenu *this,
        struct tagRECT *a2,
        struct IUnknown **a3)
{
  char *v4; // rcx
  struct IUnknown *v5; // rax
  const char *v6; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IUnknown *v9; // [rsp+40h] [rbp+8h] BYREF

  *a3 = 0LL;
  v4 = (char *)this - 88;
  try
  {
    CLauncherTipContextMenu::GetMenuItemsAsyncHelper(v4, &v9);
    v5 = v9;
    v9 = 0LL;
    *a3 = v5;
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v9);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x729,
                           (int)"pcshell\\twinui\\launchertipcontextmenu\\lib\\launchertipcontextmenu.cpp",
                           v6);
  }
  return result;
}
