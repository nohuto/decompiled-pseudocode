/*
 * XREFs of ?RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ @ 0x18009E880
 * Callers:
 *     ??$MakeAndInitialize@VCVirtualDesktopComponent@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1802BC2C8 (--$MakeAndInitialize@VCVirtualDesktopComponent@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAU.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x180025070 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003CAAC (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z @ 0x180091788 (-GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z.c)
 *     ?VirtualDesktopGestureHandler_CreateInstance@@YAJPEAUIVirtualDesktopManagerInternal@@AEBU_GUID@@PEAPEAX@Z @ 0x18009E7BC (-VirtualDesktopGestureHandler_CreateInstance@@YAJPEAUIVirtualDesktopManagerInternal@@AEBU_GUID@@.c)
 *     ?CVirtualDesktopVisibilityPolicy_CreateInstance@@YAJPEAUIVirtualDesktopNotification@@AEBU_GUID@@PEAPEAX@Z @ 0x18009FD78 (-CVirtualDesktopVisibilityPolicy_CreateInstance@@YAJPEAUIVirtualDesktopNotification@@AEBU_GUID@@.c)
 *     ?CVirtualDesktopLock_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18009FE84 (-CVirtualDesktopLock_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CVirtualDesktopFactory_CreateInstance@@YAJPEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x18009FF58 (-CVirtualDesktopFactory_CreateInstance@@YAJPEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesk.c)
 *     ?CVirtualDesktopCollection_CreateInstance@@YAJPEAUIVirtualDesktopFactory@@PEAUIVirtualDesktopPersistence@@_NAEBU_GUID@@PEAPEAX@Z @ 0x1800A0004 (-CVirtualDesktopCollection_CreateInstance@@YAJPEAUIVirtualDesktopFactory@@PEAUIVirtualDesktopPer.c)
 *     Mirror_IsThreadRTL @ 0x1800A00B0 (Mirror_IsThreadRTL.c)
 *     ?CVirtualDesktopNotifications_CreateInstance@@YAJKPEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x1800A00CC (-CVirtualDesktopNotifications_CreateInstance@@YAJKPEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?VirtualDesktopRegistryHelpers_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A01A4 (-VirtualDesktopRegistryHelpers_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$wnf_query_nothrow@W4_TABLETMODESTATE@@@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAW4_TABLETMODESTATE@@PEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x1800A02A8 (--$wnf_query_nothrow@W4_TABLETMODESTATE@@@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAW4_TABLETMODESTAT.c)
 *     ?CVirtualDesktopDefaultForegroundHandler_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A03A0 (-CVirtualDesktopDefaultForegroundHandler_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CVirtualDesktopForegroundPolicy_CreateInstance@@YAJPEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopDefaultForegroundHandler@@AEBU_GUID@@PEAPEAX@Z @ 0x1800A0448 (-CVirtualDesktopForegroundPolicy_CreateInstance@@YAJPEAUIVirtualDesktopCollection@@PEAUIVirtualD.c)
 *     ??$MakeAndInitialize@VCVirtualDesktopManager@@V1@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopNotification@@AEAPEAUIVirtualDesktopForegroundPolicy@@AEAPEAUIVirtualDesktopPersistence@@$$TAEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopManager@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopNotification@@AEAPEAUIVirtualDesktopForegroundPolicy@@AEAPEAUIVirtualDesktopPersistence@@$$QEA$$TAEAPEAUIVirtualDesktopLock@@@Z @ 0x1800A04F4 (--$MakeAndInitialize@VCVirtualDesktopManager@@V1@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtu.c)
 *     ?VirtualDesktopTabletModePolicy_CreateInstance@@YAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x1800A0620 (-VirtualDesktopTabletModePolicy_CreateInstance@@YAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopCollec.c)
 *     ?InternalRelease@?$ComPtr@VCVirtualDesktopManager@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A07E8 (-InternalRelease@-$ComPtr@VCVirtualDesktopManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U?$ChainInterfaces@UIVirtualDesktopManagerPrivate@@UIVirtualDesktopManagerInternal@@UIVirtualDesktopManagerInternal2@@VNil@Details@WRL@Microsoft@@V4567@V4567@V4567@V4567@V4567@V4567@@23@UIVirtualDesktopManagerInternal@@UIVirtualDesktopManagerInternal2@@UISuspendableVirtualDesktopManager@@UIImmersiveWindowMessageNotification@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800A0810 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U-$Ch_ea_1800A0810.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U?$ChainInterfaces@UIVirtualDesktopManagerPrivate@@UIVirtualDesktopManagerInternal@@UIVirtualDesktopManagerInternal2@@VNil@Details@WRL@Microsoft@@V4567@V4567@V4567@V4567@V4567@V4567@@23@UIVirtualDesktopManagerInternal@@UIVirtualDesktopManagerInternal2@@UISuspendableVirtualDesktopManager@@UIImmersiveWindowMessageNotification@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U?$ChainInterfaces@UIVirtualDesktopManagerPrivate@@UIVirtualDesktopManagerInternal@@UIVirtualDesktopManagerInternal2@@VNil@Details@WRL@Microsoft@@V4567@V4567@V4567@V4567@V4567@V4567@@23@UIVirtualDesktopManagerInternal@@UIVirtualDesktopManagerInternal2@@UISuspendableVirtualDesktopManager@@UIImmersiveWindowMessageNotification@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1800A08B4 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U-$C_ea_1800A08B4.c)
 *     ?CVirtualDesktopHotkeyHandler_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x1800A0C78 (-CVirtualDesktopHotkeyHandler_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtual.c)
 *     ?VirtualDesktopAcessibility_CreateInstance@@YAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopNotificationServicePrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x1800A0D40 (-VirtualDesktopAcessibility_CreateInstance@@YAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopNotificati.c)
 *     ?VirtualDesktopsApi_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopWindowMoveManager@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x1800A0E1C (-VirtualDesktopsApi_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopCol.c)
 *     ?VirtualDesktopPinnedAppsHandler_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopRegistryHelpers@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIUnknown@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x1800A0FA4 (-VirtualDesktopPinnedAppsHandler_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirt.c)
 *     ?VirtualDesktopWindowMoveManager_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopPinnedAppsPrivate@@AEBU_GUID@@PEAPEAX@Z @ 0x1800A1098 (-VirtualDesktopWindowMoveManager_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirt.c)
 *     ?CreatePersistence@CVirtualDesktopComponent@@AEAAJPEAUIVirtualDesktopRegistryHelpers@@PEAPEAUIVirtualDesktopPersistence@@@Z @ 0x18029F1D8 (-CreatePersistence@CVirtualDesktopComponent@@AEAAJPEAUIVirtualDesktopRegistryHelpers@@PEAPEAUIVi.c)
 *     ?VirtualDesktopAnimationSyncNotifications_CreateInstance@@YAJKAEBU_GUID@@PEAPEAX@Z @ 0x1802A1838 (-VirtualDesktopAnimationSyncNotifications_CreateInstance@@YAJKAEBU_GUID@@PEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x180654658 (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall CVirtualDesktopComponent::RuntimeClassInitialize(CVirtualDesktopComponent *this)
{
  void **v2; // r15
  const struct _GUID *v3; // rcx
  CCriticalFailureHandler *v4; // rcx
  int Instance; // ebx
  unsigned int UniqueContext; // r12d
  __int64 *v7; // rax
  const struct _GUID *v8; // r8
  CCriticalFailureHandler *v9; // rcx
  const struct _GUID *v10; // rdx
  CCriticalFailureHandler *v11; // rcx
  const struct _GUID *v12; // r8
  CCriticalFailureHandler *v13; // rcx
  struct IVirtualDesktopRegistryHelpers **v14; // r13
  const struct _GUID *v15; // rcx
  CCriticalFailureHandler *v16; // rcx
  CVirtualDesktopComponent *v17; // rcx
  CCriticalFailureHandler *v18; // rcx
  int IsThreadRTL; // eax
  const struct _GUID *v20; // r9
  CCriticalFailureHandler *v21; // rcx
  const struct _GUID *v22; // rcx
  CCriticalFailureHandler *v23; // rcx
  const struct _GUID *v24; // r9
  CCriticalFailureHandler *v25; // rcx
  struct IVirtualDesktopManagerPrivate **v26; // r14
  int v27; // eax
  CCriticalFailureHandler *v28; // rcx
  CCriticalFailureHandler *v29; // rcx
  CCriticalFailureHandler *v30; // rcx
  const struct _GUID *v31; // rdx
  CCriticalFailureHandler *v32; // rcx
  __int64 v33; // rcx
  CCriticalFailureHandler *v34; // rcx
  const struct _GUID *v35; // r8
  __int64 v36; // rcx
  CCriticalFailureHandler *v37; // rcx
  struct IVirtualDesktopNotification *v38; // rbx
  __int64 (__fastcall *v39)(struct IVirtualDesktopNotification *, GUID *, char *); // rdi
  CCriticalFailureHandler *v40; // rcx
  CCriticalFailureHandler *v41; // rcx
  const struct _GUID *v42; // rdx
  CCriticalFailureHandler *v43; // rcx
  struct IVirtualDesktopPinnedAppsPrivate **v44; // r12
  struct IUnknown *v45; // r9
  CCriticalFailureHandler *v46; // rcx
  CCriticalFailureHandler *v47; // rcx
  CCriticalFailureHandler *v48; // rcx
  CCriticalFailureHandler *v49; // rcx
  __int64 v50; // rdx
  __int64 v52; // rdx
  __int64 v53; // rdx
  struct IVirtualDesktopDefaultForegroundHandler *v54; // rcx
  struct IVirtualDesktopCollection *v55; // rcx
  struct IVirtualDesktopPersistence *v56; // rcx
  struct IVirtualDesktopFactory *v57; // rcx
  struct IVirtualDesktopVisibilityPolicy *v58; // rcx
  struct IVirtualDesktopNotification *v59; // rcx
  struct IVirtualDesktopCollection *v60; // rcx
  struct IVirtualDesktopPersistence *v61; // rcx
  struct IVirtualDesktopFactory *v62; // rcx
  struct IVirtualDesktopVisibilityPolicy *v63; // rcx
  struct IVirtualDesktopNotification *v64; // rcx
  struct IVirtualDesktopDefaultForegroundHandler *v65; // rcx
  struct IVirtualDesktopCollection *v66; // rcx
  struct IVirtualDesktopPersistence *v67; // rcx
  struct IVirtualDesktopFactory *v68; // rcx
  struct IVirtualDesktopVisibilityPolicy *v69; // rcx
  struct IVirtualDesktopNotification *v70; // rcx
  struct IVirtualDesktopDefaultForegroundHandler *v71; // rcx
  struct IVirtualDesktopCollection *v72; // rcx
  struct IVirtualDesktopPersistence *v73; // rcx
  struct IVirtualDesktopFactory *v74; // rcx
  struct IVirtualDesktopVisibilityPolicy *v75; // rcx
  struct IVirtualDesktopNotification *v76; // rcx
  struct IVirtualDesktopDefaultForegroundHandler *v77; // rcx
  struct IVirtualDesktopCollection *v78; // rcx
  struct IVirtualDesktopPersistence *v79; // rcx
  struct IVirtualDesktopFactory *v80; // rcx
  struct IVirtualDesktopVisibilityPolicy *v81; // rcx
  struct IVirtualDesktopNotification *v82; // rcx
  unsigned int v83; // r12d
  unsigned int v84; // r13d
  unsigned __int64 *v85; // [rsp+28h] [rbp-E0h]
  unsigned __int64 *v86; // [rsp+28h] [rbp-E0h]
  unsigned __int64 *v87; // [rsp+28h] [rbp-E0h]
  unsigned __int64 *v88; // [rsp+28h] [rbp-E0h]
  unsigned __int64 *v89; // [rsp+28h] [rbp-E0h]
  unsigned __int64 *v90; // [rsp+28h] [rbp-E0h]
  unsigned __int64 *v91; // [rsp+28h] [rbp-E0h]
  unsigned __int64 *v92; // [rsp+28h] [rbp-E0h]
  unsigned __int64 *v93; // [rsp+28h] [rbp-E0h]
  unsigned __int64 *v94; // [rsp+28h] [rbp-E0h]
  unsigned __int64 *v95; // [rsp+30h] [rbp-D8h]
  unsigned __int64 *v96; // [rsp+30h] [rbp-D8h]
  unsigned __int64 *v97; // [rsp+30h] [rbp-D8h]
  unsigned __int64 *v98; // [rsp+30h] [rbp-D8h]
  unsigned __int64 *v99; // [rsp+30h] [rbp-D8h]
  int v100[2]; // [rsp+48h] [rbp-C0h] BYREF
  struct IVirtualDesktopVisibilityPolicy *v101; // [rsp+50h] [rbp-B8h] BYREF
  struct IVirtualDesktopCollection *v102; // [rsp+58h] [rbp-B0h] BYREF
  struct IVirtualDesktopPersistence *v103; // [rsp+60h] [rbp-A8h] BYREF
  struct IVirtualDesktopFactory *v104; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v105; // [rsp+70h] [rbp-98h] BYREF
  struct IVirtualDesktopDefaultForegroundHandler *v106; // [rsp+78h] [rbp-90h] BYREF
  struct IVirtualDesktopNotification *v107; // [rsp+80h] [rbp-88h] BYREF
  unsigned int v108; // [rsp+88h] [rbp-80h] BYREF
  void *v109; // [rsp+90h] [rbp-78h]
  struct _GUID v110; // [rsp+98h] [rbp-70h] BYREF
  struct IVirtualDesktopNotification *v111; // [rsp+A8h] [rbp-60h] BYREF
  struct IVirtualDesktopVisibilityPolicy *v112; // [rsp+B0h] [rbp-58h] BYREF
  struct IVirtualDesktopCollection *v113; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v114; // [rsp+C8h] [rbp-40h] BYREF
  struct IVirtualDesktopManagerPrivate *v115; // [rsp+D8h] [rbp-30h]
  __int64 v116; // [rsp+E0h] [rbp-28h]
  __int128 v117; // [rsp+E8h] [rbp-20h]
  __int64 v118; // [rsp+F8h] [rbp-10h]
  __int64 v119; // [rsp+100h] [rbp-8h]
  __int128 v120; // [rsp+108h] [rbp+0h]
  struct IVirtualDesktopNotification *v121; // [rsp+118h] [rbp+10h]
  __int64 v122; // [rsp+120h] [rbp+18h]
  GUID v123; // [rsp+128h] [rbp+20h]
  __int64 v124; // [rsp+138h] [rbp+30h]
  __int64 v125; // [rsp+140h] [rbp+38h]
  __int128 v126; // [rsp+148h] [rbp+40h]
  __int64 v127; // [rsp+158h] [rbp+50h]
  __int64 v128; // [rsp+160h] [rbp+58h]
  __int128 v129; // [rsp+168h] [rbp+60h]
  __int64 v130; // [rsp+178h] [rbp+70h]
  __int64 v131; // [rsp+180h] [rbp+78h]
  GUID v132; // [rsp+188h] [rbp+80h]
  __int64 v133; // [rsp+198h] [rbp+90h]
  __int64 v134; // [rsp+1A0h] [rbp+98h]
  __int128 v135; // [rsp+1A8h] [rbp+A0h]
  struct IVirtualDesktopPinnedAppsPrivate *v136; // [rsp+1B8h] [rbp+B0h]
  __int64 v137; // [rsp+1C0h] [rbp+B8h]
  __int128 v138; // [rsp+1C8h] [rbp+C0h]
  __int64 v139; // [rsp+1D8h] [rbp+D0h]
  __int64 v140; // [rsp+1E0h] [rbp+D8h]
  wil::details::in1diag3 *retaddr; // [rsp+220h] [rbp+118h]

  v2 = (void **)((char *)this + 144);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 18);
  Instance = CVirtualDesktopLock_CreateInstance(v3, v2);
  v100[0] = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v4, v100);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    Instance = v100[0];
  }
  if ( Instance < 0 )
  {
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v4,
        v100,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        0x41u,
        v85,
        v95);
      Instance = v100[0];
    }
    if ( Instance < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x41,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        (const char *)(unsigned int)Instance);
      return (unsigned int)Instance;
    }
  }
  UniqueContext = SHTaskPoolGetUniqueContext();
  v107 = 0LL;
  v7 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)&v107);
  Instance = CVirtualDesktopNotifications_CreateInstance(
               UniqueContext,
               (struct IVirtualDesktopLock *)*v2,
               v8,
               (void **)v7);
  v100[0] = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v9, v100);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    Instance = v100[0];
  }
  if ( Instance < 0 )
  {
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v9,
        v100,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        0x47u,
        v85,
        v95);
      Instance = v100[0];
    }
    if ( Instance < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x47,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        (const char *)(unsigned int)Instance);
      goto LABEL_84;
    }
  }
  v101 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v101);
  Instance = CVirtualDesktopVisibilityPolicy_CreateInstance(v107, v10, (void **)&v101);
  v100[0] = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v11, v100);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    Instance = v100[0];
  }
  if ( Instance < 0 )
  {
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v11,
        v100,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        0x4Bu,
        v85,
        v95);
      Instance = v100[0];
    }
    if ( Instance < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4B,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        (const char *)(unsigned int)Instance);
      goto LABEL_83;
    }
  }
  v104 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v104);
  Instance = CVirtualDesktopFactory_CreateInstance(v101, (struct IVirtualDesktopLock *)*v2, v12, (void **)&v104);
  v100[0] = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v13, v100);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    Instance = v100[0];
  }
  if ( Instance < 0 )
  {
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v13,
        v100,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        0x4Fu,
        v85,
        v95);
      Instance = v100[0];
    }
    if ( Instance < 0 )
    {
      v53 = 79LL;
      goto LABEL_90;
    }
  }
  v14 = (struct IVirtualDesktopRegistryHelpers **)((char *)this + 240);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 30);
  Instance = VirtualDesktopRegistryHelpers_CreateInstance(v15, (void **)this + 30);
  v100[0] = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v16, v100);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    Instance = v100[0];
  }
  if ( Instance < 0 )
  {
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v16,
        v100,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        0x52u,
        v85,
        v95);
      Instance = v100[0];
    }
    if ( Instance < 0 )
    {
      v53 = 82LL;
LABEL_90:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v53,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        (const char *)(unsigned int)Instance);
      goto LABEL_82;
    }
  }
  v103 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v103);
  Instance = CVirtualDesktopComponent::CreatePersistence(v17, *v14, &v103);
  v100[0] = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v18, v100);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    Instance = v100[0];
  }
  if ( Instance < 0 )
  {
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v18,
        v100,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        0x56u,
        v85,
        v95);
      Instance = v100[0];
    }
    if ( Instance < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x56,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        (const char *)(unsigned int)Instance);
      goto LABEL_81;
    }
  }
  v102 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v102);
  IsThreadRTL = Mirror_IsThreadRTL();
  Instance = CVirtualDesktopCollection_CreateInstance(v104, v103, IsThreadRTL != 0, v20, (void **)&v102);
  v100[0] = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v21, v100);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    Instance = v100[0];
  }
  if ( Instance < 0 )
  {
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v21,
        v100,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        0x5Au,
        v86,
        v95);
      Instance = v100[0];
    }
    if ( Instance < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5A,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        (const char *)(unsigned int)Instance);
      v60 = v102;
      if ( v102 )
      {
        v102 = 0LL;
        (*(void (__fastcall **)(struct IVirtualDesktopCollection *))(*(_QWORD *)v60 + 16LL))(v60);
      }
      v61 = v103;
      if ( v103 )
      {
        v103 = 0LL;
        (*(void (__fastcall **)(struct IVirtualDesktopPersistence *))(*(_QWORD *)v61 + 16LL))(v61);
      }
      v62 = v104;
      if ( v104 )
      {
        v104 = 0LL;
        (*(void (__fastcall **)(struct IVirtualDesktopFactory *))(*(_QWORD *)v62 + 16LL))(v62);
      }
      v63 = v101;
      if ( v101 )
      {
        v101 = 0LL;
        (*(void (__fastcall **)(struct IVirtualDesktopVisibilityPolicy *))(*(_QWORD *)v63 + 16LL))(v63);
      }
      v64 = v107;
      if ( v107 )
      {
        v107 = 0LL;
        (*(void (__fastcall **)(struct IVirtualDesktopNotification *))(*(_QWORD *)v64 + 16LL))(v64);
      }
      return (unsigned int)Instance;
    }
  }
  v106 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v106);
  Instance = CVirtualDesktopDefaultForegroundHandler_CreateInstance(v22, (void **)&v106);
  v100[0] = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v23, v100);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    Instance = v100[0];
  }
  if ( Instance < 0 )
  {
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v23,
        v100,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        0x5Eu,
        v86,
        v95);
      Instance = v100[0];
    }
    if ( Instance < 0 )
    {
      v50 = 94LL;
      goto LABEL_80;
    }
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 19);
  Instance = CVirtualDesktopForegroundPolicy_CreateInstance(v102, v101, v106, v24, (void **)this + 19);
  v100[0] = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v25, v100);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    Instance = v100[0];
  }
  if ( Instance < 0 )
  {
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v25,
        v100,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        0x64u,
        v87,
        v95);
      Instance = v100[0];
    }
    if ( Instance < 0 )
    {
      v50 = 100LL;
      goto LABEL_80;
    }
  }
  v26 = (struct IVirtualDesktopManagerPrivate **)((char *)this + 160);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 20);
  v109 = *v2;
  *(_QWORD *)&v110.Data1 = v103;
  *(_QWORD *)v110.Data4 = *((_QWORD *)this + 19);
  v111 = v107;
  v112 = v101;
  v113 = v102;
  *((_QWORD *)this + 20) = 0LL;
  *(_QWORD *)v100 = 0LL;
  Microsoft::WRL::ComPtr<CVirtualDesktopManager>::InternalRelease(v100);
  v27 = Microsoft::WRL::Details::MakeAndInitialize<CVirtualDesktopManager,CVirtualDesktopManager,IVirtualDesktopCollection * &,IVirtualDesktopVisibilityPolicy * &,IVirtualDesktopNotification * &,IVirtualDesktopForegroundPolicy * &,IVirtualDesktopPersistence * &,std::nullptr_t,IVirtualDesktopLock * &>(
          (unsigned int)v100,
          (unsigned int)&v113,
          (unsigned int)&v112,
          (unsigned int)&v111,
          (__int64)v110.Data4,
          (__int64)&v110);
  Instance = v27;
  if ( v27 < 0 )
  {
    v52 = 1690LL;
  }
  else
  {
    v27 = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::ChainInterfaces<IVirtualDesktopManagerPrivate,IVirtualDesktopManagerInternal,IVirtualDesktopManagerInternal2,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IVirtualDesktopManagerInternal,IVirtualDesktopManagerInternal2,ISuspendableVirtualDesktopManager,IImmersiveWindowMessageNotification,Microsoft::WRL::FtmBase>>(
            *(_QWORD *)v100,
            &GUID_95bb3d6c_9eba_40cc_af4d_1a3255717d9d,
            (char *)this + 160);
    Instance = v27;
    if ( v27 >= 0 )
      goto LABEL_30;
    v52 = 1691LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v52,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
    (const char *)(unsigned int)v27);
LABEL_30:
  v28 = *(CCriticalFailureHandler **)v100;
  if ( *(_QWORD *)v100 )
  {
    *(_QWORD *)v100 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::ChainInterfaces<IVirtualDesktopManagerPrivate,IVirtualDesktopManagerInternal,IVirtualDesktopManagerInternal2,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IVirtualDesktopManagerInternal,IVirtualDesktopManagerInternal2,ISuspendableVirtualDesktopManager,IImmersiveWindowMessageNotification,Microsoft::WRL::FtmBase>::Release();
  }
  v100[0] = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v28, v100);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    Instance = v100[0];
  }
  if ( Instance < 0 )
  {
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v28,
        v100,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        0x6Eu,
        v88,
        v96);
      Instance = v100[0];
    }
    if ( Instance < 0 )
    {
      v50 = 110LL;
      goto LABEL_80;
    }
  }
  LOBYTE(v105) = 0;
  v108 = 0;
  Instance = wil::wnf_query_nothrow<enum _TABLETMODESTATE>(v28, &v105, &v108);
  v100[0] = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v29, v100);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    Instance = v100[0];
  }
  if ( Instance < 0 )
  {
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v29,
        v100,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        0x72u,
        v88,
        v96);
      Instance = v100[0];
    }
    if ( Instance < 0 )
    {
      v50 = 114LL;
      goto LABEL_80;
    }
  }
  if ( !(_BYTE)v105 )
    v108 = 0;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 26);
  v89 = (unsigned __int64 *)*v2;
  Instance = VirtualDesktopTabletModePolicy_CreateInstance(v108, v102, *v26, v101);
  v100[0] = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v30, v100);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    Instance = v100[0];
  }
  if ( Instance < 0 )
  {
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v30,
        v100,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        0x7Fu,
        v89,
        v96);
      Instance = v100[0];
    }
    if ( Instance < 0 )
    {
      v50 = 127LL;
      goto LABEL_80;
    }
  }
  v90 = (unsigned __int64 *)*((_QWORD *)this + 26);
  Instance = (*(__int64 (__fastcall **)(struct IVirtualDesktopPersistence *, _QWORD, struct IVirtualDesktopManagerPrivate *, struct IVirtualDesktopCollection *))(*(_QWORD *)v103 + 40LL))(
               v103,
               v108,
               *v26,
               v102);
  v100[0] = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v32, v100);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    Instance = v100[0];
  }
  if ( Instance < 0 )
  {
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v32,
        v100,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        0x83u,
        v90,
        v96);
      Instance = v100[0];
    }
    if ( Instance < 0 )
    {
      v50 = 131LL;
      goto LABEL_80;
    }
  }
  v33 = *((_QWORD *)this + 21);
  *((_QWORD *)this + 21) = 0LL;
  if ( v33 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  Instance = VirtualDesktopAnimationSyncNotifications_CreateInstance(UniqueContext, v31, (void **)this + 21);
  v100[0] = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v34, v100);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    Instance = v100[0];
  }
  if ( Instance < 0 )
  {
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v34,
        v100,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        0x87u,
        v90,
        v96);
      Instance = v100[0];
    }
    if ( Instance < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x87,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        (const char *)(unsigned int)Instance);
      v65 = v106;
      if ( v106 )
      {
        v106 = 0LL;
        (*(void (__fastcall **)(struct IVirtualDesktopDefaultForegroundHandler *))(*(_QWORD *)v65 + 16LL))(v65);
      }
      v66 = v102;
      if ( v102 )
      {
        v102 = 0LL;
        (*(void (__fastcall **)(struct IVirtualDesktopCollection *))(*(_QWORD *)v66 + 16LL))(v66);
      }
      v67 = v103;
      if ( v103 )
      {
        v103 = 0LL;
        (*(void (__fastcall **)(struct IVirtualDesktopPersistence *))(*(_QWORD *)v67 + 16LL))(v67);
      }
      v68 = v104;
      if ( v104 )
      {
        v104 = 0LL;
        (*(void (__fastcall **)(struct IVirtualDesktopFactory *))(*(_QWORD *)v68 + 16LL))(v68);
      }
      v69 = v101;
      if ( v101 )
      {
        v101 = 0LL;
        (*(void (__fastcall **)(struct IVirtualDesktopVisibilityPolicy *))(*(_QWORD *)v69 + 16LL))(v69);
      }
      v70 = v107;
      if ( v107 )
      {
        v107 = 0LL;
        (*(void (__fastcall **)(struct IVirtualDesktopNotification *))(*(_QWORD *)v70 + 16LL))(v70);
      }
      return (unsigned int)Instance;
    }
  }
  v36 = *((_QWORD *)this + 23);
  *((_QWORD *)this + 23) = 0LL;
  if ( v36 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
  Instance = CVirtualDesktopHotkeyHandler_CreateInstance(
               *v26,
               (struct IVirtualDesktopLock *)*v2,
               v35,
               (void **)this + 23);
  v100[0] = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v37, v100);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    Instance = v100[0];
  }
  if ( Instance < 0 )
  {
    v83 = 140;
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v37,
        v100,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        0x8Cu,
        v90,
        v96);
      Instance = v100[0];
    }
    if ( Instance < 0 )
      goto LABEL_79;
  }
  v38 = v107;
  v39 = **(__int64 (__fastcall ***)(struct IVirtualDesktopNotification *, GUID *, char *))v107;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 31);
  Instance = v39(v38, &GUID_81ae09de_340b_4b9f_9cba_61bb8e6a8a68, (char *)this + 248);
  v100[0] = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v40, v100);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    Instance = v100[0];
  }
  if ( Instance < 0 )
  {
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v40,
        v100,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        0x8Eu,
        v90,
        v96);
      Instance = v100[0];
    }
    if ( Instance < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8E,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        (const char *)(unsigned int)Instance);
      v71 = v106;
      if ( v106 )
      {
        v106 = 0LL;
        (*(void (__fastcall **)(struct IVirtualDesktopDefaultForegroundHandler *))(*(_QWORD *)v71 + 16LL))(v71);
      }
      v72 = v102;
      if ( v102 )
      {
        v102 = 0LL;
        (*(void (__fastcall **)(struct IVirtualDesktopCollection *))(*(_QWORD *)v72 + 16LL))(v72);
      }
      v73 = v103;
      if ( v103 )
      {
        v103 = 0LL;
        (*(void (__fastcall **)(struct IVirtualDesktopPersistence *))(*(_QWORD *)v73 + 16LL))(v73);
      }
      v74 = v104;
      if ( v104 )
      {
        v104 = 0LL;
        (*(void (__fastcall **)(struct IVirtualDesktopFactory *))(*(_QWORD *)v74 + 16LL))(v74);
      }
      v75 = v101;
      if ( v101 )
      {
        v101 = 0LL;
        (*(void (__fastcall **)(struct IVirtualDesktopVisibilityPolicy *))(*(_QWORD *)v75 + 16LL))(v75);
      }
      v76 = v107;
      if ( v107 )
      {
        v107 = 0LL;
        (*(void (__fastcall **)(struct IVirtualDesktopNotification *))(*(_QWORD *)v76 + 16LL))(v76);
      }
      return (unsigned int)Instance;
    }
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 29);
  v91 = (unsigned __int64 *)*v2;
  Instance = VirtualDesktopAcessibility_CreateInstance(v108, *((_QWORD *)this + 31), v102, *v26);
  v100[0] = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v41, v100);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    Instance = v100[0];
  }
  if ( Instance < 0 )
  {
    v83 = 151;
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v41,
        v100,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        0x97u,
        v91,
        v96);
      Instance = v100[0];
    }
    if ( Instance < 0 )
      goto LABEL_79;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 28);
  Instance = VirtualDesktopGestureHandler_CreateInstance(*v26, v42, (void **)this + 28);
  v100[0] = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v43, v100);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    Instance = v100[0];
  }
  if ( Instance < 0 )
  {
    v83 = 153;
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v43,
        v100,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        0x99u,
        v91,
        v96);
      Instance = v100[0];
    }
    if ( Instance < 0 )
    {
LABEL_79:
      v50 = v83;
LABEL_80:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v50,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        (const char *)(unsigned int)Instance);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v106);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v102);
LABEL_81:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v103);
LABEL_82:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v104);
LABEL_83:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v101);
      goto LABEL_84;
    }
  }
  v44 = (struct IVirtualDesktopPinnedAppsPrivate **)((char *)this + 216);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 27);
  Instance = VirtualDesktopPinnedAppsHandler_CreateInstance(
               *v26,
               *v14,
               v101,
               v45,
               (struct IVirtualDesktopLock *)*v2,
               (const struct _GUID *)v96,
               (void **)this + 27);
  v100[0] = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v46, v100);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    Instance = v100[0];
  }
  if ( Instance < 0 )
  {
    v84 = 161;
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v46,
        v100,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        0xA1u,
        v92,
        v97);
      Instance = v100[0];
    }
    if ( Instance < 0 )
      goto LABEL_92;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 24);
  Instance = VirtualDesktopWindowMoveManager_CreateInstance(
               *v26,
               v102,
               v101,
               *v44,
               (const struct _GUID *)v92,
               (void **)this + 24);
  v100[0] = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v47, v100);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    Instance = v100[0];
  }
  if ( Instance < 0 )
  {
    v84 = 168;
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v47,
        v100,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        0xA8u,
        v93,
        v98);
      Instance = v100[0];
    }
    if ( Instance < 0 )
    {
LABEL_92:
      v50 = v84;
      goto LABEL_80;
    }
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 25);
  Instance = VirtualDesktopsApi_CreateInstance(
               *v26,
               v102,
               v101,
               *((struct IVirtualDesktopWindowMoveManager **)this + 24),
               (struct IVirtualDesktopLock *)*v2,
               (const struct _GUID *)v98,
               (void **)this + 25);
  v100[0] = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v48, v100);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    Instance = v100[0];
  }
  if ( Instance >= 0 )
    goto LABEL_74;
  if ( Instance != -2147024882 && Instance != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v48,
      v100,
      L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
      0xB0u,
      v94,
      v99);
    Instance = v100[0];
  }
  if ( Instance >= 0 )
  {
LABEL_74:
    v114 = *(_OWORD *)&SID_VirtualDesktopManager.Revision;
    v115 = *v26;
    v116 = 0LL;
    v117 = *(_OWORD *)&SID_VirtualDesktopHotkeyHandler.Revision;
    v118 = *((_QWORD *)this + 23);
    v119 = 0LL;
    v120 = *(_OWORD *)&SID_VirtualDesktopNotificationService.Revision;
    v121 = v107;
    v122 = 0LL;
    v123 = IID_IVirtualDesktopManager;
    v124 = *((_QWORD *)this + 25);
    v125 = 0LL;
    v126 = *(_OWORD *)&SID_VirtualDesktopAnimationSyncNotificationService.Revision;
    v127 = *((_QWORD *)this + 21);
    v128 = 0LL;
    v129 = *(_OWORD *)&SID_VirtualDesktopTabletModePolicyService.Revision;
    v130 = *((_QWORD *)this + 26);
    v131 = 0LL;
    v132 = IID_IVirtualDesktopAccessibility;
    v133 = *((_QWORD *)this + 29);
    v134 = 0LL;
    v135 = *(_OWORD *)&SID_VirtualDesktopPinnedApps.Revision;
    v136 = *v44;
    v137 = 0LL;
    v138 = *(_OWORD *)&SID_VirtualDesktopGestureHandler.Revision;
    v139 = *((_QWORD *)this + 28);
    v140 = 0LL;
    Instance = CImmersiveShellComponent::RegisterServiceInformation(
                 (CVirtualDesktopComponent *)((char *)this + 40),
                 (__int64)&v114,
                 9uLL);
    v100[0] = Instance;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v49, v100);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      Instance = v100[0];
    }
    if ( Instance >= 0 )
      goto LABEL_77;
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v49,
        v100,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        0xBEu,
        v94,
        v99);
      Instance = v100[0];
    }
    if ( Instance >= 0 )
    {
LABEL_77:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v106);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v102);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v103);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v104);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v101);
      Instance = 0;
LABEL_84:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v107);
      return (unsigned int)Instance;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBE,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
      (const char *)(unsigned int)Instance);
    v77 = v106;
    if ( v106 )
    {
      v106 = 0LL;
      (*(void (__fastcall **)(struct IVirtualDesktopDefaultForegroundHandler *))(*(_QWORD *)v77 + 16LL))(v77);
    }
    v78 = v102;
    if ( v102 )
    {
      v102 = 0LL;
      (*(void (__fastcall **)(struct IVirtualDesktopCollection *))(*(_QWORD *)v78 + 16LL))(v78);
    }
    v79 = v103;
    if ( v103 )
    {
      v103 = 0LL;
      (*(void (__fastcall **)(struct IVirtualDesktopPersistence *))(*(_QWORD *)v79 + 16LL))(v79);
    }
    v80 = v104;
    if ( v104 )
    {
      v104 = 0LL;
      (*(void (__fastcall **)(struct IVirtualDesktopFactory *))(*(_QWORD *)v80 + 16LL))(v80);
    }
    v81 = v101;
    if ( v101 )
    {
      v101 = 0LL;
      (*(void (__fastcall **)(struct IVirtualDesktopVisibilityPolicy *))(*(_QWORD *)v81 + 16LL))(v81);
    }
    v82 = v107;
    if ( v107 )
    {
      v107 = 0LL;
      (*(void (__fastcall **)(struct IVirtualDesktopNotification *))(*(_QWORD *)v82 + 16LL))(v82);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB0,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
      (const char *)(unsigned int)Instance);
    v54 = v106;
    if ( v106 )
    {
      v106 = 0LL;
      (*(void (__fastcall **)(struct IVirtualDesktopDefaultForegroundHandler *))(*(_QWORD *)v54 + 16LL))(v54);
    }
    v55 = v102;
    if ( v102 )
    {
      v102 = 0LL;
      (*(void (__fastcall **)(struct IVirtualDesktopCollection *))(*(_QWORD *)v55 + 16LL))(v55);
    }
    v56 = v103;
    if ( v103 )
    {
      v103 = 0LL;
      (*(void (__fastcall **)(struct IVirtualDesktopPersistence *))(*(_QWORD *)v56 + 16LL))(v56);
    }
    v57 = v104;
    if ( v104 )
    {
      v104 = 0LL;
      (*(void (__fastcall **)(struct IVirtualDesktopFactory *))(*(_QWORD *)v57 + 16LL))(v57);
    }
    v58 = v101;
    if ( v101 )
    {
      v101 = 0LL;
      (*(void (__fastcall **)(struct IVirtualDesktopVisibilityPolicy *))(*(_QWORD *)v58 + 16LL))(v58);
    }
    v59 = v107;
    if ( v107 )
    {
      v107 = 0LL;
      (*(void (__fastcall **)(struct IVirtualDesktopNotification *))(*(_QWORD *)v59 + 16LL))(v59);
    }
  }
  return (unsigned int)Instance;
}
