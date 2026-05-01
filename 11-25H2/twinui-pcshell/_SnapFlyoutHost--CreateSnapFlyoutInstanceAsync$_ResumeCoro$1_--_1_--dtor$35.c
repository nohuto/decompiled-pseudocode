/*
 * XREFs of _SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_ResumeCoro$1_::_1_::dtor$35 @ 0x1806D0BDC
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$weak_ref@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x18021FFD0 (--1-$weak_ref@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall SnapFlyoutHost::CreateSnapFlyoutInstanceAsync__ResumeCoro_1_::_1_::dtor_35(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)(a2 + 672) = *(_QWORD *)(a2 + 1280) + 752LL;
  *(_DWORD *)(a2 + 680) = **(_DWORD **)(a2 + 672);
  result = *(_DWORD *)(a2 + 680) & 2;
  if ( (_DWORD)result )
  {
    *(_QWORD *)(a2 + 688) = *(_QWORD *)(a2 + 1280) + 752LL;
    *(_QWORD *)(a2 + 696) = *(_QWORD *)(a2 + 1280) + 752LL;
    *(_DWORD *)(a2 + 680) = **(_DWORD **)(a2 + 696);
    *(_DWORD *)(a2 + 704) = *(_DWORD *)(a2 + 680) & 0xFFFFFFFD;
    **(_DWORD **)(a2 + 688) = *(_DWORD *)(a2 + 704);
    *(_QWORD *)(a2 + 712) = *(_QWORD *)(a2 + 1280) + 16LL;
    return winrt::weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>::~weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>(*(__int64 **)(a2 + 712));
  }
  return result;
}
