/*
 * XREFs of ?StartPointerExitedTimer@VirtualDesktopSwitcherHost@@AEAAXXZ @ 0x180688358
 * Callers:
 *     _lambda_828944ce103634e2e050a423f7a4c10d_::operator() @ 0x1806854BC (_lambda_828944ce103634e2e050a423f7a4c10d_--operator().c)
 *     _lambda_95528747bebe02d956eab525d53e8eb3_::operator() @ 0x180685614 (_lambda_95528747bebe02d956eab525d53e8eb3_--operator().c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x1800AA2B4 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?CreateTimer@ThreadPoolTimer@Threading@System@Windows@winrt@@SA@AEBUTimerElapsedHandler@2345@AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z @ 0x1801DEAD0 (-CreateTimer@ThreadPoolTimer@Threading@System@Windows@winrt@@SA@AEBUTimerElapsedHandler@2345@AEB.c)
 *     ??0implements_delegate_base@impl@winrt@@QEAA@XZ @ 0x1802921A4 (--0implements_delegate_base@impl@winrt@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18029BFCC (--0-$com_ptr_t@UITaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ??$com_weak_query_failfast@PEAVVirtualDesktopSwitcherHost@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@0@$$QEAPEAVVirtualDesktopSwitcherHost@@@Z @ 0x1802C5CB8 (--$com_weak_query_failfast@PEAVVirtualDesktopSwitcherHost@@@wil@@YA-AV-$com_ptr_t@UIWeakReferenc.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall VirtualDesktopSwitcherHost::StartPointerExitedTimer(VirtualDesktopSwitcherHost *this)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // rcx
  _QWORD *v3; // rdx
  __int64 *Timer; // rax
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF
  __int64 (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // [rsp+50h] [rbp+18h] BYREF
  _QWORD *v7; // [rsp+58h] [rbp+20h] BYREF
  __int64 v8; // [rsp+60h] [rbp+28h] BYREF
  __int64 v9; // [rsp+68h] [rbp+30h] BYREF

  if ( !*((_BYTE *)this + 456) )
  {
    v6 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))this;
    wil::com_weak_query_failfast<VirtualDesktopSwitcherHost *>(&v8, &v6);
    wil::com_ptr_t<ITaskViewFrame,wil::err_exception_policy>::com_ptr_t<ITaskViewFrame,wil::err_exception_policy>(
      (__int64 *)&v6,
      &v8);
    v9 = (__int64)&v6;
    v9 = (__int64)operator new(0x18uLL);
    winrt::impl::implements_delegate_base::implements_delegate_base((winrt::impl::implements_delegate_base *)(v9 + 8));
    v2 = v6;
    v6 = 0LL;
    v3[2] = v2;
    _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
    *v3 = off_180892B60;
    v7 = v3;
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v6);
    v9 = 3330000LL;
    Timer = (__int64 *)winrt::Windows::System::Threading::ThreadPoolTimer::CreateTimer(
                         (__int64)v5,
                         (__int64)&v7,
                         (__int64)&v9);
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 50, Timer);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v5);
    if ( v7 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v7);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v8);
  }
}
