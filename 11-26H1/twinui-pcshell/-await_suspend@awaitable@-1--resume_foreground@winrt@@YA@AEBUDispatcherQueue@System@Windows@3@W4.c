/*
 * XREFs of ?await_suspend@awaitable@?1??resume_foreground@winrt@@YA@AEBUDispatcherQueue@System@Windows@3@W4DispatcherQueuePriority@563@@Z@QEAA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x180596F00
 * Callers:
 *     TouchEdgeGripperHost::CreateGripperWindowAsync$_ResumeCoro$1 @ 0x180595910 (TouchEdgeGripperHost--CreateGripperWindowAsync$_ResumeCoro$1.c)
 *     TouchEdgeGripperHost::DismissGripperWindowAsync$_ResumeCoro$1 @ 0x180595DE0 (TouchEdgeGripperHost--DismissGripperWindowAsync$_ResumeCoro$1.c)
 *     SnapFlyoutHost::ShutdownSnapFlyoutsAsync$_ResumeCoro$1 @ 0x1805B4A70 (SnapFlyoutHost--ShutdownSnapFlyoutsAsync$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::Shell::implementation::WindowsTracker::SetEventHookForWindowAsync$_ResumeCoro$1 @ 0x18065EB90 (winrt--Windows--Internal--Shell--implementation--WindowsTracker--SetEventHookForWindowAsync$_Res.c)
 *     winrt::Windows::Internal::Shell::implementation::WindowsTracker::UnhookEventForAllWindowsAsync$_ResumeCoro$1 @ 0x18065EF30 (winrt--Windows--Internal--Shell--implementation--WindowsTracker--UnhookEventForAllWindowsAsync$_.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?TryEnqueue@?$consume_Windows_System_IDispatcherQueue@UIDispatcherQueue@System@Windows@winrt@@@impl@winrt@@QEBA@AEBW4DispatcherQueuePriority@System@Windows@3@AEBUDispatcherQueueHandler@563@@Z @ 0x1801CF624 (-TryEnqueue@-$consume_Windows_System_IDispatcherQueue@UIDispatcherQueue@System@Windows@winrt@@@i.c)
 *     ??0implements_delegate_base@impl@winrt@@QEAA@XZ @ 0x18028AE60 (--0implements_delegate_base@impl@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     ??0_lambda_f475742c0de8d0f2b24fd9d946f0a567_@@QEAA@AEBU?$coroutine_handle@X@experimental@std@@PEAUawaitable@?1??resume_foreground@winrt@@YA@AEBUDispatcherQueue@System@Windows@6@W4DispatcherQueuePriority@896@@Z@@Z @ 0x18030773C (--0_lambda_f475742c0de8d0f2b24fd9d946f0a567_@@QEAA@AEBU-$coroutine_handle@X@experimental@std@@PE.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall `winrt::resume_foreground'::`2'::awaitable::await_suspend(__int64 a1, __int64 a2)
{
  __int64 **v3; // rbx
  __int128 v4; // xmm6
  __int64 v5; // rdx
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  char *v8; // [rsp+50h] [rbp+8h] BYREF
  __int64 v9; // [rsp+58h] [rbp+10h] BYREF

  v9 = a2;
  v3 = *(__int64 ***)a1;
  v4 = *(_OWORD *)_lambda_f475742c0de8d0f2b24fd9d946f0a567_::_lambda_f475742c0de8d0f2b24fd9d946f0a567_(&v7, &v9, a1);
  v8 = (char *)operator new(0x20uLL);
  winrt::impl::implements_delegate_base::implements_delegate_base((winrt::impl::implements_delegate_base *)(v8 + 8));
  *(_OWORD *)(v5 + 16) = v4;
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)v5 = &winrt::impl::delegate<winrt::Windows::System::DispatcherQueueHandler,_lambda_f475742c0de8d0f2b24fd9d946f0a567_>::`vftable';
  v8 = (char *)v5;
  LOBYTE(v3) = winrt::impl::consume_Windows_System_IDispatcherQueue<winrt::Windows::System::IDispatcherQueue>::TryEnqueue(
                 v3,
                 (unsigned int *)(a1 + 8),
                 (__int64 *)&v8);
  winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v8);
  return (char)v3;
}
