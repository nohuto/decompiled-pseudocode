/*
 * XREFs of ApplicationFlyoutView::Show$_ResumeCoro$1 @ 0x1805FC8B0
 * Callers:
 *     ?Show@ApplicationFlyoutView@@UEAA?AUIAsyncAction@Foundation@Windows@winrt@@AEBURect@345@AEBW4TaskbarLocation@Shell@UI@WindowsUdk@5@_JAEBVCorrelationVector@@@Z @ 0x1805FCAE0 (-Show@ApplicationFlyoutView@@UEAA-AUIAsyncAction@Foundation@Windows@winrt@@AEBURect@345@AEBW4Tas.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?Increment@CorrelationVector@@QEAAAEBV1@XZ @ 0x1801688F8 (-Increment@CorrelationVector@@QEAAAEBV1@XZ.c)
 *     ?await_suspend@awaitable@?1??resume_background@winrt@@YA@XZ@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x1801E6D48 (-await_suspend@awaitable@-1--resume_background@winrt@@YA@XZ@QEBAXU-$coroutine_handle@X@experimen.c)
 *     ??1?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUWindowsTracker@implementation@Shell@Internal@34@UWindowId@UI@34@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@UEAA@XZ @ 0x180288A6C (--1-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUW.c)
 *     ??1?$unique_ptr@VTraceLoggingCorrelationVector@@U?$default_delete@VTraceLoggingCorrelationVector@@@std@@@std@@QEAA@XZ @ 0x1802C5B98 (--1-$unique_ptr@VTraceLoggingCorrelationVector@@U-$default_delete@VTraceLoggingCorrelationVector.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _CxxThrowException_0 @ 0x1802C9ED8 (_CxxThrowException_0.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1802D7924 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ??0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x1803179A0 (--0hresult_canceled@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     ?await_suspend@final_suspend_awaiter@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBUIInspectable@234@W4DragDropSimulatorDropPoint@78934@_N@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEBA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x18053B190 (-await_suspend@final_suspend_awaiter@-$promise_base@Upromise_type@-$coroutine_trait_ea_18053B190.c)
 *     ?Extend@CorrelationVector@@QEBA?AV1@XZ @ 0x1805F9344 (-Extend@CorrelationVector@@QEBA-AV1@XZ.c)
 *     ?EnsureWindow@ApplicationFlyoutView@@AEAAPEAUHWND__@@_JAEBVCorrelationVector@@@Z @ 0x1805FB90C (-EnsureWindow@ApplicationFlyoutView@@AEAAPEAUHWND__@@_JAEBVCorrelationVector@@@Z.c)
 *     ?TryShowHideWindow@ApplicationFlyoutView@@AEAAXPEAUHWND__@@_N@Z @ 0x1805FD0D8 (-TryShowHideWindow@ApplicationFlyoutView@@AEAAXPEAUHWND__@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
void __fastcall ApplicationFlyoutView::Show__ResumeCoro_1(__int64 a1)
{
  __int64 v2; // r12
  __int64 v3; // rsi
  _DWORD *v4; // rdi
  _OWORD *v5; // rbx
  void *v6; // r8
  __int64 v7; // rcx
  const struct winrt::impl::slim_source_location *v8; // rax
  __int64 *v9; // rdi
  TraceLoggingCorrelationVector **v10; // r8
  HWND v11; // rbx
  __int64 v12; // rdx
  _BYTE pExceptionObject[80]; // [rsp+28h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v2 = a1 + 8;
  switch ( *(_WORD *)(a1 + 8) )
  {
    case 0xFFFF:
    case 1:
    case 3:
      goto LABEL_9;
    case 2:
      CorrelationVector::Extend(*(TraceLoggingCorrelationVector ***)(a1 + 136), (void **)(a1 + 16));
      v3 = *(_QWORD *)(v2 + 96);
      v4 = *(_DWORD **)(a1 + 120);
      v5 = *(_OWORD **)(a1 + 112);
      wil::AcquireSRWLockExclusive((RTL_SRWLOCK **)(a1 + 40), (RTL_SRWLOCK *)(v3 + 64));
      *(_OWORD *)(v3 + 72) = *v5;
      *(_DWORD *)(v3 + 88) = *v4;
      CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)(a1 + 40));
      *(_QWORD *)(a1 + 80) = a1 - 112;
      *(_BYTE *)(a1 + 24) = 0;
      v7 = *(unsigned int *)(a1 - 112 + 96);
      if ( (_DWORD)v7 == 2 )
      {
        v8 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current(a1 + 48);
        winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)pExceptionObject, v8);
        throw (winrt::hresult_canceled *)pExceptionObject;
      }
      *(_WORD *)v2 = 4;
      `winrt::resume_background'::`2'::awaitable::await_suspend(v7, (void (*)(void *, void *))a1, v6);
      return;
    case 4:
      v9 = (__int64 *)(a1 + 32);
      v10 = CorrelationVector::Increment((TraceLoggingCorrelationVector **)(a1 + 16));
      v11 = (HWND)ApplicationFlyoutView::EnsureWindow(*(ApplicationFlyoutView **)(v2 + 96), *(_QWORD *)(a1 + 128), v10);
      ApplicationFlyoutView::TryShowHideWindow(*(ApplicationFlyoutView **)(v2 + 96), v11, 1);
      if ( !SetForegroundWindow(v11) )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x84,
          (int)"pcshell\\twinui\\meetandchatmanager\\lib\\applicationflyoutview.cpp",
          (const char *)0x80070005LL);
      std::unique_ptr<TraceLoggingCorrelationVector>::~unique_ptr<TraceLoggingCorrelationVector>((void **)(a1 + 16));
      *v9 = *(_QWORD *)(a1 + 80);
      *(_WORD *)v2 = 0;
      if ( !winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *,winrt::Windows::Foundation::IInspectable const &,enum winrt::Windows::Internal::Shell::DragDropSimulator::DragDropSimulatorDropPoint,bool>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::final_suspend_awaiter::await_suspend(
              v9,
              v12) )
        goto LABEL_9;
      return;
    case 5:
      std::unique_ptr<TraceLoggingCorrelationVector>::~unique_ptr<TraceLoggingCorrelationVector>((void **)(a1 + 16));
LABEL_9:
      *(_QWORD *)(a1 + 80) = a1 - 112;
      winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::Shell::implementation::WindowsTracker *,winrt::Windows::UI::WindowId>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::~promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::Shell::implementation::WindowsTracker *,winrt::Windows::UI::WindowId>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>((__int64 *)(a1 - 112));
      if ( *(_WORD *)(a1 + 10) )
        operator delete((void *)(a1 - 112), (const struct std::nothrow_t *)0x100);
      break;
    default:
      __debugbreak();
      break;
  }
}
