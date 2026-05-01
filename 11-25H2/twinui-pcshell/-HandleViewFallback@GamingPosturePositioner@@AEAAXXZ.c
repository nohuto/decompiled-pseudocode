/*
 * XREFs of ?HandleViewFallback@GamingPosturePositioner@@AEAAXXZ @ 0x1804E2E50
 * Callers:
 *     ?FallbackWindowActivated@GamingPosturePositioner@@QEAAXXZ @ 0x1804E2594 (-FallbackWindowActivated@GamingPosturePositioner@@QEAAXXZ.c)
 *     ?OnApplicationViewChanged@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1804E4070 (-OnApplicationViewChanged@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW.c)
 *     ?SetActiveApp@GamingPosturePositioner@@UEAAJXZ @ 0x1804E4C10 (-SetActiveApp@GamingPosturePositioner@@UEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x1800AA2B4 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?CreateTimer@ThreadPoolTimer@Threading@System@Windows@winrt@@SA@AEBUTimerElapsedHandler@2345@AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z @ 0x1801DEAD0 (-CreateTimer@ThreadPoolTimer@Threading@System@Windows@winrt@@SA@AEBUTimerElapsedHandler@2345@AEB.c)
 *     winrt::Windows::System::Threading::TimerElapsedHandler::TimerElapsedHandler__lambda_0210cdf410b43223d5bb003804109f20___ @ 0x1804DFEBC (winrt--Windows--System--Threading--TimerElapsedHandler--TimerElapsedHandler__lambda_0210cdf410b4.c)
 *     ??$?0VGamingPosturePositioner@@@?$com_ptr_t@UIUnknown@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVGamingPosturePositioner@@U?$integral_constant@D$0A@@wistd@@@Z @ 0x1804E0058 (--$-0VGamingPosturePositioner@@@-$com_ptr_t@UIUnknown@@Uerr_exception_policy@wil@@@wil@@QEAA@PEA.c)
 *     ?CancelViewFallbackTimer@GamingPosturePositioner@@AEAAXXZ @ 0x1804E1F90 (-CancelViewFallbackTimer@GamingPosturePositioner@@AEAAXXZ.c)
 *     ?ShouldHandleViewFallback@GamingPosturePositioner@@AEAA_NXZ @ 0x1804E4FD8 (-ShouldHandleViewFallback@GamingPosturePositioner@@AEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall GamingPosturePositioner::HandleViewFallback(GamingPosturePositioner *this)
{
  __int64 v2; // rax
  _QWORD *v3; // rax
  __int64 *Timer; // rax
  _BYTE v5[8]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v6[3]; // [rsp+28h] [rbp-18h] BYREF
  __int64 v7; // [rsp+58h] [rbp+18h] BYREF
  __int64 v8; // [rsp+60h] [rbp+20h] BYREF
  __int64 v9; // [rsp+68h] [rbp+28h] BYREF

  if ( GamingPosturePositioner::ShouldHandleViewFallback(this) )
  {
    GamingPosturePositioner::CancelViewFallbackTimer(this);
    v9 = 5000000LL;
    wil::com_ptr_t<IUnknown,wil::err_exception_policy>::com_ptr_t<IUnknown,wil::err_exception_policy>(
      &v7,
      (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))this);
    v2 = v7;
    v7 = 0LL;
    v6[0] = v2;
    v6[1] = (__int64)this;
    v3 = winrt::Windows::System::Threading::TimerElapsedHandler::TimerElapsedHandler__lambda_0210cdf410b43223d5bb003804109f20___(
           &v8,
           v6);
    Timer = (__int64 *)winrt::Windows::System::Threading::ThreadPoolTimer::CreateTimer(
                         (__int64)v5,
                         (__int64)v3,
                         (__int64)&v9);
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 91, Timer);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v5);
    if ( v8 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v8);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v7);
  }
}
