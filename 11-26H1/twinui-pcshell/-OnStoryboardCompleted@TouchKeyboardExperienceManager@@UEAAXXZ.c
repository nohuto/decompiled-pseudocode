/*
 * XREFs of ?OnStoryboardCompleted@TouchKeyboardExperienceManager@@UEAAXXZ @ 0x1801E2E50
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180054B64 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?load@?$_Atomic_storage@I$03@std@@QEBAIW4memory_order@2@@Z @ 0x1800E680C (-load@-$_Atomic_storage@I$03@std@@QEBAIW4memory_order@2@@Z.c)
 *     ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x1801451A4 (-FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV-$shared_ptr@UKBViewInfo@@@std@@@Z.c)
 *     ?UpdateShellRunningAnimationInShellPreference@TouchKeyboardExperienceManager@@AEAAXIPEBG_N@Z @ 0x1801E2FE8 (-UpdateShellRunningAnimationInShellPreference@TouchKeyboardExperienceManager@@AEAAXIPEBG_N@Z.c)
 *     ??$StoryboardCompleted@AEAU?$atomic@I@std@@_N_N@TouchKeyboardExperienceTelemetryLogger@@SAXAEAU?$atomic@I@std@@$$QEA_N1@Z @ 0x1801E31F4 (--$StoryboardCompleted@AEAU-$atomic@I@std@@_N_N@TouchKeyboardExperienceTelemetryLogger@@SAXAEAU-.c)
 *     ?TouchGesturesEnabled@?$consume_Windows_UI_Internal_Input_IShellGesturesController@UIShellGesturesController@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@_N@Z @ 0x1801FB910 (-TouchGesturesEnabled@-$consume_Windows_UI_Internal_Input_IShellGesturesController@UIShellGestur.c)
 *     ?FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@AEBU2@@Z @ 0x18028B4FC (-FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@AEBU2@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TouchKeyboardExperienceManager::OnStoryboardCompleted(TouchKeyboardExperienceManager *this)
{
  char v2; // al
  RTL_SRWLOCK *v3; // rsi
  unsigned int *v4; // r14
  int v5; // eax
  int v6; // eax
  unsigned int v7; // eax
  char v8; // al
  unsigned int v9; // eax
  std::_Ref_count_base *v10[2]; // [rsp+20h] [rbp-20h] BYREF
  struct tagRECT v11; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v13; // [rsp+60h] [rbp+20h] BYREF
  char v14; // [rsp+68h] [rbp+28h] BYREF

  v2 = *((_BYTE *)this + 752);
  *((_BYTE *)this + 752) = 0;
  if ( v2 )
  {
    *(_OWORD *)v10 = 0LL;
    v3 = (RTL_SRWLOCK *)((char *)this - 184);
    v4 = (unsigned int *)((char *)this + 748);
    v5 = std::_Atomic_storage<unsigned int,4>::load((unsigned int *)this + 187);
    if ( (int)TouchKeyboardExperienceManager::FindViewInfo(v3, v5, v10) < 0 )
    {
      if ( v10[1] )
        std::_Ref_count_base::_Decref(v10[1]);
      return;
    }
    if ( *((_QWORD *)this + 81) )
    {
      winrt::impl::consume_Windows_UI_Internal_Input_IShellGesturesController<winrt::Windows::UI::Internal::Input::IShellGesturesController>::TouchGesturesEnabled((char *)this + 648);
      v13 = 0LL;
      winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 81, &v13);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v13);
    }
    v11 = *(struct tagRECT *)((char *)v10[0] + 120);
    v6 = TouchKeyboardExperienceManager::FireInputPaneShowingEvent(
           (TouchKeyboardExperienceManager *)v3,
           *((_DWORD *)v10[0] + 26),
           &v11,
           (const struct tagRECT *)((char *)v10[0] + 136));
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x448,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v6);
    LOBYTE(v13) = 0;
    v14 = 1;
    TouchKeyboardExperienceTelemetryLogger::StoryboardCompleted<std::atomic<unsigned int> &,bool,bool>(v4, &v14, &v13);
    v7 = std::_Atomic_storage<unsigned int,4>::load(v4);
    TouchKeyboardExperienceManager::UpdateShellRunningAnimationInShellPreference(
      (TouchKeyboardExperienceManager *)v3,
      v7,
      L"Show",
      0);
    if ( v10[1] )
      std::_Ref_count_base::_Decref(v10[1]);
  }
  v8 = *((_BYTE *)this + 753);
  *((_BYTE *)this + 753) = 0;
  if ( v8 )
  {
    LOBYTE(v13) = 0;
    v14 = 0;
    TouchKeyboardExperienceTelemetryLogger::StoryboardCompleted<std::atomic<unsigned int> &,bool,bool>(
      (char *)this + 748,
      &v14,
      &v13);
    v9 = std::_Atomic_storage<unsigned int,4>::load((unsigned int *)this + 187);
    TouchKeyboardExperienceManager::UpdateShellRunningAnimationInShellPreference(
      (TouchKeyboardExperienceManager *)((char *)this - 184),
      v9,
      L"Hide",
      0);
  }
}
