/*
 * XREFs of ?await_suspend@awaitable@?1???$resume_foreground@UDispatcherQueue@System@Windows@winrt@@@wil@@YA?A_PAEBUDispatcherQueue@System@Windows@winrt@@W4DispatcherQueuePriority@456@@Z@QEAAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x1801DA6D4
 * Callers:
 *     SnapFlyoutHost::InternalShutdownAsync$_ResumeCoro$1 @ 0x180271FD0 (SnapFlyoutHost--InternalShutdownAsync$_ResumeCoro$1.c)
 *     SnapFlyoutHost::ShowSnapBarOnMonitorAsync$_ResumeCoro$1 @ 0x180272CD0 (SnapFlyoutHost--ShowSnapBarOnMonitorAsync$_ResumeCoro$1.c)
 *     SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_ResumeCoro$1 @ 0x18058E8F0 (SnapFlyoutHost--CreateSnapFlyoutInstanceAsync$_ResumeCoro$1.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?TryEnqueue@?$consume_Windows_System_IDispatcherQueue@UIDispatcherQueue@System@Windows@winrt@@@impl@winrt@@QEBA@AEBW4DispatcherQueuePriority@System@Windows@3@AEBUDispatcherQueueHandler@563@@Z @ 0x1801DA76C (-TryEnqueue@-$consume_Windows_System_IDispatcherQueue@UIDispatcherQueue@System@Windows@winrt@@@i.c)
 *     ??1dispatcher_handler@details@wil@@QEAA@XZ @ 0x1801DA7C0 (--1dispatcher_handler@details@wil@@QEAA@XZ.c)
 *     ??0implements_delegate_base@impl@winrt@@QEAA@XZ @ 0x1802921A4 (--0implements_delegate_base@impl@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall `wil::resume_foreground<winrt::Windows::System::DispatcherQueue>'::`2'::awaitable::await_suspend(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rcx
  __int64 *v3; // rdx
  __int64 result; // rax
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF
  __int64 *v7; // [rsp+40h] [rbp+18h] BYREF

  *(_QWORD *)(a1 + 16) = a2;
  v6 = a1 + 16;
  v7 = &v6;
  v7 = (__int64 *)operator new(0x18uLL);
  winrt::impl::implements_delegate_base::implements_delegate_base((winrt::impl::implements_delegate_base *)(v7 + 1));
  v2 = v6;
  v6 = 0LL;
  v3[2] = v2;
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *v3 = (__int64)&winrt::impl::delegate<winrt::Windows::System::DispatcherQueueHandler,wil::details::dispatcher_handler>::`vftable';
  v7 = v3;
  wil::details::dispatcher_handler::~dispatcher_handler((wil::details::dispatcher_handler *)&v6);
  try
  {
    winrt::impl::consume_Windows_System_IDispatcherQueue<winrt::Windows::System::IDispatcherQueue>::TryEnqueue();
    result = winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v7);
  }
  catch ( ... )
  {
    *(_QWORD *)(a1 + 16) = 0LL;
    throw;
  }
  return result;
}
