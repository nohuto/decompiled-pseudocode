/*
 * XREFs of ?_OnViewChangedHandler@CortanaSharedExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x1803701F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z @ 0x1800FC868 (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z.c)
 *     ??$InvokeAll@PEAVCortanaSharedExperienceManager@@$$T@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVCortanaSharedExperienceManager@@$$T@Z @ 0x180368B8C (--$InvokeAll@PEAVCortanaSharedExperienceManager@@$$T@-$EventSource@U-$ITypedEventHandler@PEAVCor.c)
 *     ?_ApplyPriorityBoostIfNeeded@CortanaSharedExperienceManager@@AEAAJXZ @ 0x18036F338 (-_ApplyPriorityBoostIfNeeded@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     ?_ApplyPriorityUnboostIfNeeded@CortanaSharedExperienceManager@@AEAAJXZ @ 0x18036F428 (-_ApplyPriorityUnboostIfNeeded@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     ?_CancelDeferredSuspensionTimer@CortanaSharedExperienceManager@@AEAAJXZ @ 0x18036F514 (-_CancelDeferredSuspensionTimer@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     ?_OnViewCreated@CortanaSharedExperienceManager@@AEAAJXZ @ 0x180370394 (-_OnViewCreated@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     ?_UnregisterViewPresentationChanged@CortanaSharedExperienceManager@@AEAAJXZ @ 0x180370E3C (-_UnregisterViewPresentationChanged@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CortanaSharedExperienceManager::_OnViewChangedHandler(
        ExperienceManagerUtils **this,
        struct Windows::Internal::Shell::Experience::IShellExperienceView *a2,
        struct Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg *a3)
{
  __int64 v3; // rax
  int v6; // edi
  __int64 v7; // rdx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v17; // [rsp+40h] [rbp+18h] BYREF
  int v18; // [rsp+48h] [rbp+20h] BYREF

  v3 = *(_QWORD *)a3;
  v17 = 0;
  v6 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg *, int *))(v3 + 48))(
         a3,
         &v17);
  if ( v6 < 0 )
  {
    v7 = 1063LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  switch ( v17 )
  {
    case 0:
      v15 = *(_QWORD *)a3;
      v18 = 0;
      v6 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg *, int *))(v15 + 56))(
             a3,
             &v18);
      if ( v6 < 0 )
      {
        v7 = 1069LL;
        goto LABEL_3;
      }
      v12 = ExperienceManagerUtils::PostToUIThread(this[51], (struct IUnknown *)this, (void *)v18);
      v13 = v12;
      if ( v12 < 0 )
      {
        v14 = 1101LL;
        goto LABEL_26;
      }
      return 0;
    case 1:
      ++*((_DWORD *)this + 133);
      v12 = CortanaSharedExperienceManager::_ApplyPriorityBoostIfNeeded((CortanaSharedExperienceManager *)this);
      v13 = v12;
      if ( v12 < 0 )
      {
        v14 = 1108LL;
        goto LABEL_26;
      }
      return 0;
    case 2:
      v11 = *((_DWORD *)this + 133);
      if ( v11 )
        *((_DWORD *)this + 133) = v11 - 1;
      v12 = CortanaSharedExperienceManager::_ApplyPriorityUnboostIfNeeded((CortanaSharedExperienceManager *)this);
      v13 = v12;
      if ( v12 < 0 )
      {
        v14 = 1120LL;
LABEL_26:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v14,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
          (const char *)(unsigned int)v12);
        return v13;
      }
      return 0;
    case 5:
      return CortanaSharedExperienceManager::_OnViewCreated((CortanaSharedExperienceManager *)this);
    case 6:
      v9 = CortanaSharedExperienceManager::_CancelDeferredSuspensionTimer(this);
      if ( v9 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x47A,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
          (const char *)(unsigned int)v9);
      v10 = CortanaSharedExperienceManager::_UnregisterViewPresentationChanged((CortanaSharedExperienceManager *)this);
      if ( v10 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x47B,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
          (const char *)(unsigned int)v10);
      Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<CortanaSharedExperienceManager *,std::nullptr_t>(
        (__int64)(this + 12),
        (__int64)this);
      break;
  }
  return 0LL;
}
