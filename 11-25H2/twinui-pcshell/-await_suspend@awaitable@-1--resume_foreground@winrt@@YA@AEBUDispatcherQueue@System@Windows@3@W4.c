/*
 * XREFs of ?await_suspend@awaitable@?1??resume_foreground@winrt@@YA@AEBUDispatcherQueue@System@Windows@3@W4DispatcherQueuePriority@563@@Z@QEAA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x1805738F0
 * Callers:
 *     TouchEdgeGripperHost::CreateGripperWindowAsync$_ResumeCoro$1 @ 0x180572000 (TouchEdgeGripperHost--CreateGripperWindowAsync$_ResumeCoro$1.c)
 *     TouchEdgeGripperHost::DismissGripperWindowAsync$_ResumeCoro$1 @ 0x180572590 (TouchEdgeGripperHost--DismissGripperWindowAsync$_ResumeCoro$1.c)
 *     SnapFlyoutHost::ShutdownSnapFlyoutsAsync$_ResumeCoro$1 @ 0x180590B00 (SnapFlyoutHost--ShutdownSnapFlyoutsAsync$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::Shell::implementation::WindowsTracker::SetEventHookForWindowAsync$_ResumeCoro$1 @ 0x1806390E0 (winrt--Windows--Internal--Shell--implementation--WindowsTracker--SetEventHookForWindowAsync$_Res.c)
 *     winrt::Windows::Internal::Shell::implementation::WindowsTracker::UnhookEventForAllWindowsAsync$_ResumeCoro$1 @ 0x180639540 (winrt--Windows--Internal--Shell--implementation--WindowsTracker--UnhookEventForAllW_ea_180639540.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?TryEnqueue@?$consume_Windows_System_IDispatcherQueue@UIDispatcherQueue@System@Windows@winrt@@@impl@winrt@@QEBA@AEBW4DispatcherQueuePriority@System@Windows@3@AEBUDispatcherQueueHandler@563@@Z @ 0x1801DA76C (-TryEnqueue@-$consume_Windows_System_IDispatcherQueue@UIDispatcherQueue@System@Windows@winrt@@@i.c)
 *     ??0implements_delegate_base@impl@winrt@@QEAA@XZ @ 0x1802921A4 (--0implements_delegate_base@impl@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall `winrt::resume_foreground'::`2'::awaitable::await_suspend(unsigned __int64 a1, unsigned __int64 a2)
{
  __int64 **v3; // rbx
  __int64 v4; // rdx
  unsigned __int128 v6; // [rsp+20h] [rbp-18h]
  char *v7; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(__int64 ***)a1;
  v6 = __PAIR128__(a1, a2);
  v7 = (char *)operator new(0x20uLL);
  winrt::impl::implements_delegate_base::implements_delegate_base((winrt::impl::implements_delegate_base *)(v7 + 8));
  *(_OWORD *)(v4 + 16) = v6;
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)v4 = &winrt::impl::delegate<winrt::Windows::System::DispatcherQueueHandler,_lambda_f475742c0de8d0f2b24fd9d946f0a567_>::`vftable';
  v7 = (char *)v4;
  LOBYTE(v3) = winrt::impl::consume_Windows_System_IDispatcherQueue<winrt::Windows::System::IDispatcherQueue>::TryEnqueue(
                 v3,
                 (unsigned int *)(a1 + 8),
                 (__int64 *)&v7);
  winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v7);
  return (char)v3;
}
