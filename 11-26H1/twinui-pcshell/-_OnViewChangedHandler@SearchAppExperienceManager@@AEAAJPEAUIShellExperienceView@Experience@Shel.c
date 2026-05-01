/*
 * XREFs of ?_OnViewChangedHandler@SearchAppExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x1803A4C70
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z @ 0x1800B6514 (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z.c)
 *     ??$InvokeAll@PEAVCortanaSharedExperienceManager@@$$T@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVCortanaSharedExperienceManager@@$$T@Z @ 0x18036FEE0 (--$InvokeAll@PEAVCortanaSharedExperienceManager@@$$T@-$EventSource@U-$ITypedEventHandler@PEAVCor.c)
 *     ?_ApplyPriorityBoostIfNeeded@SearchAppExperienceManager@@AEAAJXZ @ 0x1803A3FD8 (-_ApplyPriorityBoostIfNeeded@SearchAppExperienceManager@@AEAAJXZ.c)
 *     ?_ApplyPriorityUnboostIfNeeded@SearchAppExperienceManager@@AEAAJXZ @ 0x1803A40D0 (-_ApplyPriorityUnboostIfNeeded@SearchAppExperienceManager@@AEAAJXZ.c)
 *     ?_CancelDeferredSuspensionTimer@SearchAppExperienceManager@@AEAAJXZ @ 0x1803A41A4 (-_CancelDeferredSuspensionTimer@SearchAppExperienceManager@@AEAAJXZ.c)
 *     ?_OnViewCreated@SearchAppExperienceManager@@AEAAJXZ @ 0x1803A4E18 (-_OnViewCreated@SearchAppExperienceManager@@AEAAJXZ.c)
 *     ?_UnregisterViewPresentationChanged@SearchAppExperienceManager@@AEAAJXZ @ 0x1803A58E8 (-_UnregisterViewPresentationChanged@SearchAppExperienceManager@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SearchAppExperienceManager::_OnViewChangedHandler(
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
    v7 = 953LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
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
        v7 = 959LL;
        goto LABEL_3;
      }
      v12 = ExperienceManagerUtils::PostToUIThread(this[51], (struct IUnknown *)this, (void *)v18);
      v13 = v12;
      if ( v12 < 0 )
      {
        v14 = 991LL;
        goto LABEL_26;
      }
      return 0;
    case 1:
      ++*((_DWORD *)this + 135);
      v12 = SearchAppExperienceManager::_ApplyPriorityBoostIfNeeded((SearchAppExperienceManager *)this);
      v13 = v12;
      if ( v12 < 0 )
      {
        v14 = 998LL;
        goto LABEL_26;
      }
      return 0;
    case 2:
      v11 = *((_DWORD *)this + 135);
      if ( v11 )
        *((_DWORD *)this + 135) = v11 - 1;
      v12 = SearchAppExperienceManager::_ApplyPriorityUnboostIfNeeded((SearchAppExperienceManager *)this);
      v13 = v12;
      if ( v12 < 0 )
      {
        v14 = 1010LL;
LABEL_26:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v14,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
          (const char *)(unsigned int)v12);
        return v13;
      }
      return 0;
    case 5:
      return SearchAppExperienceManager::_OnViewCreated((SearchAppExperienceManager *)this);
    case 6:
      v9 = SearchAppExperienceManager::_CancelDeferredSuspensionTimer(this);
      if ( v9 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x409,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
          (const char *)(unsigned int)v9);
      v10 = SearchAppExperienceManager::_UnregisterViewPresentationChanged((SearchAppExperienceManager *)this);
      if ( v10 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x40A,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
          (const char *)(unsigned int)v10);
      Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<CortanaSharedExperienceManager *,std::nullptr_t>(
        (__int64)(this + 12),
        (__int64)this);
      break;
  }
  return 0LL;
}
