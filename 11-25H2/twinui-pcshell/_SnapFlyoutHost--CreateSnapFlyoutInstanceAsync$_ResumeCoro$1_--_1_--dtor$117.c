/*
 * XREFs of _SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_ResumeCoro$1_::_1_::dtor$117 @ 0x1806D116D
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$weak_ref@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x18021FFD0 (--1-$weak_ref@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall SnapFlyoutHost::CreateSnapFlyoutInstanceAsync__ResumeCoro_1_::_1_::dtor_117(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)(a2 + 1128) = *(_QWORD *)(a2 + 1280) + 752LL;
  *(_DWORD *)(a2 + 680) = **(_DWORD **)(a2 + 1128);
  result = *(_DWORD *)(a2 + 680) & 0x4000;
  if ( (_DWORD)result )
  {
    *(_QWORD *)(a2 + 1136) = *(_QWORD *)(a2 + 1280) + 752LL;
    *(_QWORD *)(a2 + 1144) = *(_QWORD *)(a2 + 1280) + 752LL;
    *(_DWORD *)(a2 + 680) = **(_DWORD **)(a2 + 1144);
    *(_DWORD *)(a2 + 1152) = *(_DWORD *)(a2 + 680) & 0xFFFFBFFF;
    **(_DWORD **)(a2 + 1136) = *(_DWORD *)(a2 + 1152);
    *(_QWORD *)(a2 + 1160) = *(_QWORD *)(a2 + 1280) + 688LL;
    return winrt::weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>::~weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>(*(__int64 **)(a2 + 1160));
  }
  return result;
}
