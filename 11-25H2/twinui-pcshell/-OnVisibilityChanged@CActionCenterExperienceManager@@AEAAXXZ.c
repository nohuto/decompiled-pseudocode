/*
 * XREFs of ?OnVisibilityChanged@CActionCenterExperienceManager@@AEAAXXZ @ 0x180197124
 * Callers:
 *     ?OnViewDestroyed@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18035FC50 (-OnViewDestroyed@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewHidden@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18035FD40 (-OnViewHidden@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewShown@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18035FDE0 (-OnViewShown@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?RaisePropertyChangedEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x18002E4D0 (-RaisePropertyChangedEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?Current@ViewCoordinator@Shell@UI@WindowsUdk@winrt@@SA@XZ @ 0x1801972DC (-Current@ViewCoordinator@Shell@UI@WindowsUdk@winrt@@SA@XZ.c)
 *     ?Dismiss@?$consume_Windows_Internal_Shell_CloudDesktop_TransitionScreen_ITransitionScreen@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUTransitionScreenId@TransitionScreen@CloudDesktop@Shell@Internal@Windows@3@AEBW4DismissalReason@567893@@Z @ 0x180197354 (-Dismiss@-$consume_Windows_Internal_Shell_CloudDesktop_TransitionScreen_ITransitionScreen@UITran.c)
 *     ?ReportVisibility@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBW4ViewVisibility@Shell@UI@WindowsUdk@3@@Z @ 0x1801974C0 (-ReportVisibility@-$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@She.c)
 *     ??1Item@AgileRegistrationList@@QEAA@XZ @ 0x180299654 (--1Item@AgileRegistrationList@@QEAA@XZ.c)
 *     ??$com_weak_query@PEAVCActionCenterExperienceManager@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@0@$$QEAPEAVCActionCenterExperienceManager@@@Z @ 0x1802AA378 (--$com_weak_query@PEAVCActionCenterExperienceManager@@@wil@@YA-AV-$com_ptr_t@UIWeakReference@@Ue.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_69007988d7502f280df03ae50b96fe74___ @ 0x18035C754 (Windows--Internal--ComTaskPool--QueueTask__lambda_69007988d7502f280df03ae50b96fe74___.c)
 *     _lambda_774bfa34314c79ae2272b980e777e42b_::_lambda_774bfa34314c79ae2272b980e777e42b_ @ 0x18035CB10 (_lambda_774bfa34314c79ae2272b980e777e42b_--_lambda_774bfa34314c79ae2272b980e777e42b_.c)
 *     ?SetWindowRegion@CActionCenterExperienceManager@@AEAAJXZ @ 0x180360908 (-SetWindowRegion@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CActionCenterExperienceManager::OnVisibilityChanged(CActionCenterExperienceManager *this)
{
  char v2; // di
  int v3; // eax
  int v4; // eax
  _QWORD *v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // r14d
  const char *v11; // r9
  int v12[2]; // [rsp+20h] [rbp-48h]
  _BYTE v14[64]; // [rsp+28h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  BOOL v16; // [rsp+70h] [rbp+8h] BYREF
  CActionCenterExperienceManager *v17; // [rsp+78h] [rbp+10h] BYREF
  __int64 v18; // [rsp+80h] [rbp+18h] BYREF
  __int64 v19; // [rsp+88h] [rbp+20h] BYREF

  if ( *((_DWORD *)this + 42) == 2 )
  {
    v2 = 1;
    LOBYTE(v16) = 1;
    v3 = CActionCenterExperienceManager::SetWindowRegion(this);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x513,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v3);
  }
  else
  {
    v2 = 0;
    LOBYTE(v16) = 0;
  }
  v4 = CActionCenterExperienceManager::RaisePropertyChangedEvent(this, L"Ready", v2);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x517,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
  v19 = 0LL;
  v17 = this;
  v5 = (_QWORD *)wil::com_weak_query<CActionCenterExperienceManager *>(&v18, &v17);
  *(_QWORD *)v12 = *v5;
  v6 = *v5;
  *v5 = 0LL;
  v19 = v6;
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  v7 = lambda_774bfa34314c79ae2272b980e777e42b_::_lambda_774bfa34314c79ae2272b980e777e42b_(v14, this, &v19, &v16);
  v10 = Windows::Internal::ComTaskPool::QueueTask__lambda_69007988d7502f280df03ae50b96fe74___(
          v9,
          v8,
          *((unsigned int *)this + 166),
          v7);
  AgileRegistrationList::Item::~Item((AgileRegistrationList::Item *)v14);
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x533,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v10);
  try
  {
    winrt::WindowsUdk::UI::Shell::ViewCoordinator::Current();
    v16 = v2 == 0;
    LODWORD(v17) = 0;
    winrt::impl::consume_Windows_Internal_Shell_CloudDesktop_TransitionScreen_ITransitionScreen<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen>::Dismiss(
      &v18,
      &v17,
      &v16);
    v16 = v2 == 0;
    winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>::ReportVisibility(
      (char *)this + 800,
      &v16);
    if ( v18 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v18);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x53D,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      v11);
    v6 = *(_QWORD *)v12;
  }
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
}
