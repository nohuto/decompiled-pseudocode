/*
 * XREFs of TouchEdgeGripperHost::ShowGripperAsync$_ResumeCoro$1 @ 0x180573370
 * Callers:
 *     TouchEdgeGripperHost::ShowGripperAsync$_InitCoro$2 @ 0x1805732F8 (TouchEdgeGripperHost--ShowGripperAsync$_InitCoro$2.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x1800286D0 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?get_strong@?$implements@VTouchEdgeGripperHost@@UIInspectable@Foundation@Windows@winrt@@@winrt@@QEAA?AU?$com_ptr@VTouchEdgeGripperHost@@@2@XZ @ 0x1801ED2D4 (-get_strong@-$implements@VTouchEdgeGripperHost@@UIInspectable@Foundation@Windows@winrt@@@winrt@@.c)
 *     ?await_suspend@awaitable@?1??resume_background@winrt@@YA@XZ@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x180219E7C (-await_suspend@awaitable@-1--resume_background@winrt@@YA@XZ@QEBAXU-$coroutine_handle@X@experimen.c)
 *     ??1?$com_ptr@VListenerWindow@@@winrt@@QEAA@XZ @ 0x1802923F0 (--1-$com_ptr@VListenerWindow@@@winrt@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??$ShowGripper@AEAW4TouchEdgeGestureType@@AEAPEAUIImmersiveMonitor@@@TouchEdgeGestureTelemetry@@SAXAEAW4TouchEdgeGestureType@@AEAPEAUIImmersiveMonitor@@@Z @ 0x180571BE8 (--$ShowGripper@AEAW4TouchEdgeGestureType@@AEAPEAUIImmersiveMonitor@@@TouchEdgeGestureTelemetry@@.c)
 *     ?CreateGripperWindowAsync@TouchEdgeGripperHost@@AEAA?AUfire_and_forget@winrt@@_N@Z @ 0x180572484 (-CreateGripperWindowAsync@TouchEdgeGripperHost@@AEAA-AUfire_and_forget@winrt@@_N@Z.c)
 *     ?EnsureXamlHostThreadStarted@TouchEdgeGripperHost@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1805729E8 (-EnsureXamlHostThreadStarted@TouchEdgeGripperHost@@AEAAXAEBV-$unique_any_t@V-$unique_storage@U-$.c)
 *     ?StopDismissTimer@TouchEdgeGripperHost@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180573658 (-StopDismissTimer@TouchEdgeGripperHost@@AEAAXAEBV-$unique_any_t@V-$unique_storage@U-$resource_po.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall TouchEdgeGripperHost::ShowGripperAsync__ResumeCoro_1(__int64 a1)
{
  __int64 v1; // rcx
  void *v2; // r8
  __int64 v3; // rsi
  _QWORD *v4; // r14
  __int64 v5; // r12

  try
  {
    switch ( *(_WORD *)(a1 + 8) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_12;
      case 2:
        TouchEdgeGestureTelemetry::ShowGripper<enum TouchEdgeGestureType &,IImmersiveMonitor * &>(
          (int *)(a1 + 57),
          (__int64 *)(a1 + 65));
        winrt::implements<TouchEdgeGripperHost,winrt::Windows::Foundation::IInspectable>::get_strong(
          *(_QWORD *)(a1 + 49),
          (__int64 *)(a1 + 16));
        *(_BYTE *)(a1 + 24) = 0;
        *(_WORD *)(a1 + 8) = 4;
        `winrt::resume_background'::`2'::awaitable::await_suspend(v1, (void (*)(void *, void *))a1, v2);
        return;
      case 4:
        v3 = *(_QWORD *)(a1 + 49);
        wil::AcquireSRWLockExclusive((RTL_SRWLOCK **)(a1 + 32), (RTL_SRWLOCK *)(v3 + 232));
        if ( *(_DWORD *)(v3 + 28) == *(_DWORD *)(a1 + 57) )
        {
          CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)(a1 + 32));
          winrt::com_ptr<ListenerWindow>::~com_ptr<ListenerWindow>((_QWORD **)(a1 + 16));
        }
        else
        {
          TouchEdgeGripperHost::StopDismissTimer(v3);
          *(_DWORD *)(v3 + 28) = *(_DWORD *)(a1 + 57);
          v4 = (_QWORD *)(v3 + 48);
          v5 = *(_QWORD *)(a1 + 65);
          if ( *(_QWORD *)(v3 + 48) != v5 )
          {
            if ( *v4 )
              winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)(v3 + 48));
            *v4 = v5;
            Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(v3 + 48));
          }
          TouchEdgeGripperHost::EnsureXamlHostThreadStarted(v3);
          TouchEdgeGripperHost::CreateGripperWindowAsync(v3, (_BYTE *)(a1 + 40), *(_BYTE *)(a1 + 73));
          CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)(a1 + 32));
          winrt::com_ptr<ListenerWindow>::~com_ptr<ListenerWindow>((_QWORD **)(a1 + 16));
        }
        goto LABEL_12;
      case 5:
        winrt::com_ptr<ListenerWindow>::~com_ptr<ListenerWindow>((_QWORD **)(a1 + 16));
LABEL_12:
        if ( *(_WORD *)(a1 + 10) )
          operator delete((void *)a1, (const struct std::nothrow_t *)0x60);
        break;
      default:
        __debugbreak();
        break;
    }
  }
  catch ( ... )
  {
    *(_WORD *)(a1 + 8) = -1;
    std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *>::promise_type::unhandled_exception((winrt *)0xFFFFFFFFLL);
  }
}
