/*
 * XREFs of ?StartInvokeTimer@SnapFlyoutHost@@AEAAXPEAUHWND__@@W4ShowFlags@1@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x18007DAD8
 * Callers:
 *     SnapFlyoutHost::ShowFlyoutAsync$_ResumeCoro$1 @ 0x18026A570 (SnapFlyoutHost--ShowFlyoutAsync$_ResumeCoro$1.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180054B64 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ??$get_weak@VWindowDragInputProvider@@@?$root_implements@VWindowDragInputProvider@@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@IEAA?AU?$weak_ref@VWindowDragInputProvider@@@2@XZ @ 0x180054E60 (--$get_weak@VWindowDragInputProvider@@@-$root_implements@VWindowDragInputProvider@@UIInspectable.c)
 *     ?SnapFlyout_StartInvokeTimer@SnapFlyoutTelemetry@@SAXXZ @ 0x18007BDC8 (-SnapFlyout_StartInvokeTimer@SnapFlyoutTelemetry@@SAXXZ.c)
 *     winrt::Windows::System::Threading::TimerElapsedHandler::TimerElapsedHandler__lambda_1e80c37ddcde987ca8d07444e2bbbfce___ @ 0x18007DC0C (winrt--Windows--System--Threading--TimerElapsedHandler--TimerElapsedHandler__lambda_1e80c37ddcde.c)
 *     ?GetInvokeDuration@SnapFlyoutHost@@CA?AV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@XZ @ 0x18007DC8C (-GetInvokeDuration@SnapFlyoutHost@@CA-AV-$duration@_JU-$ratio@$00$0DOI@@std@@@chrono@std@@XZ.c)
 *     ?CreateTimer@?$consume_Windows_System_Threading_IThreadPoolTimerStatics@UIThreadPoolTimerStatics@Threading@System@Windows@winrt@@@impl@winrt@@QEBA@AEBUTimerElapsedHandler@Threading@System@Windows@3@AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z @ 0x18007DD98 (-CreateTimer@-$consume_Windows_System_Threading_IThreadPoolTimerStatics@UIThreadPoolTimerStatics.c)
 *     ??$call@AEAV_lambda_b19cf72fe9674443383aa89d5c22450b_@@@?$factory_cache_entry@UThreadPoolTimer@Threading@System@Windows@winrt@@UIThreadPoolTimerStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_b19cf72fe9674443383aa89d5c22450b_@@@Z @ 0x18033F058 (--$call@AEAV_lambda_b19cf72fe9674443383aa89d5c22450b_@@@-$factory_cache_entry@UThreadPoolTimer@T.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall SnapFlyoutHost::StartInvokeTimer(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 result; // rax
  __int64 v9; // [rsp+20h] [rbp-60h] BYREF
  __int64 v10; // [rsp+28h] [rbp-58h] BYREF
  __int64 v11; // [rsp+30h] [rbp-50h] BYREF
  __int64 v12; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v13[2]; // [rsp+40h] [rbp-40h] BYREF
  int v14; // [rsp+50h] [rbp-30h]
  _QWORD v15[2]; // [rsp+58h] [rbp-28h] BYREF
  _BYTE v16[8]; // [rsp+68h] [rbp-18h] BYREF
  __int64 *v17; // [rsp+70h] [rbp-10h]

  SnapFlyoutTelemetry::SnapFlyout_StartInvokeTimer(a1);
  winrt::impl::root_implements<WindowDragInputProvider,winrt::Windows::Foundation::IInspectable>::get_weak<WindowDragInputProvider>(
    a1,
    &v9);
  v6 = v9;
  v9 = 0LL;
  v13[0] = v6;
  v13[1] = a2;
  v14 = a3;
  winrt::Windows::System::Threading::TimerElapsedHandler::TimerElapsedHandler__lambda_1e80c37ddcde987ca8d07444e2bbbfce___(
    &v11,
    v13);
  if ( v9 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v9);
  v7 = 10000LL * *(_QWORD *)SnapFlyoutHost::GetInvokeDuration(v16);
  v12 = v7;
  v15[0] = &v11;
  v15[1] = &v12;
  v17 = &qword_1808DB678;
  _InterlockedIncrement64(&qword_1808DB678);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::System::Threading::ThreadPoolTimer,winrt::Windows::System::Threading::IThreadPoolTimerStatics> )
  {
    winrt::impl::consume_Windows_System_Threading_IThreadPoolTimerStatics<winrt::Windows::System::Threading::IThreadPoolTimerStatics>::CreateTimer(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::System::Threading::ThreadPoolTimer,winrt::Windows::System::Threading::IThreadPoolTimerStatics>,
      &v10,
      &v11,
      &v12);
    _InterlockedDecrement64(&qword_1808DB678);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808DB678);
    winrt::impl::factory_cache_entry<winrt::Windows::System::Threading::ThreadPoolTimer,winrt::Windows::System::Threading::IThreadPoolTimerStatics>::call<_lambda_b19cf72fe9674443383aa89d5c22450b_ &>(
      v7,
      &v10,
      v15);
  }
  result = (__int64)winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)(a1 + 56), &v10);
  if ( v10 )
    result = winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v10);
  if ( v11 )
    return winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v11);
  return result;
}
