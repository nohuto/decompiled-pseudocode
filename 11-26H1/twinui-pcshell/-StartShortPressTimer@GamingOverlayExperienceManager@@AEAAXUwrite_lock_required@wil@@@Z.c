/*
 * XREFs of ?StartShortPressTimer@GamingOverlayExperienceManager@@AEAAXUwrite_lock_required@wil@@@Z @ 0x180354548
 * Callers:
 *     ?HandleTrackedButtonChange@GamingOverlayExperienceManager@@AEAAXUwrite_lock_required@wil@@_N_K@Z @ 0x18034B2C8 (-HandleTrackedButtonChange@GamingOverlayExperienceManager@@AEAAXUwrite_lock_required@wil@@_N_K@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180054B64 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?CreateTimer@ThreadPoolTimer@Threading@System@Windows@winrt@@SA@AEBUTimerElapsedHandler@2345@AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z @ 0x18007E418 (-CreateTimer@ThreadPoolTimer@Threading@System@Windows@winrt@@SA@AEBUTimerElapsedHandler@2345@AEB.c)
 *     ??0_lambda_2a327ee47ed75e02b1e43d19de60d1c4_@@QEAA@AEBQEAVJointResize@@AEBQ81@EAAJPEBUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@UArrangedWindowJointResizeCompletedEventArgs@3456@@Z@Z @ 0x18028DC38 (--0_lambda_2a327ee47ed75e02b1e43d19de60d1c4_@@QEAA@AEBQEAVJointResize@@AEBQ81@EAAJPEBUIWindowMan.c)
 *     ??$?0V_lambda_731ff91df660fe6a6a02c254355fca9f_@@@TimerElapsedHandler@Threading@System@Windows@winrt@@QEAA@V_lambda_731ff91df660fe6a6a02c254355fca9f_@@@Z @ 0x18033AC3C (--$-0V_lambda_731ff91df660fe6a6a02c254355fca9f_@@@TimerElapsedHandler@Threading@System@Windows@w.c)
 *     ?StopShortPressTimer@GamingOverlayExperienceManager@@AEAAXUwrite_lock_required@wil@@@Z @ 0x18035546C (-StopShortPressTimer@GamingOverlayExperienceManager@@AEAAXUwrite_lock_required@wil@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall GamingOverlayExperienceManager::StartShortPressTimer(__int64 a1)
{
  __int64 v2; // rax
  __int64 *Timer; // rax
  __int64 v4[2]; // [rsp+20h] [rbp-19h] BYREF
  __int128 v5; // [rsp+30h] [rbp-9h] BYREF
  __int64 v6; // [rsp+40h] [rbp+7h] BYREF
  __int128 v7; // [rsp+50h] [rbp+17h] BYREF
  __int64 v8; // [rsp+60h] [rbp+27h]
  _BYTE v9[32]; // [rsp+70h] [rbp+37h] BYREF

  GamingOverlayExperienceManager::StopShortPressTimer(a1);
  v6 = 10000LL * *(_QWORD *)(a1 + 392);
  *(_QWORD *)&v5 = GamingOverlayExperienceManager::OnShortPressTimer;
  DWORD2(v5) = 0;
  v4[0] = a1;
  v2 = _lambda_2a327ee47ed75e02b1e43d19de60d1c4_::_lambda_2a327ee47ed75e02b1e43d19de60d1c4_((__int64)v9, v4, &v5);
  v7 = *(_OWORD *)v2;
  v8 = *(_QWORD *)(v2 + 16);
  winrt::Windows::System::Threading::TimerElapsedHandler::TimerElapsedHandler(v4, &v7);
  Timer = (__int64 *)winrt::Windows::System::Threading::ThreadPoolTimer::CreateTimer(
                       (__int64)&v5,
                       (__int64)v4,
                       (__int64)&v6);
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)(a1 + 320), Timer);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v5);
  if ( v4[0] )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v4);
  *(_BYTE *)(a1 + 328) = 1;
}
