/*
 * XREFs of ?SubscribeToServices@CVirtualDesktopComponent@@UEAAJPEAUIServiceProvider@@@Z @ 0x180260A50
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180024FF4 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180046480 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x1800584A4 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?CVirtualDesktopHolographicViewTransitionNotification_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x180080D78 (-CVirtualDesktopHolographicViewTransitionNotification_CreateInstance@@YAJPEAUIVirtualDesktopMana.c)
 *     ?GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z @ 0x180083CC4 (-GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z.c)
 *     ?VirtualDesktopTabletModeNotificationListener_CreateInstance@@YAJPEAUIVirtualDesktopTabletModePolicy@@PEAUIServiceProvider@@AEBU_GUID@@PEAPEAX@Z @ 0x1800D836C (-VirtualDesktopTabletModeNotificationListener_CreateInstance@@YAJPEAUIVirtualDesktopTabletModePo.c)
 *     ??1?$CCoTaskMemPtr@E@@QEAA@XZ @ 0x180109D54 (--1-$CCoTaskMemPtr@E@@QEAA@XZ.c)
 *     ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_VwUpdates@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x180109F70 (-__private_IsEnabledPreCheck@-$FeatureImpl@U__WilFeatureTraits_Feature_VwUpdates@@@details@wil@@.c)
 *     ?VirtualDesktopSwitchAnimator_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopAnimationSyncNotificationServicePrivate@@PEAUIMultitaskingViewVisibilityService@@AEBU_GUID@@PEAPEAX@Z @ 0x1801D1600 (-VirtualDesktopSwitchAnimator_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtual.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VDSLTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18021C264 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VDSLTest@@@details@wil@@QEAAX_NW4Reportin.c)
 *     ?CVirtualDesktopSoftLandingHandler_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIVirtualDesktopNotificationServicePrivate@@PEAUIVirtualDesktopRegistryHelpers@@AEBU_GUID@@PEAPEAX@Z @ 0x180232008 (-CVirtualDesktopSoftLandingHandler_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIVirtu.c)
 *     ?CVirtualDesktopApplicationViewEventListener_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopSwitchAnimator@@PEAUIVirtualDesktopForegroundPolicy@@PEAUIVirtualDesktopWindowMoveManager@@PEAUIVirtualDesktopPinnedAppsPrivate@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x180295618 (-CVirtualDesktopApplicationViewEventListener_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivat.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Engineering_Improvements_VDBugFixes@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802A0100 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Engineering_Improvements_VDBug.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x18067A61C (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=26
__int64 __fastcall CVirtualDesktopComponent::SubscribeToServices(
        CVirtualDesktopComponent *this,
        struct IServiceProvider *a2)
{
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  __int64 *v5; // rax
  CCriticalFailureHandler *v6; // rcx
  int Instance; // ebx
  HRESULT (__stdcall *v8)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  CCriticalFailureHandler *v9; // rcx
  HRESULT (__stdcall *v10)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  CCriticalFailureHandler *v11; // rcx
  __int64 v12; // rdx
  HRESULT (__stdcall *v13)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  __int64 v14; // rcx
  CCriticalFailureHandler *v15; // rcx
  const struct _GUID *v16; // r9
  struct IVirtualDesktopSwitchAnimator **v17; // r15
  __int64 v18; // rcx
  CCriticalFailureHandler *v19; // rcx
  HRESULT (__stdcall *v20)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v21; // eax
  HRESULT (__stdcall *v22)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v23; // eax
  HRESULT (__stdcall *v24)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v25; // eax
  __int64 (__fastcall ***v26)(_QWORD, GUID *, __int64 *); // rcx
  __int64 (__fastcall **v27)(_QWORD, GUID *, __int64 *); // rax
  int v28; // eax
  struct IVirtualDesktopSwitchAnimator *v29; // rcx
  __int64 (__fastcall **v30)(struct IVirtualDesktopSwitchAnimator *, GUID *, __int64 *); // rax
  int v31; // eax
  HRESULT (__stdcall *v32)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v33; // eax
  int v34; // eax
  unsigned __int64 v35; // r9
  __int64 v36; // rdx
  CCriticalFailureHandler *v37; // rcx
  __int64 v38; // rdx
  CCriticalFailureHandler *v39; // rcx
  CCriticalFailureHandler *v40; // rcx
  CCriticalFailureHandler *v41; // rcx
  __int64 v42; // rcx
  CCriticalFailureHandler *v43; // rcx
  __int64 *v44; // rax
  CCriticalFailureHandler *v45; // rcx
  __int64 v46; // rdx
  CCriticalFailureHandler *v47; // rcx
  const struct _GUID *v48; // r8
  CCriticalFailureHandler *v49; // rcx
  __int64 v50; // rdx
  CCriticalFailureHandler *v51; // rcx
  __int64 v52; // rdx
  HRESULT (__stdcall *v53)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  __int64 v54; // rcx
  int v55; // eax
  wil::details::in1diag3 *v56; // rcx
  __int64 v57; // rdx
  unsigned __int64 *v58; // rdx
  const struct _GUID *v59; // r9
  __int64 v60; // rcx
  int v61; // eax
  CCriticalFailureHandler *v62; // rcx
  CCriticalFailureHandler *v63; // rcx
  struct IServiceProviderVtbl *lpVtbl; // rax
  int v65; // eax
  __int64 v66; // rdx
  __int64 *v67; // rax
  const struct _GUID *v68; // r8
  CCriticalFailureHandler *v69; // rcx
  HRESULT (__stdcall *v70)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  __int64 *v71; // rax
  CCriticalFailureHandler *v72; // rcx
  unsigned __int64 v73; // r9
  __int64 v74; // rdx
  int v75; // eax
  struct IServiceProviderVtbl *v76; // rax
  int v77; // eax
  unsigned __int64 *v79; // [rsp+20h] [rbp-89h]
  unsigned __int64 *v80; // [rsp+20h] [rbp-89h]
  unsigned __int64 *v81; // [rsp+20h] [rbp-89h]
  unsigned __int64 *v82; // [rsp+28h] [rbp-81h]
  unsigned __int64 *v83; // [rsp+28h] [rbp-81h]
  unsigned __int64 *v84; // [rsp+28h] [rbp-81h]
  const struct _GUID *v85; // [rsp+30h] [rbp-79h]
  __int64 v86; // [rsp+40h] [rbp-69h] BYREF
  unsigned __int64 *v87; // [rsp+48h] [rbp-61h] BYREF
  int v88[2]; // [rsp+50h] [rbp-59h] BYREF
  __int64 v89; // [rsp+58h] [rbp-51h] BYREF
  __int64 v90; // [rsp+60h] [rbp-49h] BYREF
  __int64 v91; // [rsp+68h] [rbp-41h] BYREF
  __int64 v92; // [rsp+70h] [rbp-39h] BYREF
  RTL_SRWLOCK *v93; // [rsp+78h] [rbp-31h] BYREF
  struct IApplicationViewCollection *v94; // [rsp+80h] [rbp-29h] BYREF
  __int64 v95; // [rsp+88h] [rbp-21h] BYREF
  void *v96; // [rsp+90h] [rbp-19h] BYREF
  __int64 v97; // [rsp+98h] [rbp-11h] BYREF
  __int64 v98; // [rsp+A0h] [rbp-9h] BYREF
  unsigned __int64 *v99; // [rsp+A8h] [rbp-1h] BYREF
  __int64 v100; // [rsp+B0h] [rbp+7h] BYREF
  unsigned __int64 v101[9]; // [rsp+B8h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]
  __int64 v103; // [rsp+118h] [rbp+6Fh] BYREF
  unsigned int v104; // [rsp+120h] [rbp+77h] BYREF
  __int64 v105; // [rsp+128h] [rbp+7Fh] BYREF

  v94 = 0LL;
  QueryService = a2->lpVtbl->QueryService;
  v5 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)&v94);
  Instance = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))QueryService)(
               a2,
               &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
               &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
               v5);
  LODWORD(v103) = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v6, (int *)&v103);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    Instance = v103;
  }
  if ( Instance >= 0 )
    goto LABEL_9;
  if ( Instance != -2147024882 && Instance != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v6,
      (int *)&v103,
      L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
      0xC8u,
      v79,
      v82);
    Instance = v103;
  }
  if ( Instance >= 0 )
  {
LABEL_9:
    v86 = 0LL;
    v8 = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v86);
    Instance = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v8)(
                 a2,
                 &GUID_af6eec2f_c097_4f4a_b536_3cb918550cb3,
                 &GUID_af6eec2f_c097_4f4a_b536_3cb918550cb3,
                 &v86);
    LODWORD(v103) = Instance;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v9, (int *)&v103);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      Instance = v103;
    }
    if ( Instance < 0 )
    {
      if ( Instance != -2147024882 && Instance != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          v9,
          (int *)&v103,
          L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
          0xCCu,
          v79,
          v82);
        Instance = v103;
      }
      if ( Instance < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xCC,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
          (const char *)(unsigned int)Instance);
LABEL_17:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v86);
        goto LABEL_210;
      }
    }
    v105 = 0LL;
    v10 = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v105);
    Instance = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v10)(
                 a2,
                 &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
                 &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
                 &v105);
    LODWORD(v103) = Instance;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v11, (int *)&v103);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      Instance = v103;
    }
    if ( Instance < 0 )
    {
      if ( Instance != -2147024882 && Instance != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          v11,
          (int *)&v103,
          L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
          0xD0u,
          v79,
          v82);
        Instance = v103;
      }
      if ( Instance < 0 )
      {
        v12 = 208LL;
LABEL_26:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v12,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
          (const char *)(unsigned int)Instance);
LABEL_27:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v105);
        goto LABEL_17;
      }
    }
    v13 = a2->lpVtbl->QueryService;
    v14 = *((_QWORD *)this + 28);
    *((_QWORD *)this + 28) = 0LL;
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    Instance = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v13)(
                 a2,
                 &SID_MultitaskingViewVisibilityService,
                 &GUID_ac11cda3_1601_4ad7_a40e_fe2ced187307,
                 (char *)this + 224);
    LODWORD(v103) = Instance;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v15, (int *)&v103);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      Instance = v103;
    }
    if ( Instance < 0 )
    {
      if ( Instance != -2147024882 && Instance != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          v15,
          (int *)&v103,
          L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
          0xD3u,
          v79,
          v82);
        Instance = v103;
      }
      if ( Instance < 0 )
      {
        v12 = 211LL;
        goto LABEL_26;
      }
    }
    v17 = (struct IVirtualDesktopSwitchAnimator **)((char *)this + 136);
    v18 = *((_QWORD *)this + 17);
    *((_QWORD *)this + 17) = 0LL;
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    Instance = VirtualDesktopSwitchAnimator_CreateInstance(
                 *((struct IVirtualDesktopManagerPrivate **)this + 15),
                 *((struct IVirtualDesktopAnimationSyncNotificationServicePrivate **)this + 16),
                 *((struct IMultitaskingViewVisibilityService **)this + 28),
                 v16,
                 (void **)this + 17);
    LODWORD(v103) = Instance;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v19, (int *)&v103);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      Instance = v103;
    }
    if ( Instance < 0 )
    {
      if ( Instance != -2147024882 && Instance != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          v19,
          (int *)&v103,
          L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
          0xD9u,
          v80,
          v82);
        Instance = v103;
      }
      if ( Instance < 0 )
      {
        v12 = 217LL;
        goto LABEL_26;
      }
    }
    v87 = 0LL;
    v20 = a2->lpVtbl->QueryService;
    wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)&v87);
    v21 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, unsigned __int64 **))v20)(
            a2,
            &SID_IImmersiveMonitorService,
            &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
            &v87);
    Instance = v21;
    if ( v21 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xDC,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        (const char *)(unsigned int)v21);
LABEL_50:
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v87);
      goto LABEL_27;
    }
    *(_QWORD *)v88 = 0LL;
    v22 = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v88);
    v23 = ((__int64 (__fastcall *)(struct IServiceProvider *, void *, GUID *, int *))v22)(
            a2,
            &unk_1807B6078,
            &GUID_4214f6fa_eb36_4e2f_9ca2_23fdc1832df7,
            v88);
    Instance = v23;
    if ( v23 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xDE,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        (const char *)(unsigned int)v23);
LABEL_53:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v88);
      goto LABEL_50;
    }
    v89 = 0LL;
    v24 = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v89);
    v25 = ((__int64 (__fastcall *)(struct IServiceProvider *, void *, GUID *, __int64 *))v24)(
            a2,
            &unk_1807B6068,
            &GUID_c08ee93c_e5a6_46f2_bdac_416ef1731a41,
            &v89);
    Instance = v25;
    if ( v25 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE0,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        (const char *)(unsigned int)v25);
LABEL_56:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v89);
      goto LABEL_53;
    }
    v90 = 0LL;
    v26 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 18);
    v27 = *v26;
    v90 = 0LL;
    v28 = (*v27)(v26, &GUID_d9644dc1_ee57_4f37_8bf2_58f489243230, &v90);
    Instance = v28;
    if ( v28 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE2,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        (const char *)(unsigned int)v28);
LABEL_59:
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v90);
      goto LABEL_56;
    }
    v92 = 0LL;
    v29 = *v17;
    v30 = *(__int64 (__fastcall ***)(struct IVirtualDesktopSwitchAnimator *, GUID *, __int64 *))*v17;
    v92 = 0LL;
    v31 = (*v30)(v29, &GUID_bb1b0fb0_58f6_4f1a_99f2_86599b33ede8, &v92);
    Instance = v31;
    if ( v31 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE4,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        (const char *)(unsigned int)v31);
LABEL_62:
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v92);
      goto LABEL_59;
    }
    v91 = 0LL;
    if ( v90 )
    {
      v32 = a2->lpVtbl->QueryService;
      wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(&v91);
      v33 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v32)(
              a2,
              &GUID_cb6e4ee4_9424_5bb0_b290_0e37b7c5c386,
              &GUID_cb6e4ee4_9424_5bb0_b290_0e37b7c5c386,
              &v91);
      if ( v33 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xE9,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
          (const char *)(unsigned int)v33);
      (*(void (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 15) + 312LL))(*((_QWORD *)this + 15), &v91);
      v85 = (const struct _GUID *)&v91;
      v82 = v87;
      v80 = *(unsigned __int64 **)v88;
      v34 = (*(__int64 (__fastcall **)(__int64, __int64, struct IApplicationViewCollection *, struct IVirtualDesktopSwitchAnimator *))(*(_QWORD *)v90 + 48LL))(
              v90,
              v89,
              v94,
              *v17);
      Instance = v34;
      if ( v34 < 0 )
      {
        v35 = (unsigned int)v34;
        v36 = 235LL;
LABEL_68:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v36,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
          (const char *)v35);
LABEL_69:
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v91);
        goto LABEL_62;
      }
    }
    (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**((_QWORD **)this + 13) + 32LL))(*((_QWORD *)this + 13), &v93);
    Instance = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationViewCollection *))(**((_QWORD **)this + 15) + 240LL))(
                 *((_QWORD *)this + 15),
                 v94);
    LODWORD(v103) = Instance;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v37, (int *)&v103);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      Instance = v103;
    }
    if ( Instance < 0 )
    {
      if ( Instance != -2147024882 && Instance != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          v37,
          (int *)&v103,
          L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
          0xF0u,
          v80,
          v82);
        Instance = v103;
      }
      if ( Instance < 0 )
      {
        v38 = 240LL;
LABEL_78:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v38,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
          (const char *)(unsigned int)Instance);
LABEL_79:
        Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v93);
        goto LABEL_69;
      }
    }
    Instance = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationViewCollection *))(**((_QWORD **)this + 14) + 48LL))(
                 *((_QWORD *)this + 14),
                 v94);
    LODWORD(v103) = Instance;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v39, (int *)&v103);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      Instance = v103;
    }
    if ( Instance < 0 )
    {
      if ( Instance != -2147024882 && Instance != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          v39,
          (int *)&v103,
          L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
          0xF1u,
          v80,
          v82);
        Instance = v103;
      }
      if ( Instance < 0 )
      {
        v38 = 241LL;
        goto LABEL_78;
      }
    }
    Instance = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationViewCollection *))(**((_QWORD **)this + 20) + 24LL))(
                 *((_QWORD *)this + 20),
                 v94);
    LODWORD(v103) = Instance;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v40, (int *)&v103);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      Instance = v103;
    }
    if ( Instance < 0 )
    {
      if ( Instance != -2147024882 && Instance != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          v40,
          (int *)&v103,
          L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
          0xF2u,
          v80,
          v82);
        Instance = v103;
      }
      if ( Instance < 0 )
      {
        v38 = 242LL;
        goto LABEL_78;
      }
    }
    Instance = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationViewCollection *))(**((_QWORD **)this + 19) + 24LL))(
                 *((_QWORD *)this + 19),
                 v94);
    LODWORD(v103) = Instance;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v41, (int *)&v103);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      Instance = v103;
    }
    if ( Instance < 0 )
    {
      if ( Instance != -2147024882 && Instance != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          v41,
          (int *)&v103,
          L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
          0xF3u,
          v80,
          v82);
        Instance = v103;
      }
      if ( Instance < 0 )
      {
        v38 = 243LL;
        goto LABEL_78;
      }
    }
    v42 = *((_QWORD *)this + 22);
    if ( v42 )
    {
      Instance = (*(__int64 (__fastcall **)(__int64, struct IApplicationViewCollection *))(*(_QWORD *)v42 + 72LL))(
                   v42,
                   v94);
      LODWORD(v103) = Instance;
      if ( !CRVPrivate::cfhImmersiveShellStartup )
      {
        CCriticalFailureHandler::GetFakeFailure(v43, (int *)&v103);
        CRVPrivate::cfhImmersiveShellStartup = 1;
        Instance = v103;
      }
      if ( Instance < 0 )
      {
        if ( Instance != -2147024882 && Instance != -2144862209 )
        {
          CCriticalFailureHandler::HandleFailure(
            v43,
            (int *)&v103,
            L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
            0xF7u,
            v80,
            v82);
          Instance = v103;
        }
        if ( Instance < 0 )
        {
          v38 = 247LL;
          goto LABEL_78;
        }
      }
    }
    v95 = 0LL;
    v44 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v95);
    Instance = CVirtualDesktopApplicationViewEventListener_CreateInstance(
                 *((struct IVirtualDesktopManagerPrivate **)this + 15),
                 *v17,
                 *((struct IVirtualDesktopForegroundPolicy **)this + 14),
                 *((struct IVirtualDesktopWindowMoveManager **)this + 19),
                 *((struct IVirtualDesktopPinnedAppsPrivate **)this + 22),
                 *((struct IVirtualDesktopLock **)this + 13),
                 v85,
                 (void **)v44);
    LODWORD(v103) = Instance;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v45, (int *)&v103);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      Instance = v103;
    }
    if ( Instance < 0 )
    {
      if ( Instance != -2147024882 && Instance != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          v45,
          (int *)&v103,
          L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
          0x102u,
          v81,
          v83);
        Instance = v103;
      }
      if ( Instance < 0 )
      {
        v46 = 258LL;
LABEL_121:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v46,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
          (const char *)(unsigned int)Instance);
LABEL_122:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v95);
        goto LABEL_79;
      }
    }
    Instance = (*(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v86 + 24LL))(
                 v86,
                 v95,
                 (char *)this + 244);
    LODWORD(v103) = Instance;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v47, (int *)&v103);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      Instance = v103;
    }
    if ( Instance < 0 )
    {
      if ( Instance != -2147024882 && Instance != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          v47,
          (int *)&v103,
          L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
          0x105u,
          v81,
          v83);
        Instance = v103;
      }
      if ( Instance < 0 )
      {
        v46 = 261LL;
        goto LABEL_121;
      }
    }
    v96 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v96);
    Instance = VirtualDesktopTabletModeNotificationListener_CreateInstance(
                 *((struct IVirtualDesktopTabletModePolicy **)this + 21),
                 a2,
                 v48,
                 &v96);
    LODWORD(v103) = Instance;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v49, (int *)&v103);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      Instance = v103;
    }
    if ( Instance < 0 )
    {
      if ( Instance != -2147024882 && Instance != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          v49,
          (int *)&v103,
          L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
          0x10Bu,
          v81,
          v83);
        Instance = v103;
      }
      if ( Instance < 0 )
      {
        v50 = 267LL;
LABEL_139:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v50,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
          (const char *)(unsigned int)Instance);
LABEL_140:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v96);
        goto LABEL_122;
      }
    }
    Instance = (*(__int64 (__fastcall **)(__int64, void *, char *))(*(_QWORD *)v105 + 72LL))(
                 v105,
                 v96,
                 (char *)this + 248);
    LODWORD(v103) = Instance;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v51, (int *)&v103);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      Instance = v103;
    }
    if ( Instance < 0 )
    {
      if ( Instance != -2147024882 && Instance != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          v51,
          (int *)&v103,
          L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
          0x10Du,
          v81,
          v83);
        Instance = v103;
      }
      if ( Instance < 0 )
      {
        v50 = 269LL;
        goto LABEL_139;
      }
    }
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_VwUpdates>::__private_IsEnabledPreCheck(
      `wil::Feature<__WilFeatureTraits_Feature_VwUpdates>::GetImpl'::`2'::impl,
      3u);
    v103 = 0LL;
    LOBYTE(v52) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Switch_Engineering_Improvements_VDBugFixes>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_W365Switch_Engineering_Improvements_VDBugFixes>::GetImpl'::`2'::impl,
      v52);
    v53 = a2->lpVtbl->QueryService;
    v54 = v103;
    v103 = 0LL;
    if ( v54 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
    v55 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v53)(
            a2,
            &IID_IImmersiveWindowMessageService,
            &GUID_fc62ce95_8396_401a_b74f_88df0d75e112,
            &v103);
    v56 = retaddr;
    if ( v55 >= 0 )
    {
      if ( !v103
        || (v55 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 15) + 288LL))(*((_QWORD *)this + 15)),
            v56 = retaddr,
            v55 >= 0) )
      {
LABEL_157:
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v103);
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_VDSLTest>::ReportUsage(
          `wil::Feature<__WilFeatureTraits_Feature_VDSLTest>::GetImpl'::`2'::impl,
          1u,
          3u);
        v101[0] = 0LL;
        v101[1] = 0LL;
        v58 = v101;
        v84 = v101;
        LODWORD(v81) = 4;
        LOBYTE(v58) = 1;
        if ( (*(unsigned int (__fastcall **)(_QWORD, unsigned __int64 *, _QWORD, const wchar_t *))(**((_QWORD **)this + 25)
                                                                                                 + 24LL))(
               *((_QWORD *)this + 25),
               v58,
               0LL,
               L"VDSoftLandingCampaignDone") == -2147024894 )
        {
          v60 = *((_QWORD *)this + 27);
          *((_QWORD *)this + 27) = 0LL;
          if ( v60 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v60 + 16LL))(v60);
          v61 = CVirtualDesktopSoftLandingHandler_CreateInstance(
                  v94,
                  *((struct IVirtualDesktopNotificationServicePrivate **)this + 26),
                  *((struct IVirtualDesktopRegistryHelpers **)this + 25),
                  v59,
                  (void **)this + 27);
          Instance = v61;
          if ( v61 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x12D,
              (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              (const char *)(unsigned int)v61);
            CCoTaskMemPtr<unsigned char>::~CCoTaskMemPtr<unsigned char>((void **)v101);
            goto LABEL_140;
          }
          *((_BYTE *)this + 240) = 1;
        }
        CCoTaskMemPtr<unsigned char>::~CCoTaskMemPtr<unsigned char>((void **)v101);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v96);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v95);
        Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v93);
        v104 = 0;
        Instance = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v105 + 24LL))(v105, &v104);
        LODWORD(v103) = Instance;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v62, (int *)&v103);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          Instance = v103;
        }
        if ( Instance < 0 )
        {
          if ( Instance != -2147024882 && Instance != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v62,
              (int *)&v103,
              L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              0x135u,
              v81,
              v101);
            Instance = v103;
          }
          if ( Instance < 0 )
          {
            v35 = (unsigned int)Instance;
            v36 = 309LL;
            goto LABEL_68;
          }
        }
        Instance = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 21) + 32LL))(
                     *((_QWORD *)this + 21),
                     v104,
                     0LL);
        LODWORD(v103) = Instance;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v63, (int *)&v103);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          Instance = v103;
        }
        if ( Instance < 0 )
        {
          if ( Instance != -2147024882 && Instance != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v63,
              (int *)&v103,
              L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              0x136u,
              v81,
              v84);
            Instance = v103;
          }
          if ( Instance < 0 )
          {
            v35 = (unsigned int)Instance;
            v36 = 310LL;
            goto LABEL_68;
          }
        }
        if ( *((_QWORD *)this + 23) )
        {
          lpVtbl = a2->lpVtbl;
          v99 = 0LL;
          v65 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, unsigned __int64 **))lpVtbl->QueryService)(
                  a2,
                  &SID_VirtualDesktopSwitcher,
                  &GUID_7a25165a_86f1_4b4a_b1d2_e89650cd9589,
                  &v99);
          Instance = v65;
          if ( v65 < 0 )
          {
            v66 = 315LL;
LABEL_182:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v66,
              (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              (const char *)(unsigned int)v65);
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v99);
            goto LABEL_69;
          }
          v84 = v99;
          v81 = v87;
          v65 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct IApplicationViewCollection *, _QWORD))(**((_QWORD **)this + 23) + 24LL))(
                  *((_QWORD *)this + 23),
                  v89,
                  v94,
                  *(_QWORD *)v88);
          Instance = v65;
          if ( v65 < 0 )
          {
            v66 = 316LL;
            goto LABEL_182;
          }
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v99);
        }
        v97 = 0LL;
        v67 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v97);
        Instance = CVirtualDesktopHolographicViewTransitionNotification_CreateInstance(
                     *((struct IVirtualDesktopManagerPrivate **)this + 15),
                     *((struct IVirtualDesktopLock **)this + 13),
                     v68,
                     (void **)v67);
        LODWORD(v103) = Instance;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v69, (int *)&v103);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          Instance = v103;
        }
        if ( Instance < 0 )
        {
          if ( Instance != -2147024882 && Instance != -2144862209 )
          {
            CCriticalFailureHandler::HandleFailure(
              v69,
              (int *)&v103,
              L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              0x143u,
              v81,
              v84);
            Instance = v103;
          }
          if ( Instance < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x143,
              (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              (const char *)(unsigned int)Instance);
LABEL_194:
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v97);
            goto LABEL_69;
          }
        }
        v98 = 0LL;
        v70 = a2->lpVtbl->QueryService;
        v71 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v98);
        Instance = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v70)(
                     a2,
                     &GUID_5090de35_ed23_43be_9714_586c5041026a,
                     &GUID_5090de35_ed23_43be_9714_586c5041026a,
                     v71);
        LODWORD(v103) = Instance;
        if ( !CRVPrivate::cfhImmersiveShellStartup )
        {
          CCriticalFailureHandler::GetFakeFailure(v72, (int *)&v103);
          CRVPrivate::cfhImmersiveShellStartup = 1;
          Instance = v103;
        }
        if ( Instance >= 0 )
          goto LABEL_205;
        if ( Instance != -2147024882 && Instance != -2144862209 )
        {
          CCriticalFailureHandler::HandleFailure(
            v72,
            (int *)&v103,
            L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
            0x146u,
            v81,
            v84);
          Instance = v103;
        }
        if ( Instance >= 0 )
        {
LABEL_205:
          v75 = (*(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v98 + 24LL))(
                  v98,
                  v97,
                  (char *)this + 252);
          Instance = v75;
          if ( v75 >= 0 )
          {
            (*(void (__fastcall **)(_QWORD, unsigned __int64 *))(**((_QWORD **)this + 15) + 480LL))(
              *((_QWORD *)this + 15),
              v87);
            v76 = a2->lpVtbl;
            v100 = 0LL;
            v77 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))v76->QueryService)(
                    a2,
                    &SID_MultitaskingViewServiceProvider,
                    &GUID_90adbab9_cdb8_43dd_8daa_ba1180be5215,
                    &v100);
            Instance = v77;
            if ( v77 >= 0 )
            {
              (*(void (__fastcall **)(_QWORD, __int64, struct IVirtualDesktopSwitchAnimator *, _QWORD, __int64))(**((_QWORD **)this + 15) + 320LL))(
                *((_QWORD *)this + 15),
                v89,
                *v17,
                *(_QWORD *)v88,
                v100);
              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v100);
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v98);
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v97);
              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v91);
              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v92);
              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v90);
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v89);
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v88);
              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v87);
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v105);
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v86);
              Instance = 0;
              goto LABEL_210;
            }
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x14C,
              (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
              (const char *)(unsigned int)v77);
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v100);
            goto LABEL_204;
          }
          v73 = (unsigned int)v75;
          v74 = 327LL;
        }
        else
        {
          v73 = (unsigned int)Instance;
          v74 = 326LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v74,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
          (const char *)v73);
LABEL_204:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v98);
        goto LABEL_194;
      }
      v57 = 282LL;
    }
    else
    {
      v57 = 280LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v56,
      (void *)v57,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
      (const char *)(unsigned int)v55);
    goto LABEL_157;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xC8,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
    (const char *)(unsigned int)Instance);
LABEL_210:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v94);
  return (unsigned int)Instance;
}
