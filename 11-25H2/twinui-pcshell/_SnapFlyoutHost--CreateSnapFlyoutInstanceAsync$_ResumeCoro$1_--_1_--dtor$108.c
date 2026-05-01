/*
 * XREFs of _SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_ResumeCoro$1_::_1_::dtor$108 @ 0x1806D107E
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$weak_ref@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x18021FFD0 (--1-$weak_ref@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall SnapFlyoutHost::CreateSnapFlyoutInstanceAsync__ResumeCoro_1_::_1_::dtor_108(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)(a2 + 1064) = *(_QWORD *)(a2 + 1280) + 752LL;
  *(_DWORD *)(a2 + 680) = **(_DWORD **)(a2 + 1064);
  result = *(_DWORD *)(a2 + 680) & 0x1000;
  if ( (_DWORD)result )
  {
    *(_QWORD *)(a2 + 1072) = *(_QWORD *)(a2 + 1280) + 752LL;
    *(_QWORD *)(a2 + 1080) = *(_QWORD *)(a2 + 1280) + 752LL;
    *(_DWORD *)(a2 + 680) = **(_DWORD **)(a2 + 1080);
    *(_DWORD *)(a2 + 1088) = *(_DWORD *)(a2 + 680) & 0xFFFFEFFF;
    **(_DWORD **)(a2 + 1072) = *(_DWORD *)(a2 + 1088);
    *(_QWORD *)(a2 + 1096) = *(_QWORD *)(a2 + 1280) + 624LL;
    return winrt::weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>::~weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>(*(__int64 **)(a2 + 1096));
  }
  return result;
}
