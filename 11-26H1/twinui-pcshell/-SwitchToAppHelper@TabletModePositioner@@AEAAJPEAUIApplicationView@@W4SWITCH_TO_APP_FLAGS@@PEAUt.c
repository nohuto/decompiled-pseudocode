/*
 * XREFs of ?SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUtagRECT@@PEA_N@Z @ 0x18051D5D8
 * Callers:
 *     ?ControlGained@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x1805168F0 (-ControlGained@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknow.c)
 *     ?ControlGainedForActivation@TabletModePositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x180516F40 (-ControlGainedForActivation@TabletModePositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_.c)
 *     ?ForegroundViewChanged@TabletModePositioner@@AEAAJPEAUIApplicationView@@_NPEA_N@Z @ 0x180517B08 (-ForegroundViewChanged@TabletModePositioner@@AEAAJPEAUIApplicationView@@_NPEA_N@Z.c)
 *     ?InitializePosition@TabletModePositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x180519020 (-InitializePosition@TabletModePositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresenta.c)
 *     ?SetViewStateForDesiredAppState@TabletModePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_DESIRED_STATE@@@Z @ 0x18051AA10 (-SetViewStateForDesiredAppState@TabletModePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_D.c)
 *     ?ViewRestored@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@TabletModeTraceLogging@@@Z @ 0x18051E4D8 (-ViewRestored@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@Tab.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetViewLayoutBehaviorFlags@@YAJPEAUIApplicationView@@PEAW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z @ 0x1804BC870 (-GetViewLayoutBehaviorFlags@@YAJPEAUIApplicationView@@PEAW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z.c)
 *     ?IsLauncherVisibleOnMonitor@ImmersiveMultimonHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveLauncher@@PEA_N@Z @ 0x1804E251C (-IsLauncherVisibleOnMonitor@ImmersiveMultimonHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveLauncher@@P.c)
 *     ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x180515B74 (-ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z.c)
 *     ?InitLayoutOperationHelper@TabletModePositioner@@AEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x180518C04 (-InitLayoutOperationHelper@TabletModePositioner@@AEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TabletModePositioner::SwitchToAppHelper(
        __int64 a1,
        struct IApplicationView *a2,
        unsigned int a3,
        __int64 a4,
        void *ppvOut)
{
  _BYTE *v9; // rsi
  int ViewLayoutBehaviorFlags; // eax
  unsigned int v11; // ebx
  bool v13; // bl
  HRESULT v14; // eax
  __int64 v15; // rdx
  bool *v16; // r9
  int IsLauncherVisibleOnMonitor; // eax
  int inited; // eax
  __int64 v19; // rdx
  int v20; // [rsp+30h] [rbp-10h] BYREF
  struct IUnknown *v21; // [rsp+38h] [rbp-8h] BYREF
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
  if ( (a3 & 4) != 0
    || (*(unsigned int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 248) + 80LL))(*(_QWORD *)(a1 + 248), 1LL) <= 1
    || v13 )
  {
    v20 = 0;
    (*(void (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 432) + 40LL))(*(_QWORD *)(a1 + 432), &v20);
    LOBYTE(ppvOut) = 0;
    IsLauncherVisibleOnMonitor = ImmersiveMultimonHelpers::IsLauncherVisibleOnMonitor(
                                   *(IUnknown **)(a1 + 16),
                                   0LL,
                                   (struct IImmersiveLauncher *)&ppvOut,
                                   v16);
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
    else if ( v20 )
    {
      a3 |= 8u;
    }
    v21 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v21);
    inited = TabletModePositioner::InitLayoutOperationHelper(
               (IUnknown *)a1,
               &CLSID_AppSwitchOperation,
               &GUID_b3b709e2_bf68_4d75_b725_6b7d34fa01d3,
               (void **)&v21);
    v11 = inited;
    if ( inited >= 0 )
    {
      inited = ((__int64 (__fastcall *)(struct IUnknown *, struct IApplicationView *, _QWORD))v21->lpVtbl[1].Release)(
                 v21,
                 a2,
                 a3);
      v11 = inited;
      if ( inited >= 0 )
      {
        inited = TabletModePositioner::ApplyLayoutOperationHelper((TabletModePositioner *)a1, v21);
        v11 = inited;
        if ( inited >= 0 )
        {
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v21);
          return 0LL;
        }
        v19 = 2658LL;
      }
      else
      {
        v19 = 2657LL;
      }
    }
    else
    {
      v19 = 2656LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)inited);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v21);
    return v11;
  }
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
  v14 = IUnknown_QueryService(
          *(IUnknown **)(a1 + 16),
          &GUID_373e56cf_0a1b_4b4a_a1a4_a46b25ffd7e3,
          &GUID_373e56cf_0a1b_4b4a_a1a4_a46b25ffd7e3,
          &ppvOut);
  v11 = v14;
  if ( v14 < 0 )
  {
    v15 = 2634LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v14);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
    return v11;
  }
  v14 = (*(__int64 (__fastcall **)(void *, struct IApplicationView *, _QWORD, __int64))(*(_QWORD *)ppvOut + 56LL))(
          ppvOut,
          a2,
          *(_QWORD *)(a1 + 248),
          a4);
  v11 = v14;
  if ( v14 < 0 )
  {
    v15 = 2635LL;
    goto LABEL_17;
  }
  if ( v9 )
    *v9 = 1;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
  return 0LL;
}
