/*
 * XREFs of ?PrepareTaggingInfoForApp@CAppArrangementSingleTransitionTarget@@UEAAJPEAUIAppLayoutOperationItem@@PEAUITemporaryAppVisual@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1804D2A20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003CAAC (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18005556C (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     ?_AdjustWindowForGhost@CAppTransitionTargetBase@@IEAAJPEAUIAppLayoutOperationItem@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@PEA_N@Z @ 0x1804D339C (-_AdjustWindowForGhost@CAppTransitionTargetBase@@IEAAJPEAUIAppLayoutOperationItem@@PEAUIImmersiv.c)
 *     ?_GetSpecialTransitionInfo@CAppTransitionTargetBase@@IEAA?AW4AppTransitionTargetSpecialFlags@@PEAUIApplicationView@@@Z @ 0x1804D35A4 (-_GetSpecialTransitionInfo@CAppTransitionTargetBase@@IEAA-AW4AppTransitionTargetSpecialFlags@@PE.c)
 *     ?_IsDragVisual@CAppArrangementSingleTransitionTarget@@AEBA_NXZ @ 0x1804D362C (-_IsDragVisual@CAppArrangementSingleTransitionTarget@@AEBA_NXZ.c)
 *     ?_PrepareTaggingForDelayedStoryboard@CAppArrangementSingleTransitionTarget@@AEAAXPEAUIAppLayoutOperationItem@@PEAUITemporaryAppVisual@@@Z @ 0x1804D3650 (-_PrepareTaggingForDelayedStoryboard@CAppArrangementSingleTransitionTarget@@AEAAXPEAUIAppLayoutO.c)
 *     ?_PrepareTaggingForImmediateStoryboard@CAppArrangementSingleTransitionTarget@@AEAAXPEAUIAppLayoutOperationItem@@PEAUITemporaryAppVisual@@@Z @ 0x1804D383C (-_PrepareTaggingForImmediateStoryboard@CAppArrangementSingleTransitionTarget@@AEAAXPEAUIAppLayou.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAppArrangementSingleTransitionTarget::PrepareTaggingInfoForApp(
        CAppArrangementSingleTransitionTarget *this,
        struct IAppLayoutOperationItem *a2,
        struct ITemporaryAppVisual *a3,
        struct IImmersiveApplicationManagerSafeForSyncCallouts *a4)
{
  __int64 (__fastcall *v8)(struct IAppLayoutOperationItem *, GUID *, __int64 *); // rbx
  __int64 *v9; // rax
  int v10; // eax
  struct IApplicationView *v11; // rdx
  unsigned int v12; // ebx
  __int64 WindowForView; // rbx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  struct ITemporaryAppVisual *v17; // r8
  int v18; // eax
  __int128 v19; // xmm0
  int v20; // ecx
  int v21; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  bool v24; // [rsp+50h] [rbp+8h] BYREF
  ApplicationViewHelpers *v25; // [rsp+58h] [rbp+10h] BYREF

  memset_0((char *)this + 44, 0, 0x5CuLL);
  v25 = 0LL;
  *((_DWORD *)this + 10) = 4095;
  v8 = *(__int64 (__fastcall **)(struct IAppLayoutOperationItem *, GUID *, __int64 *))(*(_QWORD *)a2 + 32LL);
  v9 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)&v25);
  v10 = v8(a2, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v9);
  v12 = v10;
  if ( v10 >= 0 )
  {
    WindowForView = ApplicationViewHelpers::GetWindowForView(
                      (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v25,
                      v11);
    if ( WindowForView )
    {
      if ( a3 )
        *((_DWORD *)this + 68) = (*(__int64 (__fastcall **)(struct ITemporaryAppVisual *))(*(_QWORD *)a3 + 32LL))(a3);
      v14 = *(_QWORD *)this;
      *((_QWORD *)this + 7) = WindowForView;
      if ( (*(unsigned __int8 (__fastcall **)(CAppArrangementSingleTransitionTarget *))(v14 + 72))(this) )
      {
        if ( a3 )
        {
          if ( CAppArrangementSingleTransitionTarget::_IsDragVisual(this) )
          {
            v15 = (*(__int64 (__fastcall **)(struct ITemporaryAppVisual *))(*(_QWORD *)a3 + 56LL))(a3);
            if ( v15 )
            {
              v16 = *((_QWORD *)this + 7);
              if ( v16 != v15 )
              {
                *((_QWORD *)this + 35) = v16;
                *((_QWORD *)this + 7) = v15;
              }
            }
          }
        }
      }
      (*(void (__fastcall **)(CAppArrangementSingleTransitionTarget *, struct IAppLayoutOperationItem *, struct ITemporaryAppVisual *, struct IImmersiveApplicationManagerSafeForSyncCallouts *))(*(_QWORD *)this + 64LL))(
        this,
        a2,
        a3,
        a4);
      v18 = *((_DWORD *)this + 42);
      if ( v18 == 67 )
      {
        CAppArrangementSingleTransitionTarget::_PrepareTaggingForImmediateStoryboard(this, a2, a3);
      }
      else if ( v18 == 68 )
      {
        CAppArrangementSingleTransitionTarget::_PrepareTaggingForDelayedStoryboard(this, a2, v17);
      }
      v24 = 0;
      if ( CAppTransitionTargetBase::_AdjustWindowForGhost(this, a2, v17, &v24) >= 0
        && v24
        && *((_DWORD *)this + 42) == 68 )
      {
        v19 = *(_OWORD *)((char *)this + 188);
        *(_OWORD *)((char *)this + 72) = v19;
        v20 = *((_DWORD *)this + 19);
        v21 = *((_DWORD *)this + 18);
        *(_OWORD *)((char *)this + 88) = v19;
        *((_DWORD *)this + 18) = 0;
        *((_DWORD *)this + 20) -= v21;
        *((_DWORD *)this + 21) -= v20;
        *((_DWORD *)this + 19) -= v20;
      }
      if ( (CAppTransitionTargetBase::_GetSpecialTransitionInfo(this, v25) & 2) != 0 )
        *((_DWORD *)this + 11) |= 0x4000u;
    }
    v12 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1D7,
      (int)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitiontargetmanager.cpp",
      (const char *)(unsigned int)v10);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v25);
  return v12;
}
