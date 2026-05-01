/*
 * XREFs of ?GetMenuItemsAsyncHelper@CLauncherTipContextMenu@@AEAA?AU?$IAsyncOperation@U?$IVectorView@UMenuItem@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@UtagRECT@@@Z @ 0x1805DDBC4
 * Callers:
 *     ?GetMenuItemsAsync@CLauncherTipContextMenu@@UEAAJUtagRECT@@PEAPEAUIUnknown@@@Z @ 0x1805DD0B0 (-GetMenuItemsAsync@CLauncherTipContextMenu@@UEAAJUtagRECT@@PEAPEAUIUnknown@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     CLauncherTipContextMenu::GetMenuItemsAsyncHelper$_InitCoro$2 @ 0x1805DD108 (CLauncherTipContextMenu--GetMenuItemsAsyncHelper$_InitCoro$2.c)
 */

__int64 *__fastcall CLauncherTipContextMenu::GetMenuItemsAsyncHelper(__int64 a1, __int64 *a2, _OWORD *a3)
{
  void *v6; // rax
  _DWORD v8[246]; // [rsp+30h] [rbp-3D8h] BYREF

  v6 = operator new(0x3B0uLL);
  v8[0] = 0;
  CLauncherTipContextMenu::GetMenuItemsAsyncHelper__InitCoro_2(v8, (__int64)v6 + 112, a2, a3, a1);
  return a2;
}
