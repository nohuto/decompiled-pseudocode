/*
 * XREFs of ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1402D4EF8
 * Callers:
 *     ?DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z @ 0x14025B780 (-DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z.c)
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKW4_DMM_CLIENT_TYPE@@PEAVDXGDEVICE@@@Z @ 0x14025E8CC (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKW4_DMM_CLIENT_TYPE@@PEAVDXGDEVICE@@@Z.c)
 *     ?DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1402D3CBC (-DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCEN.c)
 *     ?DmmPowerOnOffTargetsFromSourceIfNecessary@@YAJQEAXEPEAU_DMM_SET_TIMING_RESULT@@@Z @ 0x1402D3F90 (-DmmPowerOnOffTargetsFromSourceIfNecessary@@YAJQEAXEPEAU_DMM_SET_TIMING_RESULT@@@Z.c)
 *     ?PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIW4MONITOR_EVENT@@W4MONITOR_POWER_EVENT_PARAM@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1402D4150 (-PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIW4MONITOR_EVENT@@W4MONITOR_POWER_EVENT_PARAM@@PEAU_DXGK_.c)
 *     ?DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1402D4CC4 (-DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOUR.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U2@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3434@Z @ 0x1400057A0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U2@U1@U2@@-$_tlgWriteTemplate@$$A6.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x14002D768 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?SetCddDisplayMode@ADAPTER_DISPLAY@@QEAAXIAEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x14003118C (-SetCddDisplayMode@ADAPTER_DISPLAY@@QEAAXIAEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     ?SetHdrEnabled@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1400312C4 (-SetHdrEnabled@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x140031434 (-SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z.c)
 *     ?MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x14003189C (-MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400319C0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?NotifyMultiPlaneOverlayDisable@DXGADAPTER@@QEAAXI@Z @ 0x140034B2C (-NotifyMultiPlaneOverlayDisable@DXGADAPTER@@QEAAXI@Z.c)
 *     ?SetLastCddIntegerVSync@ADAPTER_DISPLAY@@QEAAXII@Z @ 0x140038A74 (-SetLastCddIntegerVSync@ADAPTER_DISPLAY@@QEAAXII@Z.c)
 *     ?SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z @ 0x140038C9C (-SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x14003C89C (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x14003CFA8 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x14003D024 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ @ 0x14004253C (-AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x140047278 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x14004B460 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?CacheDisplayModeChangeRequest@VIDPN_MGR@@QEAAXIPEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4_DMM_DISPMODECHANGE_TYPE@@IQEBE@Z @ 0x14004C328 (-CacheDisplayModeChangeRequest@VIDPN_MGR@@QEAAXIPEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4.c)
 *     ?GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z @ 0x14004FFE0 (-GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z.c)
 *     _tlgKeywordOn @ 0x140050B20 (_tlgKeywordOn.c)
 *     ?FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z @ 0x140059B50 (-FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z.c)
 *     ?Resume@CVidSchSuspendResume@@QEAAXXZ @ 0x140059DAC (-Resume@CVidSchSuspendResume@@QEAAXXZ.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x14005B4F8 (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ?SetVidPnPrimaryTarget@ADAPTER_DISPLAY@@QEAAXII@Z @ 0x14005BB04 (-SetVidPnPrimaryTarget@ADAPTER_DISPLAY@@QEAAXII@Z.c)
 *     ?SetSuspendSourceMask@CVidSchSuspendResume@@QEAAXI@Z @ 0x14005C6DC (-SetSuspendSourceMask@CVidSchSuspendResume@@QEAAXI@Z.c)
 *     ?IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ @ 0x14005CC84 (-IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ.c)
 *     ?reset@?$unique_ptr@$$BY0A@IU?$default_delete@$$BY0A@I@wistd@@@wistd@@QEAAX$$T@Z @ 0x14005CFE8 (-reset@-$unique_ptr@$$BY0A@IU-$default_delete@$$BY0A@I@wistd@@@wistd@@QEAAX$$T@Z.c)
 *     ?SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z @ 0x14005FB00 (-SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z.c)
 *     ?SetSyncLockGroup@ADAPTER_DISPLAY@@QEAAXIKIW4_DXGK_SYNC_LOCK_STYLE@@K@Z @ 0x14005FEDC (-SetSyncLockGroup@ADAPTER_DISPLAY@@QEAAXIKIW4_DXGK_SYNC_LOCK_STYLE@@K@Z.c)
 *     ?VidSchRequestDeferredVidPnSourceVisibility@VIDSCH_EXPORT@@QEAAXPEAU_VIDSCH_GLOBAL@@I@Z @ 0x14006229C (-VidSchRequestDeferredVidPnSourceVisibility@VIDSCH_EXPORT@@QEAAXPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?IsCddPrimaryStale@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14006D090 (-IsCddPrimaryStale@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     Feature_CleanUpDisplayedPrimaryInSetTimings__private_IsEnabledDeviceUsageNoInline @ 0x14007072C (Feature_CleanUpDisplayedPrimaryInSetTimings__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_SetTimingsDdiEtw__private_IsEnabledDeviceUsageNoInline @ 0x1400736EC (Feature_SetTimingsDdiEtw__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?UpdateOneCddPrimaryPrivateDriverData@ADAPTER_DISPLAY@@QEAAXIPEAVDXGADAPTER@@@Z @ 0x1401A51E4 (-UpdateOneCddPrimaryPrivateDriverData@ADAPTER_DISPLAY@@QEAAXIPEAVDXGADAPTER@@@Z.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1402A76C8 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1402A7894 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1402B4780 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJI_NPEBU_DXGK_DISPLAYMODE_INFO@@00@Z @ 0x1402CF610 (-SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJI_NPEBU_DXGK_DISPLAYMODE_INFO@@00@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1402CFF04 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z @ 0x1402D08F8 (-FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1402D290C (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x1402D3ACC (-GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z.c)
 *     DxgkStatusChangeNotify @ 0x1402D4620 (DxgkStatusChangeNotify.c)
 *     ?SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1402DB87C (-SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x14030E4E4 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x140330244 (-DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?IsTargetForceable@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x140340C38 (-IsTargetForceable@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 *     ?MonitorSetLastWireformatAndColorspace@@YAJPEAUHDXGMONITOR__@@T_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@W4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@@Z @ 0x140361E40 (-MonitorSetLastWireformatAndColorspace@@YAJPEAUHDXGMONITOR__@@T_D3DKMDT_WIRE_FORMAT_AND_PREFEREN.c)
 *     ?GetDisplayModeFromVidPnSource@DMMVIDPNTOPOLOGY@@QEBAJ_NIAEAU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x140361F78 (-GetDisplayModeFromVidPnSource@DMMVIDPNTOPOLOGY@@QEBAJ_NIAEAU_DXGK_DISPLAYMODE_INFO@@@Z.c)
 *     ?InvalidateDisplayModeListCacheOnSource@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x140365238 (-InvalidateDisplayModeListCacheOnSource@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?UpdateTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEAAX_KW4_DXGK_CONNECTION_STATUS@@@Z @ 0x14036608C (-UpdateTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEAAX_KW4_DXGK_CONNECTION_STATUS@@@Z.c)
 *     DxgkInvalidateQdcCache @ 0x1403660C0 (DxgkInvalidateQdcCache.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x14036BD68 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 *     ?CheckDdiSetTimingsViolationOnPathInfo@VIDPN_MGR@@AEAAEAEAU_DXGK_SET_TIMING_PATH_INFO@@0@Z @ 0x14037A020 (-CheckDdiSetTimingsViolationOnPathInfo@VIDPN_MGR@@AEAAEAEAU_DXGK_SET_TIMING_PATH_INFO@@0@Z.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x14037AA90 (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x14038275C (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x140384408 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x140384650 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?DetermineScalingCapabilities@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x140391BC8 (-DetermineScalingCapabilities@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1403AA578 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 *     ?GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z @ 0x1403B9750 (-GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z.c)
 *     ?GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA?AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z @ 0x1403C3D6C (-GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA-AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z.c)
 *     ?LogMonitorHandleOnOffState@@YAXQEAUHDXGMONITOR__@@AEBU_GUID@@IW4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z @ 0x1403E8B70 (-LogMonitorHandleOnOffState@@YAXQEAUHDXGMONITOR__@@AEBU_GUID@@IW4Enum@MONITOR_ON_OFF_CALLER_ORIG.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1403EC5CC (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 *     LogSetTimingSourceMask @ 0x1403F6D9C (LogSetTimingSourceMask.c)
 *     ?SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1403FBC3C (-SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?SetTargetActivated@DMMVIDEOPRESENTTARGET@@QEAAXEE@Z @ 0x1403FC6E0 (-SetTargetActivated@DMMVIDEOPRESENTTARGET@@QEAAXEE@Z.c)
 *     ?CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ @ 0x1404041E0 (-CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ.c)
 *     ?RequestPowerStateForTargets@VIDPN_MGR@@AEAAXPEBVDMMVIDPN@@@Z @ 0x140409454 (-RequestPowerStateForTargets@VIDPN_MGR@@AEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?StartLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXE@Z @ 0x14042F6A0 (-StartLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXE@Z.c)
 *     ?DdiSetTimingsFromVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_SETTIMINGSFROMVIDPN@@@Z @ 0x140431F74 (-DdiSetTimingsFromVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_SETTIMINGSFROMVIDPN@@@Z.c)
 *     ?BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAK2AEAV?$unique_ptr@$$BY0A@U_DXGK_SET_TIMING_PATH_INFO@@U?$default_delete@$$BY0A@U_DXGK_SET_TIMING_PATH_INFO@@@wistd@@@wistd@@AEAV?$unique_ptr@$$BY0A@IU?$default_delete@$$BY0A@I@wistd@@@5@4@Z @ 0x140444654 (-BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_M.c)
 */

__int64 __fastcall VIDPN_MGR::SetTimingsFromVidPn(
        VIDPN_MGR *a1,
        unsigned int a2,
        unsigned int a3,
        const struct DMMVIDPN *a4,
        struct D3DKMT_VIDPN_SOURCE_MASKS *a5,
        _BYTE *a6,
        unsigned __int8 a7,
        struct DXGDEVICE *a8,
        __int64 a9)
{
  PERESOURCE *v11; // r14
  int v12; // eax
  int v13; // r15d
  const struct DMMVIDPN *ClientCommittedVidPnRef; // rax
  unsigned __int64 v15; // rax
  _DWORD *v16; // rbx
  unsigned __int64 v17; // r8
  __int64 v18; // rdi
  unsigned __int8 IsLegacyDisplayStateSynchronization; // al
  __int64 v20; // r8
  signed int v21; // r12d
  unsigned __int8 v22; // r11
  int v23; // ecx
  unsigned int v24; // r10d
  __int64 v25; // r8
  unsigned int v26; // r13d
  unsigned int v27; // r12d
  unsigned int v28; // ecx
  unsigned int SpinLock; // r9d
  int v30; // edx
  int v31; // eax
  unsigned int i; // ecx
  int v33; // eax
  unsigned int v34; // r12d
  int v35; // ebx
  signed int v36; // edi
  int v37; // ecx
  PERESOURCE v38; // rcx
  struct DXGDEVICE *VidPnSourceOwner; // r13
  int IsEnabledDeviceUsageNoInline; // eax
  unsigned __int8 v41; // r9
  int v42; // ecx
  struct DMMVIDPN *v43; // r13
  VIDPN_MGR *v44; // r12
  __int64 v45; // rdx
  unsigned __int8 v46; // r13
  unsigned int v47; // r12d
  UINT v48; // r15d
  _BYTE *v49; // rdi
  VIDPN_MGR *v50; // r14
  __int64 v51; // r12
  __int128 v52; // xmm3
  __int128 v53; // xmm4
  __int64 v54; // xmm0_8
  char *v55; // rax
  int v56; // eax
  ADAPTER_DISPLAY *v57; // rcx
  int v58; // eax
  DMMVIDEOPRESENTTARGET *TargetById; // rax
  int v60; // edx
  unsigned __int8 v61; // r12
  _OWORD *v62; // rax
  __int128 v63; // xmm3
  __int128 v64; // xmm4
  __int64 v65; // xmm0_8
  ADAPTER_DISPLAY *v66; // rcx
  int v67; // eax
  int v68; // eax
  _BYTE *v69; // rbx
  UINT j; // r10d
  __int64 v71; // rax
  __int64 v72; // rdx
  char *v73; // rax
  __int128 v74; // xmm3
  __int128 v75; // xmm4
  __int64 v76; // xmm0_8
  UINT v77; // r15d
  __int64 v78; // rbx
  int v79; // r12d
  struct DMMVIDEOPRESENTTARGET *v80; // r13
  __int64 v81; // r8
  __int64 v82; // r9
  int TargetLinkTrainingStatus; // eax
  int v84; // r9d
  int v85; // eax
  int v86; // eax
  __int64 v87; // rdx
  DMMVIDPNPRESENTPATH *PathFromTarget; // rax
  __int64 v89; // r8
  ADAPTER_DISPLAY *v90; // rbx
  unsigned int v91; // r15d
  int v92; // r12d
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  __int64 v94; // rcx
  DMMVIDPNTOPOLOGY *v95; // rbx
  int MostImportantVidPnPathTargetsFromSource; // eax
  unsigned int v97; // r10d
  struct DXGADAPTERALLOCATION *DisplayedPrimaryAllocation; // rax
  struct DXGADAPTERALLOCATION *v99; // rbx
  void *v100; // rax
  ADAPTER_RENDER *v101; // rcx
  int v102; // eax
  unsigned int v103; // r9d
  __int64 v104; // r8
  unsigned int v105; // ebx
  int v106; // eax
  int v107; // r13d
  int v108; // ebx
  __int64 CurrentProcess; // rax
  __int64 ProcessImageFileName; // rax
  UINT k; // ebx
  __int64 v112; // r15
  DMMVIDEOPRESENTTARGET *v113; // rax
  DMMVIDEOPRESENTTARGET *v114; // r13
  _BYTE *v115; // rdx
  __int64 v116; // r10
  int v117; // r8d
  int v118; // eax
  PERESOURCE v119; // rcx
  ERESOURCE_THREAD OwnerThread; // r8
  __int64 v121; // rdx
  __int64 v122; // rcx
  __int64 v123; // r8
  __int64 m; // r9
  ADAPTER_DISPLAY *v125; // r10
  unsigned int v126; // r15d
  struct DXGDEVICE *v127; // rbx
  int v128; // r12d
  ADAPTER_DISPLAY *v129; // rcx
  ADAPTER_DISPLAY *v130; // rbx
  const struct _D3DKMT_DISPLAYMODE *v131; // rax
  int v132; // eax
  unsigned int v133; // r13d
  int v134; // eax
  __int64 v135; // r9
  DMMVIDPNTOPOLOGY *v136; // rbx
  int v137; // eax
  __int64 v138; // rdx
  PERESOURCE v139; // r10
  unsigned int v140; // ecx
  __int64 v142; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v143; // [rsp+70h] [rbp-90h]
  char v144; // [rsp+70h] [rbp-90h]
  char v145; // [rsp+71h] [rbp-8Fh]
  void *Src; // [rsp+78h] [rbp-88h] BYREF
  UINT v147; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v148; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned int v149; // [rsp+88h] [rbp-78h]
  int v150; // [rsp+8Ch] [rbp-74h] BYREF
  __int64 v151; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v152; // [rsp+98h] [rbp-68h] BYREF
  int v153; // [rsp+9Ch] [rbp-64h] BYREF
  unsigned int v154; // [rsp+A0h] [rbp-60h] BYREF
  struct DMMVIDPN *v155; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE *v156; // [rsp+B0h] [rbp-50h]
  struct DXGDEVICE *v157; // [rsp+B8h] [rbp-48h]
  VIDPN_MGR *v158; // [rsp+C0h] [rbp-40h]
  DMMVIDPNTOPOLOGY *v159; // [rsp+C8h] [rbp-38h]
  __int64 v160; // [rsp+D0h] [rbp-30h]
  __int64 v161; // [rsp+D8h] [rbp-28h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v162; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v163; // [rsp+110h] [rbp+10h] BYREF
  __int64 v164; // [rsp+118h] [rbp+18h]
  _DWORD *v165; // [rsp+120h] [rbp+20h] BYREF
  PERESOURCE *ContainingAdapter; // [rsp+128h] [rbp+28h] BYREF
  ADAPTER_RENDER *v167[2]; // [rsp+130h] [rbp+30h] BYREF
  const struct DMMVIDPN *v168; // [rsp+140h] [rbp+40h]
  const struct DMMVIDPN *v169; // [rsp+148h] [rbp+48h] BYREF
  _OWORD v170[2]; // [rsp+150h] [rbp+50h] BYREF
  unsigned int v171[20]; // [rsp+170h] [rbp+70h] BYREF
  GUID ActivityId; // [rsp+1C0h] [rbp+C0h] BYREF

  v157 = a8;
  v164 = a9;
  v168 = a4;
  v149 = a3;
  v154 = a2;
  v158 = a1;
  v156 = a6;
  v148 = 0;
  ContainingAdapter = (PERESOURCE *)VIDPN_MGR::GetContainingAdapter(a1);
  v11 = ContainingAdapter;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(ContainingAdapter) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2510;
  }
  *a6 = 0;
  LODWORD(v163) = 0;
  v147 = 0;
  Src = 0LL;
  v151 = 0LL;
  v161 = 0LL;
  v12 = VIDPN_MGR::BuildSetTimingsPathInfoFromClientVidPn(
          a1,
          (__int64)&v163,
          (__int64)&v147,
          (__int64)&Src,
          (__int64)&v151,
          (__int64)&v161);
  v13 = v12;
  v150 = v12;
  if ( v12 < 0 )
  {
    WdLogSingleEntry2(2LL, a4, v12);
    WdLogGlobalForLineNumber = 2542;
    goto LABEL_275;
  }
  if ( !v147 )
  {
    WdLogSingleEntry2(3LL, *((int *)v11 + 104), *((unsigned int *)v11 + 103));
    WdLogGlobalForLineNumber = 2560;
    goto LABEL_275;
  }
  if ( *((_DWORD *)a5 + 2) || *((_DWORD *)a5 + 3) || *((_DWORD *)a5 + 6) )
  {
    v145 = 1;
  }
  else
  {
    v145 = 0;
    if ( !*((_DWORD *)a5 + 10) && !*((_DWORD *)a5 + 8) && !*((_DWORD *)a5 + 13) )
    {
      DisplayScenarioJournalSetSetTimingPathInfo(*(PERESOURCE *)((char *)v11 + 412), 0LL, 56 * v147);
      v13 = 0;
      goto LABEL_275;
    }
  }
  v153 = 0;
  ClientCommittedVidPnRef = VIDPN_MGR::AcquireLastClientCommittedVidPnRef(a1);
  v169 = ClientCommittedVidPnRef;
  if ( a4 )
    ClientCommittedVidPnRef = a4;
  v155 = ClientCommittedVidPnRef;
  v159 = (const struct DMMVIDPN *)((char *)ClientCommittedVidPnRef + 96);
  v15 = 56LL * v147;
  if ( !is_mul_ok(v147, 0x38uLL) )
    v15 = -1LL;
  v165 = (_DWORD *)operator new[](v15, 0x4E506456u, 256LL);
  v16 = v165;
  if ( !v165 )
  {
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 2622;
    wistd::unique_ptr<unsigned int [0],wistd::default_delete<unsigned int [0]>>::reset((void **)&v165);
    auto_rc<DMMVIDPN const>::reset((__int64 *)&v169, 0LL);
    v13 = -1073741801;
    goto LABEL_275;
  }
  memmove(v165, Src, 56LL * v147);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)a1 + 15) + 72LL));
  v17 = (unsigned __int64)v11[396];
  v18 = *((_QWORD *)a1 + 15);
  v160 = v18;
  LODWORD(v167[0]) = 0;
  v167[1] = (ADAPTER_RENDER *)(v17 & -(__int64)(v17 != 0));
  IsLegacyDisplayStateSynchronization = DXGADAPTER::IsLegacyDisplayStateSynchronization((DXGADAPTER *)v11);
  v21 = *((_DWORD *)v11 + 761);
  v143 = IsLegacyDisplayStateSynchronization;
  v152 = v21;
  v22 = IsLegacyDisplayStateSynchronization;
  if ( v20 )
  {
    v23 = *(_DWORD *)(v20 + 756);
    if ( a7 )
    {
      if ( v23 )
        goto LABEL_27;
    }
    else if ( !v23 )
    {
      goto LABEL_27;
    }
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2677;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(i_DoNotSuspend && pDisplayAdapter->GetRenderCore()->GetSchedulerSuspendSourceMask()) || (!i_DoNotSuspend"
                " && !pDisplayAdapter->GetRenderCore()->GetSchedulerSuspendSourceMask())",
      2677LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v22 = v143;
LABEL_27:
    if ( v21 >= 2200 )
    {
      v24 = 0;
      v25 = 0LL;
      v26 = 0;
      v27 = 0;
      v28 = 0;
      SpinLock = v11[395]->SpinLock;
      if ( SpinLock )
      {
        v30 = *((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 3) | *((_DWORD *)a5 + 6);
        if ( v22 )
        {
          for ( i = 0; i < SpinLock; ++i )
          {
            v33 = 1 << i;
            if ( ((1 << i) & v30) != 0 )
            {
              v24 |= v33;
            }
            else if ( (v33 & *(_DWORD *)a5) != 0 )
            {
              v25 = v33 | (unsigned int)v25;
              if ( !a7 )
                v27 |= v33;
            }
          }
        }
        else
        {
          do
          {
            v31 = 1 << v28;
            if ( ((1 << v28) & v30) != 0 )
            {
              v24 |= v31;
              v26 |= v31;
            }
            else if ( (v31 & *(_DWORD *)a5) != 0 )
            {
              v25 = v31 | (unsigned int)v25;
              if ( !a7 )
                v27 |= v31;
            }
            ++v28;
          }
          while ( v28 < SpinLock );
        }
      }
      ADAPTER_RENDER::FlushPresentReferencesAndDisableOverlays((ADAPTER_RENDER *)v11[396], v24, v25, v26, v27);
      *((_DWORD *)a5 + 16) |= v26;
      if ( v27 )
        CVidSchSuspendResume::SetSuspendSourceMask((CVidSchSuspendResume *)v167, v27);
    }
    else
    {
      ADAPTER_RENDER::FlushScheduler(v11[396], 8LL, 0xFFFFFFFFLL);
    }
  }
  v34 = 0;
  if ( LODWORD(v11[395]->SpinLock) )
  {
    v35 = (int)v167[0];
    v36 = v152;
    do
    {
      v37 = *((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 3);
      if ( _bittest(&v37, v34) )
      {
        v38 = v11[396];
        if ( v38 && v36 < 2200 )
          ADAPTER_RENDER::FlushScheduler(v38, 8LL, v34);
        if ( v157 )
        {
          if ( v164 )
          {
            VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwner((ADAPTER_DISPLAY *)v11[395], v34);
            IsEnabledDeviceUsageNoInline = Feature_CleanUpDisplayedPrimaryInSetTimings__private_IsEnabledDeviceUsageNoInline();
            if ( VidPnSourceOwner )
            {
              if ( IsEnabledDeviceUsageNoInline
                || *((_QWORD *)VidPnSourceOwner + 237) == *(_QWORD *)(*((_QWORD *)VidPnSourceOwner + 2) + 16LL) )
              {
                if ( v35 || (v41 = 0, a7) )
                  v41 = 1;
                ADAPTER_DISPLAY::DisablePrimaryOnDevice((ADAPTER_DISPLAY *)v11[395], VidPnSourceOwner, v34, v41);
              }
            }
          }
        }
      }
      v42 = *((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 3) | *((_DWORD *)a5 + 6);
      if ( _bittest(&v42, v34) && v11[396] && *((_BYTE *)v11 + 3089) && v143 )
      {
        ADAPTER_DISPLAY::DisableMPOPlanes((ADAPTER_DISPLAY *)v11[395], v34, 0);
        *((_DWORD *)a5 + 16) |= 1 << v34;
      }
      ++v34;
    }
    while ( v34 < LODWORD(v11[395]->SpinLock) );
    v16 = v165;
    v18 = v160;
    v13 = v150;
  }
  v43 = v155;
  v44 = v158;
  if ( *((_DWORD *)a5 + 5) )
    VIDPN_MGR::RequestPowerStateForTargets(v158, v155);
  if ( !DXGADAPTER::UsingSetTimingsFromVidPn((DXGADAPTER *)v11) )
  {
    v144 = 1;
    if ( v145 != (_BYTE)v45 || *((_DWORD *)a5 + 10) != (_DWORD)v45 )
    {
      v145 = 1;
      if ( a7 != (_BYTE)v45 || LODWORD(v167[0]) != (_DWORD)v45 )
        LOBYTE(v45) = 1;
      v56 = VIDPN_MGR::CommitVidPnOnAdapter(
              v44,
              v154,
              v149,
              v43,
              v147,
              Src,
              v151,
              a5,
              &v153,
              v161,
              &v148,
              v157,
              v164,
              (_BYTE)v45);
      v46 = 0;
      v13 = v56;
      if ( v56 < 0 )
      {
        WdLogSingleEntry3(2LL, *((int *)v11 + 104), *((unsigned int *)v11 + 103), v56);
        WdLogGlobalForLineNumber = 3002;
      }
      goto LABEL_76;
    }
    v145 = v45;
LABEL_75:
    v46 = 0;
LABEL_76:
    v47 = v149;
    goto LABEL_77;
  }
  v144 = v45;
  if ( v145 == (_BYTE)v45 )
    goto LABEL_75;
  v47 = v149;
  *(_QWORD *)&v162.Width = v45;
  v162.RefreshRate.Numerator = v45;
  v170[0] = 0LL;
  if ( v149 == 4 )
    DisplayLogSetMonitorPowerStage(0LL, 16LL, 0LL, v170);
  v57 = (ADAPTER_DISPLAY *)v11[395];
  v162.hAllocation = (HANDLE)((unsigned __int64)v43 & -(__int64)((struct DMMVIDPN *)((char *)v43 + 88) != 0LL));
  *(_QWORD *)&v162.Format = &v148;
  v162.MultisampleMethod.NumQualityLevels = v147;
  *(_QWORD *)&v162.RefreshRate.Denominator = Src;
  v58 = ADAPTER_DISPLAY::DdiSetTimingsFromVidPn(v57, (struct _DXGKARG_SETTIMINGSFROMVIDPN *)&v162);
  v13 = v58;
  if ( v58 < 0 )
  {
    WdLogSingleEntry3(2LL, *((int *)v11 + 104), *((unsigned int *)v11 + 103), v58);
    WdLogGlobalForLineNumber = 2857;
  }
  if ( v147 == 1
    && ((v47 - 1) & 0xFFFFFFFD) == 0
    && (v13 < 0 || (*((_DWORD *)Src + 8) & 0xF000000) == 0xD000000)
    && (*((_DWORD *)Src + 3) & 4) != 0
    && ((v148 & 1) != 0 || (*(_DWORD *)(*(_QWORD *)&v11[27]->ActiveEntries + 3652LL) & 3) != 0)
    && (TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v18, *(_DWORD *)Src)) != 0LL
    && !DMMVIDEOPRESENTTARGET::IsTargetForceable(TargetById) )
  {
    DisplayScenarioJournalSetSetTimingPathInfo(*(PERESOURCE *)((char *)v11 + 412), (unsigned int)v13, 56 * v147);
    v16[3] = v16[3] & 0xFFFFFFF0 | 9;
    v60 = *((_DWORD *)a5 + 1);
    *((_DWORD *)a5 + 6) = v60 & (*((_DWORD *)a5 + 6) ^ *((_DWORD *)a5 + 5));
    *((_DWORD *)a5 + 5) = 0;
    *((_DWORD *)a5 + 20) = v60;
    if ( v13 < 0 )
      v61 = 0;
    else
      v61 = v148 & 1;
    v62 = Src;
    v148 = 0;
    v63 = *((_OWORD *)v16 + 1);
    v64 = *((_OWORD *)v16 + 2);
    v65 = *((_QWORD *)v16 + 6);
    *(_OWORD *)Src = *(_OWORD *)v16;
    v62[1] = v63;
    v62[2] = v64;
    *((_QWORD *)v62 + 6) = v65;
    *(_QWORD *)&v162.Width = 0LL;
    v162.RefreshRate.Numerator = 0;
    v66 = (ADAPTER_DISPLAY *)v11[395];
    v162.hAllocation = (HANDLE)((unsigned __int64)v43 & -(__int64)((struct DMMVIDPN *)((char *)v43 + 88) != 0LL));
    *(_QWORD *)&v162.Format = &v148;
    v162.MultisampleMethod.NumQualityLevels = v147;
    *(_QWORD *)&v162.RefreshRate.Denominator = Src;
    v67 = ADAPTER_DISPLAY::DdiSetTimingsFromVidPn(v66, (struct _DXGKARG_SETTIMINGSFROMVIDPN *)&v162);
    v46 = 0;
    v13 = v67;
    if ( v67 < 0 )
    {
      WdLogSingleEntry4(2LL, *(unsigned int *)Src, *((int *)v11 + 104), *((unsigned int *)v11 + 103), v67);
      WdLogGlobalForLineNumber = 2940;
    }
    DxgkLogCodePointPacket(0x68u, *(_DWORD *)Src, v13, *((_BYTE *)Src + 35) & 0xF, *(__int64 *)((char *)v11 + 412));
    v148 = v148 & 0xFFFFFFFE | ((unsigned __int8)v148 | v61) & 1;
    v47 = v149;
  }
  else
  {
    v46 = 0;
  }
  if ( v47 == 4 )
    DisplayLogSetMonitorPowerStage(0LL, 2147483664LL, (unsigned int)v13, v170);
LABEL_77:
  DisplayScenarioJournalSetSetTimingPathInfo(*(PERESOURCE *)((char *)v11 + 412), (unsigned int)v13, 56 * v147);
  LogSetTimingSourceMask(v11, a5);
  if ( v145 )
  {
    if ( v13 < 0 )
    {
      *((_DWORD *)a5 + 21) = -1;
      FillFailedStatus(a5, v13);
      for ( j = 0; j < v147; *(_DWORD *)((char *)Src + v72 + 16) |= 1u )
      {
        v71 = j++;
        v72 = 56 * v71;
        v73 = (char *)Src;
        v74 = *(_OWORD *)&v16[(unsigned __int64)v72 / 4 + 4];
        v75 = *(_OWORD *)&v16[(unsigned __int64)v72 / 4 + 8];
        v76 = *(_QWORD *)&v16[(unsigned __int64)v72 / 4 + 12];
        *(_OWORD *)((char *)Src + v72) = *(_OWORD *)&v16[(unsigned __int64)v72 / 4];
        *(_OWORD *)&v73[v72 + 16] = v74;
        *(_OWORD *)&v73[v72 + 32] = v75;
        *(_QWORD *)&v73[v72 + 48] = v76;
        *(_DWORD *)((char *)Src + v72 + 32) = *(_DWORD *)((_BYTE *)Src + v72 + 32) & 0xF0FFFFFF | 0xD000000;
      }
      v69 = v156;
      v68 = 1;
      v148 = 1;
      *v156 = (((v47 - 1) & 0xFFFFFFFD) != 0 ? 2 : 0) | *v156 & 0xFD;
    }
    else
    {
      v48 = 0;
      if ( v147 )
      {
        v49 = v156;
        v50 = v158;
        do
        {
          v51 = 56LL * v48;
          if ( VIDPN_MGR::CheckDdiSetTimingsViolationOnPathInfo(
                 v50,
                 (struct _DXGK_SET_TIMING_PATH_INFO *)&v16[(unsigned __int64)v51 / 4],
                 (struct _DXGK_SET_TIMING_PATH_INFO *)((char *)Src + v51)) )
          {
            if ( (*(_DWORD *)((_BYTE *)Src + v51 + 32) & 0xF000000) == 0xD000000 )
            {
              *((_DWORD *)a5 + *(unsigned int *)(v151 + 4LL * v48) + 22) = -1073741506;
              *((_DWORD *)a5 + 21) |= 1 << *(_DWORD *)(v151 + 4LL * v48);
              *v49 = (((v149 - 1) & 0xFFFFFFFD) != 0 ? 2 : 0) | *v49 & 0xFD;
            }
          }
          else
          {
            v52 = *(_OWORD *)&v16[(unsigned __int64)v51 / 4 + 4];
            v53 = *(_OWORD *)&v16[(unsigned __int64)v51 / 4 + 8];
            v54 = *(_QWORD *)&v16[(unsigned __int64)v51 / 4 + 12];
            v55 = (char *)Src;
            *(_OWORD *)((char *)Src + v51) = *(_OWORD *)&v16[(unsigned __int64)v51 / 4];
            *(_OWORD *)&v55[v51 + 16] = v52;
            *(_OWORD *)&v55[v51 + 32] = v53;
            *(_QWORD *)&v55[v51 + 48] = v54;
            *(_DWORD *)((char *)Src + v51 + 32) = *(_DWORD *)((_BYTE *)Src + v51 + 32) & 0xF0FFFFFF | 0xD000000;
            *((_DWORD *)a5 + *(unsigned int *)(v151 + 4LL * v48) + 22) = -1073741437;
            *((_DWORD *)a5 + 21) |= 1 << *(_DWORD *)(v151 + 4LL * v48);
          }
          ++v48;
        }
        while ( v48 < v147 );
        v68 = v148;
        v46 = 0;
        v18 = v160;
        v11 = ContainingAdapter;
        v69 = v156;
      }
      else
      {
        v68 = v148;
        v69 = v156;
      }
    }
    if ( (v68 & 0xFFFFFFFE) != 0 )
    {
      WdLogSingleEntry1(1LL);
      LOBYTE(v68) = v148;
      WdLogGlobalForLineNumber = 3124;
    }
    if ( (v68 & 1) != 0 )
      *v69 |= 1u;
  }
  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  v77 = 0;
  if ( v147 )
  {
    do
    {
      v78 = 56LL * v77;
      v79 = 1 << *(_DWORD *)(v151 + 4LL * v77);
      LODWORD(v156) = *(_DWORD *)(v151 + 4LL * v77);
      v80 = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v18, *(_DWORD *)((char *)Src + v78));
      if ( v80 )
      {
        if ( v145 )
        {
          LogMonitorHandleOnOffState(*((_QWORD *)v80 + 14), &ActivityId, (*(_DWORD *)((char *)Src + v78 + 12) >> 2) & 1);
          if ( !v144 )
          {
            DxgkLogCodePointPacket(
              0x58u,
              *(_DWORD *)((char *)Src + v78),
              *((_BYTE *)Src + v78 + 35) & 0xF | 0x80000000,
              *(_DWORD *)((char *)Src + v78 + 24),
              *(__int64 *)((char *)v11 + 412));
            if ( (unsigned int)Feature_SetTimingsDdiEtw__private_IsEnabledDeviceUsageNoInline()
              && (unsigned int)dword_1401665B8 > 5
              && tlgKeywordOn((__int64)&dword_1401665B8, 0x4000LL) )
            {
              v154 = *((_BYTE *)Src + v78 + 35) & 0xF | 0x80000000;
              ContainingAdapter = *(PERESOURCE **)((char *)Src + v78 + 24);
              v152 = *(_DWORD *)((char *)Src + v78);
              v155 = *(struct DMMVIDPN **)((char *)v11 + 412);
              v150 = 1;
              *(_QWORD *)&v170[0] = 0x1000000LL;
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
                (__int64)Src,
                (__int64)&unk_140145B7A,
                v81,
                v82,
                (__int64)v170,
                (__int64)&v150,
                (__int64)&v155,
                (__int64)&v152,
                (__int64)&ContainingAdapter,
                (__int64)&v154);
            }
            DxgkLogCodePointPacket(
              0x59u,
              *((_DWORD *)Src + 14 * v77),
              *((_DWORD *)Src + 14 * v77 + 12),
              0,
              *(__int64 *)((char *)v11 + 412));
          }
          TargetLinkTrainingStatus = DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus(v80, 0LL);
          if ( TargetLinkTrainingStatus != v84 )
            *((_DWORD *)a5 + 9) |= v79;
          DMMVIDEOPRESENTTARGET::UpdateTargetLinkTrainingStatus(
            v80,
            *((_QWORD *)Src + 7 * v77 + 3),
            *((_BYTE *)Src + 56 * v77 + 35) & 0xF);
          if ( (*((_DWORD *)Src + 14 * v77 + 8) & 0xF000000) == 0xC000000 )
            DMMVIDEOPRESENTTARGET::StartLinkTrainingTimer(v80, 1u);
          else
            DMMVIDEOPRESENTTARGET::CancelLinkTrainingTimer(v80);
          *((_BYTE *)v80 + 414) = 0;
        }
        else
        {
          v85 = DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus(v80, 0LL);
          *(_DWORD *)((char *)Src + v78 + 32) ^= (*(_DWORD *)((char *)Src + v78 + 32) ^ (v85 << 24)) & 0xF000000;
        }
        if ( (*((_DWORD *)Src + 14 * v77 + 3) & 4) != 0 && (v79 & *((_DWORD *)a5 + 18)) == 0 )
        {
          v86 = *((_DWORD *)a5 + 21) | v153;
          if ( !_bittest(&v86, (unsigned int)v156) )
          {
            DMMVIDEOPRESENTTARGET::SetTargetActivated(v80, 1u, 1u);
            if ( ((*((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 6) | *((_DWORD *)a5 + 8) | *((_DWORD *)a5 + 9)) & v79) != 0 )
            {
              v87 = 56LL * v77;
              if ( (*(_DWORD *)((_BYTE *)Src + v87 + 32) & 0xF000000) == 0xE000000 )
              {
                PathFromTarget = DMMVIDPNTOPOLOGY::GetPathFromTarget(v159, *(_DWORD *)((char *)Src + v87));
                DMMVIDPNPRESENTPATH::SetDriverGammaRamp(PathFromTarget, 0LL);
              }
            }
          }
        }
        v89 = 56LL * v77;
        if ( (*(_DWORD *)((_BYTE *)Src + v89 + 32) & 0xF000000) != 0xD000000
          && ((*((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 4)) & v79) != 0 )
        {
          MonitorSetLastWireformatAndColorspace(
            *((struct HDXGMONITOR__ **)v80 + 14),
            *(union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE *)((char *)Src + v89 + 8),
            *(enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE *)((char *)Src + v89 + 4));
        }
      }
      ++v77;
    }
    while ( v77 < v147 );
    v46 = 0;
  }
  CVidSchSuspendResume::Resume(v167);
  v90 = (ADAPTER_DISPLAY *)v11[395];
  v91 = 0;
  if ( *((_DWORD *)v90 + 24) )
  {
    while ( 1 )
    {
      v150 = 0;
      memset(v171, 0, sizeof(v171));
      v92 = 1 << v91;
      if ( ((1 << v91) & *((_DWORD *)a5 + 3)) != 0 )
      {
        v150 = 2;
      }
      else if ( (v92 & *((_DWORD *)a5 + 10)) != 0 )
      {
        v150 = 4;
      }
      else if ( (v92 & ~*((_DWORD *)a5 + 8) & *((_DWORD *)a5 + 2)) != 0 )
      {
        v150 = (*(_DWORD *)a5 & v92) != 0 ? 3 : 1;
        v46 = 0;
      }
      DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(v90, v91);
      v94 = *((_DWORD *)a5 + 2) | (unsigned int)(*((_DWORD *)a5 + 10) | *((_DWORD *)a5 + 13));
      v95 = v159;
      *(_OWORD *)v171 = *(_OWORD *)DisplayModeInfo;
      *(_OWORD *)&v171[4] = *((_OWORD *)DisplayModeInfo + 1);
      *(_OWORD *)&v171[8] = *((_OWORD *)DisplayModeInfo + 2);
      *(_OWORD *)&v171[12] = *((_OWORD *)DisplayModeInfo + 3);
      *(_OWORD *)&v171[16] = *((_OWORD *)DisplayModeInfo + 4);
      if ( ((unsigned int)v94 & v92) != 0 )
        DMMVIDPNTOPOLOGY::GetDisplayModeFromVidPnSource(
          v159,
          ((v149 - 1) & 0xFFFFFFFD) == 0,
          v91,
          (struct _DXGK_DISPLAYMODE_INFO *)v171);
      if ( (v92 & *((_DWORD *)a5 + 21)) != 0 )
        goto LABEL_213;
      if ( (v92 & v153) == 0 )
        break;
LABEL_215:
      v90 = (ADAPTER_DISPLAY *)v11[395];
      if ( ++v91 >= *((_DWORD *)v90 + 24) )
      {
        v18 = v160;
        goto LABEL_217;
      }
    }
    if ( (v92 & *((_DWORD *)a5 + 10)) != 0 )
    {
      ADAPTER_DISPLAY::SetDisplayModeInfo(
        (DXGADAPTER **)v11[395],
        v91,
        (const struct _DXGK_DISPLAYMODE_INFO *const)v171);
      OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(v11[395][1].OwnerTable, v91, 0LL, 0LL, 0, 1);
      v170[0] = 0xBuLL;
      v170[1] = 0LL;
      if ( (int)DxgkStatusChangeNotify((int *)v170) < 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 3398;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"NT_SUCCESS(NotificationStatus)",
          3398LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
    }
    v94 = *((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 3) | *((_DWORD *)a5 + 13) | *((_DWORD *)a5 + 6) | (unsigned int)(*((_DWORD *)a5 + 8) | *((_DWORD *)a5 + 9));
    if ( ((unsigned int)v94 & v92) == 0 )
      goto LABEL_213;
    v152 = 0;
    MostImportantVidPnPathTargetsFromSource = GetMostImportantVidPnPathTargetsFromSource(v95, v91, &v152);
    if ( (int)(MostImportantVidPnPathTargetsFromSource + 0x80000000) < 0
      || MostImportantVidPnPathTargetsFromSource == -1071774919 )
    {
      if ( MostImportantVidPnPathTargetsFromSource >= 0 )
      {
        v97 = v152;
        if ( v152 != -1 )
        {
          v103 = 0;
          if ( v147 )
          {
            while ( 1 )
            {
              v46 = 0;
              if ( v91 == *(_DWORD *)(v151 + 4LL * v103) )
              {
                v104 = 56LL * v103;
                if ( v152 == *(_DWORD *)((char *)Src + v104)
                  && (*(_DWORD *)((_BYTE *)Src + v104 + 32) & 0xF000000) == 0xE000000
                  && (*(_DWORD *)((_BYTE *)Src + v104 + 12) & 4) != 0
                  && (v92 & *((_DWORD *)a5 + 18)) == 0 )
                {
                  break;
                }
              }
              if ( ++v103 >= v147 )
                goto LABEL_168;
            }
            *((_DWORD *)a5 + 19) |= v92;
            v46 = 1;
            goto LABEL_169;
          }
        }
      }
    }
    else
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 3433;
    }
LABEL_168:
    v97 = -1;
LABEL_169:
    ADAPTER_DISPLAY::SetVidPnPrimaryTarget((ADAPTER_DISPLAY *)v11[395], v91, v97);
    if ( (v92 & *((_DWORD *)a5 + 2)) != 0 )
    {
      v171[11] = 1;
      *(_QWORD *)&v171[12] = 1LL;
      if ( v11[396] )
      {
        DisplayedPrimaryAllocation = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation((ADAPTER_DISPLAY *)v11[395], v91);
        v99 = DisplayedPrimaryAllocation;
        if ( DisplayedPrimaryAllocation )
        {
          if ( (*((_BYTE *)DisplayedPrimaryAllocation + 4) & 0x10) != 0 )
            v99 = 0LL;
          if ( v99 )
          {
            v100 = (void *)*((_QWORD *)v99 + 2);
            v101 = (ADAPTER_RENDER *)v11[396];
            memset(&v162.Width, 0, 40);
            v162.hAllocation = v100;
            v102 = ADAPTER_RENDER::DdiDescribeAllocation(v101, &v162);
            if ( v102 < 0 )
            {
              WdLogSingleEntry3(3LL, v99, v91, v102);
              WdLogGlobalForLineNumber = 3543;
            }
            else if ( v162.Width == v171[0]
                   && v162.Height == v171[1]
                   && v162.Format == v171[2]
                   && *(_QWORD *)&v162.RefreshRate == *(_QWORD *)&v171[14]
                   && (((unsigned __int8)~(v171[10] >> 4) ^ (unsigned __int8)~(*((_DWORD *)v99 + 1) >> 12)) & 1) == 0 )
            {
              *(D3DDDI_MULTISAMPLINGMETHOD *)&v171[11] = v162.MultisampleMethod;
              v171[13] = v162.PrivateDriverFormatAttribute;
            }
            else if ( v144 || (*((_DWORD *)v99 + 1) & 2) == 0 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 3531;
            }
          }
        }
      }
    }
    v105 = v149;
    v106 = ADAPTER_DISPLAY::SetVidPnSourceActive(
             (PERESOURCE **)v11[395],
             v91,
             v46,
             (const struct _DXGK_DISPLAYMODE_INFO *)v171,
             v149 == 4,
             a7 != 0);
    v107 = v106;
    if ( v106 >= 0 )
    {
      ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange((DXGADAPTER **)v11[395], v91, 0);
      if ( (v92 & *((_DWORD *)a5 + 3)) == 0 )
      {
        v46 = 0;
        v155 = 0LL;
        if ( DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v159, v91, (unsigned __int64 *)&v155) < 0 || !v155 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 3590;
        }
        v94 = (unsigned int)(*((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 13));
        if ( ((unsigned int)v94 & v92) != 0 )
        {
          if ( ((v105 - 1) & 0xFFFFFFFD) == 0 )
            ADAPTER_DISPLAY::SetPartOfDesktop((ADAPTER_DISPLAY *)v11[395], v91, 1u);
          ADAPTER_DISPLAY::SetDisplayModeInfo(
            (DXGADAPTER **)v11[395],
            v91,
            (const struct _DXGK_DISPLAYMODE_INFO *const)v171);
          ADAPTER_DISPLAY::SetLastCddIntegerVSync((ADAPTER_DISPLAY *)v11[395], v91, v171[3]);
          ADAPTER_DISPLAY::DetermineScalingCapabilities((ADAPTER_DISPLAY *)v11[395], v91);
          ADAPTER_DISPLAY::SetHdrEnabled((DXGADAPTER **)v11[395], v91, (v92 & *((_DWORD *)a5 + 64)) != 0);
          if ( v157 && v164 )
            ADAPTER_DISPLAY::UpdateOneCddPrimaryPrivateDriverData(
              (ADAPTER_DISPLAY *)v11[395],
              v91,
              *(struct DXGADAPTER **)(*((_QWORD *)v157 + 2) + 16LL));
        }
        goto LABEL_213;
      }
      if ( ((v105 - 1) & 0xFFFFFFFD) != 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 3577;
      }
      ADAPTER_DISPLAY::SetPartOfDesktop((ADAPTER_DISPLAY *)v11[395], v91, 0);
      ADAPTER_DISPLAY::SetContentRect((ADAPTER_DISPLAY *)v11[395], v91, &stru_140169520);
      ADAPTER_DISPLAY::SetCddInterface((ADAPTER_DISPLAY *)v11[395], v91, 0LL);
      ADAPTER_DISPLAY::SetHdrEnabled((DXGADAPTER **)v11[395], v91, 0);
    }
    else
    {
      WdLogSingleEntry3(2LL, v11, v91, v106);
      *((_DWORD *)a5 + v91 + 22) = v107;
      *((_DWORD *)a5 + 21) |= v92;
      WdLogGlobalForLineNumber = 3561;
    }
    v46 = 0;
LABEL_213:
    v108 = v150;
    if ( v150 )
    {
      CurrentProcess = PsGetCurrentProcess(v94);
      ProcessImageFileName = PsGetProcessImageFileName(CurrentProcess);
      VIDPN_MGR::CacheDisplayModeChangeRequest(
        (__int64)v158,
        v91,
        (__int64)v171,
        1u,
        *((_DWORD *)a5 + v91 + 22),
        v108,
        (int)v11[395][4].SystemResourcesList.Blink,
        ProcessImageFileName);
    }
    goto LABEL_215;
  }
LABEL_217:
  for ( k = 0; k < v147; ++k )
  {
    v112 = 56LL * k;
    v113 = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v18, *(_DWORD *)((char *)Src + v112));
    v114 = v113;
    if ( v113 )
    {
      v115 = Src;
      if ( (*(_DWORD *)((_BYTE *)Src + v112 + 12) & 4) == 0
        || (v116 = v151, v117 = 1 << *(_DWORD *)(v151 + 4LL * k), (v117 & *((_DWORD *)a5 + 18)) != 0)
        || (v117 & *((_DWORD *)a5 + 21)) != 0 )
      {
        DMMVIDEOPRESENTTARGET::SetTargetActivated(
          v113,
          0,
          (*(_DWORD *)((_BYTE *)Src + v112 + 32) & 0xF000000) == 201326592);
        v115 = Src;
        v116 = v151;
      }
      if ( !v144
        && *((_BYTE *)v114 + 416)
        && ((*(_DWORD *)&v115[v112 + 32] & 0xF000000) != 0xE000000 || v115[v112 + 48] != 0xFF) )
      {
        v118 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(
                 (ADAPTER_DISPLAY *)v11[395],
                 *(_DWORD *)(v116 + 4LL * k),
                 0,
                 0x800u,
                 a7);
        if ( v118 < 0 )
        {
          WdLogSingleEntry3(2LL, v11, *(unsigned int *)(v151 + 4LL * k), v118);
          WdLogGlobalForLineNumber = 3698;
        }
        if ( (*((_DWORD *)Src + 14 * k + 8) & 0xF000000) == 0xE000000 )
        {
          v119 = v11[396];
          if ( v119 )
          {
            VIDSCH_EXPORT::VidSchRequestDeferredVidPnSourceVisibility(
              (VIDSCH_EXPORT *)v119[7].SystemResourcesList.Blink,
              (struct _VIDSCH_GLOBAL *)v119[7].OwnerTable,
              *(_DWORD *)(v151 + 4LL * k));
          }
          else
          {
            OwnerThread = v11[395][4].OwnerEntry.OwnerThread;
            if ( OwnerThread )
              _InterlockedExchange(
                (volatile __int32 *)(3040LL * *(unsigned int *)(v151 + 4LL * k) + *(_QWORD *)(OwnerThread + 8) + 1080),
                1);
          }
        }
      }
      *((_BYTE *)v114 + 416) = 0;
    }
    else if ( (*(_DWORD *)((_BYTE *)Src + v112 + 12) & 4) != 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 3742;
    }
    if ( (*((_DWORD *)Src + 14 * k + 4) & 1) != 0 )
      *((_DWORD *)a5 + 16) |= 1 << *(_DWORD *)(v151 + 4LL * k);
  }
  auto_rc<DMMVIDPN>::reset((__int64 *)v158 + 40, 0LL);
  CVidSchSuspendResume::Resume(v167);
  v125 = (ADAPTER_DISPLAY *)v11[395];
  v126 = 0;
  if ( *((_DWORD *)v125 + 24) )
  {
    v127 = v157;
    do
    {
      v122 = v126;
      v128 = 1 << v126;
      if ( ((1 << v126) & *((_DWORD *)a5 + 15)) != 0 )
        ADAPTER_DISPLAY::InvalidateDisplayModeListCacheOnSource(v125, v126);
      if ( (v128 & *((_DWORD *)a5 + 16)) != 0 )
        DXGADAPTER::NotifyMultiPlaneOverlayDisable((DXGADAPTER *)v11, v126);
      if ( v127 && !v144 )
      {
        if ( ADAPTER_DISPLAY::GetCddPrimaryAllocation((ADAPTER_DISPLAY *)v11[395], v126, 0)
          && ADAPTER_DISPLAY::IsCddPrimaryStale((ADAPTER_DISPLAY *)v11[395], v126) )
        {
          ADAPTER_DISPLAY::DestroyCddAllocations(v129, v127, v126);
        }
        v130 = (ADAPTER_DISPLAY *)v11[395];
        v131 = (const struct _D3DKMT_DISPLAYMODE *)ADAPTER_DISPLAY::GetDisplayModeInfo(v130, v126);
        ADAPTER_DISPLAY::SetCddDisplayMode((DXGADAPTER **)v130, v126, v131);
        v127 = v157;
      }
      if ( (v128 & *((_DWORD *)a5 + 21)) != 0 )
      {
        v132 = *((_DWORD *)a5 + v126 + 40);
        if ( (v132 & 7) != 0 )
        {
          *((_DWORD *)a5 + 4 * (v132 & 7) + 56) = 0;
          DxgkLogCodePointPacket(0x65u, v126, *((_DWORD *)a5 + v126 + 40) & 7, 2u, *(__int64 *)((char *)v11 + 412));
        }
        v133 = v149;
        v134 = ADAPTER_DISPLAY::SetVidPnSourceActive((PERESOURCE **)v11[395], v126, 0, 0LL, v149 == 4, a7 != 0);
        if ( v134 < 0 )
        {
          WdLogSingleEntry3(2LL, v11, v126, v134);
          WdLogGlobalForLineNumber = 3866;
        }
        if ( v168 )
        {
          v136 = (const struct DMMVIDPN *)((char *)v168 + 96);
          ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
            (__int64)v170,
            ((unsigned __int64)v168 + 152) & -(__int64)((const struct DMMVIDPN *)((char *)v168 + 96) != 0LL),
            2u,
            v135,
            v142,
            *((_QWORD *)v168 + 17));
          v137 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource(v136, v126);
          v138 = 0x80000000LL;
          if ( (int)(v137 + 0x80000000) >= 0 && v137 != -1071774919 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 3881;
          }
          ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v170, v138);
        }
        v127 = v157;
        if ( v157 )
          ADAPTER_DISPLAY::DestroyCddAllocations((ADAPTER_DISPLAY *)v11[395], v157, v126);
        if ( ((v133 - 1) & 0xFFFFFFFD) == 0 )
        {
          ADAPTER_DISPLAY::SetPartOfDesktop((ADAPTER_DISPLAY *)v11[395], v126, 0);
          ADAPTER_DISPLAY::SetContentRect((ADAPTER_DISPLAY *)v11[395], v126, &stru_140169520);
          ADAPTER_DISPLAY::SetCddInterface((ADAPTER_DISPLAY *)v11[395], v126, 0LL);
        }
        ADAPTER_DISPLAY::SetVidPnPrimaryTarget((ADAPTER_DISPLAY *)v11[395], v126, -1);
        ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange((DXGADAPTER **)v11[395], v126, 1);
        ADAPTER_DISPLAY::SetHdrEnabled((DXGADAPTER **)v11[395], v126, 0);
      }
      v125 = (ADAPTER_DISPLAY *)v11[395];
      ++v126;
    }
    while ( v126 < *((_DWORD *)v125 + 24) );
    v18 = v160;
  }
  if ( v168 )
  {
    ADAPTER_DISPLAY::SetSyncLockGroup(
      (__int64)v125,
      1u,
      *((_DWORD *)a5 + 60),
      *((_DWORD *)a5 + 61),
      *((_DWORD *)a5 + 62),
      *((_DWORD *)a5 + 63));
    v139 = v11[395];
    for ( m = 0LL; (unsigned int)m < LODWORD(v139->SpinLock); v139 = v11[395] )
    {
      v123 = (unsigned int)m;
      v140 = *((_DWORD *)a5 + (unsigned int)m + 40) & 7;
      m = (unsigned int)(m + 1);
      v121 = *((_DWORD *)a5 + 4 * v140 + 56) != 0 ? v140 : 0;
      v122 = 4024 * v123;
      *(_DWORD *)(4024 * v123 + *(_QWORD *)&v139[1].ActiveCount + 3804) = v121;
    }
  }
  DxgkInvalidateQdcCache(v122, v121, v123, m);
  CVidSchSuspendResume::Resume(v167);
  if ( v18 )
    ReferenceCounted::Release((ReferenceCounted *)(v18 + 64));
  wistd::unique_ptr<unsigned int [0],wistd::default_delete<unsigned int [0]>>::reset((void **)&v165);
  auto_rc<DMMVIDPN const>::reset((__int64 *)&v169, 0LL);
  v13 = 0;
LABEL_275:
  wistd::unique_ptr<unsigned int [0],wistd::default_delete<unsigned int [0]>>::reset((void **)&v161);
  wistd::unique_ptr<unsigned int [0],wistd::default_delete<unsigned int [0]>>::reset((void **)&v151);
  wistd::unique_ptr<unsigned int [0],wistd::default_delete<unsigned int [0]>>::reset(&Src);
  return (unsigned int)v13;
}
