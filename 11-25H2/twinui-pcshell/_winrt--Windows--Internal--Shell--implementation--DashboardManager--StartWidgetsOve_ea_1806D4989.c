/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::DashboardManager::StartWidgetsOverwatchAsync$_ResumeCoro$1_::_1_::dtor$9 @ 0x1806D4989
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$weak_ref@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x18021FFD0 (--1-$weak_ref@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::StartWidgetsOverwatchAsync__ResumeCoro_1_::_1_::dtor_9(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)(a2 + 168) = *(_QWORD *)(a2 + 320) + 152LL;
  *(_DWORD *)(a2 + 176) = **(_DWORD **)(a2 + 168);
  result = *(_DWORD *)(a2 + 176) & 2;
  if ( (_DWORD)result )
  {
    *(_QWORD *)(a2 + 184) = *(_QWORD *)(a2 + 320) + 152LL;
    *(_QWORD *)(a2 + 192) = *(_QWORD *)(a2 + 320) + 152LL;
    *(_DWORD *)(a2 + 176) = **(_DWORD **)(a2 + 192);
    *(_DWORD *)(a2 + 200) = *(_DWORD *)(a2 + 176) & 0xFFFFFFFD;
    **(_DWORD **)(a2 + 184) = *(_DWORD *)(a2 + 200);
    *(_QWORD *)(a2 + 208) = *(_QWORD *)(a2 + 320) + 16LL;
    return winrt::weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>::~weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>(*(__int64 **)(a2 + 208));
  }
  return result;
}
