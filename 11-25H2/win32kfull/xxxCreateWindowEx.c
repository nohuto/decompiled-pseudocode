/*
 * XREFs of xxxCreateWindowEx @ 0x14003997C
 * Callers:
 *     ?xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z @ 0x14002CC5C (-xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z.c)
 *     NtUserCreateWindowEx @ 0x1400391A0 (NtUserCreateWindowEx.c)
 *     xxxAddShadow @ 0x1400E0A5C (xxxAddShadow.c)
 *     xxxTrackPopupMenuEx @ 0x14015AE18 (xxxTrackPopupMenuEx.c)
 *     xxxCreateDesktopEx @ 0x140166938 (xxxCreateDesktopEx.c)
 *     xxxMNOpenHierarchy @ 0x14016D6F0 (xxxMNOpenHierarchy.c)
 *     xxxCsDdeInitialize @ 0x14017DC44 (xxxCsDdeInitialize.c)
 *     xxxCreateWindowStation @ 0x14028CAA0 (xxxCreateWindowStation.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140019B80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??1?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x14001BAD0 (--1-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x14001C3E0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x14001D970 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     GetRedirectionBitmap @ 0x14001DFF0 (GetRedirectionBitmap.c)
 *     ?xxxUpdateInputHangInfo@@YAXPEAUtagWND@@W4INPUTHANGTIME@@@Z @ 0x14001ED60 (-xxxUpdateInputHangInfo@@YAXPEAUtagWND@@W4INPUTHANGTIME@@@Z.c)
 *     ?IsInsideUserApiHook@@YAHXZ @ 0x140022DA4 (-IsInsideUserApiHook@@YAHXZ.c)
 *     CalcForegroundInsertAfter @ 0x140023FF0 (CalcForegroundInsertAfter.c)
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x140024198 (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ?xxxMinMaximize@@YAXPEAUtagWND@@IW4MinMaxOptions@@@Z @ 0x1400268A8 (-xxxMinMaximize@@YAXPEAUtagWND@@IW4MinMaxOptions@@@Z.c)
 *     ?xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z @ 0x14002CC5C (-xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14002D198 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ @ 0x14002EA08 (--1-$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ @ 0x14002EA3C (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x14002EA74 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxWindowEvent @ 0x14002EAB0 (xxxWindowEvent.c)
 *     xxxSendTransformableMessageTimeout @ 0x140030264 (xxxSendTransformableMessageTimeout.c)
 *     ?UpdateWindowMonitorAndDpiInfoHelper@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x1400341EC (-UpdateWindowMonitorAndDpiInfoHelper@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z.c)
 *     _GetDesktopWindow @ 0x140034670 (_GetDesktopWindow.c)
 *     ??0?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x140034B94 (--0-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 *     GetClassPtr @ 0x140034BF0 (GetClassPtr.c)
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x14003507C (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     ??$?0VSmartObjStackRef@@@?$Win32HMThreadLock@UtagMENU@@@@QEAA@AEAV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1400350BC (--$-0VSmartObjStackRef@@@-$Win32HMThreadLock@UtagMENU@@@@QEAA@AEAV-$SmartObjStackRef@UtagMENU@@@.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     DwmChildRectChange @ 0x140036870 (DwmChildRectChange.c)
 *     ?ShouldUseLogPixelsForWindowMetrics@@YA_NPEAUtagWND@@@Z @ 0x140036CCC (-ShouldUseLogPixelsForWindowMetrics@@YA_NPEAUtagWND@@@Z.c)
 *     GetInheritedMonitor @ 0x140036E20 (GetInheritedMonitor.c)
 *     SetOrClrWF @ 0x1400373A0 (SetOrClrWF.c)
 *     DirtyVisRgnTrackers @ 0x140037A28 (DirtyVisRgnTrackers.c)
 *     _IsTopLevelWindow @ 0x140037CA0 (_IsTopLevelWindow.c)
 *     GetAppCompatFlags2 @ 0x140038130 (GetAppCompatFlags2.c)
 *     ??0?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x140039968 (--0-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@AEBV0@@Z @ 0x14003F404 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@AEBV0@@Z.c)
 *     SetTiledRect @ 0x140043080 (SetTiledRect.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x140046AC4 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     ?LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x140047038 (-LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x140047180 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     _DestroyMenu @ 0x140047890 (_DestroyMenu.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140048F0C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140049F78 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004B060 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxAdjustSize @ 0x14004B4E8 (xxxAdjustSize.c)
 *     UnlinkWindow @ 0x14004BBDC (UnlinkWindow.c)
 *     IsDesktopWindow @ 0x14004BF20 (IsDesktopWindow.c)
 *     ??$?0VSharedUserObjPointerFieldspwndParent@tagWND@@@?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@PEAUtagTHREADINFO@@AEAV?$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@@@Z @ 0x14004DCF4 (--$-0VSharedUserObjPointerFieldspwndParent@tagWND@@@-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@PE.c)
 *     NeedsWindowEdge @ 0x14004F5D8 (NeedsWindowEdge.c)
 *     DwmAsyncChildStyleChange @ 0x14004F614 (DwmAsyncChildStyleChange.c)
 *     RecreateRedirectionBitmap @ 0x140057DF8 (RecreateRedirectionBitmap.c)
 *     ?xxxFreeWindow@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x140058924 (-xxxFreeWindow@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@PEAU-$Win32HMOptionalThreadLockAlways@UtagWND@.c)
 *     GetStyleWindow @ 0x14005A130 (GetStyleWindow.c)
 *     ?SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z @ 0x14005A4E4 (-SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z.c)
 *     xxxSetLayeredWindow @ 0x14005C15C (xxxSetLayeredWindow.c)
 *     IsWindowBeingDestroyed @ 0x14005C540 (IsWindowBeingDestroyed.c)
 *     DwmAsyncOwnerChange @ 0x14005E124 (DwmAsyncOwnerChange.c)
 *     GetNonChildAncestor @ 0x14005E7A4 (GetNonChildAncestor.c)
 *     ?zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@W4CloakState@@@Z @ 0x14005F74C (-zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@W4CloakState@@@Z.c)
 *     ?GetWindowCloakStateComponentUIAware@@YA?AW4CloakState@@PEBUtagWND@@@Z @ 0x14005FFA8 (-GetWindowCloakStateComponentUIAware@@YA-AW4CloakState@@PEBUtagWND@@@Z.c)
 *     IsImmersiveAppIORestricted @ 0x140060C58 (IsImmersiveAppIORestricted.c)
 *     ??0CDwmWindowNotifyBatch@@QEAA@PEAUtagWND@@@Z @ 0x140060C80 (--0CDwmWindowNotifyBatch@@QEAA@PEAUtagWND@@@Z.c)
 *     ValidateNewParent @ 0x140061A04 (ValidateNewParent.c)
 *     ValidateParentDepth @ 0x140061AF8 (ValidateParentDepth.c)
 *     IsTopLevelParent @ 0x140061BA4 (IsTopLevelParent.c)
 *     GetMessageWindow @ 0x140062A3C (GetMessageWindow.c)
 *     xxxInheritWindowMonitor @ 0x140064724 (xxxInheritWindowMonitor.c)
 *     PWInsertAfter @ 0x140064E98 (PWInsertAfter.c)
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x140065D0C (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x140065E14 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 *     ?IsDpiBoundaryBetweenWindows@@YA_NPEBUtagWND@@0@Z @ 0x140065F60 (-IsDpiBoundaryBetweenWindows@@YA_NPEBUtagWND@@0@Z.c)
 *     xxxCreateClassSmIcon @ 0x140069574 (xxxCreateClassSmIcon.c)
 *     GetMonitorRect @ 0x140091000 (GetMonitorRect.c)
 *     _MonitorFromRect @ 0x1400913B0 (_MonitorFromRect.c)
 *     DereferenceClass @ 0x1400B2D10 (DereferenceClass.c)
 *     ??1?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1400B33C8 (--1-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagCLS@@@@IEAAAEAV0@QEAUtagCLS@@@Z @ 0x1400B3A90 (--4-$SmartObjStackRefBase@UtagCLS@@@@IEAAAEAV0@QEAUtagCLS@@@Z.c)
 *     SetRedirectedWindow @ 0x1400B4EC4 (SetRedirectedWindow.c)
 *     ClassLock @ 0x1400C2F04 (ClassLock.c)
 *     ClassUnlock @ 0x1400C3290 (ClassUnlock.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1400C5FF0 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     UserGetLastError @ 0x1400C90C4 (UserGetLastError.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x140131080 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1401701A0 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     CheckGrantedAccess @ 0x1401768E8 (CheckGrantedAccess.c)
 *     GetThreadDesktopWindow @ 0x1401785A0 (GetThreadDesktopWindow.c)
 *     xxxDestroyWindow @ 0x14017EBE0 (xxxDestroyWindow.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagMENU@@$0A@$00@@QEAAPEAUtagMENU@@XZ @ 0x140187B78 (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagMENU@@$0A@$00@@QEAAPEAUtagMENU@@XZ.c)
 *     ?getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@Z @ 0x14018AF44 (-getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@.c)
 *     ?DwmWindowCreate@@YAXPEAUtagWND@@PEBU1@PEBUtagRECT@@@Z @ 0x140190008 (-DwmWindowCreate@@YAXPEAUtagWND@@PEBU1@PEBUtagRECT@@@Z.c)
 *     ReferenceClass @ 0x1401A4040 (ReferenceClass.c)
 *     ??4?$SharedMixedObjectPointerFieldpcls@UtagCLS@@@tagWND@@QEAAPEAUtagCLS@@PEAU2@@Z @ 0x1401A4314 (--4-$SharedMixedObjectPointerFieldpcls@UtagCLS@@@tagWND@@QEAAPEAUtagCLS@@PEAU2@@Z.c)
 *     UpdateTopLevelWindowDPITransform @ 0x1401A5788 (UpdateTopLevelWindowDPITransform.c)
 *     xxxClientAllocWindowClassExtraBytes @ 0x1401A6CD4 (xxxClientAllocWindowClassExtraBytes.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1401A8180 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     xxxSendSizeMessage @ 0x1401A8EA0 (xxxSendSizeMessage.c)
 *     RECTFromSIZERECT @ 0x1401AA49C (RECTFromSIZERECT.c)
 *     ??1CDwmWindowNotifyBatch@@QEAA@XZ @ 0x1401ADA00 (--1CDwmWindowNotifyBatch@@QEAA@XZ.c)
 *     SetWindowSubtreeCoreWindowStatus @ 0x1401ADB3C (SetWindowSubtreeCoreWindowStatus.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@@PEAU_HEAD@@@Z @ 0x1401AF138 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@.c)
 *     ConstrainWindowSIZERECT @ 0x1401AFB40 (ConstrainWindowSIZERECT.c)
 *     RtlInitLargeAnsiString @ 0x1401B0F6C (RtlInitLargeAnsiString.c)
 *     xxxClientLoadMenu @ 0x1401B2838 (xxxClientLoadMenu.c)
 *     ?WantImeWindow@@YAHPEAUtagWND@@0@Z @ 0x1401B5D5C (-WantImeWindow@@YAHPEAUtagWND@@0@Z.c)
 *     ?xxxConsiderPreferredDpiChange@@YAXPEAUtagWND@@@Z @ 0x1401BAD30 (-xxxConsiderPreferredDpiChange@@YAXPEAUtagWND@@@Z.c)
 *     GetAppCompatFlags @ 0x1401BCA50 (GetAppCompatFlags.c)
 *     MapClientNeuterToClientPfn @ 0x1401BCEA4 (MapClientNeuterToClientPfn.c)
 *     ?IsChildWindowDpiIsolationEnabled@@YA_NPEAUtagWND@@0@Z @ 0x1401C7E1C (-IsChildWindowDpiIsolationEnabled@@YA_NPEAUtagWND@@0@Z.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tagWND@@PEAU_HEAD@@@Z @ 0x1401C81D4 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tag.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@PEAU_HEAD@@@Z @ 0x1401C8A6C (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@.c)
 *     IsValidBand @ 0x1401D9520 (IsValidBand.c)
 *     xxxLoadUserApiHook @ 0x1401D9C7C (xxxLoadUserApiHook.c)
 *     zzzAttachThreadInput @ 0x1401E910C (zzzAttachThreadInput.c)
 *     RtlInitUnicodeStringOrId @ 0x1401F16B4 (RtlInitUnicodeStringOrId.c)
 *     CalcWindowFullScreen @ 0x1401F3F0C (CalcWindowFullScreen.c)
 *     ?TraceChildWindowDpiTelemetry@@YAXPEAUtagWND@@0W4_CHILD_WINDOW_DPI_TELEMETRY@@@Z @ 0x1401FB028 (-TraceChildWindowDpiTelemetry@@YAXPEAUtagWND@@0W4_CHILD_WINDOW_DPI_TELEMETRY@@@Z.c)
 *     ?SetMinimize@@YAXPEAUtagWND@@W4MinimizeCommand@@@Z @ 0x14020AB98 (-SetMinimize@@YAXPEAUtagWND@@W4MinimizeCommand@@@Z.c)
 *     ?ChangeRole@CoreWindowProp@@KAJPEAUtagWND@@W4COREWINDOWROLE@@_N@Z @ 0x140217330 (-ChangeRole@CoreWindowProp@@KAJPEAUtagWND@@W4COREWINDOWROLE@@_N@Z.c)
 *     CheckFullScreen @ 0x140236038 (CheckFullScreen.c)
 *     GetTopMostInsertAfter @ 0x140236DE0 (GetTopMostInsertAfter.c)
 *     RegisterDefaultClass @ 0x140240D24 (RegisterDefaultClass.c)
 *     RegisterIconTitleClass @ 0x140240F54 (RegisterIconTitleClass.c)
 *     ValidateOwnerDepth @ 0x140253F28 (ValidateOwnerDepth.c)
 *     ?xxxForceUpdateProcessDpiAwarenessContext@@YAXPEAUtagWND@@K@Z @ 0x1402599A0 (-xxxForceUpdateProcessDpiAwarenessContext@@YAXPEAUtagWND@@K@Z.c)
 *     GETCLIENTWNDINFO @ 0x14026E78C (GETCLIENTWNDINFO.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline @ 0x140281C38 (Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline.c)
 *     ?UserModeSupportsPartitionedExtraBytes@NonClient@Scrollbar@@YA_NXZ @ 0x1402AC9A8 (-UserModeSupportsPartitionedExtraBytes@NonClient@Scrollbar@@YA_NXZ.c)
 *     ?UserModeSupportsUserModeScrollBars@NonClient@Scrollbar@@YA_NXZ @ 0x1402AC9D0 (-UserModeSupportsUserModeScrollBars@NonClient@Scrollbar@@YA_NXZ.c)
 *     HasMessageRootWindow @ 0x1402ACAB4 (HasMessageRootWindow.c)
 *     ?IsValidBandForProcess@@YA_NPEBUtagPROCESSINFO@@W4ZBID@@PEAUtagWND@@@Z @ 0x1402B5D08 (-IsValidBandForProcess@@YA_NPEBUtagPROCESSINFO@@W4ZBID@@PEAUtagWND@@@Z.c)
 *     Feature_Servicing_DefaultIMEFreeWindow__private_IsEnabledDeviceUsageNoInline @ 0x1402B6158 (Feature_Servicing_DefaultIMEFreeWindow__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_UsageMBCSCodePageOnAnsiWindow__private_IsEnabledDeviceUsageNoInline @ 0x1402B61AC (Feature_UsageMBCSCodePageOnAnsiWindow__private_IsEnabledDeviceUsageNoInline.c)
 *     LinkWindow @ 0x1402B6200 (LinkWindow.c)
 *     ?TraceLoggingCreateWindowFailed@@YAXI_K@Z @ 0x1402B7C50 (-TraceLoggingCreateWindowFailed@@YAXI_K@Z.c)
 *     xxxGetSystemMenu @ 0x1402CA414 (xxxGetSystemMenu.c)
 *     ?GetClientExtraBytesTotalSize@@YAHPEBUtagWND@@@Z @ 0x1402F2B34 (-GetClientExtraBytesTotalSize@@YAHPEBUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall xxxCreateWindowEx(
        int a1,
        wchar_t *a2,
        __int64 a3,
        __int128 *a4,
        unsigned int a5,
        LONG a6,
        int a7,
        int a8,
        int a9,
        struct tagWND *a10,
        __int64 a11,
        void *a12,
        __int64 a13,
        unsigned int a14,
        unsigned __int16 a15,
        char a16,
        __int64 a17)
{
  unsigned int v18; // edi
  struct tagWND *v19; // r13
  __int64 v20; // rdx
  __int64 v21; // rcx
  struct tagTHREADINFO *v22; // r12
  int v23; // r14d
  __int64 v24; // rdx
  int v25; // eax
  __int64 v26; // rbx
  char v27; // al
  __int64 v28; // rcx
  int v29; // r14d
  __int64 v30; // rax
  int v31; // ecx
  int v32; // ecx
  __int64 v33; // rdx
  __int64 v35; // rcx
  char v36; // al
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v40; // rdx
  int v41; // eax
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 UserSessionState; // rax
  __int64 v46; // r10
  unsigned __int16 v47; // r9
  _QWORD *ClassPtr; // rax
  __int64 v49; // r8
  int v50; // r10d
  unsigned int v51; // r10d
  __int64 v52; // rax
  __int64 v53; // r14
  tagObjLock *v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  struct tagWND *v57; // rbx
  struct tagTHREADINFO *v58; // rax
  __int64 v59; // rax
  int v60; // ebx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rdx
  int v65; // ecx
  wchar_t *v66; // rcx
  __int64 v67; // rdx
  __int16 v68; // bx
  __int64 *v69; // rax
  __int64 v70; // rcx
  __int64 v71; // r8
  int v72; // eax
  LONG v73; // edx
  int v74; // r8d
  int v75; // r9d
  int v76; // r11d
  struct _HEAD *v77; // rax
  LONG v78; // eax
  LONG v79; // ecx
  int v80; // edx
  int v81; // eax
  __int64 v82; // rdx
  struct tagMONITOR *v83; // rbx
  __int16 v84; // di
  _DWORD *v85; // rax
  __int64 MessageWindow; // rax
  const struct tagWND *ThreadDesktopWindow; // rdx
  int v88; // r9d
  int v89; // ecx
  unsigned __int16 v90; // r8
  __int64 v91; // rcx
  char v92; // r12
  __int64 v93; // rax
  int v94; // r13d
  __int64 v95; // rdx
  __int64 v96; // rcx
  int v97; // eax
  unsigned int ClientExtraBytesTotalSize; // eax
  __int64 v99; // rdi
  Scrollbar::NonClient *v100; // rcx
  Scrollbar::NonClient *v101; // rcx
  bool v102; // al
  int v103; // edx
  bool v104; // zf
  __int64 v105; // rax
  __int128 **v106; // rdx
  __int128 *v107; // rcx
  int v108; // ebx
  __int64 v109; // rcx
  __int64 v110; // rdx
  __int64 v111; // rdx
  __int64 v112; // rcx
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 v117; // rdx
  __int64 v118; // rcx
  __int64 v119; // rdx
  __int64 v120; // rcx
  __int64 v121; // rdx
  __int64 v122; // rcx
  __int64 v123; // rdx
  __int64 v124; // rcx
  __int64 v125; // rdx
  __int64 v126; // rcx
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int16 v129; // bx
  int v130; // ebx
  char v131; // di
  ULONG_PTR v132; // r12
  __int64 v133; // rdx
  int v134; // eax
  __int64 v135; // rdx
  __int64 v136; // rcx
  __int64 v137; // rcx
  char v138; // cl
  char v139; // di
  int v140; // eax
  int v141; // r9d
  int v142; // r10d
  int v143; // edx
  struct tagMONITOR *v144; // rax
  wchar_t *v145; // rbx
  int v146; // edx
  wchar_t v147; // ax
  int v148; // eax
  __int64 MonitorRect; // rax
  __int64 v150; // rax
  int v151; // edx
  int v152; // ecx
  __int64 v153; // rcx
  int v154; // eax
  __int64 v155; // rcx
  __int64 v156; // r8
  ULONG_PTR v157; // rcx
  __int64 v158; // rax
  __int64 v159; // rcx
  struct _HEAD *v160; // rcx
  struct _HEAD *v161; // rcx
  char v162; // bl
  __int64 NonChildAncestor; // rdi
  __int64 v164; // rdx
  __int64 v165; // rcx
  __int64 v166; // rax
  __int64 v167; // rdx
  __int64 v168; // rax
  __int64 v169; // rcx
  unsigned int v170; // eax
  int v171; // edx
  __int64 KernelEvent; // rax
  __int64 v173; // rdx
  __int64 v174; // rbx
  unsigned int v175; // eax
  NTSTATUS v176; // eax
  ULONG v177; // eax
  __int64 v178; // rdx
  __int64 v179; // rcx
  struct tagWND *v180; // rax
  __int64 v181; // rax
  struct tagWND *v182; // r9
  __int64 v183; // rcx
  int v184; // eax
  int v185; // eax
  __int64 v186; // rdx
  __int64 v187; // rax
  struct tagMONITOR *v188; // rbx
  __int64 v189; // rdx
  __int64 v190; // rdx
  __int64 v191; // rcx
  __int64 v192; // rax
  __int64 v193; // rdx
  __int64 v194; // rcx
  __int64 v195; // rax
  __int64 v196; // rax
  __int64 StyleWindow; // rbx
  __int64 v198; // rdx
  __int64 v199; // rcx
  __int64 v200; // rax
  __int64 v201; // rdx
  __int64 v202; // rcx
  __int64 v203; // rax
  __int64 v204; // rax
  int v205; // ebx
  ULONG_PTR v206; // rcx
  __int64 v207; // rdx
  __int64 v208; // rdx
  unsigned __int128 v209; // rax
  unsigned int v210; // ecx
  __int64 v211; // rcx
  __int64 SystemMenu; // rax
  __int64 v213; // rdx
  struct tagTHREADINFO ***v214; // rbx
  struct tagWND *DefaultImeWindow; // rax
  __int64 v216; // rdx
  ULONG_PTR v217; // rbx
  int v218; // ecx
  __int64 v219; // rdx
  __int64 v220; // rdx
  __int64 v221; // rax
  unsigned __int64 CompositeAppFrameWindowOrSelf; // rbx
  __int64 v223; // rax
  __int64 v224; // rdx
  int v225; // ebx
  __int64 v226; // rcx
  int v227; // eax
  struct tagWND *v228; // rax
  __int64 TopMostInsertAfter; // rax
  __int64 v230; // r9
  int v231; // edx
  int v232; // r8d
  void *v233; // rax
  __int64 v234; // rdx
  void *v235; // rax
  __int64 v236; // rdx
  __int64 v237; // rcx
  unsigned int v238; // ebx
  char v239; // cl
  __int64 v240; // rdx
  __int64 v241; // rcx
  ULONG_PTR v242; // rbx
  __int64 v243; // rdx
  __int64 v244; // rdx
  __int64 v245; // rcx
  __int64 v246; // rax
  __int64 v247; // rdx
  __int64 v248; // rcx
  unsigned int v249; // ecx
  __int64 v250; // rax
  __int64 v251; // rdx
  __int64 v252; // rbx
  __int64 v253; // rdx
  unsigned int v254; // [rsp+50h] [rbp-408h]
  int v255; // [rsp+54h] [rbp-404h]
  int v256; // [rsp+54h] [rbp-404h]
  char v257; // [rsp+58h] [rbp-400h]
  __int16 Atom; // [rsp+5Ch] [rbp-3FCh]
  int v259; // [rsp+60h] [rbp-3F8h]
  int v260; // [rsp+64h] [rbp-3F4h]
  _QWORD v261[2]; // [rsp+70h] [rbp-3E8h] BYREF
  int v262; // [rsp+80h] [rbp-3D8h]
  int v263; // [rsp+84h] [rbp-3D4h]
  int v264; // [rsp+88h] [rbp-3D0h]
  int v265; // [rsp+90h] [rbp-3C8h]
  int v266; // [rsp+98h] [rbp-3C0h]
  wchar_t *Str1; // [rsp+A0h] [rbp-3B8h]
  int v268; // [rsp+A8h] [rbp-3B0h]
  int v269; // [rsp+ACh] [rbp-3ACh]
  int WindowCloakStateComponentUIAware; // [rsp+B0h] [rbp-3A8h]
  int v271; // [rsp+B4h] [rbp-3A4h]
  __int64 *v272[2]; // [rsp+B8h] [rbp-3A0h] BYREF
  struct _HEAD *v273; // [rsp+C8h] [rbp-390h]
  int v274; // [rsp+D0h] [rbp-388h]
  int v275; // [rsp+D4h] [rbp-384h]
  int v276; // [rsp+D8h] [rbp-380h]
  int v277; // [rsp+DCh] [rbp-37Ch]
  __int64 v278; // [rsp+E0h] [rbp-378h]
  ULONG_PTR v279[2]; // [rsp+E8h] [rbp-370h] BYREF
  ULONG_PTR v280[2]; // [rsp+F8h] [rbp-360h] BYREF
  int v281; // [rsp+108h] [rbp-350h]
  int v282; // [rsp+110h] [rbp-348h]
  __int128 *v283; // [rsp+118h] [rbp-340h]
  void *v284[2]; // [rsp+120h] [rbp-338h] BYREF
  ULONG_PTR v285; // [rsp+130h] [rbp-328h]
  struct tagWND *v286; // [rsp+138h] [rbp-320h]
  __int128 *v287; // [rsp+140h] [rbp-318h]
  __int128 v288; // [rsp+148h] [rbp-310h] BYREF
  BOOL v289; // [rsp+158h] [rbp-300h]
  int v290; // [rsp+178h] [rbp-2E0h]
  __int128 v291; // [rsp+180h] [rbp-2D8h] BYREF
  __int64 InheritedMonitor; // [rsp+190h] [rbp-2C8h]
  _BYTE v293[16]; // [rsp+198h] [rbp-2C0h] BYREF
  __int64 v294; // [rsp+1A8h] [rbp-2B0h] BYREF
  __int64 v295; // [rsp+1B0h] [rbp-2A8h]
  __int128 v296; // [rsp+1B8h] [rbp-2A0h]
  ULONG_PTR v297[2]; // [rsp+1C8h] [rbp-290h] BYREF
  wchar_t *v298; // [rsp+1D8h] [rbp-280h]
  _QWORD v299[2]; // [rsp+1E0h] [rbp-278h] BYREF
  struct _HEAD *v300; // [rsp+1F0h] [rbp-268h]
  __int64 v301; // [rsp+1F8h] [rbp-260h]
  int v302; // [rsp+200h] [rbp-258h]
  int v303; // [rsp+204h] [rbp-254h]
  int v304; // [rsp+208h] [rbp-250h]
  int v305; // [rsp+20Ch] [rbp-24Ch]
  unsigned int v306; // [rsp+210h] [rbp-248h]
  __int64 v307; // [rsp+218h] [rbp-240h]
  wchar_t *v308; // [rsp+220h] [rbp-238h]
  unsigned int v309; // [rsp+228h] [rbp-230h]
  __int128 v310; // [rsp+230h] [rbp-228h]
  __int128 v311; // [rsp+240h] [rbp-218h] BYREF
  int v312; // [rsp+254h] [rbp-204h]
  __int128 v313; // [rsp+268h] [rbp-1F0h] BYREF
  __int64 v314; // [rsp+278h] [rbp-1E0h]
  __int128 v315; // [rsp+280h] [rbp-1D8h] BYREF
  _QWORD v316[2]; // [rsp+290h] [rbp-1C8h] BYREF
  ULONG_PTR v317[2]; // [rsp+2A0h] [rbp-1B8h] BYREF
  _QWORD v318[5]; // [rsp+2B0h] [rbp-1A8h] BYREF
  _BYTE v319[24]; // [rsp+2D8h] [rbp-180h] BYREF
  __int128 v320; // [rsp+2F0h] [rbp-168h] BYREF
  __int128 v321; // [rsp+300h] [rbp-158h] BYREF
  __int128 v322; // [rsp+310h] [rbp-148h] BYREF
  _BYTE v323[16]; // [rsp+320h] [rbp-138h] BYREF
  ULONG_PTR v324[2]; // [rsp+330h] [rbp-128h] BYREF
  __int128 v325; // [rsp+340h] [rbp-118h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+358h] [rbp-100h] BYREF
  char v327[16]; // [rsp+368h] [rbp-F0h] BYREF
  char v328[16]; // [rsp+378h] [rbp-E0h] BYREF
  char v329[16]; // [rsp+388h] [rbp-D0h] BYREF
  char v330[16]; // [rsp+398h] [rbp-C0h] BYREF
  char v331[16]; // [rsp+3A8h] [rbp-B0h] BYREF
  _BYTE v332[40]; // [rsp+3B8h] [rbp-A0h] BYREF
  __int128 v333; // [rsp+3E0h] [rbp-78h] BYREF
  __int128 v334; // [rsp+3F0h] [rbp-68h] BYREF
  struct tagRECT v335; // [rsp+400h] [rbp-58h] BYREF

  v283 = a4;
  v298 = a2;
  v266 = a1;
  v18 = a14;
  v290 = a1;
  v254 = a1;
  v265 = a1;
  Str1 = a2;
  v287 = a4;
  v19 = a10;
  v278 = (__int64)a10;
  v284[0] = a12;
  *(_QWORD *)&v291 = a13;
  v275 = 0;
  v281 = 0;
  v274 = 0;
  v269 = 0;
  SmartObjStackRef<tagCLS>::SmartObjStackRef<tagCLS>(v261, (__int64)a2);
  v334 = 0LL;
  v333 = 0LL;
  v271 = 5;
  v282 = 5;
  v285 = 0LL;
  memset_0(v299, 0, 0x70uLL);
  v22 = PtiCurrent(v21, v20);
  v279[0] = (ULONG_PTR)v22;
  Win32HMOptionalThreadLockAlways<tagMENU>::Win32HMOptionalThreadLockAlways<tagMENU>(v280);
  v313 = 0LL;
  v314 = 0LL;
  v276 = 0;
  v277 = *(_DWORD *)(*((_QWORD *)v22 + 58) + 12LL) & 0x2000;
  WindowCloakStateComponentUIAware = 0;
  v23 = 0;
  v255 = 0;
  v288 = 0LL;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v272, a11);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v293);
  if ( (*(_DWORD *)(*((_QWORD *)v22 + 58) + 12LL) & 0x10000000) == 0 && !(unsigned int)RegisterIconTitleClass() )
    goto LABEL_30;
  if ( a1 < 0 )
  {
    v254 = a1 & 0x7FFFFFFF;
    v265 = a1 & 0x7FFFFFFF;
  }
  v25 = 800;
  if ( a1 >= 0 )
    LOWORD(v25) = 0;
  v268 = v25;
  v26 = *((_QWORD *)v22 + 62);
  *(_QWORD *)&v296 = v26;
  InheritedMonitor = v26;
  if ( a10 )
  {
    if ( *((_QWORD *)a10 + 3) != v26 )
      goto LABEL_30;
  }
  v27 = a16;
  if ( (a16 & 1) != 0 )
  {
    if ( (unsigned int)IsDesktopApp(*((_QWORD *)v22 + 58), v24) )
    {
LABEL_42:
      v32 = 5;
      goto LABEL_31;
    }
    v23 = 1;
    v255 = 1;
    v27 = a16;
  }
  if ( (v27 & 2) != 0 && !(unsigned int)IsImmersiveBroker(*((_QWORD *)v22 + 58)) )
    goto LABEL_42;
  if ( a14 )
  {
    if ( !(unsigned int)IsValidBand(a14) )
      goto LABEL_30;
    if ( a14 == 15 )
      goto LABEL_30;
    v28 = *(_QWORD *)(*((_QWORD *)v22 + 58) + 808LL);
    if ( (v28 & 0x30) == 0x10 && (v28 & 0x200) == 0 && a14 == 1 && !v23 && !(unsigned int)HasMessageRootWindow(a10) )
      goto LABEL_30;
  }
  v29 = HIWORD(a5) & 0xC000;
  v263 = v29;
  v289 = (_WORD)v29 == 0x4000;
  if ( (_WORD)v29 != 0x4000 )
  {
    if ( (unsigned int)ShouldSetNoOwner(*((_QWORD *)v22 + 58), a10) )
      v19 = 0LL;
    v278 = (__int64)v19;
  }
  if ( !v19 || (unsigned int)IsDesktopWindow(v19) )
  {
    if ( a14 )
      goto LABEL_41;
    if ( (unsigned int)IsImmersiveAppIORestricted(*((_QWORD *)v22 + 58)) )
    {
      v255 = 1;
      v18 = 15;
      goto LABEL_41;
    }
    v36 = *(_BYTE *)(v35 + 808);
    v31 = 2;
    if ( (v36 & 2) == 0 || (v254 & 8) == 0 )
    {
      v18 = 1;
      goto LABEL_41;
    }
LABEL_39:
    v18 = v31;
    goto LABEL_41;
  }
  v30 = *((_QWORD *)v19 + 5);
  v255 = *(_BYTE *)(v30 + 232) & 0x40;
  v31 = *(_DWORD *)(v30 + 236);
  if ( !a14 )
    goto LABEL_39;
  if ( a14 != v31 )
  {
LABEL_30:
    v32 = 87;
    goto LABEL_31;
  }
LABEL_41:
  if ( !(unsigned __int8)IsValidBandForProcess(*((_QWORD *)v22 + 58), v18, v19) )
    goto LABEL_42;
  v38 = v254;
  if ( (v254 & 0x400000) != 0 )
    goto LABEL_55;
  if ( v19 )
  {
    if ( (_WORD)v29 != 0x4000 || (*(_BYTE *)(*((_QWORD *)v19 + 5) + 26LL) & 0x50) != 0x40 )
      goto LABEL_55;
    v38 = v254 | 0x400000;
  }
  else
  {
    if ( ((unsigned __int64)Str1 & 0xFFFFFFFFFFFF0000uLL) == 0 )
    {
      v37 = 32770LL;
      if ( (_WORD)Str1 == 0x8002 )
        goto LABEL_55;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v37);
    v40 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
      v40 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
    v41 = *(_DWORD *)(v40 + 816);
    v38 = v254;
    if ( (v41 & 1) == 0 )
      goto LABEL_55;
    LODWORD(v38) = v254 | 0x400000;
  }
  v265 = v38;
  v254 = v38;
LABEL_55:
  v42 = 35651584LL;
  if ( (v38 & 0x2200000) == 0x2200000 )
    goto LABEL_30;
  if ( *((_QWORD *)v22 + 79) && !(unsigned int)CheckGrantedAccess(*((unsigned int *)v22 + 234), 2LL) )
    goto LABEL_32;
  if ( (_WORD)v29 != 0x4000 )
    goto LABEL_62;
  if ( !v19 )
  {
    v32 = 1406;
LABEL_31:
    UserSetLastError(v32);
LABEL_32:
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v293);
LABEL_33:
    SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v272);
    Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(v280, v33);
    SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>(v261);
    return 0LL;
  }
  if ( !(unsigned int)ValidateParentDepth(0LL, v19) )
    goto LABEL_30;
  while ( 1 )
  {
LABEL_62:
    if ( (a3 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v319);
      UserSessionState = W32GetUserSessionState(v44, v43);
      if ( (int)RtlStringCchCopyW(
                  (unsigned __int16 *)(UserSessionState + 41716),
                  0x100uLL,
                  *(const unsigned __int16 **)(a3 + 8)) < 0 )
      {
        Atom = 0;
        v277 = 1;
      }
      else
      {
        Atom = UserFindAtom(v46);
      }
      AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v319);
    }
    else
    {
      v47 = a3;
      Atom = a3;
    }
    if ( v47 )
    {
      ClassPtr = (_QWORD *)GetClassPtr((_QWORD *)v47, *((_QWORD **)v22 + 58), (__int64)v284[0]);
      if ( ClassPtr )
        break;
    }
LABEL_107:
    if ( v277
      || (*(_DWORD *)(*((_QWORD *)PtiCurrent(v42, v38) + 58) + 12LL) & 0x2000) != 0
      || (((unsigned __int64)Str1 & 0xFFFFFFFFFFFF0000uLL) == 0
        ? (v66 = Str1)
        : (v66 = (wchar_t *)*((_QWORD *)Str1 + 1)),
          !(unsigned int)RegisterDefaultClass(v66)) )
    {
      v32 = 1407;
      goto LABEL_31;
    }
    v277 = 1;
    v26 = v296;
  }
  SmartObjStackRefBase<tagCLS>::operator=(v261, *ClassPtr);
  if ( (*(_WORD *)(*(_QWORD *)(*(_QWORD *)v261[0] + 8LL) + 6LL) & 1) != 0 && (unsigned int)PsGetWin32KFilterSet() == 5 )
    goto LABEL_32;
  if ( (unsigned int)NeedsWindowEdge(a5, v254, a15 >= 0x400u) )
    v51 = v50 | 0x100;
  else
    v51 = v50 & 0xFFFFFEFF;
  v265 = v51;
  v254 = v51;
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)v22 + 132, 0, 0) & 1) != 0 )
  {
    v262 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 866LL);
  }
  LOBYTE(v49) = 1;
  v52 = HMAllocObject(v22, v26, v49, 416LL);
  v53 = v52;
  v286 = (struct tagWND *)v52;
  if ( !v52 )
  {
    if ( (unsigned int)UserGetLastError() == 8 )
      TraceLoggingCreateWindowFailed(
        1u,
        (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64);
    goto LABEL_32;
  }
  tagObjLock::LockInitialize((tagObjLock *)(v52 + 56));
  *(_DWORD *)(*(_QWORD *)(v53 + 40) + 328LL) = (unsigned int)PsGetThreadId(*(PETHREAD *)v22);
  *(_DWORD *)(*(_QWORD *)(v53 + 40) + 332LL) = *(_DWORD *)(*((_QWORD *)v22 + 58) + 56LL);
  *(_QWORD *)(v53 + 328) = v53 + 320;
  *(_QWORD *)(v53 + 320) = v53 + 320;
  *(_QWORD *)(v53 + 344) = v53 + 336;
  *(_QWORD *)(v53 + 336) = v53 + 336;
  *(_QWORD *)(v53 + 360) = v53 + 352;
  *(_QWORD *)(v53 + 352) = v53 + 352;
  *(_QWORD *)(v53 + 408) = v53 + 400;
  *(_QWORD *)(v53 + 400) = v53 + 400;
  *(_DWORD *)(v53 + 396) = 5;
  *(_DWORD *)(v53 + 392) = 1;
  v54 = (tagObjLock *)Win32AllocPoolZInit(32LL, 1752200021LL);
  *(_QWORD *)(v53 + 144) = v54;
  if ( !v54 )
  {
    tagObjLock::LockUnInitializeThreadCreator((tagObjLock *)(v53 + 56));
    HMFreeObject(v53);
    goto LABEL_32;
  }
  tagObjLock::LockInitialize(v54);
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v53 + 16) + 464LL) + 808LL) & 0x1000000) != 0 )
    *(_DWORD *)(v53 + 384) |= 1u;
  *(_QWORD *)(*(_QWORD *)(v53 + 40) + 296LL) = 0LL;
  *(_QWORD *)(v53 + 280) = 0LL;
  *(_DWORD *)(v53 + 180) = -1;
  *(_QWORD *)(*(_QWORD *)(v53 + 40) + 168LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)(v53 + 40) + 292LL) = W32GetCurrentThreadDpiHostingBehavior();
  if ( (_WORD)v263 != 0x4000 || !v19 || v19 == (struct tagWND *)GetThreadDesktopWindow(0LL) )
    goto LABEL_95;
  v57 = 0LL;
  v58 = PtiCurrent(v56, v55);
  if ( v58 )
  {
    v59 = *((_QWORD *)v58 + 62);
    if ( v59 )
      v57 = *(struct tagWND **)(v59 + 112);
  }
  if ( v19 == v57
    || *((_QWORD *)v22 + 58) != *(_QWORD *)(*((_QWORD *)v19 + 2) + 464LL)
    || IsChildWindowDpiIsolationEnabled(0LL, v19) )
  {
LABEL_95:
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
    *(_DWORD *)(*(_QWORD *)(v53 + 40) + 288LL) = CurrentThreadDpiAwarenessContext;
    if ( (*(_DWORD *)(*(_QWORD *)(v53 + 40) + 288LL) & 0x4000000F) == 0 )
    {
      v62 = PsGetCurrentProcessWin32Process(CurrentThreadDpiAwarenessContext);
      v63 = v62;
      if ( v62 )
        v63 = -(__int64)(*(_QWORD *)v62 != 0LL) & v62;
      if ( (*(_DWORD *)(v63 + 12) & 0x20000000) != 0 )
        *(_DWORD *)(*(_QWORD *)(v53 + 40) + 288LL) |= 0x40000000u;
    }
  }
  else
  {
    *(_DWORD *)(*(_QWORD *)(v53 + 40) + 288LL) = *(_DWORD *)(*((_QWORD *)v19 + 5) + 288LL);
    v60 = *(_DWORD *)(*((_QWORD *)v19 + 5) + 288LL);
    if ( (((unsigned __int8)v60 ^ (unsigned __int8)W32GetCurrentThreadDpiAwarenessContext()) & 0xF) != 0 )
      TraceChildWindowDpiTelemetry(v53, v19, 0LL);
  }
  v64 = *(_QWORD *)(v53 + 40);
  v65 = *(_DWORD *)(v64 + 288);
  if ( (v65 & 0xF) == 2 && (v65 & 0xF0) == 0x20 )
    *(_DWORD *)(v53 + 380) |= 0x180000u;
  if ( (*(_BYTE *)(v64 + 288) & 0xF) == 3 )
    *(_DWORD *)(v53 + 380) |= 0x80000u;
  tagWND::SharedMixedObjectPointerFieldpcls<tagCLS>::operator=(v53 + 136, *(_QWORD *)v261[0]);
  *(_DWORD *)(*(_QWORD *)(v53 + 40) + 28LL) = a5 & 0xEFFFFFFF;
  *(_DWORD *)(*(_QWORD *)(v53 + 40) + 24LL) = v254 & 0xFDF7FFFF;
  *(_DWORD *)(*(_QWORD *)(v53 + 40) + 200LL) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v261[0] + 8LL) + 80LL);
  *(_DWORD *)(*(_QWORD *)(v53 + 40) + 248LL) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v261[0] + 8LL) + 84LL);
  if ( !(unsigned int)ReferenceClass(*(_QWORD *)v261[0], v53) )
  {
LABEL_106:
    tagObjLock::LockUnInitializeThreadCreator(*(tagObjLock **)(v53 + 144));
    Win32FreePool(*(void **)(v53 + 144));
    tagObjLock::LockUnInitializeThreadCreator((tagObjLock *)(v53 + 56));
    HMFreeObject(v53);
    goto LABEL_107;
  }
  SmartObjStackRefBase<tagCLS>::operator=(v261, *(_QWORD *)(v53 + 136));
  if ( !(unsigned int)ClassLock(*(_QWORD *)v261[0], &v313) )
  {
    DereferenceClass(*((_QWORD *)v22 + 58), v53);
    goto LABEL_106;
  }
  *(_QWORD *)(*(_QWORD *)(v53 + 40) + 224LL) = a17;
  v68 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)v261[0] + 8LL) + 2LL);
  if ( v68 == *(_WORD *)(*(_QWORD *)(W32GetUserSessionState(*(_QWORD *)v261[0], v67) + 19872) + 868LL) )
  {
    *(_QWORD *)(*(_QWORD *)(v53 + 40) + 208LL) = 0LL;
  }
  else
  {
    v69 = (__int64 *)*((_QWORD *)v22 + 104);
    v70 = 0LL;
    if ( v69 )
      v70 = *v69;
    *(_QWORD *)(*(_QWORD *)(v53 + 40) + 208LL) = v70;
  }
  *(_DWORD *)(*(_QWORD *)(v53 + 40) + 236LL) = v18;
  v71 = *(_QWORD *)(v53 + 40);
  if ( *(_DWORD *)(v71 + 236) == 1 )
    v72 = 0;
  else
    v72 = IsTopLevelParent(v19);
  if ( v72 )
    *(_DWORD *)(v71 + 24) |= 8u;
  if ( v255 )
    SetOrClrWF(1, (struct tagWND *)v53, 0xD840u, 0);
  ++*((_DWORD *)v22 + 236);
  memset_0(v299, 0, 0x70uLL);
  v309 = v254;
  v299[1] = v284[0];
  if ( ((unsigned __int64)Str1 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( v266 >= 0 )
    {
      v308 = (wchar_t *)*((_QWORD *)Str1 + 1);
      v311 = *(_OWORD *)v298;
    }
    else
    {
      v308 = *(wchar_t **)(*(_QWORD *)v261[0] + 104LL);
      if ( ((unsigned __int64)v308 & 0xFFFFFFFFFFFF0000uLL) != 0 )
        RtlInitLargeAnsiString(&v311);
    }
  }
  else
  {
    v308 = Str1;
  }
  if ( v287 )
  {
    v307 = *((_QWORD *)v287 + 1);
    v310 = *v283;
  }
  v306 = a5;
  v73 = a6;
  v259 = a6;
  v305 = a6;
  v74 = a7;
  v260 = a7;
  v304 = a7;
  v75 = a8;
  v256 = a8;
  v303 = a8;
  v76 = a9;
  v262 = a9;
  v302 = a9;
  if ( v19 )
    v301 = *(_QWORD *)v19;
  else
    v301 = 0LL;
  if ( (_WORD)v263 == 0x4000 )
  {
    v77 = v273;
    if ( !v273 )
      v77 = (struct _HEAD *)*v272[0];
    v300 = v77;
    *(_DWORD *)(*(_QWORD *)(v53 + 40) + 24LL) |= *(_DWORD *)(*((_QWORD *)v19 + 5) + 24LL) & 0xC4000000;
  }
  else if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v272) )
  {
    v300 = 0LL;
  }
  else
  {
    v300 = **(struct _HEAD ***)v272[0];
  }
  v299[0] = v291;
  *(_QWORD *)&v335.left = 0LL;
  if ( v73 == 0x80000000 || v73 == 0x8000 )
  {
    v78 = 0;
    v335.left = 0;
  }
  else
  {
    v78 = v73;
    v335.left = v73;
  }
  if ( v74 == 0x80000000 || (v79 = v74, v74 == 0x8000) )
    v79 = 0;
  v335.top = v79;
  if ( v75 == 0x80000000 || (v80 = v75, v75 == 0x8000) )
    v80 = 0;
  v335.right = v80 + v78;
  if ( v76 == 0x80000000 || (v81 = v76, v76 == 0x8000) )
    v81 = 0;
  v335.bottom = v79 + v81;
  InheritedMonitor = GetInheritedMonitor((struct tagWND *)v53);
  v283 = (__int128 *)InheritedMonitor;
  v83 = (struct tagMONITOR *)InheritedMonitor;
  if ( !InheritedMonitor && v19 )
    v83 = (struct tagMONITOR *)ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)v19 + 5) + 256LL), v82);
  if ( !v83 )
    v83 = (struct tagMONITOR *)MonitorFromRect(&v335, 2LL, 0LL);
  UpdateWindowMonitorAndDpiInfoHelper((struct tagWND *)v53, v83);
  *(_WORD *)(*(_QWORD *)(v53 + 40) + 286LL) = 0;
  *(_QWORD *)(v53 + 296) = 0LL;
  v84 = v263;
  if ( (_WORD)v263 != 0x4000 || IsDpiBoundaryBetweenWindows((const struct tagWND *)v53, v19) )
    UpdateTopLevelWindowDPITransform(v53, v83);
  Str1 = 0LL;
  if ( v84 == 0x4000 )
  {
    if ( v19 )
    {
      *(_WORD *)(*(_QWORD *)(v53 + 40) + 286LL) = *(_WORD *)(*((_QWORD *)v19 + 5) + 286LL);
      v85 = (_DWORD *)*((_QWORD *)v19 + 37);
      if ( v85 )
      {
        *(_QWORD *)(v53 + 296) = v85;
        ++*v85;
      }
    }
  }
  if ( *(_QWORD *)(v53 + 24) )
  {
    MessageWindow = GetMessageWindow(v53);
    v320 = *(_OWORD *)LockPointer(&v327, v53 + 104, MessageWindow);
    HMAssignmentLock(&v320, 0LL);
  }
  if ( (unsigned int)IsWindowDesktopComposed(v53) )
  {
    ThreadDesktopWindow = v19;
    if ( v84 != 0x4000 && (!v19 || v19 != *(struct tagWND **)(*((_QWORD *)v19 + 3) + 112LL)) )
      ThreadDesktopWindow = (const struct tagWND *)GetThreadDesktopWindow(0LL);
    DwmWindowCreate((struct tagWND *)v53, ThreadDesktopWindow, &v335);
  }
  *(void **)(*(_QWORD *)(v53 + 40) + 32LL) = v284[0];
  *(_QWORD *)(*(_QWORD *)(v53 + 40) + 120LL) = MapClientNeuterToClientPfn(
                                                 *(_QWORD *)v261[0],
                                                 0LL,
                                                 (unsigned __int16)v268);
  v88 = 1;
  if ( (*(_WORD *)(*(_QWORD *)(*(_QWORD *)v261[0] + 8LL) + 6LL) & 1) != 0 )
  {
    SetOrClrWF(1, (struct tagWND *)v53, 0x204u, 1);
    v89 = 1;
    v90 = -9724;
    v88 = 0;
  }
  else
  {
    v89 = 0;
    v90 = 516;
  }
  SetOrClrWF(v89, (struct tagWND *)v53, v90, v88);
  v91 = *(_QWORD *)(v53 + 40);
  if ( (*(_BYTE *)(v91 + 30) & 0x30) != 0 && (*(_BYTE *)(v91 + 234) & 4) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1225LL);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v293);
  Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(v297, (__int64)v22, v53);
  v92 = *(_BYTE *)(*(_QWORD *)(v53 + 40) + 18LL) & 4;
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v261[0] + 8LL) + 84LL) )
  {
    v93 = Win32AllocPoolZInit(*(unsigned int *)(*(_QWORD *)(*(_QWORD *)v261[0] + 8LL) + 84LL), 1937208149LL);
    *(_QWORD *)(v53 + 280) = v93;
    if ( !v93 )
    {
      v94 = 5;
      goto LABEL_185;
    }
  }
  if ( (unsigned int)PsGetWin32KFilterSet() != 5 )
  {
LABEL_189:
    if ( v92 )
      goto LABEL_193;
    if ( (unsigned int)PsGetWin32KFilterSet() == 5 )
    {
      v96 = *(_QWORD *)(v53 + 40);
      v97 = *(_DWORD *)(v96 + 200) + 7;
    }
    else
    {
      if ( !(unsigned int)Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline()
        || !Scrollbar::NonClient::UserModeSupportsUserModeScrollBars(v100) )
      {
        goto LABEL_193;
      }
      v102 = Scrollbar::NonClient::UserModeSupportsPartitionedExtraBytes(v101);
      v96 = *(_QWORD *)(v53 + 40);
      v103 = *(_DWORD *)(v96 + 200);
      v104 = !v102;
      v97 = v103 + 7;
      if ( !v104 )
      {
        *(_DWORD *)(v96 + 336) = (v97 & 0xFFFFFFF8) - v103;
        *(_DWORD *)(*(_QWORD *)(v53 + 40) + 336LL) += 48;
        goto LABEL_193;
      }
    }
    *(_DWORD *)(v96 + 200) = v97 & 0xFFFFFFF8;
    *(_DWORD *)(*(_QWORD *)(v53 + 40) + 200LL) += 48;
    goto LABEL_193;
  }
  if ( !v92 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1264LL);
    goto LABEL_189;
  }
LABEL_193:
  ClientExtraBytesTotalSize = GetClientExtraBytesTotalSize((const struct tagWND *)v53);
  if ( ClientExtraBytesTotalSize )
  {
    v99 = xxxClientAllocWindowClassExtraBytes(ClientExtraBytesTotalSize);
    if ( !v99 )
    {
      v94 = 2;
LABEL_185:
      *(_QWORD *)(*(_QWORD *)(v53 + 40) + 120LL) = 0LL;
      SetOrClrWF(1, (struct tagWND *)v53, 0x204u, 1);
LABEL_462:
      v205 = *(_BYTE *)(*(_QWORD *)(v53 + 40) + 31LL) & 0x10;
      if ( v276 )
        Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(v280, v95);
      SetOrClrWF(1, (struct tagWND *)v53, 0x480u, 1);
      SetOrClrWF(1, (struct tagWND *)v53, 0x380u, 1);
      if ( v205 )
        SetVisible(v53, 0LL);
      v206 = *(_QWORD *)(v53 + 104);
      if ( v206 )
      {
        if ( v205 )
          zzzLockDisplayAreaAndInvalidateDCCache(v206, 16LL, 0LL);
        if ( (*(_BYTE *)(*(_QWORD *)(v53 + 40) + 31LL) & 0xC0) == 0x40 && !IsTopLevelWindow(v53) )
        {
          v207 = *(_QWORD *)(*(_QWORD *)(v53 + 104) + 16LL);
          if ( v279[0] != v207 )
            zzzAttachThreadInput(*(_QWORD *)(v53 + 16), v207, 0LL);
        }
        UnlinkWindow(v53, *(_QWORD *)(v53 + 104));
      }
      ClassUnlock(*(struct tagCLS **)v261[0]);
      xxxFreeWindow((struct tagTHREADINFO *)v279[0], (struct tagWND *)v53);
      if ( v94 )
      {
        v209 = ((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
             * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8);
        v210 = v94;
        goto LABEL_530;
      }
      goto LABEL_531;
    }
    if ( !(unsigned int)IsWindowBeingDestroyed(v53) && (*(_BYTE *)(_HMPheFromObject(v53) + 25) & 1) == 0 )
    {
      v105 = *(_QWORD *)(v53 + 40);
      if ( !*(_QWORD *)(v105 + 296) )
      {
        *(_QWORD *)(v105 + 296) = v99;
        v84 = v263;
        goto LABEL_204;
      }
    }
    UserSetLastError(87);
    *(_QWORD *)(*(_QWORD *)(v53 + 40) + 120LL) = 0LL;
    SetOrClrWF(1, (struct tagWND *)v53, 0x204u, 1);
LABEL_461:
    v94 = 0;
    goto LABEL_462;
  }
LABEL_204:
  if ( (unsigned int)PsGetWin32KFilterSet() != 5 || v92 )
  {
    v108 = v266;
  }
  else
  {
    v106 = (__int128 **)GETCLIENTWNDINFO(v53);
    v107 = *(__int128 **)(*(_QWORD *)(v53 + 40) + 120LL);
    v287 = v107;
    *v106 = v107;
    v108 = v266;
    v109 = *(_QWORD *)(W32GetUserSessionState(v107, v106) + 19872);
    if ( v108 >= 0 )
      v110 = *(_QWORD *)(v109 + 768);
    else
      v110 = *(_QWORD *)(v109 + 576);
    *(_QWORD *)(*(_QWORD *)(v53 + 40) + 120LL) = v110;
  }
  if ( *(_QWORD *)(*(_QWORD *)v261[0] + 80LL)
    && !*(_QWORD *)(*(_QWORD *)v261[0] + 112LL)
    && (unsigned int)PsGetWin32KFilterSet() != 5 )
  {
    xxxCreateClassSmIcon(v261);
  }
  SetOrClrWF(1, (struct tagWND *)v53, v268, 1);
  v112 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)v261[0] + 8LL) + 6LL);
  if ( (v112 & 2) != 0 )
  {
LABEL_228:
    SetOrClrWF(1, (struct tagWND *)v53, 0x208u, 1);
    goto LABEL_229;
  }
  if ( v108 < 0 )
  {
    v114 = *(_QWORD *)(W32GetUserSessionState(v112, v111) + 19872);
    if ( Atom == *(_WORD *)(v114 + 868) )
      goto LABEL_228;
    v116 = *(_QWORD *)(W32GetUserSessionState(v114, v113) + 19872);
    if ( Atom == *(_WORD *)(v116 + 878) )
      goto LABEL_228;
    v118 = *(_QWORD *)(W32GetUserSessionState(v116, v115) + 19872);
    if ( Atom == *(_WORD *)(v118 + 882) )
      goto LABEL_228;
    v120 = *(_QWORD *)(W32GetUserSessionState(v118, v117) + 19872);
    if ( Atom == *(_WORD *)(v120 + 904) )
      goto LABEL_228;
    v122 = *(_QWORD *)(W32GetUserSessionState(v120, v119) + 19872);
    if ( Atom == *(_WORD *)(v122 + 870) )
      goto LABEL_228;
    v124 = *(_QWORD *)(W32GetUserSessionState(v122, v121) + 19872);
    if ( Atom == *(_WORD *)(v124 + 874) )
      goto LABEL_228;
    v126 = *(_QWORD *)(W32GetUserSessionState(v124, v123) + 19872);
    if ( Atom == *(_WORD *)(v126 + 880) )
      goto LABEL_228;
    v128 = *(_QWORD *)(W32GetUserSessionState(v126, v125) + 19872);
    if ( Atom == *(_WORD *)(v128 + 898)
      || Atom == *(_WORD *)(*(_QWORD *)(W32GetUserSessionState(v128, v127) + 19872) + 872LL) )
    {
      goto LABEL_228;
    }
LABEL_229:
    v108 = v266;
  }
  if ( (unsigned int)Feature_UsageMBCSCodePageOnAnsiWindow__private_IsEnabledDeviceUsageNoInline()
    && ((*(_WORD *)(*(_QWORD *)(*(_QWORD *)v261[0] + 8LL) + 6LL) & 2) != 0 || v108 < 0)
    && v84 != 0x4000
    && (*(_QWORD *)&v291 = PsGetProcessPeb(**(_QWORD **)(*(_QWORD *)(v53 + 16) + 464LL)), (_QWORD)v291) )
  {
    v129 = *(_WORD *)(v291 + 844);
    if ( v129 == -535 )
    {
      v268 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1424LL);
    }
    if ( v129 == -10600 )
    {
      v263 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1425LL);
    }
    v130 = a6;
    v131 = v254;
  }
  else
  {
    v131 = v254;
    v130 = a6;
  }
  v132 = v279[0];
  if ( (GetAppCompatFlags(v279[0]) & 0x8000000) != 0 )
  {
    SetOrClrWF(1, (struct tagWND *)v53, 0x408u, 1);
    v254 = v131 & 0x3F;
    v309 &= 0x3Fu;
  }
  SetOrClrWF(1, (struct tagWND *)v53, 0x501u, 1);
  SetOrClrWF(1, (struct tagWND *)v53, 0x502u, 1);
  SetOrClrWF(1, (struct tagWND *)v53, 0x504u, 1);
  v134 = a15;
  if ( a15 <= *(_WORD *)(v132 + 676) )
    v134 = *(_DWORD *)(v132 + 676);
  *(_DWORD *)(v53 + 256) = v134;
  if ( (GetAppCompatFlags2(39168LL, v133) & 0x10000000) != 0 )
    SetOrClrWF(1, (struct tagWND *)v53, 0xA80u, 1);
  if ( IsInsideUserApiHook(v136, v135) )
    xxxLoadUserApiHook();
  if ( (unsigned int)WantImeWindow(v19, (struct tagWND *)v53) )
  {
    if ( (unsigned int)Feature_Servicing_DefaultIMEFreeWindow__private_IsEnabledDeviceUsageNoInline() )
    {
      v137 = *(_QWORD *)(v132 + 824);
      if ( v137 )
      {
        if ( (*(_BYTE *)(_HMPheFromObject(v137) + 25) & 1) != 0
          || (unsigned int)IsWindowBeingDestroyed(*(_QWORD *)(v132 + 824)) )
        {
          v264 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1512LL);
        }
      }
    }
    *(_DWORD *)(v53 + 380) |= 0x10000000u;
    ++*(_DWORD *)(v132 + 952);
  }
  if ( ((*(_BYTE *)(v132 + 720) | *(_BYTE *)(**(_QWORD **)(v132 + 504) + 16LL)) & 0x40) != 0 )
  {
    v294 = (__int64)v299;
    v295 = 0LL;
    if ( (unsigned int)xxxCallHook(3, *(_QWORD *)v53, (__int64)&v294, 5) )
    {
      v94 = 6;
      goto LABEL_462;
    }
    v130 = v305;
    v259 = v305;
    v260 = v304;
    v256 = v303;
    v262 = v302;
    v95 = v295;
    v278 = v295;
  }
  else
  {
    v278 = 0LL;
  }
  v138 = *(_BYTE *)(*(_QWORD *)(v53 + 40) + 31LL) & 0xC0;
  v257 = v138;
  if ( v138 == 64 && !v19 )
    goto LABEL_461;
  if ( (v138 == 64) != v289 )
  {
    v273 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v272, 0LL);
    v138 = v257;
  }
  v139 = *(_BYTE *)(*(_QWORD *)(v53 + 40) + 31LL) & 0xC0;
  if ( v139 )
  {
    if ( v130 == 0x80000000 || v130 == 0x8000 )
    {
      v130 = 0;
      v259 = 0;
      v260 = 0;
    }
    v140 = v256;
    if ( v256 == 0x80000000 || v256 == 0x8000 )
    {
      v140 = 0;
      v256 = 0;
      v262 = 0;
    }
  }
  else
  {
    v140 = v256;
  }
  *(_QWORD *)&v333 = __PAIR64__(v260, v130);
  *((_QWORD *)&v333 + 1) = __PAIR64__(v262, v140);
  if ( v138 == 64 )
  {
    v288 = *(_OWORD *)(*((_QWORD *)v19 + 5) + 104LL);
    if ( IsDpiBoundaryBetweenWindows((const struct tagWND *)v53, v19) )
    {
      *(_DWORD *)(v53 + 224) = 0;
      *(_DWORD *)(v53 + 228) = 0;
      LogicalToPhysicalInPlaceRectWithSubpixel(v19, &v288, v53 + 224);
      PhysicalToLogicalInPlaceRectWithSubpixel(v53, &v288, v53 + 224);
      v130 = v259;
    }
    if ( v19 != (struct tagWND *)GetDesktopWindow(v53) )
    {
      LODWORD(v333) = v288 + v141;
      DWORD1(v333) = DWORD1(v288) + v142;
    }
    v278 = 1LL;
  }
  if ( !v139 )
  {
    SetOrClrWF(1, (struct tagWND *)v53, 0xF04u, 1);
    v275 = 192;
    SetOrClrWF(1, (struct tagWND *)v53, 0x901u, 1);
    SetOrClrWF(1, (struct tagWND *)v53, 0x10u, 1);
    if ( (v130 == 0x80000000 || v130 == 0x8000) && DWORD1(v333) != 0x80000000 )
    {
      v143 = v271;
      if ( DWORD1(v333) != 0x8000 )
        v143 = DWORD1(v333);
      v271 = v143;
    }
    if ( !v283 && (v130 == 0x80000000 || v130 == 0x8000 || v256 == 0x80000000 || v256 == 0x8000) )
    {
      if ( *(_QWORD *)(*(_QWORD *)(v132 + 464) + 680LL) )
      {
        v144 = (struct tagMONITOR *)((__int64 (*)(void))ValidateHmonitor)();
        goto LABEL_293;
      }
      if ( v19 )
      {
        v144 = _MonitorFromWindowInternal(v19, 2u, 0);
LABEL_293:
        v145 = (wchar_t *)v144;
      }
      else
      {
        v145 = Str1;
      }
      if ( !v145 )
      {
        v145 = *(wchar_t **)(GetDispInfo() + 104);
        goto LABEL_300;
      }
    }
    else
    {
      v145 = Str1;
LABEL_300:
      if ( !v145 )
      {
        v145 = (wchar_t *)ValidateHmonitor(*(_QWORD *)(*(_QWORD *)(v53 + 40) + 256LL));
        if ( !v145 )
        {
          if ( v283 )
            v145 = (wchar_t *)GetInheritedMonitor((struct tagWND *)v53);
          else
            v145 = 0LL;
          if ( !v145 )
            v145 = (wchar_t *)MonitorFromRect(*(_QWORD *)(v53 + 40) + 88LL, 2LL, 0LL);
          UpdateWindowMonitorAndDpiInfoHelper((struct tagWND *)v53, (struct tagMONITOR *)v145);
          UpdateTopLevelWindowDPITransform(v53, v145);
        }
      }
    }
    SetTiledRect(v53, &v334, v145);
    v146 = v259;
    if ( v259 == 0x80000000 || v259 == 0x8000 )
    {
      v153 = *(_QWORD *)(v132 + 464);
      if ( (*(_DWORD *)(v153 + 792) & 4) != 0 )
      {
        v269 = 1;
        v146 = *(_DWORD *)(v153 + 776);
        LODWORD(v333) = v146;
        v154 = *(_DWORD *)(*(_QWORD *)(v132 + 464) + 780LL);
      }
      else
      {
        v146 = v334;
        LODWORD(v333) = v334;
        v154 = DWORD1(v334);
      }
      DWORD1(v333) = v154;
      v260 = v154;
      v259 = v146;
      v148 = 1;
    }
    else
    {
      v147 = v145[37];
      if ( v147 )
        v145[37] = v147 - 1;
      v148 = v274;
    }
    if ( DWORD2(v333) == 0x80000000 || DWORD2(v333) == 0x8000 )
    {
      v155 = *(_QWORD *)(v132 + 464);
      if ( (*(_DWORD *)(v155 + 792) & 2) != 0 )
      {
        v269 = 1;
        DWORD2(v333) = *(_DWORD *)(v155 + 784);
        HIDWORD(v333) = *(_DWORD *)(*(_QWORD *)(v132 + 464) + 788LL);
      }
      else
      {
        DWORD2(v333) = DWORD2(v334) - v146;
        HIDWORD(v333) = HIDWORD(v334) - v260;
      }
    }
    else if ( v148 )
    {
      MonitorRect = GetMonitorRect(&v328, v145);
      v296 = *(_OWORD *)MonitorRect;
      v150 = *(_QWORD *)(MonitorRect + 8);
      v151 = v333 + DWORD2(v333) - v150;
      v152 = DWORD1(v333) + HIDWORD(v333) - HIDWORD(v150);
      if ( v151 > 0 )
      {
        v259 -= v151;
        LODWORD(v333) = v259;
        if ( v259 < (int)v296 )
        {
          v259 = v296;
          LODWORD(v333) = v296;
        }
      }
      if ( v152 > 0 )
      {
        v260 -= v152;
        DWORD1(v333) = v260;
        if ( v260 < SDWORD1(v296) )
        {
          v260 = DWORD1(v296);
          DWORD1(v333) = DWORD1(v296);
        }
      }
    }
  }
  if ( v269 )
    *(_DWORD *)(*(_QWORD *)(v132 + 464) + 792LL) &= 0xFFFFFFF9;
  if ( (((*(_BYTE *)(*(_QWORD *)(v53 + 40) + 31LL) & 0xC0) + 0x80) & 0xBF) == 0 )
    SetOrClrWF(1, (struct tagWND *)v53, 0xF04u, 1);
  *(_WORD *)(*(_QWORD *)(v53 + 40) + 30LL) |= v275;
  if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v272)
    && v257 != 64
    && *(_QWORD *)(*(_QWORD *)v261[0] + 96LL) )
  {
    v315 = 0LL;
    v157 = v53;
    if ( *(_QWORD *)(v53 + 104) )
      v157 = *(_QWORD *)(v53 + 104);
    zzzLockDisplayAreaAndInvalidateDCCache(v157, 16LL, 0LL);
    RtlInitUnicodeStringOrId(&v315, *(_QWORD *)(*(_QWORD *)v261[0] + 96LL));
    v158 = xxxClientLoadMenu(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v261[0] + 8LL) + 64LL), &v315);
    v273 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v272, v158);
    if ( (*(_BYTE *)(*(_QWORD *)(v53 + 40) + 31LL) & 0xC0) == 0x40 || (unsigned int)IsWindowBeingDestroyed(v53) )
    {
      v161 = v273;
      if ( !v273 )
        v161 = (struct _HEAD *)*v272[0];
      DestroyMenu(v161);
      v273 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(v272, 0LL);
      goto LABEL_461;
    }
    if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v272) )
      v300 = 0LL;
    else
      v300 = **(struct _HEAD ***)v272[0];
  }
  v159 = *(_QWORD *)(v53 + 40);
  if ( (*(_BYTE *)(v159 + 31) & 0xC0) == 0x40 )
  {
    v160 = v273;
    if ( !v273 )
      v160 = (struct _HEAD *)*v272[0];
    *(_QWORD *)(*(_QWORD *)(v53 + 40) + 320LL) = v160;
    *(_QWORD *)(*(_QWORD *)(v53 + 40) + 152LL) = 0LL;
    *(_QWORD *)(v53 + 168) = 0LL;
  }
  else
  {
    *(_QWORD *)(v159 + 320) = 0LL;
    LockWndMenuWorker(v53, 0LL, v272);
  }
  if ( (*(_BYTE *)(*(_QWORD *)(v53 + 40) + 31LL) & 0xC0) != 0x40 )
  {
    v162 = a16;
    if ( (a16 & 4) != 0 )
    {
      LOBYTE(v156) = 1;
      CoreWindowProp::ChangeRole(v53, 1LL, v156);
    }
    v321 = *(_OWORD *)LockPointer(&v329, v53 + 200, v53);
    HMAssignmentLock(&v321, 0LL);
    if ( (unsigned int)IsTopLevelParent(v19) )
    {
      *(_QWORD *)(*(_QWORD *)(v53 + 40) + 64LL) = 0LL;
      v316[0] = v53 + 120;
      v316[1] = 0LL;
      HMAssignmentLock(v316, 0LL);
    }
    else
    {
      NonChildAncestor = GetNonChildAncestor();
      if ( !(unsigned int)ValidateOwnerDepth(v53, NonChildAncestor) )
        goto LABEL_354;
      if ( NonChildAncestor )
      {
        *(_DWORD *)(*(_QWORD *)(v53 + 40) + 236LL) = *(_DWORD *)(*(_QWORD *)(NonChildAncestor + 40) + 236LL);
        SetOrClrWF(*(_BYTE *)(*(_QWORD *)(NonChildAncestor + 40) + 232LL) & 0x40, (struct tagWND *)v53, 0xD840u, 1);
        WindowCloakStateComponentUIAware = GetWindowCloakStateComponentUIAware(NonChildAncestor);
      }
      v322 = *(_OWORD *)LockPointer(&v330, v53 + 120, NonChildAncestor);
      HMAssignmentLock(&v322, 1LL);
      v166 = *(_QWORD *)(v53 + 120);
      if ( v166
        && ((*(_BYTE *)(*(_QWORD *)(v166 + 40) + 24LL) & 8) != 0 || *(_DWORD *)(*(_QWORD *)(v53 + 40) + 236LL) != 1) )
      {
        SetOrClrWF(1, (struct tagWND *)v53, 0x808u, 1);
      }
      if ( Atom != *(_WORD *)(*(_QWORD *)(W32GetUserSessionState(v165, v164) + 19872) + 898LL) )
      {
        v168 = *(_QWORD *)(v53 + 120);
        if ( v168 )
        {
          v167 = *(_QWORD *)(v168 + 16);
          if ( v167 != v132 )
            zzzAttachThreadInput(v132, v167, 1LL);
        }
      }
      v162 = a16;
    }
    if ( !*(_QWORD *)(v53 + 120) && !(unsigned int)CoreWindowProp::IsComponent((const struct tagWND *)v53, v167) )
    {
      if ( (v169 = *(_QWORD *)(v53 + 40), v170 = *(_DWORD *)(v169 + 236), v170 <= 0xF)
        && (v171 = 44800, _bittest(&v171, v170))
        || (*(_BYTE *)(v169 + 232) & 0x40) != 0 )
      {
        WindowCloakStateComponentUIAware = 2;
      }
    }
    if ( !v19 || v19 != *(struct tagWND **)(*((_QWORD *)v19 + 3) + 112LL) )
    {
      v19 = (struct tagWND *)GetThreadDesktopWindow(0LL);
      Win32HM_LockIntoThread<1>(v132, v19, v280);
      v276 = 1;
    }
    if ( (v162 & 2) == 0 )
      goto LABEL_386;
    if ( !*(_QWORD *)(v132 + 1584) )
    {
      SetOrClrWF(1, (struct tagWND *)v53, 0xD880u, 1);
      *(_QWORD *)(v132 + 1360) |= 0x40000uLL;
      *(_DWORD *)(*(_QWORD *)(v132 + 472) + 412LL) |= 0x2000000u;
      if ( !*(_QWORD *)(v132 + 1576) )
      {
        KernelEvent = CreateKernelEvent(1LL, 0LL);
        *(_QWORD *)(v132 + 1576) = KernelEvent;
        if ( !KernelEvent )
        {
          v94 = 7;
          goto LABEL_462;
        }
      }
      v318[0] = v132 + 1584;
      v318[1] = v53;
      HMAssignmentLock(v318, 0LL);
      goto LABEL_386;
    }
LABEL_354:
    UserSetLastError(87);
    goto LABEL_461;
  }
  if ( !v19 )
    goto LABEL_461;
  if ( (a16 & 2) != 0 )
    goto LABEL_354;
LABEL_386:
  if ( (*(_DWORD *)(v53 + 380) & 0x1000000) != 0 )
  {
    v285 = *(_QWORD *)(v53 + 104);
    UnlinkWindow(v53, v285);
  }
  if ( !(unsigned int)IsTopLevelParent(v19) )
  {
    *(_DWORD *)(*(_QWORD *)(v53 + 40) + 236LL) = *(_DWORD *)(*((_QWORD *)v19 + 5) + 236LL);
    SetOrClrWF(*(_BYTE *)(*((_QWORD *)v19 + 5) + 232LL) & 0x40, (struct tagWND *)v53, 0xD840u, 1);
  }
  if ( v19 && !(unsigned int)ValidateNewParent(v53, v19, 1LL) )
  {
    v94 = 9;
    goto LABEL_462;
  }
  v291 = *(_OWORD *)LockPointer(&v331, v53 + 104, v19);
  HMAssignmentLock(&v291, 0LL);
  if ( v19 )
    v173 = (unsigned int)-__CFSHR__(*(_DWORD *)(*((_QWORD *)v19 + 5) + 232LL), 10);
  else
    v173 = 0LL;
  SetWindowSubtreeCoreWindowStatus(v53, v173);
  v174 = *(_QWORD *)(v53 + 40);
  if ( (*(_DWORD *)(v174 + 288) & 0xF) == 2 )
    *(_DWORD *)(v174 + 232) = *(_DWORD *)(v174 + 232) & 0xFFFFFBFF | ((unsigned __int8)ShouldUseLogPixelsForWindowMetrics((struct tagWND *)v53) << 10);
  v175 = WindowCloakStateComponentUIAware;
  if ( (WindowCloakStateComponentUIAware & 2) == 0 )
    *(_DWORD *)(v53 + 384) |= 4u;
  if ( v175 )
  {
    v176 = zzzSetWindowCompositionCloak(v53, v175);
    if ( v176 < 0 )
    {
      v177 = RtlNtStatusToDosError(v176);
      UserSetLastError(v177);
      v94 = 8;
      goto LABEL_462;
    }
  }
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v323);
  if ( v285 )
    zzzLockDisplayAreaAndInvalidateDCCache(v285, 16LL, 0LL);
  if ( v19 )
    zzzLockDisplayAreaAndInvalidateDCCache((ULONG_PTR)v19, 16LL, 0LL);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v323);
  v179 = *(_QWORD *)(v53 + 40);
  if ( (*(_BYTE *)(v179 + 31) & 0xC0) == 0x40 && !IsTopLevelWindow(v53) )
  {
    v180 = *(struct tagWND **)(v53 + 104);
    if ( v180 )
    {
      if ( v132 != *((_QWORD *)v180 + 2) )
      {
        if ( v19 != v180 )
        {
          v264 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2208LL);
        }
        zzzAttachThreadInput(v132, *(_QWORD *)(*(_QWORD *)(v53 + 104) + 16LL), 1LL);
        v181 = GetMessageWindow(v53);
        if ( v182 != (struct tagWND *)v181 )
        {
          v179 = *(unsigned int *)(*((_QWORD *)v182 + 5) + 288LL);
          if ( (((unsigned __int8)v179 ^ *(_BYTE *)(*(_QWORD *)(v53 + 40) + 288LL)) & 0xF) != 0
            && !IsChildWindowDpiIsolationEnabled((struct tagWND *)v53, v182) )
          {
            xxxForceUpdateProcessDpiAwarenessContext(
              (struct tagWND *)v53,
              *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v53 + 104) + 40LL) + 288LL));
          }
        }
      }
    }
  }
  if ( a3 != *(unsigned __int16 *)(W32GetUserSessionState(v179, v178) + 41328)
    && a3 != 32769
    && !*(_DWORD *)(v132 + 944) )
  {
    _InterlockedExchange(
      (volatile __int32 *)(*(_QWORD *)(v279[0] + 488) + 20LL),
      (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
    xxxUpdateInputHangInfo(0LL, 1LL);
  }
  xxxAdjustSize((struct tagWND *)v53);
  ConstrainWindowSIZERECT(&v333);
  if ( *(_QWORD *)(v53 + 24) )
  {
    v183 = *(_QWORD *)(v53 + 40);
    if ( (*(_BYTE *)(v183 + 31) & 0x40) == 0 && *(char *)(v183 + 24) >= 0 )
      CheckFullScreen((struct tagWND *)v53, (struct tagSIZERECT *)&v333);
  }
  v184 = DWORD2(v333);
  if ( SDWORD2(v333) < 0 )
    v184 = 0;
  DWORD2(v333) = v184;
  v185 = HIDWORD(v333);
  if ( v333 < 0 )
    v185 = 0;
  HIDWORD(v333) = v185;
  RECTFromSIZERECT(*(_QWORD *)(v53 + 40) + 88LL, &v333);
  if ( v257 == 64 )
  {
    v187 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)v19 + 5) + 256LL), v186);
LABEL_434:
    v188 = (struct tagMONITOR *)v187;
  }
  else
  {
    if ( InheritedMonitor )
    {
      v187 = GetInheritedMonitor((struct tagWND *)v53);
      goto LABEL_434;
    }
    v188 = 0LL;
  }
  if ( v188 || (v188 = (struct tagMONITOR *)MonitorFromRect(*(_QWORD *)(v53 + 40) + 88LL, 2LL, 0LL), v189 = 0LL, v188) )
    v189 = *(_QWORD *)v188;
  if ( v189 != *(_QWORD *)(*(_QWORD *)(v53 + 40) + 256LL) )
  {
    UpdateWindowMonitorAndDpiInfoHelper((struct tagWND *)v53, v188);
    if ( v257 != 64 )
      UpdateTopLevelWindowDPITransform(v53, v188);
  }
  if ( (*(_BYTE *)(*(_QWORD *)(v53 + 40) + 27LL) & 0x20) != 0 && GetRedirectionBitmap(v53, v189) )
  {
    v192 = W32GetUserSessionState(v191, v190);
    GreLockVisRgn(*(_QWORD *)(*(_QWORD *)(v192 + 56968) + 48LL));
    if ( (int)RecreateRedirectionBitmap((struct tagWND *)v53, 0, 0LL) < 0 )
    {
      v195 = W32GetUserSessionState(v194, v193);
      GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v195 + 56968) + 48LL));
      v94 = 3;
      goto LABEL_462;
    }
    v196 = W32GetUserSessionState(v194, v193);
    GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v196 + 56968) + 48LL));
  }
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v261[0] + 8LL) + 8LL) & 0x20) != 0
    || (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v261[0] + 8LL) + 8LL) & 0x40) != 0 && !*(_QWORD *)(*(_QWORD *)v261[0] + 40LL) )
  {
    StyleWindow = GetStyleWindow(v53, 2848LL);
    v200 = W32GetUserSessionState(v199, v198);
    GreLockVisRgn(*(_QWORD *)(*(_QWORD *)(v200 + 56968) + 48LL));
    if ( !CreateCacheDC(v53, StyleWindow != 0 ? 49152 : 0x8000, 0LL) )
    {
      v203 = W32GetUserSessionState(v202, v201);
      GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v203 + 56968) + 48LL));
      v94 = 10;
      goto LABEL_462;
    }
    v204 = W32GetUserSessionState(v202, v201);
    GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v204 + 56968) + 48LL));
  }
  if ( (v254 & 0x80000) != 0
    && (*(_BYTE *)(*(_QWORD *)(v53 + 40) + 26LL) & 8) == 0
    && (int)xxxSetLayeredWindow((WindowActions *)v53) < 0 )
  {
    v94 = 11;
    goto LABEL_462;
  }
  if ( (v254 & 0x2000000) != 0 && !GetStyleWindow(*(_QWORD *)(v53 + 104), 2818LL) )
  {
    SetOrClrWF(1, (struct tagWND *)v53, 0xB02u, 1);
    if ( (int)SetRedirectedWindow((struct tagWND *)v53) < 0 )
    {
      SetOrClrWF(0, (struct tagWND *)v53, 0xB02u, 1);
      v94 = 12;
      goto LABEL_462;
    }
  }
  v305 = v259;
  v304 = v260;
  v303 = v256;
  v302 = v262;
  if ( !xxxSendTransformableMessageTimeout(
          (struct tagTHREADINFO **)v53,
          129LL,
          0LL,
          (struct tagDRAWITEMSTRUCT *)v299,
          0,
          0,
          0LL,
          1,
          1) )
    goto LABEL_461;
  v211 = *(_QWORD *)(*(_QWORD *)(v53 + 136) + 8LL);
  if ( (*(_BYTE *)(v211 + 9) & 2) != 0 )
  {
    SystemMenu = xxxGetSystemMenu((struct tagWND *)v53);
    v273 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v272, SystemMenu);
    if ( !(unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v272) )
    {
      Win32HMThreadLock<tagMENU>::Win32HMThreadLock<tagMENU>(v324, v272);
      xxxRemoveDeleteMenuHelper(v272, 5LL, 1024LL, 1LL);
      xxxRemoveDeleteMenuHelper(v272, 5LL, 1024LL, 1LL);
      Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)v324, v213);
    }
  }
  if ( (*(_BYTE *)(*(_QWORD *)(v53 + 40) + 18LL) & 2) != 0
    && (!*((_QWORD *)&v310 + 1) || (_DWORD)v310 || *(_QWORD *)(v53 + 184)) )
  {
    v325 = 0LL;
    v307 = *(_QWORD *)(v53 + 184);
    v310 = *(_OWORD *)tagWND::ProtectedLargeUnicodeStringWNDstrName::getStrName(
                        (tagWND::ProtectedLargeUnicodeStringWNDstrName *)(v53 + 184),
                        (struct _LARGE_UNICODE_STRING *)&v325);
  }
  if ( (**(_DWORD **)(W32GetUserSessionState(v211, v95) + 19872) & 4) != 0 )
  {
    v214 = (struct tagTHREADINFO ***)(v279[0] + 824);
    if ( !*(_QWORD *)(v279[0] + 824) && (*(_DWORD *)(v53 + 380) & 0x10000000) != 0 )
    {
      DefaultImeWindow = xxxCreateDefaultImeWindow((struct tagWND *)v53, Atom, (__int64)v284[0]);
      v284[0] = v214;
      v284[1] = DefaultImeWindow;
      HMAssignmentLock(v284, 0LL);
      if ( *v214 )
      {
        Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(BugCheckParameter3, v279[0], (__int64)*v214);
        xxxSendTransformableMessageTimeout(*v214, 647LL, 0x21uLL, 0LL, 0, 0, 0LL, 1, 1);
        Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v216);
      }
      v217 = v279[0];
      v218 = (**(_DWORD **)(v279[0] + 520) >> 6) & 1;
      v312 = v218;
      v219 = *(_QWORD *)(v279[0] + 824);
      if ( v219 && v218 )
      {
        Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(v317, v219);
        xxxSendTransformableMessageTimeout(
          *(struct tagTHREADINFO ***)(v217 + 824),
          647LL,
          0x19uLL,
          *(struct tagDRAWITEMSTRUCT **)(*(_QWORD *)(v217 + 480) + 40LL),
          0,
          0,
          0LL,
          1,
          1);
        **(_QWORD **)(v217 + 520) &= ~0x40uLL;
        Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)v317, v220);
      }
    }
  }
  if ( v19 && ((*(_DWORD *)(v53 + 380) & 0x1000000) == 0 || *(struct tagWND **)(v53 + 104) == v19) )
  {
    v221 = PWInsertAfter(v278);
    CompositeAppFrameWindowOrSelf = v221;
    if ( (unsigned __int64)(v221 - 2) <= 0xFFFFFFFFFFFFFFFBuLL && *(_QWORD *)(v221 + 104) != *(_QWORD *)(v53 + 104) )
      CompositeAppFrameWindowOrSelf = v257 == 64;
    v223 = *(_QWORD *)(v53 + 120);
    if ( v223 )
    {
      *(_DWORD *)(*(_QWORD *)(v53 + 40) + 236LL) = *(_DWORD *)(*(_QWORD *)(v223 + 40) + 236LL);
      SetOrClrWF(
        *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v53 + 120) + 40LL) + 232LL) & 0x40,
        (struct tagWND *)v53,
        0xD840u,
        1);
    }
    if ( !(unsigned int)ValidateNewParent(v53, v19, 1LL) )
    {
      v225 = 9;
      goto LABEL_524;
    }
    UnlinkWindow(v53, *(_QWORD *)(v53 + 104));
    v226 = *(_QWORD *)(v53 + 40);
    if ( (*(_BYTE *)(v226 + 31) & 0xC0) != 0x40 && v19 != *(struct tagWND **)(*((_QWORD *)v19 + 3) + 112LL) )
    {
      if ( (*(_BYTE *)(v226 + 24) & 8) != 0 )
      {
        if ( *(_QWORD *)(W32GetUserSessionState(v226, v224) + 19080) )
        {
          TopMostInsertAfter = GetTopMostInsertAfter(v53);
          if ( TopMostInsertAfter )
            CompositeAppFrameWindowOrSelf = TopMostInsertAfter;
        }
      }
      else
      {
        if ( !CompositeAppFrameWindowOrSelf )
          goto LABEL_511;
        v227 = 0;
        if ( CompositeAppFrameWindowOrSelf >= 0xFFFFFFFFFFFFFFFEuLL || CompositeAppFrameWindowOrSelf == 1 )
          v227 = 1;
        if ( !v227 && (*(_BYTE *)(*(_QWORD *)(CompositeAppFrameWindowOrSelf + 40) + 24LL) & 8) != 0 )
        {
LABEL_511:
          v228 = CalcForegroundInsertAfter(v53);
          CompositeAppFrameWindowOrSelf = (unsigned __int64)v228;
          if ( !*(_QWORD *)(v53 + 120) )
            CompositeAppFrameWindowOrSelf = (unsigned __int64)CoreWindowProp::GetCompositeAppFrameWindowOrSelf(
                                                                v228,
                                                                v224);
        }
      }
    }
    if ( CompositeAppFrameWindowOrSelf >= 0xFFFFFFFFFFFFFFFEuLL )
    {
      v225 = 13;
      goto LABEL_524;
    }
    LinkWindow((struct tagWND *)v53);
    zzzLockDisplayAreaAndInvalidateDCCache((ULONG_PTR)v19, 16LL, 0LL);
  }
  v230 = *(_QWORD *)(v53 + 40);
  if ( (*(_BYTE *)(v230 + 31) & 0xC0) == 0x40 && (*(_BYTE *)(*((_QWORD *)v19 + 5) + 26LL) & 0x40) != 0 )
  {
    v231 = *(_DWORD *)(v230 + 96);
    v232 = *(_DWORD *)(v230 + 88);
    *(_DWORD *)(v230 + 96) = DWORD2(v288) + v288 - v232;
    *(_DWORD *)(*(_QWORD *)(v53 + 40) + 88LL) = v232 + *(_DWORD *)(*(_QWORD *)(v53 + 40) + 96LL) - v231;
  }
  v334 = *(_OWORD *)(*(_QWORD *)(v53 + 40) + 88LL);
  xxxSendTransformableMessageTimeout(
    (struct tagTHREADINFO **)v53,
    131LL,
    0LL,
    (struct tagDRAWITEMSTRUCT *)&v334,
    0,
    0,
    0LL,
    1,
    0);
  *(_OWORD *)(*(_QWORD *)(v53 + 40) + 104LL) = v334;
  if ( xxxSendTransformableMessageTimeout(
         (struct tagTHREADINFO **)v53,
         1LL,
         0LL,
         (struct tagDRAWITEMSTRUCT *)v299,
         0,
         0,
         0LL,
         1,
         1) == -1LL )
  {
    v225 = 0;
LABEL_524:
    if ( v276 )
      Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(v280, v224);
    if ( Win32HMThreadLockBase<tagMENU,0,1>::ManualUnlock<void>((ULONG_PTR)v297) )
      xxxDestroyWindow((struct tagWND *)v53);
    ClassUnlock(*(struct tagCLS **)v261[0]);
    if ( v225 )
    {
      v209 = ((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
           * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8);
      v210 = v225;
LABEL_530:
      TraceLoggingCreateWindowFailed(v210, *((unsigned __int64 *)&v209 + 1));
    }
LABEL_531:
    Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(v297, v208);
    goto LABEL_33;
  }
  SetOrClrWF(1, (struct tagWND *)v53, 0x780u, 1);
  xxxConsiderPreferredDpiChange((struct tagWND *)v53);
  if ( (unsigned int)IsWindowDesktopComposed(v53) )
  {
    v233 = (void *)ReferenceDwmApiPort();
    DwmAsyncChildStyleChange(v233);
    DwmChildRectChange((struct tagWND *)v53);
    DirtyVisRgnTrackers((struct tagWND *)v53, v234);
    v235 = (void *)ReferenceDwmApiPort();
    DwmAsyncOwnerChange(v235);
  }
  xxxWindowEvent(0x8000u, (struct tagWND *)v53, 0, 0, 0);
  if ( (*(_BYTE *)(*(_QWORD *)(v53 + 40) + 16LL) & 0x10) == 0 )
  {
    xxxSendSizeMessage((struct tagWND *)v53);
    if ( v19 && (struct tagWND *)GetDesktopWindow(v53) != v19 )
    {
      LODWORD(v334) = v334 - v288;
      DWORD1(v334) -= DWORD1(v288);
    }
    xxxSendTransformableMessageTimeout(
      (struct tagTHREADINFO **)v53,
      3LL,
      0LL,
      (struct tagDRAWITEMSTRUCT *)((unsigned __int16)v334 | (WORD2(v334) << 16)),
      0,
      0,
      0LL,
      1,
      0);
  }
  v238 = *(_DWORD *)(W32GetUserSessionState(v237, v236) + 66800) & 0x10000 | 1;
  v239 = *(_BYTE *)(*(_QWORD *)(v53 + 40) + 31LL);
  if ( (v239 & 0x20) != 0 )
  {
    SetMinimize(v53, 0LL);
    v240 = 7LL;
    goto LABEL_543;
  }
  if ( (v239 & 1) != 0 )
  {
    SetOrClrWF(0, (struct tagWND *)v53, 0xF01u, 1);
    v238 |= 0x10u;
    v240 = 3LL;
LABEL_543:
    xxxMinMaximize(v53, v240, v238);
  }
  CalcWindowFullScreen((struct tagWND *)v53);
  v241 = *(_QWORD *)(v53 + 40);
  if ( (*(_BYTE *)(v241 + 31) & 0xC0) != 0x40 || (*(_BYTE *)(v241 + 24) & 4) != 0 )
  {
    v242 = v279[0];
  }
  else
  {
    v242 = v279[0];
    if ( *(_QWORD *)(v53 + 104) )
    {
      Win32HMThreadLockAlways<tagWND>::Win32HMThreadLockAlways<tagWND>(v279, v279[0], v53 + 104);
      xxxSendTransformableMessageTimeout(
        *(struct tagTHREADINFO ***)(v53 + 104),
        528LL,
        (*(unsigned __int16 *)(*(_QWORD *)(v53 + 40) + 320LL) << 16) | 1,
        *(struct tagDRAWITEMSTRUCT **)v53,
        0,
        0,
        0LL,
        1,
        0);
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)v279, v243);
    }
  }
  xxxInheritWindowMonitor((struct tagWND *)v53);
  CDwmWindowNotifyBatch::CDwmWindowNotifyBatch((CDwmWindowNotifyBatch *)v332, (struct tagWND *)v53);
  if ( (a5 & 0x10000000) != 0 )
  {
    v246 = W32GetUserSessionState(v245, v244);
    xxxShowWindowEx(
      v53,
      v271 | *(_DWORD *)(v246 + 66800) & 0x10000u,
      v271 & 0x10000 | *(_DWORD *)(v246 + 66800) & 0x10000u);
  }
  CDwmWindowNotifyBatch::~CDwmWindowNotifyBatch((CDwmWindowNotifyBatch *)v332);
  v248 = *(_QWORD *)(v53 + 40);
  if ( (*(_BYTE *)(v248 + 31) & 0xC0) == 0 || (*(_BYTE *)(v248 + 26) & 4) != 0 )
  {
    v249 = *(_DWORD *)(*(_QWORD *)(v242 + 464) + 676LL);
    if ( v249 )
    {
      xxxSendTransformableMessageTimeout((struct tagTHREADINFO **)v53, 50LL, v249, 0LL, 0, 0, 0LL, 1, 1);
      *(_DWORD *)(*(_QWORD *)(v242 + 464) + 676LL) = 0;
    }
  }
  if ( v276 )
    Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(v280, v247);
  ClassUnlock(*(struct tagCLS **)v261[0]);
  v250 = Win32HMThreadLockBase<tagMENU,0,1>::ManualUnlock<void>((ULONG_PTR)v297);
  v252 = v250;
  if ( !v250 || (*(_BYTE *)(_HMPheFromObject(v250) + 25) & 1) != 0 )
    v252 = 0LL;
  Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(v297, v251);
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v272);
  Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(v280, v253);
  SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>(v261);
  return v252;
}
