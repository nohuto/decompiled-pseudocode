/*
 * XREFs of ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402C6C90
 * Callers:
 *     ?DdiControlInterrupt2@DXGADAPTER@@QEAAJU_DXGKARG_CONTROLINTERRUPT2@@EI@Z @ 0x14000822C (-DdiControlInterrupt2@DXGADAPTER@@QEAAJU_DXGKARG_CONTROLINTERRUPT2@@EI@Z.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x140009C80 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ADAPTER_RENDER_DdiSubmitCommandToHwQueue @ 0x140010540 (ADAPTER_RENDER_DdiSubmitCommandToHwQueue.c)
 *     ?DdiSetPowerComponentFState@DXGADAPTER@@QEAAJKK@Z @ 0x140010CF8 (-DdiSetPowerComponentFState@DXGADAPTER@@QEAAJKK@Z.c)
 *     DxgSetPowerComponentActiveNoWaitForceAsyncCB @ 0x140011F30 (DxgSetPowerComponentActiveNoWaitForceAsyncCB.c)
 *     DxgkGetSessionTokenManager @ 0x140027250 (DxgkGetSessionTokenManager.c)
 *     ADAPTER_DISPLAY_DdiSetVidPnSourceAddressWithMultiPlaneOverlay3 @ 0x14002F050 (ADAPTER_DISPLAY_DdiSetVidPnSourceAddressWithMultiPlaneOverlay3.c)
 *     NtNotifyPresentToCompositionSurface @ 0x14002FF30 (NtNotifyPresentToCompositionSurface.c)
 *     ?PowerRuntimeComponentIdleStateCallback@DXGADAPTER@@QEAAXKKE@Z @ 0x1400336C8 (-PowerRuntimeComponentIdleStateCallback@DXGADAPTER@@QEAAXKKE@Z.c)
 *     ?DxgkPowerRuntimeComponentIdleStateCallback@@YAXPEAXKK@Z @ 0x140033DE0 (-DxgkPowerRuntimeComponentIdleStateCallback@@YAXPEAXKK@Z.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x140034914 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     DxgNotifyVSyncCB @ 0x140035C30 (DxgNotifyVSyncCB.c)
 *     ?PowerRuntimeComponentIdleStateCallback_Worker@DXGADAPTER@@QEAAXKKE@Z @ 0x140036284 (-PowerRuntimeComponentIdleStateCallback_Worker@DXGADAPTER@@QEAAXKKE@Z.c)
 *     ?SignalGpuFence@CFlipExBuffer@@UEAAJ_K_N@Z @ 0x14003B670 (-SignalGpuFence@CFlipExBuffer@@UEAAJ_K_N@Z.c)
 *     DxgkGetSessionFlipManagerRegistry @ 0x1400651E4 (DxgkGetSessionFlipManagerRegistry.c)
 *     ?CleanupPresentHistoryTokenQueueSession@DXGPRESENTHISTORYTOKENQUEUE@@SAXXZ @ 0x14018B454 (-CleanupPresentHistoryTokenQueueSession@DXGPRESENTHISTORYTOKENQUEUE@@SAXXZ.c)
 *     ?DxgkpProcessBddFallbackRequest@@YAJXZ @ 0x140190C38 (-DxgkpProcessBddFallbackRequest@@YAJXZ.c)
 *     DxgkGetSharedPrimaryHandle @ 0x1401B5F10 (DxgkGetSharedPrimaryHandle.c)
 *     DxgkOpenVerticalBlankEventInternal @ 0x1401B7D10 (DxgkOpenVerticalBlankEventInternal.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1401BC480 (-DxgkCddDisable@@YAJIII@Z.c)
 *     ?CloseSelfHandle@DXGCOMPOSITIONSURFACEPROXY@@IEAAJXZ @ 0x1401BE440 (-CloseSelfHandle@DXGCOMPOSITIONSURFACEPROXY@@IEAAJXZ.c)
 *     ?DxgkCreateRemoteCompositionSurfaceObjectForPairing@@YAJPEAVCompositionSurfaceObject@@PEAPEAUIPairedSurfaceObject@@PEAPEAX@Z @ 0x1401BE88C (-DxgkCreateRemoteCompositionSurfaceObjectForPairing@@YAJPEAVCompositionSurfaceObject@@PEAPEAUIPa.c)
 *     ?Initialize@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ @ 0x1401BED84 (-Initialize@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ.c)
 *     ?InsertCompletedToken@DXGCOMPOSITIONSURFACEPROXY@@UEAAJ_K0PEAUtagCloneableFlipTokenData@@@Z @ 0x1401BF050 (-InsertCompletedToken@DXGCOMPOSITIONSURFACEPROXY@@UEAAJ_K0PEAUtagCloneableFlipTokenData@@@Z.c)
 *     ?PairedBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJPEAUCSM_BUFFER_INFO@@_NPEA_K@Z @ 0x1401BF2C0 (-PairedBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJPEAUCSM_BUFFER_INFO@@_NPEA_K@Z.c)
 *     ?PairedQueryStats@DXGCOMPOSITIONSURFACEPROXY@@UEBAJPEAUCSM_BUFFER_STATISTICS@@@Z @ 0x1401BF850 (-PairedQueryStats@DXGCOMPOSITIONSURFACEPROXY@@UEBAJPEAUCSM_BUFFER_STATISTICS@@@Z.c)
 *     ?PairedUnBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJ_N@Z @ 0x1401BFAA0 (-PairedUnBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJ_N@Z.c)
 *     ?SendUnPairAndRelease@DXGCOMPOSITIONSURFACEPROXY@@IEAAJXZ @ 0x1401C0F68 (-SendUnPairAndRelease@DXGCOMPOSITIONSURFACEPROXY@@IEAAJXZ.c)
 *     _lambda_89c28751b319d20abeaa919f1ef3608e_::operator() @ 0x1401C6B10 (_lambda_89c28751b319d20abeaa919f1ef3608e_--operator().c)
 *     DxgkIddHandleSetDisplayConfig @ 0x1401C7910 (DxgkIddHandleSetDisplayConfig.c)
 *     ?WriteDpiToRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z @ 0x1401D4B28 (-WriteDpiToRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z.c)
 *     DxgkGetAdapter @ 0x1401E0400 (DxgkGetAdapter.c)
 *     DxgkReleaseAdapter @ 0x1401E0860 (DxgkReleaseAdapter.c)
 *     ?GetDebugInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z @ 0x1401ED8E4 (-GetDebugInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z.c)
 *     ?Initialize@OUTPUTDUPL_MGR@@QEAAJXZ @ 0x1401EDB24 (-Initialize@OUTPUTDUPL_MGR@@QEAAJXZ.c)
 *     ??1OUTPUTDUPL_CONTEXT@@QEAA@XZ @ 0x1401EF568 (--1OUTPUTDUPL_CONTEXT@@QEAA@XZ.c)
 *     DxgkRedrawCursorForPostCompositon @ 0x1401F344C (DxgkRedrawCursorForPostCompositon.c)
 *     ?SetDisplayStateCallback@CTTMDEVICE@@CAJ_KW4_TERMINAL_DISPLAY_STATE@@K@Z @ 0x140203610 (-SetDisplayStateCallback@CTTMDEVICE@@CAJ_KW4_TERMINAL_DISPLAY_STATE@@K@Z.c)
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x140204E94 (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 *     DxgkDestroyCsrssProcess @ 0x140204FC0 (DxgkDestroyCsrssProcess.c)
 *     DxgkGetUseHWGPUInRemoteSession @ 0x1402050F0 (DxgkGetUseHWGPUInRemoteSession.c)
 *     NtDxgkVailConnect @ 0x140210E60 (NtDxgkVailConnect.c)
 *     NtDxgkVailDisconnect @ 0x140211380 (NtDxgkVailDisconnect.c)
 *     ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x14025F128 (-UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_.c)
 *     DxgkWaitForVerticalBlankEventInternal @ 0x1402902F0 (DxgkWaitForVerticalBlankEventInternal.c)
 *     DxgkModifyVSyncWaiterInternal @ 0x1402A1E80 (DxgkModifyVSyncWaiterInternal.c)
 *     DxgkGetScanLine @ 0x1402A3580 (DxgkGetScanLine.c)
 *     DxgkGetAdapterDeviceDesc @ 0x1402AD2E0 (DxgkGetAdapterDeviceDesc.c)
 *     ?EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1402AE590 (-EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     DxgkCheckMonitorPowerState @ 0x1402C42E0 (DxgkCheckMonitorPowerState.c)
 *     DxgkAcquireSessionModeChangeLock @ 0x1402C4C84 (DxgkAcquireSessionModeChangeLock.c)
 *     DxgkGetPresentHistoryInternal @ 0x1402C4DC0 (DxgkGetPresentHistoryInternal.c)
 *     _lambda_a196522e28cbefec8f1ebe5a826d98cf_::_lambda_invoker_cdecl_ @ 0x1402C70B0 (_lambda_a196522e28cbefec8f1ebe5a826d98cf_--_lambda_invoker_cdecl_.c)
 *     ?CleanUpPendingList@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402C7424 (-CleanUpPendingList@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HHH@Z @ 0x1402C7800 (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HHH@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1402C9134 (DxgkReleaseSessionModeChangeLock.c)
 *     ?DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHHH@Z @ 0x1402CE01C (-DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHH.c)
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1402D2480 (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 *     ?DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1402D4AF8 (-DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     OutputDuplProcessTerminateForSession @ 0x1402E7184 (OutputDuplProcessTerminateForSession.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1402E7F14 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEBD@Z @ 0x140333368 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?LoadByConnectedSetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@PEBV2@K_N@Z @ 0x140337898 (-LoadByConnectedSetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@PEBV2@K_N@Z.c)
 *     ?LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z @ 0x1403381E0 (-LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z.c)
 *     ?ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z @ 0x140338300 (-ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z.c)
 *     ?CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@PEA_N@Z @ 0x140338A90 (-CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@PEA_N@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x14033D68C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     DxgkGetAllMonitorDevicesFromSessionView @ 0x14033F860 (DxgkGetAllMonitorDevicesFromSessionView.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1403495F4 (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x140359E70 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     OutputDuplCleanUpPendingList @ 0x14035B7CC (OutputDuplCleanUpPendingList.c)
 *     ?FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ @ 0x140364738 (-FinalizeTopology@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     DxgkUseAdapterViewInCurrentSession @ 0x1403654B0 (DxgkUseAdapterViewInCurrentSession.c)
 *     DxgkRemoveAllSessionViewForCurrentSession @ 0x140365F60 (DxgkRemoveAllSessionViewForCurrentSession.c)
 *     ?CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z @ 0x140366D34 (-CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x140366EE4 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140367688 (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     DxgkGetDeviceStateInternal @ 0x14036A470 (DxgkGetDeviceStateInternal.c)
 *     ?ApplyCsFunction@DXGPROCESS@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z @ 0x14037E71C (-ApplyCsFunction@DXGPROCESS@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z.c)
 *     DxgkCreateSessionViewForCurrentSession @ 0x140387150 (DxgkCreateSessionViewForCurrentSession.c)
 *     ??1DXGPROCESS@@MEAA@XZ @ 0x140395514 (--1DXGPROCESS@@MEAA@XZ.c)
 *     ?ReleasePDevDwmStateAndWin32kLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x14039D300 (-ReleasePDevDwmStateAndWin32kLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     ??0MONITORSCOUNT_CALLBACK_CONTEXT@@QEAA@XZ @ 0x1403ADF00 (--0MONITORSCOUNT_CALLBACK_CONTEXT@@QEAA@XZ.c)
 *     ??0PDOBaseEnum@@QEAA@XZ @ 0x1403B3E1C (--0PDOBaseEnum@@QEAA@XZ.c)
 *     ?AdvancedColorPowerSettingsCallback@DXGGLOBAL@@SAJPEBU_GUID@@PEAXK1@Z @ 0x1403B4880 (-AdvancedColorPowerSettingsCallback@DXGGLOBAL@@SAJPEBU_GUID@@PEAXK1@Z.c)
 *     DxgkSessionConnected @ 0x1403B4AB0 (DxgkSessionConnected.c)
 *     DxgkSessionDisconnected @ 0x1403B4C60 (DxgkSessionDisconnected.c)
 *     DxgkSessionReconnected @ 0x1403B4E10 (DxgkSessionReconnected.c)
 *     DxgkIncreaseSessionAdapterUniqueness @ 0x1403B4FCC (DxgkIncreaseSessionAdapterUniqueness.c)
 *     ?MonitorStateChangeThread@@YAXPEAX@Z @ 0x1403B51B0 (-MonitorStateChangeThread@@YAXPEAX@Z.c)
 *     ?DxgkWnfStateChangeCallback@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID@@PEAX@Z @ 0x1403BF5F0 (-DxgkWnfStateChangeCallback@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_I.c)
 *     ?DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z @ 0x1403CA87C (-DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z.c)
 *     DxgkDisplayOnOff @ 0x1403EBC10 (DxgkDisplayOnOff.c)
 *     ?DxgkSetKernelDisplayPolicy@@YAJW4DXGK_DISPLAY_POLICY@@H@Z @ 0x1403F06D0 (-DxgkSetKernelDisplayPolicy@@YAJW4DXGK_DISPLAY_POLICY@@H@Z.c)
 *     ?AcquireWin32kDwmStateAndPDevLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ @ 0x1403F3714 (-AcquireWin32kDwmStateAndPDevLocks@MANAGEDPRIMARIESTRACKER@@QEAAXXZ.c)
 *     ?DxgkSendDisplayBrokerMessage@@YAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_LARGE_INTEGER@@@Z @ 0x1403F7EF0 (-DxgkSendDisplayBrokerMessage@@YAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_.c)
 *     DxgkCheckVidPnExclusiveOwnership @ 0x1403F8A00 (DxgkCheckVidPnExclusiveOwnership.c)
 *     ?SetPartOfDesktop@DISPLAY_SOURCE@@QEAAXE@Z @ 0x1403FBD8C (-SetPartOfDesktop@DISPLAY_SOURCE@@QEAAXE@Z.c)
 *     ?DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1404032E0 (-DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_F.c)
 *     ?Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x140406CCC (-Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z.c)
 *     DxgkPreSessionDisconnected @ 0x140408F30 (DxgkPreSessionDisconnected.c)
 *     ?AccessCheckTargetPolicy@DXGDISPLAYMANAGEROBJECT@@SAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@_N@Z @ 0x14040977C (-AccessCheckTargetPolicy@DXGDISPLAYMANAGEROBJECT@@SAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@_N@Z.c)
 *     DxgkDispMgrOperation @ 0x14040BE80 (DxgkDispMgrOperation.c)
 *     DxgkGetWddmRemoteSessionGdiViewRange @ 0x140413FD0 (DxgkGetWddmRemoteSessionGdiViewRange.c)
 *     DxgkRemoveSessionViewForCurrentSession @ 0x14041433C (DxgkRemoveSessionViewForCurrentSession.c)
 *     ?SaveHKCUPathInSessionData@DpiPersistence@@YAJXZ @ 0x140415458 (-SaveHKCUPathInSessionData@DpiPersistence@@YAJXZ.c)
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x140417C20 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     DxgkRegisterDwmProcess @ 0x14041AC00 (DxgkRegisterDwmProcess.c)
 * Callees:
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

struct DXGSESSIONDATA *__fastcall DXGGLOBAL::GetSessionData(DXGGLOBAL *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  unsigned int CurrentProcessSessionId; // eax
  DXGFASTMUTEX *v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rbp
  struct _KTHREAD **v9; // rbx
  __int64 v10; // rcx
  struct _KTHREAD **v11; // rbx
  __int64 v12; // rsi
  struct _KTHREAD **v15; // [rsp+50h] [rbp-28h] BYREF
  char v16; // [rsp+58h] [rbp-20h]

  v4 = *((_QWORD *)this + 123);
  if ( !v4 )
    return 0LL;
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(this, a2, a3, a4);
  v6 = (DXGFASTMUTEX *)(v4 + 88);
  v16 = 0;
  v7 = 0LL;
  v8 = CurrentProcessSessionId;
  v15 = (struct _KTHREAD **)(v4 + 88);
  if ( v4 == -88 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 628;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pMutex != NULL", 628LL, 0LL, 0LL, 0LL, 0LL);
    v6 = (DXGFASTMUTEX *)v15;
  }
  if ( DXGFASTMUTEX::IsOwner(v6) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 635;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 635LL, 0LL, 0LL, 0LL, 0LL);
  }
  v9 = v15;
  KeEnterCriticalRegion();
  if ( v9[3] == KeGetCurrentThread() )
  {
    if ( *((int *)v9 + 8) <= 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 504;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 504LL, 0LL, 0LL, 0LL, 0LL);
    }
    ++*((_DWORD *)v9 + 8);
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v9 + 1, 0LL) )
    {
      if ( bTracingEnabled && *((_DWORD *)v9 + 9) != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v10, (__int64)"g");
      _InterlockedIncrement64((volatile signed __int64 *)v9 + 2);
      ExAcquirePushLockExclusiveEx(v9 + 1, 0LL);
    }
    if ( v9[3] )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 530;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NULL == m_OwningThread", 530LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( *((_DWORD *)v9 + 8) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 531;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"0 == m_OwnerAcquireCount", 531LL, 0LL, 0LL, 0LL, 0LL);
    }
    v9[3] = KeGetCurrentThread();
    *((_DWORD *)v9 + 8) = 1;
  }
  v16 = 1;
  if ( (unsigned int)v8 >= *(_DWORD *)(v4 + 80) )
  {
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v15);
  }
  else
  {
    v11 = v15;
    v12 = *(_QWORD *)(*(_QWORD *)(v4 + 48) + 8 * v8);
    v16 = 0;
    if ( v15[3] != KeGetCurrentThread() )
    {
      WdLogSingleEntry5(0LL, 275LL, 4LL, v15, 0LL, 0LL);
      WdLogGlobalForLineNumber = 553;
    }
    if ( *((int *)v11 + 8) <= 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 556;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 556LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( (*((_DWORD *)v11 + 8))-- == 1 )
    {
      v11[3] = 0LL;
      ExReleasePushLockExclusiveEx(v11 + 1, 0LL);
    }
    KeLeaveCriticalRegion();
    return (struct DXGSESSIONDATA *)v12;
  }
  return (struct DXGSESSIONDATA *)v7;
}
