/*
 * XREFs of ?SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUtagRECT@@PEA_N@Z @ 0x1804FB6B8
 * Callers:
 *     ?ControlGained@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x1804F51D0 (-ControlGained@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknow.c)
 *     ?ControlGainedForActivation@TabletModePositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1804F5830 (-ControlGainedForActivation@TabletModePositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_.c)
 *     ?ForegroundViewChanged@TabletModePositioner@@AEAAJPEAUIApplicationView@@_NPEA_N@Z @ 0x1804F63C8 (-ForegroundViewChanged@TabletModePositioner@@AEAAJPEAUIApplicationView@@_NPEA_N@Z.c)
 *     ?InitializePosition@TabletModePositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x1804F7860 (-InitializePosition@TabletModePositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresenta.c)
 *     ?SetViewStateForDesiredAppState@TabletModePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_DESIRED_STATE@@@Z @ 0x1804F8C80 (-SetViewStateForDesiredAppState@TabletModePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_D.c)
 *     ?ViewRestored@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@TabletModeTraceLogging@@@Z @ 0x1804FC564 (-ViewRestored@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@Tab.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetViewLayoutBehaviorFlags@@YAJPEAUIApplicationView@@PEAW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z @ 0x1804AAD7C (-GetViewLayoutBehaviorFlags@@YAJPEAUIApplicationView@@PEAW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z.c)
 *     ?IsLauncherVisibleOnMonitor@ImmersiveMultimonHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveLauncher@@PEA_N@Z @ 0x1804D02AC (-IsLauncherVisibleOnMonitor@ImmersiveMultimonHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveLauncher@@P.c)
 *     ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x1804F4474 (-ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z.c)
 *     ?InitLayoutOperationHelper@TabletModePositioner@@AEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1804F7454 (-InitLayoutOperationHelper@TabletModePositioner@@AEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TabletModePositioner::SwitchToAppHelper(
        __int64 a1,
        struct IApplicationView *a2,
        unsigned int a3,
        __int64 a4,
        void *ppvOut)
{
  _BYTE *v9; // rbx
  int ViewLayoutBehaviorFlags; // eax
  unsigned int v11; // esi
  bool v13; // si
  HRESULT v14; // eax
  unsigned int v15; // edi
  __int64 v16; // rdx
  bool *v17; // r9
  int IsLauncherVisibleOnMonitor; // eax
  int inited; // eax
  unsigned int v20; // ebx
  __int64 v21; // rdx
  int v22; // [rsp+30h] [rbp-10h] BYREF
  struct IUnknown *v23; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]

  v9 = ppvOut;
  if ( ppvOut )
    *(_BYTE *)ppvOut = 0;
  LODWORD(ppvOut) = 0;
  ViewLayoutBehaviorFlags = GetViewLayoutBehaviorFlags(a2, (enum APP_LAYOUT_ITEM_BEHAVIOR_FLAGS *)&ppvOut);
  v11 = ViewLayoutBehaviorFlags;
  if ( ViewLayoutBehaviorFlags < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA40,
      (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)ViewLayoutBehaviorFlags);
    return v11;
  }
  v13 = (*(unsigned int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 248) + 88LL))(*(_QWORD *)(a1 + 248), 2LL) == 1
     && ((unsigned __int8)ppvOut & 2) != 0;
  if ( (a3 & 4) == 0
    && (*(unsigned int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 248) + 80LL))(*(_QWORD *)(a1 + 248), 1LL) > 1
    && !v13 )
  {
    ppvOut = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
    v14 = IUnknown_QueryService(
            *(IUnknown **)(a1 + 16),
            &GUID_373e56cf_0a1b_4b4a_a1a4_a46b25ffd7e3,
            &GUID_373e56cf_0a1b_4b4a_a1a4_a46b25ffd7e3,
            &ppvOut);
    v15 = v14;
    if ( v14 < 0 )
    {
      v16 = 2634LL;
LABEL_16:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v14);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
      return v15;
    }
    v14 = (*(__int64 (__fastcall **)(void *, struct IApplicationView *, _QWORD, __int64))(*(_QWORD *)ppvOut + 56LL))(
            ppvOut,
            a2,
            *(_QWORD *)(a1 + 248),
            a4);
    v15 = v14;
    if ( v14 < 0 )
    {
      v16 = 2635LL;
      goto LABEL_16;
    }
    if ( v9 )
      *v9 = 1;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
    return 0LL;
  }
  v22 = 0;
  (*(void (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 432) + 40LL))(*(_QWORD *)(a1 + 432), &v22);
  LOBYTE(ppvOut) = 0;
  IsLauncherVisibleOnMonitor = ImmersiveMultimonHelpers::IsLauncherVisibleOnMonitor(
                                 *(IUnknown **)(a1 + 16),
                                 0LL,
                                 (struct IImmersiveLauncher *)&ppvOut,
                                 v17);
  if ( IsLauncherVisibleOnMonitor < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xB7A,
      (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)IsLauncherVisibleOnMonitor);
  if ( (_BYTE)ppvOut )
  {
    a3 |= 0x18u;
  }
  else if ( v22 )
  {
    a3 |= 8u;
  }
  v23 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v23);
  inited = TabletModePositioner::InitLayoutOperationHelper(
             (IUnknown *)a1,
             &CLSID_AppSwitchOperation,
             &GUID_b3b709e2_bf68_4d75_b725_6b7d34fa01d3,
             (void **)&v23);
  v20 = inited;
  if ( inited < 0 )
  {
    v21 = 2656LL;
LABEL_32:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)inited);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v23);
    return v20;
  }
  inited = ((__int64 (__fastcall *)(struct IUnknown *, struct IApplicationView *, _QWORD))v23->lpVtbl[1].Release)(
             v23,
             a2,
             a3);
  v20 = inited;
  if ( inited < 0 )
  {
    v21 = 2657LL;
    goto LABEL_32;
  }
  inited = TabletModePositioner::ApplyLayoutOperationHelper((TabletModePositioner *)a1, v23);
  v20 = inited;
  if ( inited < 0 )
  {
    v21 = 2658LL;
    goto LABEL_32;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v23);
  return 0LL;
}
