/*
 * XREFs of ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x1804F4474
 * Callers:
 *     ?OnShellHookMessage@TabletModePositioner@@UEAAJ_K_J@Z @ 0x1801C10F0 (-OnShellHookMessage@TabletModePositioner@@UEAAJ_K_J@Z.c)
 *     ?AppToAppSwitchHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@01W4APP_TO_APP_SWITCH_FLAGS@@@Z @ 0x1804F42B8 (-AppToAppSwitchHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_P.c)
 *     ?ApplyLayoutOperation@TabletModePositioner@@UEAAJPEAUIUnknown@@@Z @ 0x1804F4420 (-ApplyLayoutOperation@TabletModePositioner@@UEAAJPEAUIUnknown@@@Z.c)
 *     ?ChangeLayoutEnvironmentHelper@TabletModePositioner@@AEAAJAEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x1804F4EA0 (-ChangeLayoutEnvironmentHelper@TabletModePositioner@@AEAAJAEBULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 *     ?EvictAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z @ 0x1804F628C (-EvictAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z.c)
 *     ?ResizeViewHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@H@Z @ 0x1804F8684 (-ResizeViewHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@H@Z.c)
 *     ?SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUtagRECT@@PEA_N@Z @ 0x1804FB6B8 (-SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUt.c)
 *     ?SwitchToCustomLayoutHelper@TabletModePositioner@@AEAAJPEAUIAppLayout@@W4SwitchToCustomLayoutFlags@@@Z @ 0x1804FB93C (-SwitchToCustomLayoutHelper@TabletModePositioner@@AEAAJPEAUIAppLayout@@W4SwitchToCustomLayoutFla.c)
 *     ?SwitchToEmptyLayoutHelper@TabletModePositioner@@AEAAJW4SwitchToEmptyLayoutFlags@@@Z @ 0x1804FBA04 (-SwitchToEmptyLayoutHelper@TabletModePositioner@@AEAAJW4SwitchToEmptyLayoutFlags@@@Z.c)
 *     ?SwitchToSanitizedAppLayout@TabletModePositioner@@AEAAJW4ViewOperationFlags@@@Z @ 0x1804FBABC (-SwitchToSanitizedAppLayout@TabletModePositioner@@AEAAJW4ViewOperationFlags@@@Z.c)
 *     ?ViewRemoved@TabletModePositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1804FC390 (-ViewRemoved@TabletModePositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18002D82C (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003CAAC (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180048D58 (--0-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18005737C (-Stop@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 *     ?SetAppLayout@TabletModePositioner@@AEAAJPEAUIAppLayout@@@Z @ 0x18007DF10 (-SetAppLayout@TabletModePositioner@@AEAAJPEAUIAppLayout@@@Z.c)
 *     ?IsTabletMode@TabletModePositioner@@AEAA_NXZ @ 0x1801D39FC (-IsTabletMode@TabletModePositioner@@AEAA_NXZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?IsControlledView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x1804AADB0 (-IsControlledView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x1804AAE2C (-IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ??0CAutoAppTransitionRequest@@QEAA@PEAUIAppTransitionManager@@@Z @ 0x1804F3B60 (--0CAutoAppTransitionRequest@@QEAA@PEAUIAppTransitionManager@@@Z.c)
 *     ??1ApplyLayoutOperationHelper@TabletModeTraceLogging@@QEAA@XZ @ 0x1804F3C48 (--1ApplyLayoutOperationHelper@TabletModeTraceLogging@@QEAA@XZ.c)
 *     ??1CAutoAppTransitionRequest@@UEAA@XZ @ 0x1804F3C74 (--1CAutoAppTransitionRequest@@UEAA@XZ.c)
 *     ?CreateAndInitApplicationViewOperation@TabletModePositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewOperation@@@Z @ 0x1804F5F3C (-CreateAndInitApplicationViewOperation@TabletModePositioner@@AEAAJPEAUIApplicationView@@PEAPEAUI.c)
 *     ?HandleFlashDetection@TabletModePositioner@@AEAAJPEAUIAppLayoutOperation@@@Z @ 0x1804F7154 (-HandleFlashDetection@TabletModePositioner@@AEAAJPEAUIAppLayoutOperation@@@Z.c)
 *     ?IsEnabled@TabletModeTelemetry@@SA_NE_K@Z @ 0x1804F7AB8 (-IsEnabled@TabletModeTelemetry@@SA_NE_K@Z.c)
 *     ?NotifyAppLayoutChanged@TabletModePositioner@@AEAAJPEAUIAppLayoutOperation@@@Z @ 0x1804F7FA0 (-NotifyAppLayoutChanged@TabletModePositioner@@AEAAJPEAUIAppLayoutOperation@@@Z.c)
 *     ?PositionView@TabletModePositioner@@AEAAJPEAUIApplicationView@@AEBUtagRECT@@AEBULAYOUT_ENVIRONMENT_DETAILS@@PEAUIApplicationViewOperation@@@Z @ 0x1804F8214 (-PositionView@TabletModePositioner@@AEAAJPEAUIApplicationView@@AEBUtagRECT@@AEBULAYOUT_ENVIRONME.c)
 *     ?ShouldShowLauncher@TabletModePositioner@@AEAA_NXZ @ 0x1804F90F4 (-ShouldShowLauncher@TabletModePositioner@@AEAA_NXZ.c)
 *     ?ShouldShowSnapAssist@TabletModePositioner@@AEAA_N_N@Z @ 0x1804F9138 (-ShouldShowSnapAssist@TabletModePositioner@@AEAA_N_N@Z.c)
 *     ?ShowLauncherOrSnapAssistInHole@TabletModePositioner@@AEAAJW4APP_LAYOUT_OPERATION_ACTIONS@@@Z @ 0x1804F93E4 (-ShowLauncherOrSnapAssistInHole@TabletModePositioner@@AEAAJW4APP_LAYOUT_OPERATION_ACTIONS@@@Z.c)
 *     ?SplitViewCreated_@TabletModeTelemetry@@QEAAXPEAUIAppLayout@@0W4APP_LAYOUT_OPERATION_ACTIONS@@@Z @ 0x1804F987C (-SplitViewCreated_@TabletModeTelemetry@@QEAAXPEAUIAppLayout@@0W4APP_LAYOUT_OPERATION_ACTIONS@@@Z.c)
 *     ?StartActivity@ApplyLayoutOperationHelper@TabletModeTraceLogging@@QEAAXPEAUIAppLayoutOperation@@@Z @ 0x1804F9BE8 (-StartActivity@ApplyLayoutOperationHelper@TabletModeTraceLogging@@QEAAXPEAUIAppLayoutOperation@@.c)
 *     ?TriggerAppTransitionAnimation@CAutoAppTransitionRequest@@QEAAJPEAUIAppLayoutOperation@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1804FBE04 (-TriggerAppTransitionAnimation@CAutoAppTransitionRequest@@QEAAJPEAUIAppLayoutOperation@@PEAUIImm.c)
 *     ?get@?$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAAPEAVTabletModeTelemetry@@P6AXXZ@Z @ 0x1804FC984 (-get@-$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAAPEAVTabletModeTelemetry@@P6AXXZ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall TabletModePositioner::ApplyLayoutOperationHelper(TabletModePositioner *this, struct IUnknown *a2)
{
  __int64 (__fastcall ***v4)(struct IUnknown *, GUID *, struct IAppLayoutOperation **); // rdx
  unsigned int v5; // ebx
  __int64 (__fastcall *v6)(struct IUnknown *, GUID *, struct IAppLayoutOperation **); // rbx
  int v7; // eax
  struct IAppLayoutOperation *v8; // rbx
  __int64 (__fastcall *v9)(struct IAppLayoutOperation *, __int64 *); // rdi
  int v10; // eax
  struct IAppLayoutOperation *v11; // rbx
  __int64 (__fastcall *v12)(struct IAppLayoutOperation *, __int64 *); // rdi
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r9
  struct IAppLayoutOperation *v16; // rbx
  unsigned int v17; // r14d
  struct IAppLayoutOperation *v18; // rbx
  struct IImmersiveApplicationManagerSafeForSyncCallouts *v19; // r9
  int v20; // eax
  __int64 v21; // rbx
  __int64 (__fastcall *v22)(__int64, GUID *, struct IAppLayout **); // rdi
  int v23; // eax
  __int64 v24; // rdx
  unsigned int i; // r15d
  struct IAppLayoutOperation *v26; // rbx
  int (__fastcall *v27)(struct IAppLayoutOperation *, _QWORD, GUID *, __int64 *); // rdi
  __int64 v28; // rbx
  int (__fastcall *v29)(__int64, GUID *, __int64 *); // rdi
  __int64 *v30; // rax
  struct IApplicationView *v31; // rdx
  struct IApplicationView *v32; // rdx
  struct IApplicationView *v33; // rdx
  struct IApplicationView *v34; // rdx
  TabletModePositioner *v35; // rcx
  int v36; // eax
  int v37; // eax
  struct IAppLayoutOperation *v38; // rbx
  __int64 (__fastcall *v39)(struct IAppLayoutOperation *, void **); // rdi
  int v40; // eax
  int v41; // eax
  int v42; // eax
  char v43; // cl
  int v44; // eax
  unsigned __int64 v45; // rdx
  unsigned __int8 v46; // cl
  __int64 v47; // rbx
  __int64 v48; // rdi
  __int64 v49; // rcx
  __int64 v50; // rcx
  void *ppvOut; // [rsp+30h] [rbp-D0h] BYREF
  struct IAppLayoutOperation *v53; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v54; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v55; // [rsp+48h] [rbp-B8h] BYREF
  struct IAppLayout *v56; // [rsp+50h] [rbp-B0h] BYREF
  struct IApplicationViewOperation *v57; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v58; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v59; // [rsp+68h] [rbp-98h] BYREF
  struct tagRECT v60; // [rsp+70h] [rbp-90h] BYREF
  __int128 v61; // [rsp+88h] [rbp-78h] BYREF
  int v62; // [rsp+98h] [rbp-68h]
  int v63; // [rsp+9Ch] [rbp-64h]
  __m128i si128; // [rsp+A0h] [rbp-60h]
  int v65; // [rsp+B0h] [rbp-50h]
  _OWORD v66[2]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v67; // [rsp+D8h] [rbp-28h]
  _QWORD v68[42]; // [rsp+E0h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+268h] [rbp+168h]

  if ( TabletModePositioner::IsTabletMode(this) )
  {
    v53 = 0LL;
    v6 = **v4;
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v53);
    v7 = v6(a2, &GUID_c28f3b94_b47f_4211_8f2c_88d0b2d975bb, &v53);
    v5 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x92F,
        (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v7);
LABEL_76:
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v53);
      return v5;
    }
    v55 = 0LL;
    v8 = v53;
    v9 = *(__int64 (__fastcall **)(struct IAppLayoutOperation *, __int64 *))(*(_QWORD *)v53 + 40LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v55);
    v10 = v9(v8, &v55);
    v5 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x931,
        (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v10);
LABEL_7:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v55);
      goto LABEL_76;
    }
    v54 = 0LL;
    v11 = v53;
    v12 = *(__int64 (__fastcall **)(struct IAppLayoutOperation *, __int64 *))(*(_QWORD *)v53 + 48LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v54);
    v13 = v12(v11, &v54);
    v5 = v13;
    if ( v13 < 0 )
    {
      v14 = 2355LL;
LABEL_10:
      v15 = (unsigned int)v13;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)v15);
LABEL_12:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v54);
      goto LABEL_7;
    }
    v13 = (*(__int64 (__fastcall **)(struct IAppLayoutOperation *))(*(_QWORD *)v53 + 96LL))(v53);
    v5 = v13;
    if ( v13 < 0 )
    {
      v14 = 2358LL;
      goto LABEL_10;
    }
    if ( !(*(unsigned int (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 31) + 200LL))(
            *((_QWORD *)this + 31),
            v55,
            3LL) )
    {
      v5 = -2147024809;
      v15 = 2147942487LL;
      v14 = 2361LL;
      goto LABEL_11;
    }
    v16 = v53;
    wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
      (__int64)v68,
      (__int64)"ApplyLayoutOperationHelper");
    v68[0] = &TabletModeTraceLogging::ApplyLayoutOperationHelper::`vftable';
    TabletModeTraceLogging::ApplyLayoutOperationHelper::StartActivity(
      (TabletModeTraceLogging::ApplyLayoutOperationHelper *)v68,
      v16);
    memset(v66, 0, sizeof(v66));
    v67 = 0LL;
    (*(void (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)v54 + 24LL))(v54, v66);
    v17 = (*(__int64 (__fastcall **)(struct IAppLayoutOperation *))(*(_QWORD *)v53 + 80LL))(v53);
    if ( (v17 & 0x10000) != 0 )
    {
      ppvOut = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
      if ( IUnknown_QueryService(
             *((IUnknown **)this + 2),
             &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
             &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
             &ppvOut) >= 0 )
      {
        if ( (v17 & 0x2000000) != 0 )
        {
          v18 = v53;
          if ( *((struct IAppLayoutOperation **)this + 41) != v53 )
          {
            v56 = v53;
            Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v56);
            v56 = (struct IAppLayout *)*((_QWORD *)this + 41);
            *((_QWORD *)this + 41) = v18;
            Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v56);
          }
        }
        else
        {
          CAutoAppTransitionRequest::CAutoAppTransitionRequest(
            (CAutoAppTransitionRequest *)&v60,
            *((struct IAppTransitionManager **)this + 49));
          CAutoAppTransitionRequest::TriggerAppTransitionAnimation(
            (CAutoAppTransitionRequest *)&v60,
            v53,
            (struct IImmersiveMonitor *)ppvOut,
            v19);
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 54) + 64LL))(*((_QWORD *)this + 54));
          CAutoAppTransitionRequest::~CAutoAppTransitionRequest((CAutoAppTransitionRequest *)&v60);
        }
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
    }
    if ( (v17 & 1) != 0 )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 33);
      v20 = TabletModePositioner::HandleFlashDetection(this, v53);
      if ( v20 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x962,
          (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)v20);
      v56 = 0LL;
      v21 = v54;
      v22 = *(__int64 (__fastcall **)(__int64, GUID *, struct IAppLayout **))(*(_QWORD *)v54 + 192LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v56);
      v23 = v22(v21, &GUID_7baad876_2fc5_4561_93e1_17e868a174ed, &v56);
      v5 = v23;
      if ( v23 < 0 )
      {
        v24 = 2406LL;
LABEL_29:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v24,
          (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)v23);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v56);
        TabletModeTraceLogging::ApplyLayoutOperationHelper::~ApplyLayoutOperationHelper((TabletModeTraceLogging::ApplyLayoutOperationHelper *)v68);
        goto LABEL_12;
      }
      v23 = TabletModePositioner::SetAppLayout(this, v56);
      v5 = v23;
      if ( v23 < 0 )
      {
        v24 = 2407LL;
        goto LABEL_29;
      }
      v59 = 0;
      v23 = (*(__int64 (__fastcall **)(struct IAppLayoutOperation *, unsigned int *))(*(_QWORD *)v53 + 24LL))(v53, &v59);
      v5 = v23;
      if ( v23 < 0 )
      {
        v24 = 2412LL;
        goto LABEL_29;
      }
      for ( i = 0; i < v59; ++i )
      {
        v58 = 0LL;
        ppvOut = 0LL;
        v26 = v53;
        v27 = *(int (__fastcall **)(struct IAppLayoutOperation *, _QWORD, GUID *, __int64 *))(*(_QWORD *)v53 + 32LL);
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v58);
        if ( v27(v26, i, &GUID_f1e97d9c_cb12_4e92_88d4_cfbda2f4f34e, &v58) >= 0
          && ((*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v58 + 80LL))(v58)
           || (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v58 + 88LL))(v58)) )
        {
          v28 = v58;
          v29 = *(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v58 + 32LL);
          v30 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)&ppvOut);
          if ( v29(v28, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v30) >= 0
            && TabletModePositionerHelpers::IsControlledView((TabletModePositionerHelpers *)ppvOut, v31) )
          {
            v57 = 0LL;
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v57);
            if ( (int)TabletModePositioner::CreateAndInitApplicationViewOperation(this, v32, &v57) >= 0 )
            {
              if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v58 + 88LL))(v58) )
              {
                (*(void (__fastcall **)(struct IApplicationViewOperation *, __int64))(*(_QWORD *)v57 + 96LL))(v57, 1LL);
                if ( (v17 & 8) != 0 )
                {
                  v61 = 0LL;
                  v62 = 0;
                  si128 = _mm_load_si128((const __m128i *)&_xmm);
                  v63 = 1;
                  v65 = 1;
                  (*(void (__fastcall **)(struct IApplicationViewOperation *, __int128 *))(*(_QWORD *)v57 + 144LL))(
                    v57,
                    &v61);
                }
                v60 = 0LL;
                (*(void (__fastcall **)(__int64, _QWORD, struct tagRECT *))(*(_QWORD *)v58 + 72LL))(v58, 0LL, &v60);
                v36 = TabletModePositioner::PositionView(
                        v35,
                        v34,
                        &v60,
                        (const struct LAYOUT_ENVIRONMENT_DETAILS *)v66,
                        v57);
                if ( v36 < 0 )
                  wil::details::in1diag3::_Log_Hr(
                    retaddr,
                    (void *)0x98D,
                    (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
                    (const char *)(unsigned int)v36);
              }
              else if ( TabletModePositionerHelpers::IsOperableView(
                          (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))ppvOut,
                          v33) )
              {
                (*(void (__fastcall **)(struct IApplicationViewOperation *, _QWORD))(*(_QWORD *)v57 + 96LL))(v57, 0LL);
              }
              (*(void (__fastcall **)(void *, struct IApplicationViewOperation *))(*(_QWORD *)ppvOut + 320LL))(
                ppvOut,
                v57);
            }
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v57);
          }
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&ppvOut);
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v58);
      }
      if ( (v17 & 0x20) == 0
        && (TabletModePositioner::ShouldShowLauncher(this)
         || TabletModePositioner::ShouldShowSnapAssist(this, (v17 & 2) != 0)) )
      {
        v37 = TabletModePositioner::ShowLauncherOrSnapAssistInHole(this, v17);
        if ( v37 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x9AB,
            (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
            (const char *)(unsigned int)v37);
      }
      else if ( (v17 & 2) != 0 && !*((_QWORD *)this + 36) )
      {
        ppvOut = 0LL;
        v38 = v53;
        v39 = *(__int64 (__fastcall **)(struct IAppLayoutOperation *, void **))(*(_QWORD *)v53 + 64LL);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&ppvOut);
        v40 = v39(v38, &ppvOut);
        if ( v40 >= 0 )
          (*(void (__fastcall **)(void *))(*(_QWORD *)ppvOut + 48LL))(ppvOut);
        else
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x9B5,
            (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
            (const char *)(unsigned int)v40);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&ppvOut);
      }
      v41 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 39) + 24LL))(*((_QWORD *)this + 39), v54);
      if ( v41 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x9BD,
          (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)v41);
      if ( !(*(unsigned int (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v54 + 200LL))(v54, v55, 3LL) )
      {
        *((_BYTE *)this + 240) = 0;
        v42 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 31) + 64LL))(*((_QWORD *)this + 31));
        v43 = *((_BYTE *)this + 242);
        if ( v42 )
        {
          if ( !v43 )
            *((_BYTE *)this + 242) = (*(int (__fastcall **)(_QWORD))(**((_QWORD **)this + 48) + 40LL))(*((_QWORD *)this + 48)) >= 0;
        }
        else if ( v43 )
        {
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 48) + 48LL))(*((_QWORD *)this + 48));
          *((_BYTE *)this + 242) = 0;
        }
        v44 = TabletModePositioner::NotifyAppLayoutChanged(this, v53);
        v46 = (unsigned __int8)retaddr;
        if ( v44 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x9CC,
            (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
            (const char *)(unsigned int)v44);
        v47 = v54;
        v48 = v55;
        if ( TabletModeTelemetry::IsEnabled(v46, v45) )
        {
          wil::details::static_lazy<TabletModeTelemetry>::get(
            v49,
            _lambda_51d33002daa63bfc4d65f85f7f956340_::_lambda_invoker_cdecl_);
          TabletModeTelemetry::SplitViewCreated_(v50, v48, v47, v17);
        }
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v56);
    }
    wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v68);
    TabletModeTraceLogging::ApplyLayoutOperationHelper::~ApplyLayoutOperationHelper((TabletModeTraceLogging::ApplyLayoutOperationHelper *)v68);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v54);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v55);
    v5 = 0;
    goto LABEL_76;
  }
  v5 = -2147019873;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x92C,
    (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
    (const char *)0x8007139FLL);
  return v5;
}
