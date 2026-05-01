/*
 * XREFs of _SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_ResumeCoro$1_::_1_::dtor$19 @ 0x1806D0995
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$weak_ref@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x18021FFD0 (--1-$weak_ref@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall SnapFlyoutHost::CreateSnapFlyoutInstanceAsync__ResumeCoro_1_::_1_::dtor_19(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 984) = *(_QWORD *)(a2 + 1280) + 496LL;
  return winrt::weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>::~weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>(*(__int64 **)(a2 + 984));
}
