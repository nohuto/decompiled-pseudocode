/*
 * XREFs of _SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_ResumeCoro$1_::_1_::dtor$90 @ 0x1806D0EA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$weak_ref@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x18021FFD0 (--1-$weak_ref@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall SnapFlyoutHost::CreateSnapFlyoutInstanceAsync__ResumeCoro_1_::_1_::dtor_90(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)(a2 + 936) = *(_QWORD *)(a2 + 1280) + 752LL;
  *(_DWORD *)(a2 + 680) = **(_DWORD **)(a2 + 936);
  result = *(_DWORD *)(a2 + 680) & 0x100;
  if ( (_DWORD)result )
  {
    *(_QWORD *)(a2 + 944) = *(_QWORD *)(a2 + 1280) + 752LL;
    *(_QWORD *)(a2 + 952) = *(_QWORD *)(a2 + 1280) + 752LL;
    *(_DWORD *)(a2 + 680) = **(_DWORD **)(a2 + 952);
    *(_DWORD *)(a2 + 960) = *(_DWORD *)(a2 + 680) & 0xFFFFFEFF;
    **(_DWORD **)(a2 + 944) = *(_DWORD *)(a2 + 960);
    *(_QWORD *)(a2 + 968) = *(_QWORD *)(a2 + 1280) + 496LL;
    return winrt::weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>::~weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>(*(__int64 **)(a2 + 968));
  }
  return result;
}
