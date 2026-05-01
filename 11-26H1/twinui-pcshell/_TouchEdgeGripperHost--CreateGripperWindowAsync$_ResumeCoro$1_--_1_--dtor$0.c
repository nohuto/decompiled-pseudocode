/*
 * XREFs of _TouchEdgeGripperHost::CreateGripperWindowAsync$_ResumeCoro$1_::_1_::dtor$0 @ 0x1806F77EF
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$weak_ref@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x1802118F4 (--1-$weak_ref@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall TouchEdgeGripperHost::CreateGripperWindowAsync__ResumeCoro_1_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 64) = *(_QWORD *)(a2 + 176) + 16LL;
  return winrt::weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>::~weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>(*(__int64 **)(a2 + 64));
}
