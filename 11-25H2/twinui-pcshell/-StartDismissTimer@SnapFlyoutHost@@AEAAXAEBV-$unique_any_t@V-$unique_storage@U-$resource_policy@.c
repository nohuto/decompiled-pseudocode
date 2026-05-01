/*
 * XREFs of ?StartDismissTimer@SnapFlyoutHost@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180590FD0
 * Callers:
 *     SnapFlyoutHost::HideAsync$_ResumeCoro$1 @ 0x180271AC0 (SnapFlyoutHost--HideAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x1800AA2B4 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ??$get_weak@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@@?$root_implements@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@UITapInvokeTelemetryDataProvider@56789@UITapInvokeSettingTester@56789@@impl@winrt@@IEAA?AU?$weak_ref@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@@2@XZ @ 0x1800FB3AC (--$get_weak@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@@-$root_implements@UTouchKey.c)
 *     _lambda_00799cc444f9312ab8cc556666836ecb_::__lambda_00799cc444f9312ab8cc556666836ecb_ @ 0x1800FB4BC (_lambda_00799cc444f9312ab8cc556666836ecb_--__lambda_00799cc444f9312ab8cc556666836ecb_.c)
 *     ?TryGetCustomDuration@SnapFlyoutHost@@CA?AV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@PEBGV234@@Z @ 0x1801DEA50 (-TryGetCustomDuration@SnapFlyoutHost@@CA-AV-$duration@_JU-$ratio@$00$0DOI@@std@@@chrono@std@@PEB.c)
 *     ?CreateTimer@ThreadPoolTimer@Threading@System@Windows@winrt@@SA@AEBUTimerElapsedHandler@2345@AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z @ 0x1801DEAD0 (-CreateTimer@ThreadPoolTimer@Threading@System@Windows@winrt@@SA@AEBUTimerElapsedHandler@2345@AEB.c)
 *     ??0implements_delegate_base@impl@winrt@@QEAA@XZ @ 0x1802921A4 (--0implements_delegate_base@impl@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     _Init_thread_footer @ 0x1802D5898 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1802D5900 (_Init_thread_header.c)
 *     ?SnapFlyout_StartDismissTimer@SnapFlyoutTelemetry@@SAXXZ @ 0x180590F20 (-SnapFlyout_StartDismissTimer@SnapFlyoutTelemetry@@SAXXZ.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall SnapFlyoutHost::StartDismissTimer(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  _QWORD *v5; // rdx
  __int64 *Timer; // rax
  _BYTE v7[8]; // [rsp+20h] [rbp-18h] BYREF
  char *v8; // [rsp+28h] [rbp-10h]
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF
  __int64 v10; // [rsp+58h] [rbp+20h] BYREF
  _QWORD *v11; // [rsp+60h] [rbp+28h] BYREF
  __int64 v12; // [rsp+68h] [rbp+30h] BYREF

  v10 = a2;
  SnapFlyoutTelemetry::SnapFlyout_StartDismissTimer();
  winrt::impl::root_implements<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSetting,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeTelemetryDataProvider,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSettingTester>::get_weak<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting>(
    a1,
    &v9);
  v3 = v9;
  v9 = 0LL;
  v10 = v3;
  v8 = (char *)operator new(0x18uLL);
  winrt::impl::implements_delegate_base::implements_delegate_base((winrt::impl::implements_delegate_base *)(v8 + 8));
  v4 = v10;
  v10 = 0LL;
  v5[2] = v4;
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *v5 = off_18072E5F0;
  v11 = v5;
  lambda_00799cc444f9312ab8cc556666836ecb_::__lambda_00799cc444f9312ab8cc556666836ecb_(&v10);
  if ( v9 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v9);
  if ( dword_18089E4D0 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 16LL) )
  {
    Init_thread_header(&dword_18089E4D0);
    if ( dword_18089E4D0 == -1 )
    {
      SnapFlyoutHost::TryGetCustomDuration(&qword_18089E4D8, L"SFDismissDelay", 200LL);
      Init_thread_footer(&dword_18089E4D0);
    }
  }
  v12 = 10000 * qword_18089E4D8;
  Timer = (__int64 *)winrt::Windows::System::Threading::ThreadPoolTimer::CreateTimer(
                       (__int64)v7,
                       (__int64)&v11,
                       (__int64)&v12);
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)(a1 + 64), Timer);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v7);
  if ( v11 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v11);
}
