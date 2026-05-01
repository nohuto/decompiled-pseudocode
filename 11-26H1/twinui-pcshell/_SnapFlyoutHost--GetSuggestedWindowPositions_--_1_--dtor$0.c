/*
 * XREFs of _SnapFlyoutHost::GetSuggestedWindowPositions_::_1_::dtor$0 @ 0x1806F9482
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$vector@UIAsyncAction@Foundation@Windows@winrt@@V?$allocator@UIAsyncAction@Foundation@Windows@winrt@@@std@@@std@@QEAA@XZ @ 0x1801C5278 (--1-$vector@UIAsyncAction@Foundation@Windows@winrt@@V-$allocator@UIAsyncAction@Foundation@Window.c)
 */

__int64 __fastcall SnapFlyoutHost::GetSuggestedWindowPositions_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return std::vector<winrt::Windows::Foundation::IAsyncAction>::~vector<winrt::Windows::Foundation::IAsyncAction>(*(winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension ***)(a2 + 88));
  }
  return result;
}
