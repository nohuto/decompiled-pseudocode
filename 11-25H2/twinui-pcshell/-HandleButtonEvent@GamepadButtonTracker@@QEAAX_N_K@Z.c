/*
 * XREFs of ?HandleButtonEvent@GamepadButtonTracker@@QEAAX_N_K@Z @ 0x18035B9FC
 * Callers:
 *     ?OnGameInputSystemButtonCallback@GamingOverlayExperienceManager@@AEAAXPEAUIGameInputDevice@@_KW4GameInputSystemButtons@@@Z @ 0x18034AC28 (-OnGameInputSystemButtonCallback@GamingOverlayExperienceManager@@AEAAXPEAUIGameInputDevice@@_KW4.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?Cancel@?$consume_Windows_System_Threading_IThreadPoolTimer@UIThreadPoolTimer@Threading@System@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18005D894 (-Cancel@-$consume_Windows_System_Threading_IThreadPoolTimer@UIThreadPoolTimer@Threading@System@W.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x1800AA2B4 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?CreateTimer@ThreadPoolTimer@Threading@System@Windows@winrt@@SA@AEBUTimerElapsedHandler@2345@AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z @ 0x1801DEAD0 (-CreateTimer@ThreadPoolTimer@Threading@System@Windows@winrt@@SA@AEBUTimerElapsedHandler@2345@AEB.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_RTL_SRWLOCK@@@Z @ 0x1801E9A20 (-reset@-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclus.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$?0UGamepadButtonTracker@@P80@EAAXAEBUThreadPoolTimer@Threading@System@Windows@winrt@@@Z@TimerElapsedHandler@Threading@System@Windows@winrt@@QEAA@PEAUGamepadButtonTracker@@P85@EAAXAEBUThreadPoolTimer@1234@@Z@Z @ 0x18035B3B0 (--$-0UGamepadButtonTracker@@P80@EAAXAEBUThreadPoolTimer@Threading@System@Windows@winrt@@@Z@Timer.c)
 *     ??R?$_Func_class@XAEBUAPP_LOCAL_DEVICE_ID@@W4GamepadButtonEventKind@@@std@@QEBAXAEBUAPP_LOCAL_DEVICE_ID@@W4GamepadButtonEventKind@@@Z @ 0x18035B608 (--R-$_Func_class@XAEBUAPP_LOCAL_DEVICE_ID@@W4GamepadButtonEventKind@@@std@@QEBAXAEBUAPP_LOCAL_DE.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall GamepadButtonTracker::HandleButtonEvent(GamepadButtonTracker *this, char a2, unsigned __int64 a3)
{
  bool v6; // si
  int v7; // r15d
  _QWORD *v8; // rax
  __int64 *Timer; // rax
  char v10; // di
  _QWORD *v11; // rax
  __int64 *v12; // rax
  __int64 v13; // [rsp+20h] [rbp-30h] BYREF
  __int64 v14; // [rsp+28h] [rbp-28h] BYREF
  __int64 v15; // [rsp+30h] [rbp-20h] BYREF
  RTL_SRWLOCK *v16; // [rsp+38h] [rbp-18h] BYREF

  v16 = 0LL;
  wil::AcquireSRWLockExclusive(&v16, (RTL_SRWLOCK *)this);
  if ( a3 < *((_QWORD *)this + 16) )
    goto LABEL_22;
  *((_QWORD *)this + 16) = a3;
  if ( *((_BYTE *)this + 120) == a2 )
    goto LABEL_22;
  v6 = 0;
  v7 = 0;
  *((_BYTE *)this + 120) = a2;
  if ( a2 )
  {
    if ( *((_QWORD *)this + 2) )
    {
      winrt::impl::consume_Windows_System_Threading_IThreadPoolTimer<winrt::Windows::System::Threading::IThreadPoolTimer>::Cancel((__int64 *)this + 2);
      v13 = 0LL;
      winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 2, &v13);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v13);
    }
    if ( *((_QWORD *)this + 1) )
    {
      winrt::impl::consume_Windows_System_Threading_IThreadPoolTimer<winrt::Windows::System::Threading::IThreadPoolTimer>::Cancel((__int64 *)this + 1);
      v13 = 0LL;
      winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 1, &v13);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v13);
    }
    if ( !*((_BYTE *)this + 25) )
    {
      v14 = 10000LL * *((_QWORD *)this + 5);
      v8 = winrt::Windows::System::Threading::TimerElapsedHandler::TimerElapsedHandler(
             &v13,
             (__int64)this,
             (__int64)GamepadButtonTracker::OnDoublePressTimerElapsed);
      Timer = (__int64 *)winrt::Windows::System::Threading::ThreadPoolTimer::CreateTimer(
                           (__int64)&v15,
                           (__int64)v8,
                           (__int64)&v14);
      winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 2, Timer);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v15);
      if ( v13 )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v13);
      v10 = 1;
      *((_BYTE *)this + 25) = 1;
      v15 = 10000LL * *((_QWORD *)this + 4);
      v11 = winrt::Windows::System::Threading::TimerElapsedHandler::TimerElapsedHandler(
              &v13,
              (__int64)this,
              (__int64)GamepadButtonTracker::OnLongPressTimerElapsed);
      v12 = (__int64 *)winrt::Windows::System::Threading::ThreadPoolTimer::CreateTimer(
                         (__int64)&v14,
                         (__int64)v11,
                         (__int64)&v15);
      winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 1, v12);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v14);
      if ( v13 )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v13);
      goto LABEL_20;
    }
    *((_BYTE *)this + 25) = 0;
    v6 = 1;
    v7 = 2;
  }
  else
  {
    if ( !*((_BYTE *)this + 25) )
      v6 = *((_BYTE *)this + 24) != 0;
    if ( *((_QWORD *)this + 1) )
    {
      winrt::impl::consume_Windows_System_Threading_IThreadPoolTimer<winrt::Windows::System::Threading::IThreadPoolTimer>::Cancel((__int64 *)this + 1);
      v13 = 0LL;
      winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 1, &v13);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v13);
    }
    v7 = 0;
  }
  v10 = 0;
LABEL_20:
  *((_BYTE *)this + 24) = v10;
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::reset(
    &v16,
    0LL);
  if ( v6 )
    std::_Func_class<void,APP_LOCAL_DEVICE_ID const &,enum GamepadButtonEventKind>::operator()(
      (__int64)this + 56,
      (__int64)this + 144,
      v7);
LABEL_22:
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v16);
}
