/*
 * XREFs of ?StartShortPressTimer@GamingOverlayExperienceManager@@AEAAXUwrite_lock_required@wil@@@Z @ 0x18034FD54
 * Callers:
 *     ?HandleTrackedButtonChange@GamingOverlayExperienceManager@@AEAAXUwrite_lock_required@wil@@_N_K@Z @ 0x180347E38 (-HandleTrackedButtonChange@GamingOverlayExperienceManager@@AEAAXUwrite_lock_required@wil@@_N_K@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x1800AA2B4 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?CreateTimer@ThreadPoolTimer@Threading@System@Windows@winrt@@SA@AEBUTimerElapsedHandler@2345@AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z @ 0x1801DEAD0 (-CreateTimer@ThreadPoolTimer@Threading@System@Windows@winrt@@SA@AEBUTimerElapsedHandler@2345@AEB.c)
 *     ??0implements_delegate_base@impl@winrt@@QEAA@XZ @ 0x1802921A4 (--0implements_delegate_base@impl@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     ?StopShortPressTimer@GamingOverlayExperienceManager@@AEAAXUwrite_lock_required@wil@@@Z @ 0x1803506B8 (-StopShortPressTimer@GamingOverlayExperienceManager@@AEAAXUwrite_lock_required@wil@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall GamingOverlayExperienceManager::StartShortPressTimer(__int64 a1)
{
  __int64 v2; // rdx
  __int64 *Timer; // rax
  __int64 v4; // [rsp+20h] [rbp-40h] BYREF
  __int64 v5; // [rsp+28h] [rbp-38h] BYREF
  _BYTE v6[8]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v7; // [rsp+38h] [rbp-28h]
  __int64 v8; // [rsp+48h] [rbp-18h]
  char *v9; // [rsp+50h] [rbp-10h]
  int v10; // [rsp+5Ch] [rbp-4h]

  GamingOverlayExperienceManager::StopShortPressTimer(a1);
  v5 = 10000LL * *(_QWORD *)(a1 + 352);
  *(_QWORD *)&v7 = a1;
  *((_QWORD *)&v7 + 1) = GamingOverlayExperienceManager::OnShortPressTimer;
  LODWORD(v8) = 0;
  HIDWORD(v8) = v10;
  v9 = (char *)operator new(0x28uLL);
  winrt::impl::implements_delegate_base::implements_delegate_base((winrt::impl::implements_delegate_base *)(v9 + 8));
  *(_OWORD *)(v2 + 16) = v7;
  *(_QWORD *)(v2 + 32) = v8;
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)v2 = &winrt::impl::delegate<winrt::Windows::System::Threading::TimerElapsedHandler,_lambda_6c843e279f28a538fde4193809616d7e_>::`vftable';
  v4 = v2;
  Timer = (__int64 *)winrt::Windows::System::Threading::ThreadPoolTimer::CreateTimer(
                       (__int64)v6,
                       (__int64)&v4,
                       (__int64)&v5);
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)(a1 + 280), Timer);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v6);
  if ( v4 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v4);
  *(_BYTE *)(a1 + 288) = 1;
}
