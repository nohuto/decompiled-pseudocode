/*
 * XREFs of ?ProcessShellViewButtonBoundsChanged@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18023E280
 * Callers:
 *     ?OnMessageHandler@UndockedSearchAppExperienceManager@@AEAAJI_K_J@Z @ 0x18023CDB0 (-OnMessageHandler@UndockedSearchAppExperienceManager@@AEAAJI_K_J@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?Id@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroup@UITaskGroup@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002A6D8 (-Id@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroup@UITaskGroup@TaskGroups@Shell@Internal.c)
 *     ??$UndockedSearchAppExperienceManager_ShellViewButtonBoundsChanged_ProcessPositionSearchAppWindow@AEAJAEAJAEAJAEAJ@SearchAppExperienceManagerTelemetry@@SAXAEAJ000@Z @ 0x180099A90 (--$UndockedSearchAppExperienceManager_ShellViewButtonBoundsChanged_ProcessPositionSearchAppWindo.c)
 *     ??9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800CC1A4 (--9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?GetShellViewButtonBoundsInRawPixels@?$consume_WindowsUdk_UI_Shell_ITaskbarLayout@UITaskbarLayout@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@_KAEBW4ShellView@Shell@UI@WindowsUdk@3@@Z @ 0x1801C6BD8 (-GetShellViewButtonBoundsInRawPixels@-$consume_WindowsUdk_UI_Shell_ITaskbarLayout@UITaskbarLayou.c)
 *     ?PositionSearchAppWindow@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x18023DC7C (-PositionSearchAppWindow@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 *     ?RevokeShellViewButtonBoundsChangedEvent@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18023EC24 (-RevokeShellViewButtonBoundsChangedEvent@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall UndockedSearchAppExperienceManager::ProcessShellViewButtonBoundsChanged(
        UndockedSearchAppExperienceManager *this)
{
  float v2; // xmm0_4
  float v3; // xmm1_4
  HMONITOR v4; // rbx
  float *v5; // rax
  float v6; // xmm2_4
  float v7; // xmm0_4
  float v8; // xmm1_4
  void (__fastcall ***v9)(_QWORD, __int64 *, __int64 *); // [rsp+20h] [rbp-50h] BYREF
  __int64 *v10; // [rsp+28h] [rbp-48h] BYREF
  __int128 v11; // [rsp+30h] [rbp-40h] BYREF
  RECT v12; // [rsp+40h] [rbp-30h] BYREF
  RECT rc; // [rsp+50h] [rbp-20h] BYREF

  v2 = *((float *)this + 32);
  v3 = *((float *)this + 33);
  rc.left = (int)v2;
  rc.top = (int)v3;
  rc.right = (int)(float)(v2 + *((float *)this + 34));
  rc.bottom = (int)(float)(v3 + *((float *)this + 35));
  v4 = MonitorFromRect(&rc, 1u);
  v12 = 0LL;
  (*(void (__fastcall **)(_QWORD, __int64 **))(**((_QWORD **)this + 11) + 80LL))(*((_QWORD *)this + 11), &v10);
  LODWORD(v11) = 1;
  winrt::impl::consume_WindowsUdk_UI_Shell_ITaskbarLayout<winrt::WindowsUdk::UI::Shell::ITaskbarLayout>::GetShellViewButtonBoundsInRawPixels(
    &v10,
    &v9,
    (__int64)v4,
    (unsigned int *)&v11);
  *(_QWORD *)&v11 = 0LL;
  if ( winrt::Windows::Foundation::operator!=(&v9, (void (__fastcall ****)(_QWORD, __int64 *, __int64 *))&v11) )
  {
    v5 = (float *)winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroup<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroup>::Id(
                    (__int64 *)&v9,
                    &v11);
    v6 = v5[1];
    v7 = *v5 + v5[2];
    v8 = v6 + v5[3];
    v12.left = (int)*v5;
    v12.top = (int)v6;
    v12.right = (int)v7;
    v12.bottom = (int)v8;
  }
  SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ShellViewButtonBoundsChanged_ProcessPositionSearchAppWindow<long &,long &,long &,long &>(
    &v12,
    &v12.top,
    &v12.right,
    &v12.bottom);
  if ( !IsRectEmpty(&v12) && !*((_BYTE *)this + 912) )
  {
    UndockedSearchAppExperienceManager::PositionSearchAppWindow(this);
    UndockedSearchAppExperienceManager::RevokeShellViewButtonBoundsChangedEvent(this);
    *((_BYTE *)this + 912) = 1;
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v9);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v10);
}
