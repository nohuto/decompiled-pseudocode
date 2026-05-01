/*
 * XREFs of ?PrepareTaggingInfoForApp@CAppArrangementSingleTransitionTarget@@UEAAJPEAUIAppLayoutOperationItem@@PEAUITemporaryAppVisual@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1804E4E10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180046480 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180047CDC (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ?_AdjustWindowForGhost@CAppTransitionTargetBase@@IEAAJPEAUIAppLayoutOperationItem@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@PEA_N@Z @ 0x1804E57C0 (-_AdjustWindowForGhost@CAppTransitionTargetBase@@IEAAJPEAUIAppLayoutOperationItem@@PEAUIImmersiv.c)
 *     ?_GetSpecialTransitionInfo@CAppTransitionTargetBase@@IEAA?AW4AppTransitionTargetSpecialFlags@@PEAUIApplicationView@@@Z @ 0x1804E59D0 (-_GetSpecialTransitionInfo@CAppTransitionTargetBase@@IEAA-AW4AppTransitionTargetSpecialFlags@@PE.c)
 *     ?_IsDragVisual@CAppArrangementSingleTransitionTarget@@AEBA_NXZ @ 0x1804E5A5C (-_IsDragVisual@CAppArrangementSingleTransitionTarget@@AEBA_NXZ.c)
 *     ?_PrepareTaggingForDelayedStoryboard@CAppArrangementSingleTransitionTarget@@AEAAXPEAUIAppLayoutOperationItem@@PEAUITemporaryAppVisual@@@Z @ 0x1804E5A80 (-_PrepareTaggingForDelayedStoryboard@CAppArrangementSingleTransitionTarget@@AEAAXPEAUIAppLayoutO.c)
 *     ?_PrepareTaggingForImmediateStoryboard@CAppArrangementSingleTransitionTarget@@AEAAXPEAUIAppLayoutOperationItem@@PEAUITemporaryAppVisual@@@Z @ 0x1804E5C7C (-_PrepareTaggingForImmediateStoryboard@CAppArrangementSingleTransitionTarget@@AEAAXPEAUIAppLayou.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAppArrangementSingleTransitionTarget::PrepareTaggingInfoForApp(
        CAppArrangementSingleTransitionTarget *this,
        struct IAppLayoutOperationItem *a2,
        struct ITemporaryAppVisual *a3,
        struct IImmersiveApplicationManagerSafeForSyncCallouts *a4)
{
  __int64 v8; // rax
  __int64 (__fastcall *v9)(struct IAppLayoutOperationItem *, GUID *, __int64 *); // rbx
  __int64 *v10; // rax
  int v11; // eax
  struct IApplicationView *v12; // rdx
  unsigned int v13; // ebx
  __int64 WindowForView; // rbx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  struct ITemporaryAppVisual *v18; // r8
  int v19; // eax
  __int128 v20; // xmm0
  int v21; // ecx
  int v22; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  bool v25; // [rsp+50h] [rbp+8h] BYREF
  ApplicationViewHelpers *v26; // [rsp+58h] [rbp+10h] BYREF

  memset_0((char *)this + 44, 0, 0x5CuLL);
  *((_DWORD *)this + 10) = 4095;
  v8 = *(_QWORD *)a2;
  v26 = 0LL;
  v9 = *(__int64 (__fastcall **)(struct IAppLayoutOperationItem *, GUID *, __int64 *))(v8 + 32);
  v10 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)&v26);
  v11 = v9(a2, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v10);
  v13 = v11;
  if ( v11 >= 0 )
  {
    WindowForView = ApplicationViewHelpers::GetWindowForView(
                      (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v26,
                      v12);
    if ( WindowForView )
    {
      if ( a3 )
        *((_DWORD *)this + 68) = (*(__int64 (__fastcall **)(struct ITemporaryAppVisual *))(*(_QWORD *)a3 + 32LL))(a3);
      v15 = *(_QWORD *)this;
      *((_QWORD *)this + 7) = WindowForView;
      if ( (*(unsigned __int8 (__fastcall **)(CAppArrangementSingleTransitionTarget *))(v15 + 72))(this) )
      {
        if ( a3 )
        {
          if ( CAppArrangementSingleTransitionTarget::_IsDragVisual(this) )
          {
            v16 = (*(__int64 (__fastcall **)(struct ITemporaryAppVisual *))(*(_QWORD *)a3 + 56LL))(a3);
            if ( v16 )
            {
              v17 = *((_QWORD *)this + 7);
              if ( v17 != v16 )
              {
                *((_QWORD *)this + 35) = v17;
                *((_QWORD *)this + 7) = v16;
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
      v19 = *((_DWORD *)this + 42);
      if ( v19 == 67 )
      {
        CAppArrangementSingleTransitionTarget::_PrepareTaggingForImmediateStoryboard(this, a2, a3);
      }
      else if ( v19 == 68 )
      {
        CAppArrangementSingleTransitionTarget::_PrepareTaggingForDelayedStoryboard(this, a2, v18);
      }
      v25 = 0;
      if ( CAppTransitionTargetBase::_AdjustWindowForGhost(this, a2, v18, &v25) >= 0
        && v25
        && *((_DWORD *)this + 42) == 68 )
      {
        v20 = *(_OWORD *)((char *)this + 188);
        *(_OWORD *)((char *)this + 72) = v20;
        v21 = *((_DWORD *)this + 19);
        v22 = *((_DWORD *)this + 18);
        *(_OWORD *)((char *)this + 88) = v20;
        *((_DWORD *)this + 20) -= v22;
        *((_DWORD *)this + 21) -= v21;
        *((_DWORD *)this + 19) -= v21;
        *((_DWORD *)this + 18) = 0;
      }
      if ( (CAppTransitionTargetBase::_GetSpecialTransitionInfo(this, v26) & 2) != 0 )
        *((_DWORD *)this + 11) |= 0x4000u;
    }
    v13 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1D7,
      (int)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitiontargetmanager.cpp",
      (const char *)(unsigned int)v11);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v26);
  return v13;
}
