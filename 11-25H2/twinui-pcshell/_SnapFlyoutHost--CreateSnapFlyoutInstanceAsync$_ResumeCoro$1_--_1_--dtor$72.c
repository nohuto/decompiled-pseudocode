/*
 * XREFs of _SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_ResumeCoro$1_::_1_::dtor$72 @ 0x1806D0CC8
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$weak_ref@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x18021FFD0 (--1-$weak_ref@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall SnapFlyoutHost::CreateSnapFlyoutInstanceAsync__ResumeCoro_1_::_1_::dtor_72(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)(a2 + 808) = *(_QWORD *)(a2 + 1280) + 752LL;
  *(_DWORD *)(a2 + 680) = **(_DWORD **)(a2 + 808);
  result = *(_DWORD *)(a2 + 680) & 0x10;
  if ( (_DWORD)result )
  {
    *(_QWORD *)(a2 + 816) = *(_QWORD *)(a2 + 1280) + 752LL;
    *(_QWORD *)(a2 + 824) = *(_QWORD *)(a2 + 1280) + 752LL;
    *(_DWORD *)(a2 + 680) = **(_DWORD **)(a2 + 824);
    *(_DWORD *)(a2 + 832) = *(_DWORD *)(a2 + 680) & 0xFFFFFFEF;
    **(_DWORD **)(a2 + 816) = *(_DWORD *)(a2 + 832);
    *(_QWORD *)(a2 + 840) = *(_QWORD *)(a2 + 1280) + 368LL;
    return winrt::weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>::~weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>(*(__int64 **)(a2 + 840));
  }
  return result;
}
