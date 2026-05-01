/*
 * XREFs of ?_AdjustWindowForGhost@CAppTransitionTargetBase@@IEAAJPEAUIAppLayoutOperationItem@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@PEA_N@Z @ 0x1804E57C0
 * Callers:
 *     ?PrepareTaggingInfoForApp@CAppArrangementSingleTransitionTarget@@UEAAJPEAUIAppLayoutOperationItem@@PEAUITemporaryAppVisual@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1804E4E10 (-PrepareTaggingInfoForApp@CAppArrangementSingleTransitionTarget@@UEAAJPEAUIAppLayoutOperationIte.c)
 *     ?PrepareTaggingInfoForApp@CLauncherAndDefaultSwitchTransitionTarget@@UEAAJPEAUIAppLayoutOperationItem@@PEAUITemporaryAppVisual@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1804E51C0 (-PrepareTaggingInfoForApp@CLauncherAndDefaultSwitchTransitionTarget@@UEAAJPEAUIAppLayoutOperatio.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180046480 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180047CDC (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAppTransitionTargetBase::_AdjustWindowForGhost(
        CAppTransitionTargetBase *this,
        struct IAppLayoutOperationItem *a2,
        struct IImmersiveApplicationManagerSafeForSyncCallouts *a3,
        bool *a4)
{
  __int64 v7; // rax
  __int64 (__fastcall *v8)(struct IAppLayoutOperationItem *, GUID *, __int64 *); // rbx
  __int64 *v9; // rax
  int v10; // eax
  unsigned int v11; // ebx
  struct IApplicationView *v12; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  ApplicationViewHelpers *v15; // [rsp+40h] [rbp+18h] BYREF

  v15 = a3;
  if ( a4 )
    *a4 = 0;
  v7 = *(_QWORD *)a2;
  v15 = 0LL;
  v8 = *(__int64 (__fastcall **)(struct IAppLayoutOperationItem *, GUID *, __int64 *))(v7 + 32);
  v9 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)&v15);
  v10 = v8(a2, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v9);
  v11 = v10;
  if ( v10 >= 0 )
  {
    if ( *((_DWORD *)this + 10) != 4095 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(CAppTransitionTargetBase *, struct IAppLayoutOperationItem *))(*(_QWORD *)this + 80LL))(
             this,
             a2) )
      {
        *((_QWORD *)this + 7) = ApplicationViewHelpers::GetWindowForView(
                                  (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v15,
                                  v12);
        *((_DWORD *)this + 11) = *((_DWORD *)this + 11) & 0xDBBFFFFF | 0x4400000;
        if ( a4 )
          *a4 = 1;
      }
    }
    v11 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF0,
      (int)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitiontargetmanager.cpp",
      (const char *)(unsigned int)v10);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v15);
  return v11;
}
