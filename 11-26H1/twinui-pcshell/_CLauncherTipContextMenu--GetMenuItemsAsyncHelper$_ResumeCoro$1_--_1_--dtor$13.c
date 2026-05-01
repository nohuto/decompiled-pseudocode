/*
 * XREFs of _CLauncherTipContextMenu::GetMenuItemsAsyncHelper$_ResumeCoro$1_::_1_::dtor$13 @ 0x180700618
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$vector@UIAsyncAction@Foundation@Windows@winrt@@V?$allocator@UIAsyncAction@Foundation@Windows@winrt@@@std@@@std@@QEAA@XZ @ 0x1801C5278 (--1-$vector@UIAsyncAction@Foundation@Windows@winrt@@V-$allocator@UIAsyncAction@Foundation@Window.c)
 */

__int64 __fastcall CLauncherTipContextMenu::GetMenuItemsAsyncHelper__ResumeCoro_1_::_1_::dtor_13(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 368) = *(_QWORD *)(a2 + 544) + 360LL;
  return std::vector<winrt::Windows::Foundation::IAsyncAction>::~vector<winrt::Windows::Foundation::IAsyncAction>(*(winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension ***)(a2 + 368));
}
