/*
 * XREFs of ??1String@Internal@Windows@@QEAA@XZ @ 0x1800FEDD8
 * Callers:
 *     ??1BroadcastDVRActiveAppInfo@@QEAA@XZ @ 0x18005B960 (--1BroadcastDVRActiveAppInfo@@QEAA@XZ.c)
 *     ?Initialize@GameDVR_OutputDebug@@SAJXZ @ 0x1800B27D0 (-Initialize@GameDVR_OutputDebug@@SAJXZ.c)
 *     ?OnApplicationViewChangedTask@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@@Z @ 0x1800B3CA0 (-OnApplicationViewChangedTask@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@W4APPLICATION_VI.c)
 *     ??1UwpWindowWrapperBase@@QEAA@XZ @ 0x1800FD648 (--1UwpWindowWrapperBase@@QEAA@XZ.c)
 *     ??$_Destroy_range@V?$allocator@VString@Internal@Windows@@@std@@@std@@YAXPEAVString@Internal@Windows@@QEAV123@AEAV?$allocator@VString@Internal@Windows@@@0@@Z @ 0x1800FEC2C (--$_Destroy_range@V-$allocator@VString@Internal@Windows@@@std@@@std@@YAXPEAVString@Internal@Wind.c)
 *     ??$_Destroy_range@V?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@std@@@std@@YAXPEAU?$pair@KVString@Internal@Windows@@@0@QEAU10@AEAV?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@0@@Z @ 0x1800FEC64 (--$_Destroy_range@V-$allocator@U-$pair@KVString@Internal@Windows@@@std@@@std@@@std@@YAXPEAU-$pai.c)
 *     ?RemoveKnownProcessesFromProcessList@BroadcastDVRComponent@@AEAAXAEBV?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@AEAV23@@Z @ 0x1800FECA0 (-RemoveKnownProcessesFromProcessList@BroadcastDVRComponent@@AEAAXAEBV-$vector@VString@Internal@W.c)
 *     ??1ViewEventRegistration@@QEAA@XZ @ 0x1800FEFC8 (--1ViewEventRegistration@@QEAA@XZ.c)
 *     ??1CLaunchActivatedEventArgs@@EEAA@XZ @ 0x1800FF3E0 (--1CLaunchActivatedEventArgs@@EEAA@XZ.c)
 *     ??$_Partition_by_median_guess_unchecked@PEAVString@Internal@Windows@@U?$less@X@std@@@std@@YA?AU?$pair@PEAVString@Internal@Windows@@PEAV123@@0@PEAVString@Internal@Windows@@0U?$less@X@0@@Z @ 0x180110558 (--$_Partition_by_median_guess_unchecked@PEAVString@Internal@Windows@@U-$less@X@std@@@std@@YA-AU-.c)
 *     ?GetStringFromGameConfigStore@IsGameManager@@AEAAJU_GUID@@W4GameProperty_t@ExecutionModel@@PEAVString@Internal@Windows@@@Z @ 0x180111630 (-GetStringFromGameConfigStore@IsGameManager@@AEAAJU_GUID@@W4GameProperty_t@ExecutionModel@@PEAVS.c)
 *     ?IsWin32GameFromHwnd@IsGameManager@@UEAAJPEAUHWND__@@PEAUGameConfigInfo@@@Z @ 0x180111910 (-IsWin32GameFromHwnd@IsGameManager@@UEAAJPEAUHWND__@@PEAUGameConfigInfo@@@Z.c)
 *     ?CheckStateRepositoryForIsGameFromAppId@IsGameManager@@AEAAJPEBGPEA_NPEAU_GUID@@PEAK@Z @ 0x18012F4C0 (-CheckStateRepositoryForIsGameFromAppId@IsGameManager@@AEAAJPEBGPEA_NPEAU_GUID@@PEAK@Z.c)
 *     ?LoadKGLFromGameDVRFolder@IsGameManager@@AEAAJ_N@Z @ 0x18013EFCC (-LoadKGLFromGameDVRFolder@IsGameManager@@AEAAJ_N@Z.c)
 *     ?UpdateGameDVRKGLCopy@IsGameManager@@AEAAXKPEA_N@Z @ 0x18013F7F0 (-UpdateGameDVRKGLCopy@IsGameManager@@AEAAXKPEA_N@Z.c)
 *     ?GetKGLLocationForApp@IsGameManager@@AEAAJPEBG0PEAVString@Internal@Windows@@@Z @ 0x18013FDD8 (-GetKGLLocationForApp@IsGameManager@@AEAAJPEBG0PEAVString@Internal@Windows@@@Z.c)
 *     ?EnsureGameDVRFolderAccess@IsGameManager@@AEAAJXZ @ 0x180140E18 (-EnsureGameDVRFolderAccess@IsGameManager@@AEAAJXZ.c)
 *     ?v_SetDesiredNavigationLevel@UwpWindowWrapper@@EEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18018D040 (-v_SetDesiredNavigationLevel@UwpWindowWrapper@@EEAAXW4NavigationLevel@ViewManagerInterop@Shell@I.c)
 *     ?NavigateInternal@UwpWindowWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801AAE90 (-NavigateInternal@UwpWindowWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal.c)
 *     ?LaunchGameOverlayWithStartupTipsFlag@BroadcastDVRComponent@@AEAAJPEAUHWND__@@PEAUBroadcastDVRActiveAppInfo@@@Z @ 0x1801C7B98 (-LaunchGameOverlayWithStartupTipsFlag@BroadcastDVRComponent@@AEAAJPEAUHWND__@@PEAUBroadcastDVRAc.c)
 *     ??1ViewEventArgsForPropertyChanged@@UEAA@XZ @ 0x1801EA75C (--1ViewEventArgsForPropertyChanged@@UEAA@XZ.c)
 *     ?Release@?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@UEAAKXZ @ 0x180211660 (-Release@-$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@UEAAKXZ.c)
 *     ??1GameConfigInfo@@QEAA@XZ @ 0x180220EBC (--1GameConfigInfo@@QEAA@XZ.c)
 *     ??1KGLUpdateLocationInfo@@QEAA@XZ @ 0x180222C40 (--1KGLUpdateLocationInfo@@QEAA@XZ.c)
 *     ??$_Make_heap_unchecked@PEAVString@Internal@Windows@@U?$less@X@std@@@std@@YAXPEAVString@Internal@Windows@@0U?$less@X@0@@Z @ 0x1802BE4A8 (--$_Make_heap_unchecked@PEAVString@Internal@Windows@@U-$less@X@std@@@std@@YAXPEAVString@Internal.c)
 *     ??$_Pop_heap_unchecked@PEAVString@Internal@Windows@@U?$less@X@std@@@std@@YAXPEAVString@Internal@Windows@@0U?$less@X@0@@Z @ 0x180313874 (--$_Pop_heap_unchecked@PEAVString@Internal@Windows@@U-$less@X@std@@@std@@YAXPEAVString@Internal@.c)
 *     ?OnGameModeEnableChangeTask@BroadcastDVRComponent@@AEAAXPEAUHWND__@@_N@Z @ 0x18031725C (-OnGameModeEnableChangeTask@BroadcastDVRComponent@@AEAAXPEAUHWND__@@_N@Z.c)
 *     ?UpdateGameFullPathInGameConfigStore@IsGameManager@@AEAAJKU_GUID@@@Z @ 0x18031A730 (-UpdateGameFullPathInGameConfigStore@IsGameManager@@AEAAJKU_GUID@@@Z.c)
 *     ??1CProtocolActivatedEventArgs@@EEAA@XZ @ 0x18032BC54 (--1CProtocolActivatedEventArgs@@EEAA@XZ.c)
 *     ??1PendingActivationData@WindowEventDispatcher@@QEAA@XZ @ 0x180408348 (--1PendingActivationData@WindowEventDispatcher@@QEAA@XZ.c)
 *     ?AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180409880 (-AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs.c)
 *     ??1WindowWrapperBase@@QEAA@XZ @ 0x180421120 (--1WindowWrapperBase@@QEAA@XZ.c)
 *     _lambda_3b1236d83d5c2b1f5543058f6bf0f90a_::__lambda_3b1236d83d5c2b1f5543058f6bf0f90a_ @ 0x180438590 (_lambda_3b1236d83d5c2b1f5543058f6bf0f90a_--__lambda_3b1236d83d5c2b1f5543058f6bf0f90a_.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3b1236d83d5c2b1f5543058f6bf0f90a___::_CTaskWrapper__lambda_3b1236d83d5c2b1f5543058f6bf0f90a___ @ 0x18043859C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_3b1236d83d5c2b1f5543058f6bf0f90a___--_CTask.c)
 *     _UwpWindowEventDispatcher::UwpWindowActivating_::_1_::dtor$32 @ 0x1806A7E66 (_UwpWindowEventDispatcher--UwpWindowActivating_--_1_--dtor$32.c)
 *     _IsGameManager::LoadKGLFromGameDVRFolder_::_1_::dtor$0 @ 0x1806A86C9 (_IsGameManager--LoadKGLFromGameDVRFolder_--_1_--dtor$0.c)
 *     _BroadcastDVRComponent::GetNonServiceProcessListAndIds_::_1_::dtor$1 @ 0x1806A8E14 (_BroadcastDVRComponent--GetNonServiceProcessListAndIds_--_1_--dtor$1.c)
 *     _IsGameManager::GetKGLLocationForApp_::_1_::dtor$5 @ 0x1806AD973 (_IsGameManager--GetKGLLocationForApp_--_1_--dtor$5.c)
 *     _UwpWindowEventDispatcher::UwpWindowAdded_::_1_::dtor$11 @ 0x1806AE54A (_UwpWindowEventDispatcher--UwpWindowAdded_--_1_--dtor$11.c)
 *     _IsGameManager::GetKGLLocationForApp_::_1_::dtor$6 @ 0x1806AE55C (_IsGameManager--GetKGLLocationForApp_--_1_--dtor$6.c)
 *     _IsGameManager::LoadKGLFromGameDVRFolder_::_1_::dtor$1 @ 0x1806AE73F (_IsGameManager--LoadKGLFromGameDVRFolder_--_1_--dtor$1.c)
 *     _IsGameManager::UpdateGameDVRKGLCopy_::_1_::dtor$1 @ 0x1806AE787 (_IsGameManager--UpdateGameDVRKGLCopy_--_1_--dtor$1.c)
 *     _UwpWindowEventDispatcher::UwpWindowAdded_::_1_::dtor$12 @ 0x1806AEB03 (_UwpWindowEventDispatcher--UwpWindowAdded_--_1_--dtor$12.c)
 *     _BroadcastDVRComponent::LaunchGameOverlayWithStartupTipsFlag_::_1_::dtor$2 @ 0x1806B1F45 (_BroadcastDVRComponent--LaunchGameOverlayWithStartupTipsFlag_--_1_--dtor$2.c)
 *     _WindowEventDispatcher::AppViewActivationRequested_::_1_::dtor$29 @ 0x1806BA4A7 (_WindowEventDispatcher--AppViewActivationRequested_--_1_--dtor$29.c)
 * Callees:
 *     <none>
 */

void __fastcall Windows::Internal::String::~String(HSTRING *this)
{
  HSTRING v1; // rcx

  v1 = *this;
  if ( v1 )
    WindowsDeleteString(v1);
}
