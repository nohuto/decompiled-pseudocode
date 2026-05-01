/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::WindowsTracker::SetEventHookForWindowAsync$_ResumeCoro$1_::_1_::dtor$0 @ 0x1807047F1
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x180215850 (--1-$com_ptr@UWindowsTracker@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::WindowsTracker::SetEventHookForWindowAsync__ResumeCoro_1_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 104) = *(_QWORD *)(a2 + 176) + 16LL;
  return winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::WindowsTracker>::~com_ptr<winrt::Windows::Internal::Shell::implementation::WindowsTracker>(*(_QWORD **)(a2 + 104));
}
