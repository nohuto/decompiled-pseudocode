/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::SubsribeToTransitionScreenDismissEvent_::_1_::dtor$9 @ 0x1806DB943
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$weak_ref@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x18021FFD0 (--1-$weak_ref@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::SubsribeToTransitionScreenDismissEvent_::_1_::dtor_9(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 216) & 2;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 216) &= ~2u;
    return winrt::weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>::~weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>((__int64 *)(a2 + 232));
  }
  return result;
}
