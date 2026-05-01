/*
 * XREFs of _SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_ResumeCoro$1_::_1_::dtor$81 @ 0x1806D0DB4
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$weak_ref@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x18021FFD0 (--1-$weak_ref@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall SnapFlyoutHost::CreateSnapFlyoutInstanceAsync__ResumeCoro_1_::_1_::dtor_81(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)(a2 + 872) = *(_QWORD *)(a2 + 1280) + 752LL;
  *(_DWORD *)(a2 + 680) = **(_DWORD **)(a2 + 872);
  result = *(_DWORD *)(a2 + 680) & 0x40;
  if ( (_DWORD)result )
  {
    *(_QWORD *)(a2 + 880) = *(_QWORD *)(a2 + 1280) + 752LL;
    *(_QWORD *)(a2 + 888) = *(_QWORD *)(a2 + 1280) + 752LL;
    *(_DWORD *)(a2 + 680) = **(_DWORD **)(a2 + 888);
    *(_DWORD *)(a2 + 896) = *(_DWORD *)(a2 + 680) & 0xFFFFFFBF;
    **(_DWORD **)(a2 + 880) = *(_DWORD *)(a2 + 896);
    *(_QWORD *)(a2 + 904) = *(_QWORD *)(a2 + 1280) + 432LL;
    return winrt::weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>::~weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>(*(__int64 **)(a2 + 904));
  }
  return result;
}
