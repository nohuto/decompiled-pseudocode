/*
 * XREFs of ?OnDoublePressTimerElapsed@GamepadButtonTracker@@AEAAXAEBUThreadPoolTimer@Threading@System@Windows@winrt@@@Z @ 0x180362910
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180054B64 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?Cancel@?$consume_Windows_System_Threading_IThreadPoolTimer@UIThreadPoolTimer@Threading@System@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18007A6A8 (-Cancel@-$consume_Windows_System_Threading_IThreadPoolTimer@UIThreadPoolTimer@Threading@System@W.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_RTL_SRWLOCK@@@Z @ 0x1801DF88C (-reset@-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclus.c)
 *     ??R?$_Func_class@XAEBUAPP_LOCAL_DEVICE_ID@@W4GamepadButtonEventKind@@@std@@QEBAXAEBUAPP_LOCAL_DEVICE_ID@@W4GamepadButtonEventKind@@@Z @ 0x180362144 (--R-$_Func_class@XAEBUAPP_LOCAL_DEVICE_ID@@W4GamepadButtonEventKind@@@std@@QEBAXAEBUAPP_LOCAL_DE.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall GamepadButtonTracker::OnDoublePressTimerElapsed(
        GamepadButtonTracker *this,
        const struct winrt::Windows::System::Threading::ThreadPoolTimer *a2)
{
  bool v3; // di
  RTL_SRWLOCK *v4; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5[2]; // [rsp+28h] [rbp-10h] BYREF

  v4 = 0LL;
  wil::AcquireSRWLockExclusive(&v4, (RTL_SRWLOCK *)this);
  v3 = 0;
  if ( !*((_BYTE *)this + 120) )
    v3 = *((_BYTE *)this + 25) != 0;
  if ( *((_QWORD *)this + 2) )
  {
    winrt::impl::consume_Windows_System_Threading_IThreadPoolTimer<winrt::Windows::System::Threading::IThreadPoolTimer>::Cancel((__int64 *)this + 2);
    v5[0] = 0LL;
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 2, v5);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v5);
  }
  *((_BYTE *)this + 25) = 0;
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::reset(
    &v4,
    0LL);
  if ( v3 )
    std::_Func_class<void,APP_LOCAL_DEVICE_ID const &,enum GamepadButtonEventKind>::operator()(
      (__int64)this + 56,
      (__int64)this + 144,
      0);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v4);
}
