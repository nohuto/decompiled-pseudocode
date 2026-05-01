/*
 * XREFs of _WindowDragInputProvider::WindowDragInputProvider_::_1_::dtor$30 @ 0x1806D2679
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$weak_ref@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x18021FFD0 (--1-$weak_ref@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall WindowDragInputProvider::WindowDragInputProvider_::_1_::dtor_30(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 200) & 2;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 200) &= ~2u;
    return winrt::weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>::~weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>((__int64 *)(a2 + 40));
  }
  return result;
}
