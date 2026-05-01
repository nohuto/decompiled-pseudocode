/*
 * XREFs of ?PrepareTaggingInfoForApp@CLauncherAndDefaultSwitchTransitionTarget@@UEAAJPEAUIAppLayoutOperationItem@@PEAUITemporaryAppVisual@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1804E51C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180046480 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180047CDC (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180063200 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?MatchRectAspectRatio@@YAXPEAUtagRECT@@PEBU1@@Z @ 0x1804E2840 (-MatchRectAspectRatio@@YAXPEAUtagRECT@@PEBU1@@Z.c)
 *     ?_AdjustWindowForGhost@CAppTransitionTargetBase@@IEAAJPEAUIAppLayoutOperationItem@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@PEA_N@Z @ 0x1804E57C0 (-_AdjustWindowForGhost@CAppTransitionTargetBase@@IEAAJPEAUIAppLayoutOperationItem@@PEAUIImmersiv.c)
 *     ?_GetDwmTargetFlag@CAppTransitionTargetBase@@IEAAKQEAUHWND__@@_NK@Z @ 0x1804E58AC (-_GetDwmTargetFlag@CAppTransitionTargetBase@@IEAAKQEAUHWND__@@_NK@Z.c)
 *     ?_GetLastActivatedApp@CLauncherAndDefaultSwitchTransitionTarget@@AEAAJPEAPEAUIApplicationView@@@Z @ 0x1804E5920 (-_GetLastActivatedApp@CLauncherAndDefaultSwitchTransitionTarget@@AEAAJPEAPEAUIApplicationView@@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLauncherAndDefaultSwitchTransitionTarget::PrepareTaggingInfoForApp(
        CLauncherAndDefaultSwitchTransitionTarget *this,
        struct IAppLayoutOperationItem *a2,
        struct ITemporaryAppVisual *a3,
        struct IImmersiveApplicationManagerSafeForSyncCallouts *a4)
{
  __int64 (__fastcall *v7)(struct IAppLayoutOperationItem *, GUID *, __int64 *); // rbx
  __int64 *v8; // rax
  int v9; // eax
  struct IApplicationView *v10; // rdx
  unsigned int v11; // ebx
  unsigned int v12; // r14d
  bool v13; // r13
  __int64 WindowForView; // rax
  struct ITemporaryAppVisual *v15; // r8
  HWND *v16; // r12
  _OWORD *v17; // rbx
  __int128 v18; // xmm0
  int v19; // r8d
  int v20; // eax
  CAppTransitionTargetBase *v21; // rcx
  int v22; // eax
  int v23; // ebx
  struct IImmersiveApplicationManagerSafeForSyncCallouts *v24; // r8
  int v25; // eax
  int v26; // ebx
  __int128 v28; // [rsp+30h] [rbp-39h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  struct IUnknown *v30; // [rsp+D0h] [rbp+67h] BYREF
  struct IUnknown *v31; // [rsp+D8h] [rbp+6Fh] BYREF
  struct ITemporaryAppVisual *v32; // [rsp+E0h] [rbp+77h]

  v32 = a3;
  *(_QWORD *)&v28 = 4095LL;
  DWORD2(v28) = 0;
  *(_OWORD *)((char *)this + 40) = v28;
  *(_OWORD *)((char *)this + 56) = 0LL;
  v31 = 0LL;
  *(_OWORD *)((char *)this + 72) = 0LL;
  *(_OWORD *)((char *)this + 88) = 0LL;
  *(_OWORD *)((char *)this + 104) = 0LL;
  *(_OWORD *)((char *)this + 120) = 0LL;
  v7 = *(__int64 (__fastcall **)(struct IAppLayoutOperationItem *, GUID *, __int64 *))(*(_QWORD *)a2 + 32LL);
  v8 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)&v31);
  v9 = v7(a2, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v8);
  v11 = v9;
  if ( v9 >= 0 )
  {
    v12 = 150994944;
    v13 = 0;
    WindowForView = ApplicationViewHelpers::GetWindowForView(
                      (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v31,
                      v10);
    if ( WindowForView )
    {
      v15 = v32;
      v16 = (HWND *)((char *)this + 56);
      *((_QWORD *)this + 7) = WindowForView;
      (*(void (__fastcall **)(CLauncherAndDefaultSwitchTransitionTarget *, struct IAppLayoutOperationItem *, struct ITemporaryAppVisual *, struct IImmersiveApplicationManagerSafeForSyncCallouts *))(*(_QWORD *)this + 64LL))(
        this,
        a2,
        v15,
        a4);
      v17 = (_OWORD *)((char *)this + 72);
      if ( (*(unsigned int (__fastcall **)(struct IAppLayoutOperationItem *))(*(_QWORD *)a2 + 88LL))(a2) )
        v18 = *(_OWORD *)((char *)this + 188);
      else
        v18 = *(_OWORD *)((char *)this + 172);
      *v17 = v18;
      v19 = *((_DWORD *)this + 19);
      v20 = *(_DWORD *)v17;
      *(_OWORD *)((char *)this + 88) = v18;
      *((_DWORD *)this + 20) -= v20;
      *((_DWORD *)this + 21) -= v19;
      *((_DWORD *)this + 19) -= v19;
      *(_DWORD *)v17 = 0;
      MatchRectAspectRatio((struct tagRECT *)((char *)this + 72), (const struct tagRECT *)((char *)this + 88));
      if ( *((_DWORD *)this + 42) == 34
        || *((_DWORD *)this + 42) == 56
        || *((_DWORD *)this + 42) == 57
        || *((_DWORD *)this + 42) == 69 )
      {
        v12 = (*((_DWORD *)this + 39) != 0 ? 151257088 : 150994944) | 0x200000;
        if ( *((_DWORD *)this + 42) != 57 )
          v12 = *((_DWORD *)this + 39) != 0 ? 151257088 : 150994944;
        if ( (*(unsigned int (__fastcall **)(struct IAppLayoutOperationItem *))(*(_QWORD *)a2 + 80LL))(a2)
          || !(*(unsigned int (__fastcall **)(struct IAppLayoutOperationItem *))(*(_QWORD *)a2 + 88LL))(a2) )
        {
          if ( !(*(unsigned int (__fastcall **)(struct IAppLayoutOperationItem *))(*(_QWORD *)a2 + 80LL))(a2)
            || (*(unsigned int (__fastcall **)(struct IAppLayoutOperationItem *))(*(_QWORD *)a2 + 88LL))(a2) )
          {
            if ( (*(unsigned int (__fastcall **)(struct IAppLayoutOperationItem *))(*(_QWORD *)a2 + 80LL))(a2)
              && (*(unsigned int (__fastcall **)(struct IAppLayoutOperationItem *))(*(_QWORD *)a2 + 88LL))(a2) )
            {
              *((_DWORD *)this + 10) = 28;
            }
          }
          else
          {
            v25 = 18;
            if ( *((_DWORD *)this + 42) != 34 )
              v25 = 2;
            *((_DWORD *)this + 10) = v25;
          }
        }
        else
        {
          v30 = 0LL;
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v30);
          CLauncherAndDefaultSwitchTransitionTarget::_GetLastActivatedApp(this, (struct IApplicationView **)&v30);
          if ( *((_BYTE *)this + 152) )
          {
            v22 = 43;
          }
          else if ( *((_DWORD *)this + 42) != 69 || v30 && SHIsSameObject(v30, v31) )
          {
            v22 = 19;
            if ( *((_DWORD *)this + 42) != 34 )
              v22 = 3;
          }
          else
          {
            v22 = 4;
          }
          *((_DWORD *)this + 10) = v22;
          v23 = *((_DWORD *)this + 42);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v30);
          v13 = v23 != 57;
        }
        CAppTransitionTargetBase::_AdjustWindowForGhost(this, a2, v24, 0LL);
        v16 = (HWND *)((char *)this + 56);
      }
      v26 = *((_DWORD *)this + 11) & 0x400000;
      *((_DWORD *)this + 11) = v26 | CAppTransitionTargetBase::_GetDwmTargetFlag(v21, *v16, v13, v12);
    }
    v11 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x11B,
      (int)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitiontargetmanager.cpp",
      (const char *)(unsigned int)v9);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v31);
  return v11;
}
