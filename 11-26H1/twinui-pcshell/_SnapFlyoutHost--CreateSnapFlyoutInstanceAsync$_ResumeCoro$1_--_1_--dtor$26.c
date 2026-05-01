/*
 * XREFs of _SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_ResumeCoro$1_::_1_::dtor$26 @ 0x1806F9176
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$weak_ref@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x1802118F4 (--1-$weak_ref@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall SnapFlyoutHost::CreateSnapFlyoutInstanceAsync__ResumeCoro_1_::_1_::dtor_26(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 664) = *(_QWORD *)(a2 + 800) + 608LL;
  return winrt::weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>::~weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>(*(__int64 **)(a2 + 664));
}
