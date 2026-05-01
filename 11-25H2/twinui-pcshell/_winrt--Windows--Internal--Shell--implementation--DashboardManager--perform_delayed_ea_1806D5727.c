/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::DashboardManager::perform_delayed_initialization_::_1_::dtor$7 @ 0x1806D5727
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$weak_ref@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x18021FFD0 (--1-$weak_ref@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::perform_delayed_initialization_::_1_::dtor_7(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 120) & 2;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 120) &= ~2u;
    return winrt::weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>::~weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>((__int64 *)(a2 + 128));
  }
  return result;
}
