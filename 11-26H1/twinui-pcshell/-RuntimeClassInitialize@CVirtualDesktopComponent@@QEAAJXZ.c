/*
 * XREFs of ?RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ @ 0x1800826D8
 * Callers:
 *     ??$MakeAndInitialize@VCVirtualDesktopComponent@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1802B32B8 (--$MakeAndInitialize@VCVirtualDesktopComponent@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAU.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180046480 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x18004A1A8 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ?VirtualDesktopsApi_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopWindowMoveManager@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x1800813D0 (-VirtualDesktopsApi_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopCol.c)
 *     ?VirtualDesktopAcessibility_CreateInstance@@YAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopNotificationServicePrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x180081564 (-VirtualDesktopAcessibility_CreateInstance@@YAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopNotificati.c)
 *     ?CVirtualDesktopHotkeyHandler_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x180081648 (-CVirtualDesktopHotkeyHandler_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtual.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U?$ChainInterfaces@UIVirtualDesktopManagerPrivate@@UIVirtualDesktopManagerInternal@@UIVirtualDesktopManagerInternal2@@VNil@Details@WRL@Microsoft@@V4567@V4567@V4567@V4567@V4567@V4567@@23@UIVirtualDesktopManagerInternal@@UIVirtualDesktopManagerInternal2@@UISuspendableVirtualDesktopManager@@UIImmersiveWindowMessageNotification@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U?$ChainInterfaces@UIVirtualDesktopManagerPrivate@@UIVirtualDesktopManagerInternal@@UIVirtualDesktopManagerInternal2@@VNil@Details@WRL@Microsoft@@V4567@V4567@V4567@V4567@V4567@V4567@@23@UIVirtualDesktopManagerInternal@@UIVirtualDesktopManagerInternal2@@UISuspendableVirtualDesktopManager@@UIImmersiveWindowMessageNotification@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18008184C (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U-$C_ea_18008184C.c)
 *     ?InternalRelease@?$ComPtr@VCVirtualDesktopManager@@@WRL@Microsoft@@IEAAKXZ @ 0x180081AD0 (-InternalRelease@-$ComPtr@VCVirtualDesktopManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U?$ChainInterfaces@UIVirtualDesktopManagerPrivate@@UIVirtualDesktopManagerInternal@@UIVirtualDesktopManagerInternal2@@VNil@Details@WRL@Microsoft@@V4567@V4567@V4567@V4567@V4567@V4567@@23@UIVirtualDesktopManagerInternal@@UIVirtualDesktopManagerInternal2@@UISuspendableVirtualDesktopManager@@UIImmersiveWindowMessageNotification@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180081B00 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U-$Ch_ea_180081B00.c)
 *     ?VirtualDesktopTabletModePolicy_CreateInstance@@YAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x180081B9C (-VirtualDesktopTabletModePolicy_CreateInstance@@YAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopCollec.c)
 *     ??$MakeAndInitialize@VCVirtualDesktopManager@@V1@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopNotification@@AEAPEAUIVirtualDesktopForegroundPolicy@@AEAPEAUIVirtualDesktopPersistence@@$$TAEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopManager@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopNotification@@AEAPEAUIVirtualDesktopForegroundPolicy@@AEAPEAUIVirtualDesktopPersistence@@$$QEA$$TAEAPEAUIVirtualDesktopLock@@@Z @ 0x180081D78 (--$MakeAndInitialize@VCVirtualDesktopManager@@V1@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtu.c)
 *     ?CVirtualDesktopForegroundPolicy_CreateInstance@@YAJPEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopDefaultForegroundHandler@@AEBU_GUID@@PEAPEAX@Z @ 0x180081EA4 (-CVirtualDesktopForegroundPolicy_CreateInstance@@YAJPEAUIVirtualDesktopCollection@@PEAUIVirtualD.c)
 *     ?CVirtualDesktopDefaultForegroundHandler_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180081F58 (-CVirtualDesktopDefaultForegroundHandler_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$wnf_query_nothrow@W4_TABLETMODESTATE@@@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAW4_TABLETMODESTATE@@PEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x18008200C (--$wnf_query_nothrow@W4_TABLETMODESTATE@@@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAW4_TABLETMODESTAT.c)
 *     ?VirtualDesktopRegistryHelpers_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1800820FC (-VirtualDesktopRegistryHelpers_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CVirtualDesktopNotifications_CreateInstance@@YAJKPEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x18008220C (-CVirtualDesktopNotifications_CreateInstance@@YAJKPEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z.c)
 *     Mirror_IsThreadRTL @ 0x1800822EC (Mirror_IsThreadRTL.c)
 *     ?CVirtualDesktopCollection_CreateInstance@@YAJPEAUIVirtualDesktopFactory@@PEAUIVirtualDesktopPersistence@@_NAEBU_GUID@@PEAPEAX@Z @ 0x180082370 (-CVirtualDesktopCollection_CreateInstance@@YAJPEAUIVirtualDesktopFactory@@PEAUIVirtualDesktopPer.c)
 *     ?CVirtualDesktopFactory_CreateInstance@@YAJPEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x180082428 (-CVirtualDesktopFactory_CreateInstance@@YAJPEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesk.c)
 *     ?CVirtualDesktopLock_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1800824E0 (-CVirtualDesktopLock_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CVirtualDesktopVisibilityPolicy_CreateInstance@@YAJPEAUIVirtualDesktopNotification@@AEBU_GUID@@PEAPEAX@Z @ 0x1800825C0 (-CVirtualDesktopVisibilityPolicy_CreateInstance@@YAJPEAUIVirtualDesktopNotification@@AEBU_GUID@@.c)
 *     ?GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z @ 0x180083CC4 (-GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z.c)
 *     ?VirtualDesktopPinnedAppsHandler_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopRegistryHelpers@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIUnknown@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x1801B7D0C (-VirtualDesktopPinnedAppsHandler_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirt.c)
 *     ?VirtualDesktopWindowMoveManager_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopPinnedAppsPrivate@@AEBU_GUID@@PEAPEAX@Z @ 0x1801B9D5C (-VirtualDesktopWindowMoveManager_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirt.c)
 *     ?VirtualDesktopGestureHandler_CreateInstance@@YAJPEAUIVirtualDesktopManagerInternal@@AEBU_GUID@@PEAPEAX@Z @ 0x1801E7528 (-VirtualDesktopGestureHandler_CreateInstance@@YAJPEAUIVirtualDesktopManagerInternal@@AEBU_GUID@@.c)
 *     ?CreatePersistence@CVirtualDesktopComponent@@AEAAJPEAUIVirtualDesktopRegistryHelpers@@PEAPEAUIVirtualDesktopPersistence@@@Z @ 0x1802961B4 (-CreatePersistence@CVirtualDesktopComponent@@AEAAJPEAUIVirtualDesktopRegistryHelpers@@PEAPEAUIVi.c)
 *     ?VirtualDesktopAnimationSyncNotifications_CreateInstance@@YAJKAEBU_GUID@@PEAPEAX@Z @ 0x18029C45C (-VirtualDesktopAnimationSyncNotifications_CreateInstance@@YAJKAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x18067A61C (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  __int64 *v26; // r14
  int v27; // eax
  __int64 v28; // r9
  volatile signed __int64 *v29; // rcx
  CCriticalFailureHandler *v30; // rcx
  CCriticalFailureHandler *v31; // rcx
  const struct _GUID *v32; // rdx
  CCriticalFailureHandler *v33; // rcx
  __int64 v34; // rcx
  CCriticalFailureHandler *v35; // rcx
  const struct _GUID *v36; // r8
  __int64 v37; // rcx
  CCriticalFailureHandler *v38; // rcx
  struct IVirtualDesktopNotification *v39; // rbx
  __int64 (__fastcall *v40)(struct IVirtualDesktopNotification *, GUID *, char *); // rdi
  CCriticalFailureHandler *v41; // rcx
  CCriticalFailureHandler *v42; // rcx
  const struct _GUID *v43; // rdx
  CCriticalFailureHandler *v44; // rcx
  struct IVirtualDesktopPinnedAppsPrivate **v45; // r12
  struct IUnknown *v46; // r9
  CCriticalFailureHandler *v47; // rcx
  CCriticalFailureHandler *v48; // rcx
  CCriticalFailureHandler *v49; // rcx
  CCriticalFailureHandler *v50; // rcx
  __int64 v51; // rdx
  __int64 v53; // rdx
  __int64 v54; // rdx
  struct IVirtualDesktopDefaultForegroundHandler *v55; // rcx
  struct IVirtualDesktopCollection *v56; // rcx
  struct IVirtualDesktopPersistence *v57; // rcx
  struct IVirtualDesktopFactory *v58; // rcx
  struct IVirtualDesktopVisibilityPolicy *v59; // rcx
  struct IVirtualDesktopNotification *v60; // rcx
  struct IVirtualDesktopDefaultForegroundHandler *v61; // rcx
  struct IVirtualDesktopCollection *v62; // rcx
  struct IVirtualDesktopPersistence *v63; // rcx
  struct IVirtualDesktopFactory *v64; // rcx
  struct IVirtualDesktopVisibilityPolicy *v65; // rcx
  struct IVirtualDesktopNotification *v66; // rcx
  struct IVirtualDesktopCollection *v67; // rcx
  struct IVirtualDesktopPersistence *v68; // rcx
  struct IVirtualDesktopFactory *v69; // rcx
  struct IVirtualDesktopVisibilityPolicy *v70; // rcx
  struct IVirtualDesktopNotification *v71; // rcx
  struct IVirtualDesktopDefaultForegroundHandler *v72; // rcx
  struct IVirtualDesktopCollection *v73; // rcx
  struct IVirtualDesktopPersistence *v74; // rcx
  struct IVirtualDesktopFactory *v75; // rcx
  struct IVirtualDesktopVisibilityPolicy *v76; // rcx
  struct IVirtualDesktopNotification *v77; // rcx
  struct IVirtualDesktopDefaultForegroundHandler *v78; // rcx
  struct IVirtualDesktopCollection *v79; // rcx
  struct IVirtualDesktopPersistence *v80; // rcx
  struct IVirtualDesktopFactory *v81; // rcx
  struct IVirtualDesktopVisibilityPolicy *v82; // rcx
  struct IVirtualDesktopNotification *v83; // rcx
  unsigned int v84; // r12d
  unsigned int v85; // r13d
  unsigned __int64 *v86; // [rsp+20h] [rbp-E0h]
  unsigned __int64 *v87; // [rsp+20h] [rbp-E0h]
  unsigned __int64 *v88; // [rsp+20h] [rbp-E0h]
  unsigned __int64 *v89; // [rsp+20h] [rbp-E0h]
  unsigned __int64 *v90; // [rsp+20h] [rbp-E0h]
  unsigned __int64 *v91; // [rsp+20h] [rbp-E0h]
  unsigned __int64 *v92; // [rsp+20h] [rbp-E0h]
  unsigned __int64 *v93; // [rsp+20h] [rbp-E0h]
  unsigned __int64 *v94; // [rsp+20h] [rbp-E0h]
  unsigned __int64 *v95; // [rsp+20h] [rbp-E0h]
  unsigned __int64 *v96; // [rsp+28h] [rbp-D8h]
  unsigned __int64 *v97; // [rsp+28h] [rbp-D8h]
  unsigned __int64 *v98; // [rsp+28h] [rbp-D8h]
  unsigned __int64 *v99; // [rsp+28h] [rbp-D8h]
  unsigned __int64 *v100; // [rsp+28h] [rbp-D8h]
  unsigned __int64 *v101; // [rsp+28h] [rbp-D8h]
  void **v102; // [rsp+30h] [rbp-D0h]
  struct IVirtualDesktopCollection *v103; // [rsp+40h] [rbp-C0h] BYREF
  struct IVirtualDesktopPersistence *v104; // [rsp+48h] [rbp-B8h] BYREF
  struct IVirtualDesktopFactory *v105; // [rsp+50h] [rbp-B0h] BYREF
  struct IVirtualDesktopDefaultForegroundHandler *v106; // [rsp+58h] [rbp-A8h] BYREF
  struct IVirtualDesktopNotification *v107; // [rsp+60h] [rbp-A0h] BYREF
  struct _GUID v108; // [rsp+68h] [rbp-98h] BYREF
  struct IVirtualDesktopNotification *v109; // [rsp+78h] [rbp-88h] BYREF
  struct IVirtualDesktopVisibilityPolicy *v110; // [rsp+80h] [rbp-80h] BYREF
  struct IVirtualDesktopCollection *v111; // [rsp+88h] [rbp-78h] BYREF
  __int128 v112; // [rsp+90h] [rbp-70h] BYREF
  __int64 v113; // [rsp+A0h] [rbp-60h]
  __int64 v114; // [rsp+A8h] [rbp-58h]
  __int128 v115; // [rsp+B0h] [rbp-50h]
  __int64 v116; // [rsp+C0h] [rbp-40h]
  __int64 v117; // [rsp+C8h] [rbp-38h]
  __int128 v118; // [rsp+D0h] [rbp-30h]
  struct IVirtualDesktopNotification *v119; // [rsp+E0h] [rbp-20h]
  __int64 v120; // [rsp+E8h] [rbp-18h]
  GUID v121; // [rsp+F0h] [rbp-10h]
  __int64 v122; // [rsp+100h] [rbp+0h]
  __int64 v123; // [rsp+108h] [rbp+8h]
  __int128 v124; // [rsp+110h] [rbp+10h]
  __int64 v125; // [rsp+120h] [rbp+20h]
  __int64 v126; // [rsp+128h] [rbp+28h]
  __int128 v127; // [rsp+130h] [rbp+30h]
  __int64 v128; // [rsp+140h] [rbp+40h]
  __int64 v129; // [rsp+148h] [rbp+48h]
  GUID v130; // [rsp+150h] [rbp+50h]
  __int64 v131; // [rsp+160h] [rbp+60h]
  __int64 v132; // [rsp+168h] [rbp+68h]
  __int128 v133; // [rsp+170h] [rbp+70h]
  struct IVirtualDesktopPinnedAppsPrivate *v134; // [rsp+180h] [rbp+80h]
  __int64 v135; // [rsp+188h] [rbp+88h]
  __int128 v136; // [rsp+190h] [rbp+90h]
  __int64 v137; // [rsp+1A0h] [rbp+A0h]
  __int64 v138; // [rsp+1A8h] [rbp+A8h]
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+F8h]
  volatile signed __int64 *v140; // [rsp+200h] [rbp+100h] BYREF
  unsigned int v141; // [rsp+208h] [rbp+108h] BYREF
  struct IVirtualDesktopLock *v142; // [rsp+210h] [rbp+110h] BYREF
  struct IVirtualDesktopVisibilityPolicy *v143; // [rsp+218h] [rbp+118h] BYREF

  v2 = (void **)((char *)this + 144);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 18);
  Instance = CVirtualDesktopLock_CreateInstance(v3, v2);
  LODWORD(v140) = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v4, (int *)&v140);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    Instance = (int)v140;
  }
  if ( Instance < 0 )
  {
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v4,
        (int *)&v140,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        0x41u,
        v86,
        v96);
      Instance = (int)v140;
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
  LODWORD(v140) = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v9, (int *)&v140);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    Instance = (int)v140;
  }
  if ( Instance < 0 )
  {
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v9,
        (int *)&v140,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        0x47u,
        v86,
        v96);
      Instance = (int)v140;
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
  v143 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v143);
  Instance = CVirtualDesktopVisibilityPolicy_CreateInstance(v107, v10, (void **)&v143);
  LODWORD(v140) = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v11, (int *)&v140);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    Instance = (int)v140;
  }
  if ( Instance < 0 )
  {
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v11,
        (int *)&v140,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        0x4Bu,
        v86,
        v96);
      Instance = (int)v140;
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
  v105 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v105);
  Instance = CVirtualDesktopFactory_CreateInstance(v143, (struct IVirtualDesktopLock *)*v2, v12, (void **)&v105);
  LODWORD(v140) = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v13, (int *)&v140);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    Instance = (int)v140;
  }
  if ( Instance < 0 )
  {
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v13,
        (int *)&v140,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        0x4Fu,
        v86,
        v96);
      Instance = (int)v140;
    }
    if ( Instance < 0 )
    {
      v54 = 79LL;
      goto LABEL_90;
    }
  }
  v14 = (struct IVirtualDesktopRegistryHelpers **)((char *)this + 240);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 30);
  Instance = VirtualDesktopRegistryHelpers_CreateInstance(v15, (void **)this + 30);
  LODWORD(v140) = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v16, (int *)&v140);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    Instance = (int)v140;
  }
  if ( Instance < 0 )
  {
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v16,
        (int *)&v140,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        0x52u,
        v86,
        v96);
      Instance = (int)v140;
    }
    if ( Instance < 0 )
    {
      v54 = 82LL;
LABEL_90:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v54,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        (const char *)(unsigned int)Instance);
      goto LABEL_82;
    }
  }
  v104 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v104);
  Instance = CVirtualDesktopComponent::CreatePersistence(v17, *v14, &v104);
  LODWORD(v140) = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v18, (int *)&v140);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    Instance = (int)v140;
  }
  if ( Instance < 0 )
  {
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v18,
        (int *)&v140,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        0x56u,
        v86,
        v96);
      Instance = (int)v140;
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
  v103 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v103);
  IsThreadRTL = Mirror_IsThreadRTL();
  Instance = CVirtualDesktopCollection_CreateInstance(v105, v104, IsThreadRTL != 0, v20, (void **)&v103);
  LODWORD(v140) = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v21, (int *)&v140);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    Instance = (int)v140;
  }
  if ( Instance < 0 )
  {
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v21,
        (int *)&v140,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        0x5Au,
        v87,
        v96);
      Instance = (int)v140;
    }
    if ( Instance < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5A,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        (const char *)(unsigned int)Instance);
      v67 = v103;
      if ( v103 )
      {
        v103 = 0LL;
        (*(void (__fastcall **)(struct IVirtualDesktopCollection *))(*(_QWORD *)v67 + 16LL))(v67);
      }
      v68 = v104;
      if ( v104 )
      {
        v104 = 0LL;
        (*(void (__fastcall **)(struct IVirtualDesktopPersistence *))(*(_QWORD *)v68 + 16LL))(v68);
      }
      v69 = v105;
      if ( v105 )
      {
        v105 = 0LL;
        (*(void (__fastcall **)(struct IVirtualDesktopFactory *))(*(_QWORD *)v69 + 16LL))(v69);
      }
      v70 = v143;
      if ( v143 )
      {
        v143 = 0LL;
        (*(void (__fastcall **)(struct IVirtualDesktopVisibilityPolicy *))(*(_QWORD *)v70 + 16LL))(v70);
      }
      v71 = v107;
      if ( v107 )
      {
        v107 = 0LL;
        (*(void (__fastcall **)(struct IVirtualDesktopNotification *))(*(_QWORD *)v71 + 16LL))(v71);
      }
      return (unsigned int)Instance;
    }
  }
  v106 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v106);
  Instance = CVirtualDesktopDefaultForegroundHandler_CreateInstance(v22, (void **)&v106);
  LODWORD(v140) = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v23, (int *)&v140);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    Instance = (int)v140;
  }
  if ( Instance < 0 )
  {
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v23,
        (int *)&v140,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        0x5Eu,
        v87,
        v96);
      Instance = (int)v140;
    }
    if ( Instance < 0 )
    {
      v51 = 94LL;
      goto LABEL_80;
    }
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 19);
  Instance = CVirtualDesktopForegroundPolicy_CreateInstance(v103, v143, v106, v24, (void **)this + 19);
  LODWORD(v140) = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v25, (int *)&v140);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    Instance = (int)v140;
  }
  if ( Instance < 0 )
  {
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v25,
        (int *)&v140,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        0x64u,
        v88,
        v96);
      Instance = (int)v140;
    }
    if ( Instance < 0 )
    {
      v51 = 100LL;
      goto LABEL_80;
    }
  }
  v26 = (__int64 *)((char *)this + 160);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 20);
  v142 = (struct IVirtualDesktopLock *)*v2;
  *(_QWORD *)&v108.Data1 = v104;
  *(_QWORD *)v108.Data4 = *((_QWORD *)this + 19);
  v109 = v107;
  v110 = v143;
  v111 = v103;
  *((_QWORD *)this + 20) = 0LL;
  v140 = 0LL;
  Microsoft::WRL::ComPtr<CVirtualDesktopManager>::InternalRelease((__int64 *)&v140);
  v27 = Microsoft::WRL::Details::MakeAndInitialize<CVirtualDesktopManager,CVirtualDesktopManager,IVirtualDesktopCollection * &,IVirtualDesktopVisibilityPolicy * &,IVirtualDesktopNotification * &,IVirtualDesktopForegroundPolicy * &,IVirtualDesktopPersistence * &,std::nullptr_t,IVirtualDesktopLock * &>(
          &v140,
          &v111,
          &v110,
          &v109,
          (struct IVirtualDesktopForegroundPolicy **)v108.Data4,
          (struct IVirtualDesktopPersistence **)&v108,
          (__int64)v102,
          &v142);
  Instance = v27;
  if ( v27 < 0 )
  {
    v53 = 1690LL;
  }
  else
  {
    v27 = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::ChainInterfaces<IVirtualDesktopManagerPrivate,IVirtualDesktopManagerInternal,IVirtualDesktopManagerInternal2,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IVirtualDesktopManagerInternal,IVirtualDesktopManagerInternal2,ISuspendableVirtualDesktopManager,IImmersiveWindowMessageNotification,Microsoft::WRL::FtmBase>>(
            (__int64)v140,
            &GUID_95bb3d6c_9eba_40cc_af4d_1a3255717d9d,
            (_QWORD *)this + 20);
    Instance = v27;
    if ( v27 >= 0 )
      goto LABEL_30;
    v53 = 1691LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v53,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
    (const char *)(unsigned int)v27);
LABEL_30:
  v29 = v140;
  if ( v140 )
  {
    v140 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::ChainInterfaces<IVirtualDesktopManagerPrivate,IVirtualDesktopManagerInternal,IVirtualDesktopManagerInternal2,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IVirtualDesktopManagerInternal,IVirtualDesktopManagerInternal2,ISuspendableVirtualDesktopManager,IImmersiveWindowMessageNotification,Microsoft::WRL::FtmBase>::Release(v29);
  }
  LODWORD(v140) = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure((CCriticalFailureHandler *)v29, (int *)&v140);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    Instance = (int)v140;
  }
  if ( Instance < 0 )
  {
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        (CCriticalFailureHandler *)v29,
        (int *)&v140,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        0x6Eu,
        v89,
        v97);
      Instance = (int)v140;
    }
    if ( Instance < 0 )
    {
      v51 = 110LL;
      goto LABEL_80;
    }
  }
  LOBYTE(v140) = 0;
  v141 = 0;
  Instance = wil::wnf_query_nothrow<enum _TABLETMODESTATE>((__int64)v29, (char *)&v140, &v141, v28);
  LODWORD(v142) = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v30, (int *)&v142);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    Instance = (int)v142;
  }
  if ( Instance < 0 )
  {
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v30,
        (int *)&v142,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        0x72u,
        v89,
        v97);
      Instance = (int)v142;
    }
    if ( Instance < 0 )
    {
      v51 = 114LL;
      goto LABEL_80;
    }
  }
  if ( !(_BYTE)v140 )
    v141 = 0;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 26);
  Instance = VirtualDesktopTabletModePolicy_CreateInstance(
               v141,
               (__int64)v103,
               *v26,
               (__int64)v143,
               (__int64)*v2,
               (__int64)v97,
               (CVirtualDesktopComponent *)((char *)this + 208));
  LODWORD(v140) = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v31, (int *)&v140);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    Instance = (int)v140;
  }
  if ( Instance < 0 )
  {
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v31,
        (int *)&v140,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        0x7Fu,
        v90,
        v98);
      Instance = (int)v140;
    }
    if ( Instance < 0 )
    {
      v51 = 127LL;
      goto LABEL_80;
    }
  }
  v91 = (unsigned __int64 *)*((_QWORD *)this + 26);
  Instance = (*(__int64 (__fastcall **)(struct IVirtualDesktopPersistence *, _QWORD, __int64, struct IVirtualDesktopCollection *))(*(_QWORD *)v104 + 40LL))(
               v104,
               v141,
               *v26,
               v103);
  LODWORD(v140) = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v33, (int *)&v140);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    Instance = (int)v140;
  }
  if ( Instance < 0 )
  {
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v33,
        (int *)&v140,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        0x83u,
        v91,
        v98);
      Instance = (int)v140;
    }
    if ( Instance < 0 )
    {
      v51 = 131LL;
      goto LABEL_80;
    }
  }
  v34 = *((_QWORD *)this + 21);
  *((_QWORD *)this + 21) = 0LL;
  if ( v34 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
  Instance = VirtualDesktopAnimationSyncNotifications_CreateInstance(UniqueContext, v32, (void **)this + 21);
  LODWORD(v140) = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v35, (int *)&v140);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    Instance = (int)v140;
  }
  if ( Instance < 0 )
  {
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v35,
        (int *)&v140,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        0x87u,
        v91,
        v98);
      Instance = (int)v140;
    }
    if ( Instance < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x87,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        (const char *)(unsigned int)Instance);
      v55 = v106;
      if ( v106 )
      {
        v106 = 0LL;
        (*(void (__fastcall **)(struct IVirtualDesktopDefaultForegroundHandler *))(*(_QWORD *)v55 + 16LL))(v55);
      }
      v56 = v103;
      if ( v103 )
      {
        v103 = 0LL;
        (*(void (__fastcall **)(struct IVirtualDesktopCollection *))(*(_QWORD *)v56 + 16LL))(v56);
      }
      v57 = v104;
      if ( v104 )
      {
        v104 = 0LL;
        (*(void (__fastcall **)(struct IVirtualDesktopPersistence *))(*(_QWORD *)v57 + 16LL))(v57);
      }
      v58 = v105;
      if ( v105 )
      {
        v105 = 0LL;
        (*(void (__fastcall **)(struct IVirtualDesktopFactory *))(*(_QWORD *)v58 + 16LL))(v58);
      }
      v59 = v143;
      if ( v143 )
      {
        v143 = 0LL;
        (*(void (__fastcall **)(struct IVirtualDesktopVisibilityPolicy *))(*(_QWORD *)v59 + 16LL))(v59);
      }
      v60 = v107;
      if ( v107 )
      {
        v107 = 0LL;
        (*(void (__fastcall **)(struct IVirtualDesktopNotification *))(*(_QWORD *)v60 + 16LL))(v60);
      }
      return (unsigned int)Instance;
    }
  }
  v37 = *((_QWORD *)this + 23);
  *((_QWORD *)this + 23) = 0LL;
  if ( v37 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
  Instance = CVirtualDesktopHotkeyHandler_CreateInstance(
               (struct IVirtualDesktopManagerPrivate *)*v26,
               (struct IVirtualDesktopLock *)*v2,
               v36,
               (void **)this + 23);
  LODWORD(v140) = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v38, (int *)&v140);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    Instance = (int)v140;
  }
  if ( Instance < 0 )
  {
    v84 = 140;
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v38,
        (int *)&v140,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        0x8Cu,
        v91,
        v98);
      Instance = (int)v140;
    }
    if ( Instance < 0 )
      goto LABEL_79;
  }
  v39 = v107;
  v40 = **(__int64 (__fastcall ***)(struct IVirtualDesktopNotification *, GUID *, char *))v107;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 31);
  Instance = v40(v39, &GUID_81ae09de_340b_4b9f_9cba_61bb8e6a8a68, (char *)this + 248);
  LODWORD(v140) = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v41, (int *)&v140);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    Instance = (int)v140;
  }
  if ( Instance < 0 )
  {
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v41,
        (int *)&v140,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        0x8Eu,
        v91,
        v98);
      Instance = (int)v140;
    }
    if ( Instance < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8E,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        (const char *)(unsigned int)Instance);
      v72 = v106;
      if ( v106 )
      {
        v106 = 0LL;
        (*(void (__fastcall **)(struct IVirtualDesktopDefaultForegroundHandler *))(*(_QWORD *)v72 + 16LL))(v72);
      }
      v73 = v103;
      if ( v103 )
      {
        v103 = 0LL;
        (*(void (__fastcall **)(struct IVirtualDesktopCollection *))(*(_QWORD *)v73 + 16LL))(v73);
      }
      v74 = v104;
      if ( v104 )
      {
        v104 = 0LL;
        (*(void (__fastcall **)(struct IVirtualDesktopPersistence *))(*(_QWORD *)v74 + 16LL))(v74);
      }
      v75 = v105;
      if ( v105 )
      {
        v105 = 0LL;
        (*(void (__fastcall **)(struct IVirtualDesktopFactory *))(*(_QWORD *)v75 + 16LL))(v75);
      }
      v76 = v143;
      if ( v143 )
      {
        v143 = 0LL;
        (*(void (__fastcall **)(struct IVirtualDesktopVisibilityPolicy *))(*(_QWORD *)v76 + 16LL))(v76);
      }
      v77 = v107;
      if ( v107 )
      {
        v107 = 0LL;
        (*(void (__fastcall **)(struct IVirtualDesktopNotification *))(*(_QWORD *)v77 + 16LL))(v77);
      }
      return (unsigned int)Instance;
    }
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 29);
  v92 = (unsigned __int64 *)*v2;
  Instance = VirtualDesktopAcessibility_CreateInstance(v141, *((_QWORD *)this + 31), v103, *v26);
  LODWORD(v140) = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v42, (int *)&v140);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    Instance = (int)v140;
  }
  if ( Instance < 0 )
  {
    v84 = 151;
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v42,
        (int *)&v140,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        0x97u,
        v92,
        v98);
      Instance = (int)v140;
    }
    if ( Instance < 0 )
      goto LABEL_79;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 28);
  Instance = VirtualDesktopGestureHandler_CreateInstance(
               (struct IVirtualDesktopManagerInternal *)*v26,
               v43,
               (void **)this + 28);
  LODWORD(v140) = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v44, (int *)&v140);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    Instance = (int)v140;
  }
  if ( Instance < 0 )
  {
    v84 = 153;
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v44,
        (int *)&v140,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        0x99u,
        v92,
        v98);
      Instance = (int)v140;
    }
    if ( Instance < 0 )
    {
LABEL_79:
      v51 = v84;
LABEL_80:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v51,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        (const char *)(unsigned int)Instance);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v106);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v103);
LABEL_81:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v104);
LABEL_82:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v105);
LABEL_83:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v143);
      goto LABEL_84;
    }
  }
  v45 = (struct IVirtualDesktopPinnedAppsPrivate **)((char *)this + 216);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 27);
  Instance = VirtualDesktopPinnedAppsHandler_CreateInstance(
               (struct IVirtualDesktopManagerPrivate *)*v26,
               *v14,
               v143,
               v46,
               (struct IVirtualDesktopLock *)*v2,
               (const struct _GUID *)v98,
               (void **)this + 27);
  LODWORD(v140) = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v47, (int *)&v140);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    Instance = (int)v140;
  }
  if ( Instance < 0 )
  {
    v85 = 161;
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v47,
        (int *)&v140,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        0xA1u,
        v93,
        v99);
      Instance = (int)v140;
    }
    if ( Instance < 0 )
      goto LABEL_92;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 24);
  Instance = VirtualDesktopWindowMoveManager_CreateInstance(
               (struct IVirtualDesktopManagerPrivate *)*v26,
               v103,
               v143,
               *v45,
               (const struct _GUID *)v93,
               (void **)this + 24);
  LODWORD(v140) = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v48, (int *)&v140);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    Instance = (int)v140;
  }
  if ( Instance < 0 )
  {
    v85 = 168;
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v48,
        (int *)&v140,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        0xA8u,
        v94,
        v100);
      Instance = (int)v140;
    }
    if ( Instance < 0 )
    {
LABEL_92:
      v51 = v85;
      goto LABEL_80;
    }
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 25);
  Instance = VirtualDesktopsApi_CreateInstance(
               (struct IVirtualDesktopManagerPrivate *)*v26,
               v103,
               v143,
               *((struct IVirtualDesktopWindowMoveManager **)this + 24),
               (struct IVirtualDesktopLock *)*v2,
               (const struct _GUID *)v100,
               (void **)this + 25);
  LODWORD(v140) = Instance;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v49, (int *)&v140);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    Instance = (int)v140;
  }
  if ( Instance >= 0 )
    goto LABEL_74;
  if ( Instance != -2147024882 && Instance != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v49,
      (int *)&v140,
      L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
      0xB0u,
      v95,
      v101);
    Instance = (int)v140;
  }
  if ( Instance >= 0 )
  {
LABEL_74:
    v112 = *(_OWORD *)&SID_VirtualDesktopManager.Revision;
    v113 = *v26;
    v114 = 0LL;
    v115 = *(_OWORD *)&SID_VirtualDesktopHotkeyHandler.Revision;
    v116 = *((_QWORD *)this + 23);
    v117 = 0LL;
    v118 = *(_OWORD *)&SID_VirtualDesktopNotificationService.Revision;
    v119 = v107;
    v120 = 0LL;
    v121 = IID_IVirtualDesktopManager;
    v122 = *((_QWORD *)this + 25);
    v123 = 0LL;
    v124 = *(_OWORD *)&SID_VirtualDesktopAnimationSyncNotificationService.Revision;
    v125 = *((_QWORD *)this + 21);
    v126 = 0LL;
    v127 = *(_OWORD *)&SID_VirtualDesktopTabletModePolicyService.Revision;
    v128 = *((_QWORD *)this + 26);
    v129 = 0LL;
    v130 = IID_IVirtualDesktopAccessibility;
    v131 = *((_QWORD *)this + 29);
    v132 = 0LL;
    v133 = *(_OWORD *)&SID_VirtualDesktopPinnedApps.Revision;
    v134 = *v45;
    v135 = 0LL;
    v136 = *(_OWORD *)&SID_VirtualDesktopGestureHandler.Revision;
    v137 = *((_QWORD *)this + 28);
    v138 = 0LL;
    Instance = CImmersiveShellComponent::RegisterServiceInformation(
                 (CVirtualDesktopComponent *)((char *)this + 40),
                 (__int64)&v112,
                 9uLL);
    LODWORD(v140) = Instance;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v50, (int *)&v140);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      Instance = (int)v140;
    }
    if ( Instance >= 0 )
      goto LABEL_77;
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v50,
        (int *)&v140,
        L"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
        0xBEu,
        v95,
        v101);
      Instance = (int)v140;
    }
    if ( Instance >= 0 )
    {
LABEL_77:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v106);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v103);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v104);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v105);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v143);
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
    v78 = v106;
    if ( v106 )
    {
      v106 = 0LL;
      (*(void (__fastcall **)(struct IVirtualDesktopDefaultForegroundHandler *))(*(_QWORD *)v78 + 16LL))(v78);
    }
    v79 = v103;
    if ( v103 )
    {
      v103 = 0LL;
      (*(void (__fastcall **)(struct IVirtualDesktopCollection *))(*(_QWORD *)v79 + 16LL))(v79);
    }
    v80 = v104;
    if ( v104 )
    {
      v104 = 0LL;
      (*(void (__fastcall **)(struct IVirtualDesktopPersistence *))(*(_QWORD *)v80 + 16LL))(v80);
    }
    v81 = v105;
    if ( v105 )
    {
      v105 = 0LL;
      (*(void (__fastcall **)(struct IVirtualDesktopFactory *))(*(_QWORD *)v81 + 16LL))(v81);
    }
    v82 = v143;
    if ( v143 )
    {
      v143 = 0LL;
      (*(void (__fastcall **)(struct IVirtualDesktopVisibilityPolicy *))(*(_QWORD *)v82 + 16LL))(v82);
    }
    v83 = v107;
    if ( v107 )
    {
      v107 = 0LL;
      (*(void (__fastcall **)(struct IVirtualDesktopNotification *))(*(_QWORD *)v83 + 16LL))(v83);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB0,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcomponent.cpp",
      (const char *)(unsigned int)Instance);
    v61 = v106;
    if ( v106 )
    {
      v106 = 0LL;
      (*(void (__fastcall **)(struct IVirtualDesktopDefaultForegroundHandler *))(*(_QWORD *)v61 + 16LL))(v61);
    }
    v62 = v103;
    if ( v103 )
    {
      v103 = 0LL;
      (*(void (__fastcall **)(struct IVirtualDesktopCollection *))(*(_QWORD *)v62 + 16LL))(v62);
    }
    v63 = v104;
    if ( v104 )
    {
      v104 = 0LL;
      (*(void (__fastcall **)(struct IVirtualDesktopPersistence *))(*(_QWORD *)v63 + 16LL))(v63);
    }
    v64 = v105;
    if ( v105 )
    {
      v105 = 0LL;
      (*(void (__fastcall **)(struct IVirtualDesktopFactory *))(*(_QWORD *)v64 + 16LL))(v64);
    }
    v65 = v143;
    if ( v143 )
    {
      v143 = 0LL;
      (*(void (__fastcall **)(struct IVirtualDesktopVisibilityPolicy *))(*(_QWORD *)v65 + 16LL))(v65);
    }
    v66 = v107;
    if ( v107 )
    {
      v107 = 0LL;
      (*(void (__fastcall **)(struct IVirtualDesktopNotification *))(*(_QWORD *)v66 + 16LL))(v66);
    }
  }
  return (unsigned int)Instance;
}
