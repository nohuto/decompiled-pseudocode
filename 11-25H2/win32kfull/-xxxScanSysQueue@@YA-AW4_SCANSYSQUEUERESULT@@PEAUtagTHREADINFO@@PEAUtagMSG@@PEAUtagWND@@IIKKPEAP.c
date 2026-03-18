/*
 * XREFs of ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027D2B8
 * Callers:
 *     xxxRealInternalGetMessage @ 0x14011559C (xxxRealInternalGetMessage.c)
 * Callees:
 *     FindTimer @ 0x14001A310 (FindTimer.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ?IsCompositionInputWindowForHitTest@@YA_NPEAUtagWND@@@Z @ 0x14001F610 (-IsCompositionInputWindowForHitTest@@YA_NPEAUtagWND@@@Z.c)
 *     _PostTransformableMessage @ 0x140020914 (_PostTransformableMessage.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x140020958 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1400213F0 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x140021688 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x140024198 (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ?xxxWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHW4WindowHitTestOption@@@Z @ 0x14002A84C (-xxxWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHW4WindowHitTestOption@@@Z.c)
 *     ??0_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ @ 0x14002B2A0 (--0_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ.c)
 *     ?UnlockWorker@?$Win32RawLockedItemBase@UtagQMSG@@$0A@$00$00$00@@AEAAX_N0@Z @ 0x14002C3B4 (-UnlockWorker@-$Win32RawLockedItemBase@UtagQMSG@@$0A@$00$00$00@@AEAAX_N0@Z.c)
 *     ??1?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x14002C6B8 (--1-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14002D198 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??0?$Win32HMOptionalThreadLock@UtagWND@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x14002D4E4 (--0-$Win32HMOptionalThreadLock@UtagWND@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     ?xxxDCEWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHW4WindowHitTestOption@@@Z @ 0x14002D528 (-xxxDCEWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHW4WindowHitTestOption@@@Z.c)
 *     ?xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x14002D590 (-xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_.c)
 *     ??1?$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ @ 0x14002EA08 (--1-$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ @ 0x14002EA3C (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x14002EA74 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxWindowEvent @ 0x14002EAB0 (xxxWindowEvent.c)
 *     xxxSendTransformableMessageTimeout @ 0x140030264 (xxxSendTransformableMessageTimeout.c)
 *     SetWakeBit @ 0x1400338D0 (SetWakeBit.c)
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x14003507C (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _GetTopLevelWindow @ 0x140038170 (_GetTopLevelWindow.c)
 *     ??0?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x140039968 (--0-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     ?PhysicalToLogicalDPIPointWithHitTest@@YAHPEAUtagPOINT@@0PEBU_SUBPIXELS@@PEBUtagWND@@@Z @ 0x140044C70 (-PhysicalToLogicalDPIPointWithHitTest@@YAHPEAUtagPOINT@@0PEBU_SUBPIXELS@@PEBUtagWND@@@Z.c)
 *     PtInRect @ 0x140044D50 (PtInRect.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x1400461EC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004B060 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x14004C394 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     ??$Win32HM_ExchangeThreadLock@$00@@YAPEAU_HEAD@@PEAU0@PEAU_Win32HMThreadLockItem@@@Z @ 0x140050410 (--$Win32HM_ExchangeThreadLock@$00@@YAPEAU_HEAD@@PEAU0@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?IsThreadDesktopComposed@@YAHPEBUtagTHREADINFO@@@Z @ 0x14005BB80 (-IsThreadDesktopComposed@@YAHPEBUtagTHREADINFO@@@Z.c)
 *     ?SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z @ 0x14005BF5C (-SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z.c)
 *     ?IsOleDragDropCaptureWindow@@YAHPEAUtagWND@@@Z @ 0x1400629EC (-IsOleDragDropCaptureWindow@@YAHPEAUtagWND@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1400653B0 (HMValidateHandleNoSecure.c)
 *     DelQEntry @ 0x140066E80 (DelQEntry.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x140067260 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     ?SecondaryHitTest@Mouse@InputTraceLogging@@SAXPEBUtagQMSG@@AEBUtagPOINT@@PEAUtagWND@@@Z @ 0x140069B40 (-SecondaryHitTest@Mouse@InputTraceLogging@@SAXPEBUtagQMSG@@AEBUtagPOINT@@PEAUtagWND@@@Z.c)
 *     xxxCallMouseHook @ 0x1400C4174 (xxxCallMouseHook.c)
 *     xxxCallCtfHook @ 0x1400C4B80 (xxxCallCtfHook.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1400C5FF0 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1400D897C (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     ?AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@W4_AllocQEntryPosition@@@Z @ 0x1401196C0 (-AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@W4_AllocQEntryPosition@@@Z.c)
 *     PtiMouseFromQ @ 0x14011F4F0 (PtiMouseFromQ.c)
 *     ?CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z @ 0x14011F7BC (-CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z.c)
 *     TransferWakeBit @ 0x140120600 (TransferWakeBit.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x14012A960 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     ??1Win32RawLockedW32Thread@@QEAA@XZ @ 0x14012B3F0 (--1Win32RawLockedW32Thread@@QEAA@XZ.c)
 *     CheckPwndFilter @ 0x140142160 (CheckPwndFilter.c)
 *     ??0Win32RawLockedW32Thread@@QEAA@PEAU_W32THREAD@@@Z @ 0x1401437D0 (--0Win32RawLockedW32Thread@@QEAA@PEAU_W32THREAD@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqq @ 0x140145220 (WPP_RECORDER_AND_TRACE_SF_qqq.c)
 *     IsHiddenByInputService @ 0x14014B3A0 (IsHiddenByInputService.c)
 *     PhysicalToLogicalInPlacePointWithParent @ 0x14015470C (PhysicalToLogicalInPlacePointWithParent.c)
 *     ??1MenuStateOwnerLockxxxUnlock@@QEAA@XZ @ 0x14015BD74 (--1MenuStateOwnerLockxxxUnlock@@QEAA@XZ.c)
 *     xxxDefPointerProc @ 0x14015D838 (xxxDefPointerProc.c)
 *     ?GetMiPWindowFlags@@YA_KPEAUtagWND@@@Z @ 0x14015DD90 (-GetMiPWindowFlags@@YA_KPEAUtagWND@@@Z.c)
 *     ?ShouldGenerateMipMessage@@YA_NPEAUtagTHREADINFO@@PEBUtagQMSG@@PEAUtagWND@@H@Z @ 0x14015DE50 (-ShouldGenerateMipMessage@@YA_NPEAUtagTHREADINFO@@PEBUtagQMSG@@PEAUtagWND@@H@Z.c)
 *     IsMiPEnabledForWindow @ 0x14015DEA0 (IsMiPEnabledForWindow.c)
 *     SetMiPPromotion @ 0x14015DF28 (SetMiPPromotion.c)
 *     ?SetMiPWakeBit@@YAXPEAUtagTHREADINFO@@@Z @ 0x14015DFC4 (-SetMiPWakeBit@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ??0CManageInScanSysQueueBit@@QEAA@XZ @ 0x14015ED18 (--0CManageInScanSysQueueBit@@QEAA@XZ.c)
 *     ?ScanSysQueue@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagMSG@@PEBUtagTHREADINFO@@_N@Z @ 0x140169658 (-ScanSysQueue@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagMSG@@PEBUtagTHREADINFO@@_N@Z.c)
 *     ??1CManageInScanSysQueueBit@@QEAA@XZ @ 0x14016BEF4 (--1CManageInScanSysQueueBit@@QEAA@XZ.c)
 *     ?ClearWakeBit@@YAXPEAUtagTHREADINFO@@IH@Z @ 0x14016C0FC (-ClearWakeBit@@YAXPEAUtagTHREADINFO@@IH@Z.c)
 *     IsMiPActive @ 0x140171048 (IsMiPActive.c)
 *     ?RedirectForCapture@Mouse@InputTraceLogging@@SAXPEBUtagQMSG@@PEAUHWND__@@@Z @ 0x1401752A0 (-RedirectForCapture@Mouse@InputTraceLogging@@SAXPEBUtagQMSG@@PEAUHWND__@@@Z.c)
 *     GetThreadDesktopWindow @ 0x1401785A0 (GetThreadDesktopWindow.c)
 *     xxxFindNCHitEx @ 0x1401848B4 (xxxFindNCHitEx.c)
 *     FindNCHitEx @ 0x140184990 (FindNCHitEx.c)
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x14018B600 (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 *     ?Exchange@Win32RawLockedW32Thread@@QEAAXPEAU_W32THREAD@@@Z @ 0x140194398 (-Exchange@Win32RawLockedW32Thread@@QEAAXPEAU_W32THREAD@@@Z.c)
 *     ?IsPointerMessageTouchpad@@YAHPEAUtagTHREADINFO@@_KG@Z @ 0x140195478 (-IsPointerMessageTouchpad@@YAHPEAUtagTHREADINFO@@_KG@Z.c)
 *     ?DeleteHidDataIfAlreadyHandledByGRIB@@YA_NPEAUtagTHREADINFO@@_J@Z @ 0x1401958D4 (-DeleteHidDataIfAlreadyHandledByGRIB@@YA_NPEAUtagTHREADINFO@@_J@Z.c)
 *     ?SSQResult@RawInput@InputTraceLogging@@SAXPEAXW4SsqResult@12@@Z @ 0x14019E4B4 (-SSQResult@RawInput@InputTraceLogging@@SAXPEAXW4SsqResult@12@@Z.c)
 *     ?IsIndependentInputWindow@@YAHPEBUtagWND@@@Z @ 0x14019E618 (-IsIndependentInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     ?xxxImmProcessKey@@YAKPEAUtagQ@@PEAUtagWND@@I_K_J@Z @ 0x1401A182C (-xxxImmProcessKey@@YAKPEAUtagQ@@PEAUtagWND@@I_K_J@Z.c)
 *     GetAppImeCompatFlags @ 0x1401A1D9C (GetAppImeCompatFlags.c)
 *     ?ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z @ 0x1401A6DDC (-ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1401ADD18 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     IsInsideMenuLoop @ 0x1401BADBC (IsInsideMenuLoop.c)
 *     ??$ManualLock@X@?$Win32RawLockedItemBase@UtagQMSG@@$0A@$00$00$00@@QEAAXPEAUtagQMSG@@P6AXPEAX@Z@Z @ 0x1401BF5D0 (--$ManualLock@X@-$Win32RawLockedItemBase@UtagQMSG@@$0A@$00$00$00@@QEAAXPEAUtagQMSG@@P6AXPEAX@Z@Z.c)
 *     ?RetrieveMessage@Pointer@InputTraceLogging@@SAXPEBUtagQMSG@@_NW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@@Z @ 0x1401C50E8 (-RetrieveMessage@Pointer@InputTraceLogging@@SAXPEBUtagQMSG@@_NW4tagINPUTMESSAGE_RETRIEVE_RETVAL@.c)
 *     xxxRetrievePointerInputMessage @ 0x1401C51F8 (xxxRetrievePointerInputMessage.c)
 *     ?CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z @ 0x1401C6CDC (-CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z.c)
 *     IsMenuStarted @ 0x1401CA01C (IsMenuStarted.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1401D9BFC (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     HotKeyToWindow @ 0x140216838 (HotKeyToWindow.c)
 *     xxxClientCallLocalMouseHooks @ 0x140229D60 (xxxClientCallLocalMouseHooks.c)
 *     xxxCallHandleMenuMessages @ 0x14022EC60 (xxxCallHandleMenuMessages.c)
 *     ?GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z @ 0x14023EA98 (-GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z.c)
 *     ?xxxGetNextSysMsg@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@1@Z @ 0x14023EDC0 (-xxxGetNextSysMsg@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@1@Z.c)
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x14023F260 (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 *     xxxProcessEventMessage @ 0x14024572C (xxxProcessEventMessage.c)
 *     ?ShouldReceiveTouchpadMessages@@YA_NPEBUtagTHREADINFO@@PEAUHWND__@@@Z @ 0x1402475D0 (-ShouldReceiveTouchpadMessages@@YA_NPEBUtagTHREADINFO@@PEAUHWND__@@@Z.c)
 *     xxxTrackMouseMove @ 0x14025D2EC (xxxTrackMouseMove.c)
 *     ?xxxRetrieveInteractiveControlInputMessage@@YA?AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@KK@Z @ 0x1402658D0 (-xxxRetrieveInteractiveControlInputMessage@@YA-AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@KK@Z.c)
 *     xxxSnapWindow @ 0x140266650 (xxxSnapWindow.c)
 *     GetPenDoubleClickTime @ 0x14026A654 (GetPenDoubleClickTime.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddd @ 0x14026BB14 (WPP_RECORDER_AND_TRACE_SF_dddd.c)
 *     ?IgnoreModalLoop@RawInput@InputTraceLogging@@SAXPEAXPEAUHWND__@@@Z @ 0x14026CFF4 (-IgnoreModalLoop@RawInput@InputTraceLogging@@SAXPEAXPEAUHWND__@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14026F27C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     Feature_FixMisdeliveredRawInput__private_IsEnabledDeviceUsageNoInline @ 0x1402750BC (Feature_FixMisdeliveredRawInput__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_MiPTransform__private_IsEnabledDeviceUsageNoInline @ 0x140281B90 (Feature_MiPTransform__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline @ 0x140281C38 (Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline.c)
 *     ?UserModeSupportsUserModeScrollBars@NonClient@Scrollbar@@YA_NXZ @ 0x1402AC9D0 (-UserModeSupportsUserModeScrollBars@NonClient@Scrollbar@@YA_NXZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall xxxScanSysQueue(
        __int64 a1,
        struct tagMSG *a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        char a6,
        unsigned int a7,
        struct tagQMSG **a8)
{
  int v9; // ebx
  __int64 v10; // rax
  __int16 v11; // dx
  __int64 v12; // r15
  char v13; // bl
  bool v14; // di
  __int64 UserSessionState; // rax
  int v16; // r8d
  int v17; // edx
  char v18; // r15
  __int64 v19; // rax
  __int64 v21; // rdx
  __int64 v22; // r9
  char v23; // r12
  __int64 v24; // rdi
  __int64 v25; // rbx
  __int64 v26; // rax
  int v27; // r8d
  int v28; // edx
  unsigned int v29; // ebx
  _BOOL8 v30; // r8
  __int64 v31; // rdx
  int v32; // r13d
  struct tagQMSG *NextSysMsg; // rdi
  char v34; // r12
  unsigned int *v35; // rdx
  __int64 v36; // rdi
  __int64 v37; // rbx
  __int64 v38; // rax
  int v39; // r8d
  int v40; // edx
  int v41; // eax
  struct tagQMSG **v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rdx
  __int64 i; // rcx
  __int64 v46; // rcx
  char v47; // r12
  __int64 v48; // rdi
  __int64 v49; // rbx
  __int64 v50; // rax
  int v51; // r8d
  int v52; // edx
  char v53; // r12
  __int64 v54; // rdi
  __int64 v55; // rbx
  __int64 v56; // rax
  int v57; // r8d
  int v58; // edx
  unsigned int v59; // r10d
  char *v60; // rax
  char v61; // cl
  int v62; // eax
  int v63; // ebx
  __int64 v64; // rdx
  struct tagWND *v65; // rdi
  __int64 v66; // rax
  bool v67; // zf
  BOOL v68; // ebx
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // rdx
  __int64 v72; // rcx
  char v73; // r8
  unsigned int v74; // ecx
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 *v77; // rax
  __int64 v78; // rcx
  __int64 v79; // rdx
  __int64 v80; // rcx
  struct tagWND *v81; // rdx
  __int64 v82; // rax
  struct tagWND *v83; // rcx
  __int64 v84; // rcx
  __int64 v85; // r8
  struct tagWND *v86; // rcx
  __int64 v87; // rcx
  int v88; // eax
  int v89; // eax
  __int64 v90; // rdx
  unsigned __int64 v91; // r8
  __int64 v92; // rbx
  ULONG_PTR v93; // r12
  __int64 v94; // rdx
  __int64 v95; // rcx
  int v96; // ebx
  int v97; // eax
  int v98; // r13d
  int v99; // r13d
  __int64 v100; // rcx
  __int64 v101; // rdi
  unsigned int v102; // ebx
  __int64 v103; // rax
  __int64 v104; // rcx
  __int64 v105; // rdx
  char v106; // r12
  __int64 v107; // rdi
  __int64 v108; // rbx
  __int64 v109; // rax
  ULONG_PTR v110; // rbx
  int v111; // r8d
  int v112; // edx
  void *v113; // r8
  unsigned __int64 v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // rax
  __int64 v117; // rdx
  __int64 v118; // rbx
  __int64 v119; // rax
  int v120; // r8d
  __int64 v121; // rcx
  int v122; // r8d
  int v123; // edx
  HWND *v124; // rdx
  __int64 v125; // rdx
  int v126; // eax
  __int64 v127; // rcx
  __int64 v128; // r13
  unsigned int v129; // r12d
  int v130; // eax
  __int64 v131; // rdx
  struct tagWND *v132; // rcx
  unsigned __int8 v133; // bl
  HWND v134; // rbx
  __int64 v135; // rdx
  __int64 v136; // rdx
  struct tagWND *v137; // rax
  __int64 v138; // rdx
  __int64 v139; // rcx
  __int64 v140; // rcx
  int v141; // eax
  int v142; // eax
  int v143; // r9d
  _DWORD *v144; // rax
  _DWORD *v145; // rax
  unsigned int MouseKeyFlags; // eax
  __int64 v147; // rdx
  __int64 v148; // rcx
  __int64 v149; // rcx
  bool v150; // zf
  int v151; // eax
  int v152; // eax
  int v153; // eax
  int v154; // r8d
  int v155; // r13d
  __int64 v156; // rax
  HWND *v157; // rdx
  __int64 v158; // rdx
  __int64 v159; // rcx
  struct tagWND *v160; // rbx
  unsigned int v161; // r9d
  int v162; // r10d
  __int64 v163; // rdx
  __int64 v164; // rbx
  struct tagWND *v165; // rax
  __int64 v166; // rdx
  __int64 v167; // rdx
  __int64 v168; // rcx
  int v169; // ebx
  __int64 v170; // rdx
  __int64 v171; // rcx
  struct tagWND *v172; // rax
  __int64 v173; // r8
  __int64 v174; // rdx
  __int64 v175; // rax
  struct tagWND *v176; // r8
  unsigned int v177; // edx
  char v178; // di
  char v179; // bl
  __int64 v180; // rax
  int v181; // r8d
  int v182; // edx
  __int64 v183; // rdx
  const struct tagUIPI_INFO *v184; // r8
  __int64 v185; // rcx
  __int64 v186; // rax
  __int64 v187; // rdx
  unsigned __int64 v188; // rbx
  __int64 v189; // rcx
  int v190; // edx
  struct tagWND *v191; // rdx
  __int64 v192; // rcx
  __int64 v193; // rcx
  __int64 v194; // rdx
  __int64 v195; // r8
  __int64 v196; // r9
  __int64 v197; // rcx
  BOOL v198; // edi
  Scrollbar::NonClient *v199; // rcx
  unsigned int NCHit; // eax
  __int64 v201; // r8
  int v202; // eax
  __int64 v203; // rdx
  int v204; // r13d
  __int64 v205; // rax
  char v206; // al
  __int64 v207; // rcx
  __int64 v208; // rcx
  __int64 v209; // rax
  __int64 v210; // rcx
  __int64 v211; // kr20_8
  __int64 v212; // kr28_8
  __int64 v213; // rax
  __int64 v214; // rcx
  unsigned int v215; // edx
  __int64 v216; // rcx
  int v217; // eax
  int v218; // ecx
  int TouchTimeFromCPLValue; // eax
  int v220; // eax
  __int64 v221; // rdx
  __int64 v222; // rcx
  __int64 v223; // rdx
  __int64 v224; // rcx
  __int64 v225; // rcx
  struct tagTHREADINFO **CompositeAppFrameWindowOrSelf; // rbx
  const struct tagWND *CompositionInputWindowUIOwner; // rcx
  const struct tagWND *TopLevelWindow; // rax
  __int64 v229; // rdx
  struct tagTHREADINFO *v230; // r8
  __int64 v231; // rdx
  unsigned __int64 v232; // r8
  __int64 v233; // rdx
  __int128 v234; // xmm12
  __int128 v235; // xmm13
  __int128 v236; // xmm14
  __int128 v237; // xmm15
  int v238; // r12d
  __int128 *v239; // rcx
  __int64 v240; // rcx
  int v241; // r9d
  unsigned int *v242; // rax
  _DWORD *v243; // rax
  __int64 v244; // r15
  __int64 v245; // rax
  __int64 v246; // rdx
  __int64 v247; // rax
  LARGE_INTEGER *v248; // rbx
  __int64 v249; // rdx
  struct tagQ **QuadPart; // rcx
  __int64 v251; // rcx
  __int128 v252; // xmm6
  __int128 v253; // xmm7
  __int128 v254; // xmm8
  __int128 v255; // xmm9
  __int128 v256; // xmm10
  __int128 v257; // xmm11
  unsigned __int64 v258; // rdi
  __int64 v259; // rdx
  struct tagTHREADINFO **v260; // rcx
  __int64 v261; // rax
  __int64 v262; // rdx
  __int64 v263; // rax
  int v264; // r13d
  unsigned __int64 v265; // rcx
  __int64 v266; // rax
  __int64 v267; // rcx
  const struct tagQMSG *v268; // r8
  __int64 v269; // rbx
  struct tagTHREADINFO *v270; // rcx
  __int64 v271; // rcx
  int v272; // ebx
  __int64 v273; // r9
  struct tagWND *v274; // rcx
  int v275; // ebx
  int v276; // ebx
  int v277; // ebx
  __int64 v278; // r8
  __int64 v279; // rdx
  __int64 MiPWindowFlags; // rax
  int v281; // edx
  __int64 v282; // r8
  __int64 v283; // r9
  int v284; // eax
  int InteractiveControlInputMessage; // eax
  char v286; // bl
  struct tagMSG *v287; // r12
  _QWORD *v288; // rax
  int v289; // ecx
  _DWORD *v290; // rax
  __int64 v291; // rax
  unsigned __int64 v292; // rax
  __int64 v293; // rdx
  __int64 v294; // rdx
  __int64 v295; // rdx
  __int64 v296; // rdx
  __int64 v297; // rdx
  __int64 v298; // rdx
  __int64 v299; // rdx
  unsigned int *v300; // rdx
  char v301; // r15
  bool v302; // r12
  __int64 v303; // rdi
  __int64 v304; // rbx
  __int64 v305; // rax
  int v306; // r8d
  int v307; // edx
  __int64 v308; // r15
  struct _W32THREAD *v309; // rdi
  struct _W32THREAD *v310; // rbx
  int v311; // edx
  int v312; // r8d
  __int64 v313; // rdx
  __int64 v314; // rdx
  __int64 v315; // rdx
  __int64 v316; // rdx
  __int64 v317; // rdx
  __int64 v318; // rdx
  char v319; // [rsp+48h] [rbp-990h]
  char v320; // [rsp+50h] [rbp-988h]
  unsigned int v321[2]; // [rsp+70h] [rbp-968h] BYREF
  struct tagWND *ThreadDesktopWindow; // [rsp+78h] [rbp-960h] BYREF
  int v323; // [rsp+80h] [rbp-958h] BYREF
  int v324; // [rsp+84h] [rbp-954h]
  BOOL v325; // [rsp+88h] [rbp-950h]
  unsigned int v326; // [rsp+8Ch] [rbp-94Ch]
  bool v327; // [rsp+90h] [rbp-948h]
  struct tagPOINT v328; // [rsp+98h] [rbp-940h] BYREF
  void *v329; // [rsp+A0h] [rbp-938h] BYREF
  unsigned __int64 v330; // [rsp+A8h] [rbp-930h] BYREF
  int v331; // [rsp+B0h] [rbp-928h] BYREF
  int v332; // [rsp+B4h] [rbp-924h] BYREF
  int v333; // [rsp+B8h] [rbp-920h]
  __int64 v334; // [rsp+C0h] [rbp-918h]
  bool v335; // [rsp+C8h] [rbp-910h]
  bool v336; // [rsp+C9h] [rbp-90Fh]
  _BYTE v337[2]; // [rsp+CAh] [rbp-90Eh] BYREF
  unsigned int v338; // [rsp+CCh] [rbp-90Ch]
  int v339; // [rsp+D0h] [rbp-908h]
  int v340; // [rsp+D4h] [rbp-904h]
  int v341; // [rsp+D8h] [rbp-900h]
  ULONG_PTR v342; // [rsp+E0h] [rbp-8F8h]
  struct tagQMSG *v343; // [rsp+E8h] [rbp-8F0h]
  struct tagQMSG **v344; // [rsp+F0h] [rbp-8E8h]
  struct _W32THREAD *v345; // [rsp+F8h] [rbp-8E0h]
  int v346[2]; // [rsp+100h] [rbp-8D8h]
  int v347; // [rsp+108h] [rbp-8D0h]
  int v348; // [rsp+10Ch] [rbp-8CCh]
  __int64 v349; // [rsp+110h] [rbp-8C8h]
  __int128 v350; // [rsp+118h] [rbp-8C0h]
  struct _W32THREAD *v351; // [rsp+128h] [rbp-8B0h]
  int v352; // [rsp+130h] [rbp-8A8h]
  int v353; // [rsp+134h] [rbp-8A4h]
  int v354; // [rsp+138h] [rbp-8A0h]
  struct tagTHREADINFO *v355; // [rsp+140h] [rbp-898h]
  struct _W32THREAD *v356; // [rsp+148h] [rbp-890h]
  __int64 v357; // [rsp+150h] [rbp-888h]
  ULONG_PTR v358[2]; // [rsp+158h] [rbp-880h] BYREF
  __int64 v359; // [rsp+168h] [rbp-870h]
  struct tagMSG *v360; // [rsp+170h] [rbp-868h]
  int v361; // [rsp+180h] [rbp-858h]
  struct tagMSG *v362; // [rsp+188h] [rbp-850h]
  __int64 v363; // [rsp+1A0h] [rbp-838h]
  __int64 v364; // [rsp+1A8h] [rbp-830h]
  char v365[8]; // [rsp+1B0h] [rbp-828h] BYREF
  unsigned int v366; // [rsp+1B8h] [rbp-820h] BYREF
  unsigned int v367; // [rsp+1BCh] [rbp-81Ch]
  int v368; // [rsp+1C0h] [rbp-818h]
  int v369; // [rsp+1C4h] [rbp-814h]
  __int128 v370; // [rsp+1C8h] [rbp-810h] BYREF
  __int128 v371; // [rsp+1D8h] [rbp-800h]
  _DWORD v372[2]; // [rsp+1F0h] [rbp-7E8h] BYREF
  __int128 v373; // [rsp+1F8h] [rbp-7E0h]
  int *v374; // [rsp+208h] [rbp-7D0h]
  unsigned int v375; // [rsp+210h] [rbp-7C8h]
  char v376; // [rsp+214h] [rbp-7C4h]
  __int16 v377; // [rsp+215h] [rbp-7C3h]
  char v378; // [rsp+217h] [rbp-7C1h]
  char *v379; // [rsp+218h] [rbp-7C0h]
  char v380; // [rsp+220h] [rbp-7B8h]
  int v381; // [rsp+221h] [rbp-7B7h]
  __int16 v382; // [rsp+225h] [rbp-7B3h]
  char v383; // [rsp+227h] [rbp-7B1h]
  __int64 v384; // [rsp+228h] [rbp-7B0h]
  ULONG_PTR v385[2]; // [rsp+240h] [rbp-798h] BYREF
  ULONG_PTR BugCheckParameter2[3]; // [rsp+250h] [rbp-788h] BYREF
  void (*v387[3])(void); // [rsp+268h] [rbp-770h] BYREF
  void (*v388[3])(void); // [rsp+280h] [rbp-758h] BYREF
  ULONG_PTR v389[3]; // [rsp+298h] [rbp-740h] BYREF
  __int128 v390; // [rsp+2B0h] [rbp-728h]
  void (*v391[3])(void); // [rsp+2C0h] [rbp-718h] BYREF
  void (*v392[3])(void); // [rsp+2D8h] [rbp-700h] BYREF
  void (*v393[4])(void); // [rsp+2F0h] [rbp-6E8h] BYREF
  __int128 v394; // [rsp+310h] [rbp-6C8h] BYREF
  __int128 v395; // [rsp+320h] [rbp-6B8h]
  __int128 v396; // [rsp+330h] [rbp-6A8h]
  __int128 v397; // [rsp+340h] [rbp-698h]
  __int128 v398; // [rsp+350h] [rbp-688h]
  __int128 v399; // [rsp+360h] [rbp-678h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+390h] [rbp-648h] BYREF
  ULONG_PTR v401[2]; // [rsp+3A0h] [rbp-638h] BYREF
  ULONG_PTR v402[2]; // [rsp+3B0h] [rbp-628h] BYREF
  ULONG_PTR v403[2]; // [rsp+3C0h] [rbp-618h] BYREF
  __int128 v404[3]; // [rsp+3D0h] [rbp-608h] BYREF
  LARGE_INTEGER v405; // [rsp+400h] [rbp-5D8h]
  __int64 v406; // [rsp+408h] [rbp-5D0h]
  unsigned __int64 v407; // [rsp+410h] [rbp-5C8h]
  __int128 v408; // [rsp+418h] [rbp-5C0h]
  __int64 v409; // [rsp+428h] [rbp-5B0h]
  __int128 v410; // [rsp+438h] [rbp-5A0h] BYREF
  __int128 v411; // [rsp+448h] [rbp-590h]
  __int128 v412; // [rsp+458h] [rbp-580h]
  __int128 v413; // [rsp+468h] [rbp-570h]
  __int128 v414; // [rsp+478h] [rbp-560h]
  __int128 v415; // [rsp+488h] [rbp-550h]
  __int128 v416; // [rsp+4A0h] [rbp-538h] BYREF
  __int128 v417; // [rsp+4B0h] [rbp-528h]
  __int128 v418; // [rsp+4C0h] [rbp-518h]
  __int128 v419; // [rsp+4D0h] [rbp-508h]
  __int128 v420; // [rsp+4E0h] [rbp-4F8h]
  __int128 v421; // [rsp+4F0h] [rbp-4E8h] BYREF
  __int128 v422; // [rsp+500h] [rbp-4D8h]
  __int128 v423; // [rsp+510h] [rbp-4C8h] BYREF
  __int128 v424; // [rsp+520h] [rbp-4B8h] BYREF
  __int128 v425; // [rsp+530h] [rbp-4A8h]
  __int64 v426; // [rsp+540h] [rbp-498h]
  __int64 v427[2]; // [rsp+550h] [rbp-488h] BYREF
  __int128 v428; // [rsp+560h] [rbp-478h]
  __int64 v429; // [rsp+570h] [rbp-468h]
  __int128 v430; // [rsp+580h] [rbp-458h] BYREF
  __int128 v431; // [rsp+590h] [rbp-448h]
  __int128 v432; // [rsp+5A0h] [rbp-438h]
  __int128 v433; // [rsp+5B0h] [rbp-428h]
  __int128 v434; // [rsp+5C0h] [rbp-418h]
  __int128 v435; // [rsp+5D0h] [rbp-408h]
  __int128 v436; // [rsp+5E0h] [rbp-3F8h]
  __int128 v437; // [rsp+5F0h] [rbp-3E8h]
  _OWORD v438[2]; // [rsp+600h] [rbp-3D8h] BYREF
  __int64 v439; // [rsp+620h] [rbp-3B8h]
  __int128 v440; // [rsp+630h] [rbp-3A8h] BYREF
  __int128 v441; // [rsp+640h] [rbp-398h]
  __int128 v442; // [rsp+650h] [rbp-388h]
  __int128 v443; // [rsp+660h] [rbp-378h]
  __int128 v444; // [rsp+670h] [rbp-368h]
  __int128 v445; // [rsp+680h] [rbp-358h]
  __int128 v446; // [rsp+690h] [rbp-348h]
  __int128 v447; // [rsp+6A0h] [rbp-338h]
  __int128 v448; // [rsp+6B0h] [rbp-328h]
  __int128 v449; // [rsp+6C0h] [rbp-318h]
  __int64 v450; // [rsp+6D0h] [rbp-308h]
  _OWORD v451[10]; // [rsp+6E0h] [rbp-2F8h] BYREF
  __int64 v452; // [rsp+780h] [rbp-258h]
  _BYTE v453[24]; // [rsp+790h] [rbp-248h] BYREF
  int v454; // [rsp+7A8h] [rbp-230h]
  _OWORD v455[10]; // [rsp+840h] [rbp-198h] BYREF
  __int64 v456; // [rsp+8E0h] [rbp-F8h]

  v333 = a4;
  *(_QWORD *)v346 = a3;
  v362 = a2;
  v359 = a1;
  v363 = a1;
  v355 = (struct tagTHREADINFO *)a1;
  v357 = a1;
  v360 = a2;
  v364 = a3;
  v354 = a4;
  v344 = a8;
  memset_0(&v416, 0, 0xA8uLL);
  memset_0(&v430, 0, 0xA8uLL);
  v321[0] = 0;
  v330 = 0LL;
  v329 = 0LL;
  v328 = 0LL;
  v331 = 0;
  v332 = 0;
  *(_OWORD *)v427 = 0LL;
  v428 = 0LL;
  v429 = 0LL;
  v352 = 0;
  v9 = a6 & 1;
  v323 = v9;
  v348 = 0;
  memset_0(&v394, 0, 0x60uLL);
  v326 = 0;
  v325 = 0;
  v327 = 0;
  v342 = 0LL;
  *a8 = 0LL;
  v10 = a1 + 472;
  v11 = a7;
  if ( a7 == 0x2000 && *(_QWORD *)(*(_QWORD *)v10 + 88LL) )
  {
    EtwTraceInputQueueLockedPeekRecursion();
    return 0LL;
  }
  v347 = 0;
  v339 = 0;
  v324 = 0;
  v12 = *(_QWORD *)v10;
  if ( *(_QWORD *)(*(_QWORD *)v10 + 72LL) )
  {
    v18 = 1;
  }
  else
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x20000) == 0
      || (v13 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v13 = 0;
    }
    v14 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v13 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, a7);
      LOBYTE(v16) = v14;
      LOBYTE(v17) = v13;
      WPP_RECORDER_AND_TRACE_SF_qqq(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v17,
        v16,
        *(_QWORD *)(UserSessionState + 69160),
        4,
        18,
        29,
        (__int64)&WPP_62b8cb8514ba365a29e38d0f8208fd40_Traceguids,
        v12,
        a1,
        a1);
      v11 = a7;
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 472) + 72LL) = a1;
    v18 = 1;
    **(_DWORD **)(a1 + 488) |= 1u;
    v9 = v323;
  }
  if ( (v11 & 0x1C07) != 0 )
  {
    v19 = *(_QWORD *)(a1 + 472);
    if ( v9 )
      *(_DWORD *)(v19 + 412) &= ~0x400u;
    else
      *(_DWORD *)(v19 + 412) |= 0x400u;
  }
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 472) + 72LL) != a1 )
  {
    EtwTraceInputQueueLocked();
    return 2LL;
  }
  v334 = 0LL;
  v356 = 0LL;
  v349 = 0LL;
  v351 = 0LL;
  v345 = 0LL;
  Win32RawLockedW32Thread::Win32RawLockedW32Thread((Win32RawLockedW32Thread *)v387, 0LL);
  Win32RawLockedW32Thread::Win32RawLockedW32Thread((Win32RawLockedW32Thread *)v388, 0LL);
  Win32RawLockedW32Thread::Win32RawLockedW32Thread((Win32RawLockedW32Thread *)v393, 0LL);
  Win32RawLockedW32Thread::Win32RawLockedW32Thread((Win32RawLockedW32Thread *)v392, 0LL);
  Win32RawLockedW32Thread::Win32RawLockedW32Thread((Win32RawLockedW32Thread *)v391, 0LL);
  ThreadDesktopWindow = 0LL;
  Win32HMOptionalThreadLock<tagWND>::Win32HMOptionalThreadLock<tagWND>(v358, a1, 0LL);
  CManageInScanSysQueueBit::CManageInScanSysQueueBit((CManageInScanSysQueueBit *)v337, v21);
LABEL_21:
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x20000) == 0
    || (v23 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v23 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
  {
    v18 = 0;
  }
  if ( v23 || v18 )
  {
    v24 = *(_QWORD *)(a1 + 472);
    v25 = *(_QWORD *)(v24 + 88);
    v26 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
    LOBYTE(v27) = v18;
    LOBYTE(v28) = v23;
    WPP_RECORDER_AND_TRACE_SF_qq(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v28,
      v27,
      *(_QWORD *)(v26 + 69160),
      5,
      18,
      30,
      (__int64)&WPP_62b8cb8514ba365a29e38d0f8208fd40_Traceguids,
      v24,
      v25);
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 472) + 88LL) = 0LL;
LABEL_32:
  v18 = 1;
LABEL_33:
  while ( 2 )
  {
    v29 = v326;
LABEL_34:
    LOBYTE(v30) = v325;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          do
          {
            while ( 1 )
            {
              while ( 1 )
              {
                while ( 1 )
                {
                  while ( 1 )
                  {
                    v361 = (**(_DWORD **)(a1 + 520) >> 9) & 1;
                    v31 = *(_QWORD *)(a1 + 472);
                    if ( *(_QWORD *)(v31 + 88) )
                    {
                      if ( !v30 )
                      {
                        v325 = ((v29 - 1) & 0xFFFFFFFD) == 0;
                        v327 = ((v29 - 1) & 0xFFFFFFFD) == 0;
                      }
                    }
                    else
                    {
                      v326 = 0;
                      v325 = 0;
                      v327 = 0;
                    }
                    v32 = 0;
                    v338 = 0;
                    v330 = 0LL;
                    v340 = 0;
                    v341 = 0;
                    NextSysMsg = xxxGetNextSysMsg(
                                   (struct tagTHREADINFO *)a1,
                                   *(struct tagQMSG **)(v31 + 88),
                                   (struct tagQMSG *)&v416,
                                   v22);
                    v343 = NextSysMsg;
                    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
                      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x20000) == 0
                      || (v34 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
                    {
                      v34 = 0;
                    }
                    v35 = &WPP_RECORDER_INITIALIZED;
                    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
                      || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
                    {
                      v18 = 0;
                    }
                    if ( v34 || v18 )
                    {
                      v36 = *(_QWORD *)(a1 + 472);
                      v37 = *(_QWORD *)(v36 + 88);
                      v38 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
                      v319 = v36;
                      NextSysMsg = v343;
                      LOBYTE(v39) = v18;
                      LOBYTE(v40) = v34;
                      WPP_RECORDER_AND_TRACE_SF_qqq(
                        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                        v40,
                        v39,
                        *(_QWORD *)(v38 + 69160),
                        5,
                        18,
                        31,
                        (__int64)&WPP_62b8cb8514ba365a29e38d0f8208fd40_Traceguids,
                        (char)v343,
                        v319,
                        v37);
                    }
                    *(_QWORD *)(*(_QWORD *)(a1 + 472) + 88LL) = NextSysMsg;
                    if ( !NextSysMsg )
                    {
                      v29 = v326;
                      goto LABEL_69;
                    }
                    v41 = DWORD1(v422);
                    if ( (BYTE4(v422) & 0x20) != 0 )
                    {
                      v42 = v344;
                      *v344 = NextSysMsg;
                      *((_DWORD *)NextSysMsg + 25) |= 0x100u;
                      v323 = 0;
                      v41 = DWORD1(v422);
                      if ( (DWORD1(v422) & 0x8000000) != 0 )
                      {
                        *((_DWORD *)*v42 + 25) |= 0x8000000u;
                        v41 = DWORD1(v422);
                      }
                    }
                    if ( (v41 & 0x2000) == 0 )
                      break;
                    v29 = v326;
                    v18 = 1;
                    if ( *((_QWORD *)&v422 + 1) == a1 )
                      v29 = 1;
                    v326 = v29;
                    LOBYTE(v30) = 1;
                    v325 = v30;
                    v327 = 1;
                  }
                  LOBYTE(v30) = v325;
                  if ( (v41 & 0x10000) == 0 )
                    break;
                  v18 = 1;
                  v29 = v326;
                  if ( *((_QWORD *)&v422 + 1) == a1 )
                  {
                    v29 = 3;
                    v326 = 3;
                    goto LABEL_34;
                  }
                }
                if ( (_DWORD)v422 == 4 && v325 )
                {
                  DeferSysPeekMsg(a1, 3LL);
                  goto LABEL_32;
                }
                v29 = v326;
                if ( (v41 & 0x4000) == 0 )
                  break;
                v18 = 1;
                if ( *((_QWORD *)&v422 + 1) == a1 )
                {
                  v29 = 2;
                  v326 = 2;
                }
              }
              if ( (unsigned int)ShouldDeferMessage(v326, &v416, v325) )
              {
                v29 = 3;
                DeferSysPeekMsg(a1, 3LL);
                v326 = 3;
                v18 = 1;
                goto LABEL_34;
              }
LABEL_69:
              if ( !*(_QWORD *)(*(_QWORD *)(a1 + 472) + 88LL) )
              {
                if ( a7 == 0x2000 )
                  ClearWakeBit((struct tagTHREADINFO *)a1, 0x2000, 0);
                goto LABEL_827;
              }
              Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(v358, (__int64)v35);
              v18 = 1;
              LOBYTE(v43) = 1;
              ThreadDesktopWindow = (struct tagWND *)HMValidateHandleNoSecure(v417, v43);
              Win32HM_LockIntoThread<1>(a1, (__int64)ThreadDesktopWindow, (__int64 *)v358);
              v44 = (unsigned int)v422;
              if ( !(_DWORD)v422 )
                break;
              if ( (_DWORD)v422 == 4 )
              {
                v30 = v325;
                if ( *(_QWORD *)(*(_QWORD *)(a1 + 472) + 88LL) != *(_QWORD *)(*(_QWORD *)(a1 + 472) + 24LL) )
                  continue;
              }
              if ( (_DWORD)v422 != 9 || DWORD2(v417) != 96 )
                goto LABEL_83;
              for ( i = *((_QWORD *)&v416 + 1); i && IsHiddenByInputService(i); i = *(_QWORD *)(i + 8) )
                ;
              v30 = v325;
              if ( !i )
              {
LABEL_83:
                if ( *((_QWORD *)&v422 + 1) && *((_QWORD *)&v422 + 1) != a1 )
                {
                  v46 = *(_QWORD *)(a1 + 472);
                  if ( *(_QWORD *)(*((_QWORD *)&v422 + 1) + 472LL) != v46 )
                  {
                    CleanEventMessage(*(struct tagQMSG **)(v46 + 88));
                    DelQEntry(*(_QWORD *)(a1 + 472) + 24LL, *(__int64 **)(*(_QWORD *)(a1 + 472) + 88LL), 1);
                    goto LABEL_21;
                  }
                  v349 = *((_QWORD *)&v422 + 1);
                  Win32RawLockedW32Thread::Exchange((Win32RawLockedW32Thread *)v393, *((struct _W32THREAD **)&v422 + 1));
                  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
                    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x20000) == 0
                    || (v47 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
                  {
                    v47 = 0;
                  }
                  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
                    || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
                  {
                    v18 = 0;
                  }
                  if ( v47 || v18 )
                  {
                    v48 = *(_QWORD *)(a1 + 472);
                    v49 = *(_QWORD *)(v48 + 88);
                    v50 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
                    LOBYTE(v51) = v18;
                    LOBYTE(v52) = v47;
                    WPP_RECORDER_AND_TRACE_SF_qq(
                      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                      v52,
                      v51,
                      *(_QWORD *)(v50 + 69160),
                      5,
                      18,
                      32,
                      (__int64)&WPP_62b8cb8514ba365a29e38d0f8208fd40_Traceguids,
                      v48,
                      v49);
                  }
                  *(_QWORD *)(*(_QWORD *)(a1 + 472) + 88LL) = 0LL;
LABEL_827:
                  v128 = v334;
LABEL_828:
                  v300 = &WPP_RECORDER_INITIALIZED;
                  *(_QWORD *)(*(_QWORD *)(a1 + 472) + 80LL) = 0LL;
                  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
                    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x20000) == 0
                    || (v301 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
                  {
                    v301 = 0;
                  }
                  v302 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
                  if ( v301 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                  {
                    v303 = *(_QWORD *)(a1 + 472);
                    v304 = *(_QWORD *)(v303 + 72);
                    v305 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
                    LOBYTE(v306) = v302;
                    LOBYTE(v307) = v301;
                    WPP_RECORDER_AND_TRACE_SF_qqq(
                      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                      v307,
                      v306,
                      *(_QWORD *)(v305 + 69160),
                      4,
                      18,
                      36,
                      (__int64)&WPP_62b8cb8514ba365a29e38d0f8208fd40_Traceguids,
                      v303,
                      a1,
                      v304);
                  }
                  *(_QWORD *)(*(_QWORD *)(a1 + 472) + 72LL) = 0LL;
                  **(_DWORD **)(a1 + 488) &= ~1u;
                  v308 = v349;
                  v309 = v351;
                  v310 = v345;
                  if ( v356 )
                  {
                    SetWakeBit((__int64)v356, 16385LL);
                    ClearWakeBit((struct tagTHREADINFO *)a1, 16385, 0);
                  }
                  else if ( !v128 && !v349 && !v351 && !v345 )
                  {
                    v311 = 31751;
                    v312 = (_DWORD)v356 + 1;
                    goto LABEL_851;
                  }
                  if ( v128 )
                  {
                    SetWakeBit(v128, 16390LL);
                    ClearWakeBit((struct tagTHREADINFO *)a1, 16390, 0);
                  }
                  if ( v309 )
                  {
                    SetWakeBit((__int64)v309, 17408LL);
                    ClearWakeBit((struct tagTHREADINFO *)a1, 17408, 0);
                  }
                  if ( v310 )
                  {
                    SetWakeBit((__int64)v310, 20480LL);
                    ClearWakeBit((struct tagTHREADINFO *)a1, 20480, 0);
                  }
                  if ( !v308 )
                    goto LABEL_852;
                  SetWakeBit(v308, 8256LL);
                  v312 = 0;
                  v311 = 0x2000;
LABEL_851:
                  ClearWakeBit((struct tagTHREADINFO *)a1, v311, v312);
LABEL_852:
                  CManageInScanSysQueueBit::~CManageInScanSysQueueBit((CManageInScanSysQueueBit *)v337, (__int64)v300);
                  Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(v358, v313);
                  Win32RawLockedW32Thread::~Win32RawLockedW32Thread(v391, v314);
                  Win32RawLockedW32Thread::~Win32RawLockedW32Thread(v392, v315);
                  Win32RawLockedW32Thread::~Win32RawLockedW32Thread(v393, v316);
                  Win32RawLockedW32Thread::~Win32RawLockedW32Thread(v388, v317);
                  Win32RawLockedW32Thread::~Win32RawLockedW32Thread(v387, v318);
                  return 0LL;
                }
                EtwTraceRetrieveQueueEventMessage(
                  *(_QWORD *)(*(_QWORD *)(a1 + 472) + 88LL),
                  *((_QWORD *)&v422 + 1),
                  v30);
                DelQEntry(*(_QWORD *)(a1 + 472) + 24LL, *(__int64 **)(*(_QWORD *)(a1 + 472) + 88LL), 1);
                if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
                  || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x20000) == 0
                  || (v53 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
                {
                  v53 = 0;
                }
                if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
                  || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
                {
                  v18 = 0;
                }
                if ( v53 || v18 )
                {
                  v54 = *(_QWORD *)(a1 + 472);
                  v55 = *(_QWORD *)(v54 + 88);
                  v56 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
                  LOBYTE(v57) = v18;
                  LOBYTE(v58) = v53;
                  WPP_RECORDER_AND_TRACE_SF_qq(
                    *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                    v58,
                    v57,
                    *(_QWORD *)(v56 + 69160),
                    5,
                    18,
                    33,
                    (__int64)&WPP_62b8cb8514ba365a29e38d0f8208fd40_Traceguids,
                    v54,
                    v55);
                }
                *(_QWORD *)(*(_QWORD *)(a1 + 472) + 88LL) = 0LL;
                xxxProcessEventMessage(a1, (__int64)&v416);
                v18 = 1;
                goto LABEL_21;
              }
            }
            LOBYTE(v30) = v325;
          }
          while ( a7 == 0x2000 );
          v59 = DWORD2(v417);
          v321[0] = DWORD2(v417);
          if ( DWORD2(v417) > 0x24A )
          {
            if ( DWORD2(v417) > 0x2ED )
            {
              if ( DWORD2(v417) == 750 || DWORD2(v417) == 751 || DWORD2(v417) == 752 )
              {
LABEL_784:
                if ( !v333 && a5 == -1 )
                  goto LABEL_794;
                if ( v333 <= a5 )
                {
                  if ( DWORD2(v417) >= v333 )
                  {
                    v284 = 1;
                    if ( DWORD2(v417) <= a5 )
                      goto LABEL_793;
                  }
                }
                else if ( DWORD2(v417) < a5 || DWORD2(v417) > v333 )
                {
                  v284 = 1;
LABEL_793:
                  if ( !v284 )
                    goto LABEL_827;
LABEL_794:
                  if ( !(unsigned int)IsInsideMenuLoop(a1) )
                  {
                    if ( v323 )
                      xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v416, 1);
                    if ( !ThreadDesktopWindow )
                      ThreadDesktopWindow = *(struct tagWND **)(*(_QWORD *)(a1 + 472) + 120LL);
                    v329 = (void *)*((_QWORD *)&v418 + 1);
                    v330 = v418;
                    InteractiveControlInputMessage = xxxRetrieveInteractiveControlInputMessage(
                                                       (unsigned __int16)v418,
                                                       WORD1(v418));
                    if ( InteractiveControlInputMessage == 1 )
                      goto LABEL_346;
                    if ( InteractiveControlInputMessage == 2 )
                      goto LABEL_827;
                  }
                  goto LABEL_276;
                }
                v284 = 0;
                goto LABEL_793;
              }
              v151 = DWORD2(v417) - 753;
              v150 = DWORD2(v417) == 753;
            }
            else
            {
              if ( DWORD2(v417) == 749 )
                goto LABEL_784;
              if ( DWORD2(v417) == 593 || DWORD2(v417) == 594 || DWORD2(v417) == 595 )
              {
LABEL_413:
                v129 = v333;
LABEL_749:
                if ( ((HIDWORD(v423) - 2) & 0xFFFFFFCF) == 0 && HIDWORD(v423) != 50 )
                {
                  v321[0] = v59;
                  v329 = (void *)*((_QWORD *)&v418 + 1);
                  v330 = v418;
LABEL_752:
                  if ( v323 )
                  {
                    if ( (unsigned int)IsMiPActive(a1, 0LL) && v32 )
                    {
                      if ( ThreadDesktopWindow )
                        v271 = *(_QWORD *)ThreadDesktopWindow;
                      else
                        v271 = 0LL;
                      *(_QWORD *)(*(_QWORD *)(a1 + 1512) + 48LL) = v271;
                      v278 = *(_QWORD *)(a1 + 1512);
                      v279 = *(unsigned int *)(v278 + 36);
                      if ( (v279 & 0x400000) != 0 && (*((_DWORD *)ThreadDesktopWindow + 95) & 0x40000000) == 0 )
                      {
                        LODWORD(v279) = v279 & 0xFFBFFFFF;
                        *(_DWORD *)(v278 + 36) = v279;
                      }
                      MiPWindowFlags = GetMiPWindowFlags(ThreadDesktopWindow, v279);
                      SetMiPWindowFlags(ThreadDesktopWindow, MiPWindowFlags & 0xFFFFFFFFFFFFFFFEuLL);
                      if ( ((DWORD2(v417) - 578) & 0xFFFFFFFB) != 0 )
                      {
                        if ( ((DWORD2(v417) - 579) & 0xFFFFFFFB) == 0 )
                          **(_DWORD **)(a1 + 1512) &= ~8u;
                      }
                      else
                      {
                        v281 = 0;
                        if ( DWORD2(v417) == 578 )
                          v281 = 8;
                        **(_DWORD **)(a1 + 1512) = v281 | **(_DWORD **)(a1 + 1512) & 0xFFFFFFF7;
                      }
                    }
                    else
                    {
                      xxxSkipSysMsgEx(v270, (struct tagQMSG *)&v416, 1);
                    }
                  }
                  if ( IsPointerMessageTouchpad((struct tagTHREADINFO *)a1, *((unsigned __int64 *)&v418 + 1), v32) )
                  {
                    if ( !v323 && !ShouldReceiveTouchpadMessages((const struct tagTHREADINFO *)a1, v417, v282, v283) )
                      xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v416, 1);
                    if ( v321[0] == 595 )
                      v329 = (void *)-1LL;
                  }
                  goto LABEL_346;
                }
                EtwTraceBeginPointerMessageRetrieve(NextSysMsg, (unsigned __int16)v418, v59);
                v455[0] = *(_OWORD *)NextSysMsg;
                v455[1] = *((_OWORD *)NextSysMsg + 1);
                v455[2] = *((_OWORD *)NextSysMsg + 2);
                v455[3] = *((_OWORD *)NextSysMsg + 3);
                v455[4] = *((_OWORD *)NextSysMsg + 4);
                v455[5] = *((_OWORD *)NextSysMsg + 5);
                v455[6] = *((_OWORD *)NextSysMsg + 6);
                v455[7] = *((_OWORD *)NextSysMsg + 7);
                v455[8] = *((_OWORD *)NextSysMsg + 8);
                v455[9] = *((_OWORD *)NextSysMsg + 9);
                v456 = *((_QWORD *)NextSysMsg + 20);
                v272 = xxxRetrievePointerInputMessage(
                         a1,
                         *(__int64 *)v346,
                         v129,
                         a5,
                         1,
                         0,
                         &v323,
                         NextSysMsg,
                         (__int64 *)&ThreadDesktopWindow,
                         v321,
                         &v330,
                         (unsigned __int64 *)&v329,
                         &v331,
                         v344);
                InputTraceLogging::Pointer::RetrieveMessage((__int64)v455, 0LL, v272, v273);
                EtwTraceEndPointerMessageRetrieve(v455, (unsigned __int16)v418, DWORD2(v417));
                v274 = ThreadDesktopWindow;
                if ( ThreadDesktopWindow )
                  Win32HM_ExchangeThreadLock<1>((__int64)ThreadDesktopWindow, (__int64)v358);
                v275 = v272 - 1;
                if ( !v275 )
                  goto LABEL_752;
                v276 = v275 - 1;
                if ( !v276 )
                {
                  if ( v331 )
                  {
                    v345 = (struct _W32THREAD *)*((_QWORD *)ThreadDesktopWindow + 2);
                    Win32RawLockedW32Thread::Exchange((Win32RawLockedW32Thread *)v391, v345);
                  }
                  goto LABEL_827;
                }
                v277 = v276 - 1;
                if ( v277 )
                {
                  *v344 = 0LL;
                  if ( v277 == 1 )
                    goto LABEL_33;
                }
                else
                {
                  xxxDefPointerProc((__int64)v274, DWORD2(v417), v418, *((unsigned __int64 *)&v418 + 1));
                  *v344 = 0LL;
                }
                goto LABEL_276;
              }
              v151 = DWORD2(v417) - 744;
              v150 = DWORD2(v417) == 744;
            }
            if ( v150 )
              goto LABEL_784;
            v152 = v151 - 1;
            if ( !v152 )
              goto LABEL_784;
            v153 = v152 - 1;
            if ( !v153 || (unsigned int)(v153 - 1) < 2 )
              goto LABEL_784;
            goto LABEL_490;
          }
          if ( DWORD2(v417) == 586 )
            goto LABEL_413;
          if ( DWORD2(v417) <= 0x11B )
            break;
          switch ( DWORD2(v417) )
          {
            case 0x20A:
            case 0x20E:
              if ( (_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 528), 0, 0) & 0x400) != 0
                && (int)CheckProcessForeground((struct tagTHREADINFO *)a1) < 0 )
              {
                goto LABEL_827;
              }
              if ( (unsigned int)IsInsideMenuLoop(a1) )
                goto LABEL_276;
              if ( (DWORD1(v422) & 0x100000) != 0 )
              {
                v132 = *(struct tagWND **)(*(_QWORD *)(a1 + 472) + 120LL);
                ThreadDesktopWindow = v132;
              }
              else
              {
                if ( !ThreadDesktopWindow || (v133 = 1, !IsCompositionInputWindowForHitTest(ThreadDesktopWindow, v131)) )
                  v133 = 0;
                if ( v133 )
                {
                  if ( (unsigned int)CoreWindowProp::IsCompositeAppOrSelfDisabled(ThreadDesktopWindow, v131) )
                    goto LABEL_276;
                }
                else
                {
                  ThreadDesktopWindow = (struct tagWND *)GetThreadDesktopWindow(0LL, v131);
                }
                Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(v402, (__int64)ThreadDesktopWindow);
                v134 = xxxDCEWindowHitTest(
                         ThreadDesktopWindow,
                         512,
                         v418,
                         *((__int64 *)&v418 + 1),
                         (struct tagPOINT)v421,
                         (__int64)&v332,
                         4 * (unsigned int)v133 + 9);
                LOBYTE(v135) = 1;
                ThreadDesktopWindow = (struct tagWND *)HMValidateHandleNoSecure((__int64)v134, v135);
                LOBYTE(v136) = 1;
                v137 = (struct tagWND *)HMValidateHandleNoSecure((__int64)v134, v136);
                InputTraceLogging::Mouse::SecondaryHitTest(
                  (const struct tagQMSG *)&v416,
                  (const struct tagPOINT *)&v421,
                  v137);
                Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)v402, v138);
                v132 = ThreadDesktopWindow;
              }
              if ( !v132 )
                goto LABEL_276;
              Win32HM_ExchangeThreadLock<1>((__int64)v132, (__int64)v358);
              v139 = *((_QWORD *)ThreadDesktopWindow + 2);
              v331 = v139 != v357;
              if ( v139 != v359 )
              {
                v140 = *((_QWORD *)ThreadDesktopWindow + 2);
                if ( *(_QWORD *)(v140 + 472) != *(_QWORD *)(a1 + 472) )
                  goto LABEL_276;
                if ( !v356 )
                {
                  v356 = (struct _W32THREAD *)*((_QWORD *)ThreadDesktopWindow + 2);
                  Win32RawLockedW32Thread::Exchange((Win32RawLockedW32Thread *)v387, (struct _W32THREAD *)v140);
                }
              }
              v129 = v333;
              v141 = MiPCheckMsgFilter(NextSysMsg, v321[0], (unsigned int)v333, a5);
              v29 = v326;
              LOBYTE(v30) = v325;
              if ( v141 )
              {
                v142 = CheckPwndFilter((__int64)ThreadDesktopWindow, *(__int64 *)v346);
                LOBYTE(v30) = v325;
                if ( v142 )
                {
                  if ( v331 )
                    goto LABEL_827;
                  if ( NextSysMsg && (unsigned int)IsMiPActive(a1, (__int64)NextSysMsg) )
                  {
                    if ( (*((_DWORD *)NextSysMsg + 25) & 0x400) != 0 )
                    {
                      memset_0(v451, 0, 0xA8uLL);
                      if ( !(unsigned int)Feature_MiPTransform__private_IsEnabledDeviceUsageNoInline()
                        && !*((_QWORD *)ThreadDesktopWindow + 34) )
                      {
                        *((_DWORD *)NextSysMsg + 25) &= ~0x1000u;
                      }
                      if ( ShouldGenerateMipMessage((struct tagTHREADINFO *)a1, NextSysMsg, ThreadDesktopWindow)
                        && (unsigned int)GeneratePointerMessageFromMouse(
                                           (struct tagQMSG *)v451,
                                           v321[0],
                                           NextSysMsg,
                                           ThreadDesktopWindow,
                                           v143) )
                      {
                        v416 = v451[0];
                        v417 = v451[1];
                        v418 = v451[2];
                        v419 = v451[3];
                        v420 = v451[4];
                        v421 = v451[5];
                        v422 = v451[6];
                        v423 = v451[7];
                        v424 = v451[8];
                        v425 = v451[9];
                        v426 = v452;
                        v32 = 1;
                        v338 = 1;
                        if ( v323 )
                          *((_DWORD *)NextSysMsg + 25) &= ~0x400u;
                        goto LABEL_748;
                      }
                      if ( v323 )
                      {
                        *((_DWORD *)NextSysMsg + 25) &= ~0x400u;
                        goto LABEL_460;
                      }
LABEL_462:
                      MouseKeyFlags = GetMouseKeyFlags(*(_QWORD *)(a1 + 472));
                      v330 = v418 | MouseKeyFlags;
                      v329 = (void *)*((_QWORD *)&v418 + 1);
                      v328.x = SWORD4(v418);
                      v328.y = SWORD5(v418);
                      PhysicalToLogicalDPIPointWithHitTest(&v328, &v328, 0LL, ThreadDesktopWindow);
                      v329 = (void *)((LOWORD(v328.y) << 16) | LOWORD(v328.x));
                      *(struct tagPOINT *)((char *)&v419 + 4) = v328;
                      v427[0] = (__int64)v328;
                      if ( ThreadDesktopWindow )
                        v427[1] = *(_QWORD *)ThreadDesktopWindow;
                      else
                        v427[1] = 0LL;
                      LODWORD(v428) = 0;
                      *((_QWORD *)&v428 + 1) = *((_QWORD *)&v420 + 1);
                      LODWORD(v429) = v418;
                      if ( !v323 || (v339 = 1, !(unsigned int)xxxCallCtfHook(7LL, 0LL, v321[0], (__int128 *)v427)) )
                      {
                        if ( ((*(_DWORD *)(a1 + 720) | *(_DWORD *)(**(_QWORD **)(a1 + 504) + 16LL)) & 0x100) == 0
                          || (v339 = 1, !xxxCallMouseHook(v321[0], (__int64)v427, v323)) )
                        {
                          if ( (unsigned int)((__int64 (*)(void))PsGetWin32KFilterSet)() != 5
                            || (v149 = *((_QWORD *)PtiCurrent(v148, v147) + 65),
                                v335 = 0,
                                !(v335 = *(_QWORD *)(v149 + 248) != 0LL))
                            || !xxxClientCallLocalMouseHooks(v321[0], (__int64)v427, v323) )
                          {
                            if ( !v339
                              || !v323
                              || ((*(_BYTE *)(a1 + 720) | *(_BYTE *)(**(_QWORD **)(a1 + 504) + 16LL)) & 0x40) == 0 )
                            {
                              goto LABEL_346;
                            }
                            v114 = v321[0];
                            v113 = v427;
                            v115 = 6LL;
                            goto LABEL_345;
                          }
                        }
                      }
LABEL_276:
                      v98 = v324;
                      goto LABEL_277;
                    }
                    if ( !v323 )
                      goto LABEL_462;
                    if ( (unsigned int)IsMiPMouseMessage(*((unsigned int *)NextSysMsg + 6)) )
                    {
                      if ( (unsigned int)IsGenuineMouseInput((char *)NextSysMsg + 124) )
                      {
                        v144 = *(_DWORD **)(a1 + 1512);
                        if ( v144 )
                        {
                          if ( (*v144 & 2) == 0 && (*v144 & 4) == 0 )
                            goto LABEL_683;
                        }
                      }
                      v145 = *(_DWORD **)(a1 + 1512);
                      if ( v145 )
                        *v145 &= ~2u;
                    }
                  }
LABEL_460:
                  if ( v323 )
                    xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v416, 1);
                  goto LABEL_462;
                }
              }
              break;
            case 0x238:
              goto LABEL_127;
            case 0x240:
LABEL_122:
              if ( !ThreadDesktopWindow )
                goto LABEL_276;
              v60 = (char *)*((_QWORD *)ThreadDesktopWindow + 5);
              if ( v60[20] < 0 )
                goto LABEL_276;
              if ( v60[19] < 0 )
                goto LABEL_276;
              v61 = v60[31];
              if ( (v61 & 8) != 0 || (v61 & 0x10) == 0 )
                goto LABEL_276;
              goto LABEL_127;
            case 0x245:
            case 0x246:
            case 0x247:
            case 0x249:
              goto LABEL_413;
            default:
LABEL_490:
              v328.x = SWORD4(v418);
              v328.y = SWORD5(v418);
              v332 = 1;
              if ( (BYTE4(v422) & 0x20) == 0 && (DWORD1(v422) & 0x8000000) == 0
                || !ThreadDesktopWindow
                || (v44 = *(_DWORD *)(*((_QWORD *)ThreadDesktopWindow + 5) + 288LL) >> 8,
                    (((unsigned __int16)v44 ^ (unsigned __int16)(*(_DWORD *)(*(_QWORD *)(*((_QWORD *)ThreadDesktopWindow
                                                                                         + 2)
                                                                                       + 464LL)
                                                                           + 268LL) >> 8)) & 0x1FF) != 0) )
              {
                v154 = (int)ThreadDesktopWindow;
                if ( !ThreadDesktopWindow || (v155 = 1, !IsCompositionInputWindowForHitTest(ThreadDesktopWindow, v44)) )
                  v155 = 0;
                v348 = v155;
                v156 = *(_QWORD *)(a1 + 472);
                v157 = *(HWND **)(v156 + 112);
                if ( v157 )
                {
                  ThreadDesktopWindow = *(struct tagWND **)(v156 + 112);
                  InputTraceLogging::Mouse::RedirectForCapture((const struct tagQMSG *)&v416, *v157, v154, v22);
                  if ( !(unsigned int)Feature_MiPTransform__private_IsEnabledDeviceUsageNoInline() )
                  {
                    if ( v155 )
                    {
                      if ( !IsCompositionInputWindowForHitTest(ThreadDesktopWindow, v174) )
                      {
                        DWORD1(v422) &= ~0x1000u;
                        if ( NextSysMsg )
                        {
                          if ( (unsigned int)IsMiPActive(a1, (__int64)NextSysMsg) )
                            *((_DWORD *)NextSysMsg + 25) &= ~0x1000u;
                        }
                      }
                    }
                  }
                }
                else
                {
                  Win32HMOptionalThreadLockAlways<tagMENU>::Win32HMOptionalThreadLockAlways<tagMENU>(v385);
                  if ( v155 )
                  {
                    v160 = ThreadDesktopWindow;
                  }
                  else
                  {
                    v160 = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v159, v158)
                                                                                 + 18648)
                                                                     + 496LL)
                                                         + 8LL)
                                             + 24LL);
                    Win32HM_LockIntoThread<1>(a1, (__int64)v160, (__int64 *)v385);
                  }
                  if ( (unsigned int)IsThreadDesktopComposed((const struct tagTHREADINFO *)a1) )
                  {
                    v372[0] = v162;
                    v372[1] = 0;
                    v373 = v418;
                    v374 = &v332;
                    v375 = v161;
                    v376 = 0;
                    v377 = 0;
                    v378 = 0;
                    v379 = (char *)&v421 + 8;
                    v380 = 0;
                    v381 = 0;
                    v382 = 0;
                    v383 = 0;
                    v384 = 0LL;
                    v164 = xxxDCEWindowHitTestIndirect(
                             v160,
                             (struct tagPOINT)v421,
                             0,
                             (struct tagDCE_WINDOW_HIT_TEST_ARGS *)v372);
                    if ( v164 && v380 )
                    {
                      *((_QWORD *)&v418 + 1) = *((_QWORD *)&v373 + 1);
                      DWORD1(v419) = SWORD4(v373);
                      DWORD2(v419) = SWORD5(v373);
                      v328 = *(struct tagPOINT *)((char *)&v419 + 4);
                    }
                  }
                  else
                  {
                    v164 = xxxWindowHitTest((__int64)v160, v328, &v332, v161);
                  }
                  LOBYTE(v163) = 1;
                  v165 = (struct tagWND *)HMValidateHandleNoSecure(v164, v163);
                  InputTraceLogging::Mouse::SecondaryHitTest((const struct tagQMSG *)&v416, &v328, v165);
                  if ( !v155 )
                    Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(v385, v166);
                  LOBYTE(v166) = 1;
                  ThreadDesktopWindow = (struct tagWND *)HMValidateHandleNoSecure(v164, v166);
                  if ( !ThreadDesktopWindow )
                  {
                    v168 = *(_QWORD *)(*(_QWORD *)(a1 + 496) + 8LL);
                    ThreadDesktopWindow = *(struct tagWND **)(v168 + 24);
                    if ( !ThreadDesktopWindow )
                      ThreadDesktopWindow = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v168, v167)
                                                                                                  + 18648)
                                                                                      + 496LL)
                                                                          + 8LL)
                                                              + 24LL);
                  }
                  v169 = 0;
                  if ( (unsigned int)IsMiPActive(a1, 0LL) )
                  {
                    v171 = *(_QWORD *)(*(_QWORD *)(a1 + 472) + 464LL);
                    if ( v171 )
                    {
                      v172 = (struct tagWND *)ValidateHwnd(v171);
                      if ( v172 )
                      {
                        v170 = *((_QWORD *)v172 + 2);
                        v173 = *(_QWORD *)(a1 + 472);
                        if ( *(_QWORD *)(v170 + 472) == v173 || *(_QWORD *)(v170 + 464) == *(_QWORD *)(a1 + 464) )
                        {
                          ThreadDesktopWindow = v172;
                          v332 = 1;
                          *(_DWORD *)(v173 + 156) = 0;
                          v169 = 1;
                        }
                      }
                    }
                  }
                  if ( !v169 )
                    *(_DWORD *)(*(_QWORD *)(v357 + 472) + 156LL) = v332 != 1;
                  Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(v385, v170);
                }
                if ( ThreadDesktopWindow == *(struct tagWND **)(*(_QWORD *)(a1 + 472) + 112LL) )
                {
                  v175 = PtiMouseFromQ(*(_QWORD *)(*((_QWORD *)ThreadDesktopWindow + 2) + 472LL));
                  if ( (((unsigned __int16)(v177 >> 8) ^ (unsigned __int16)(*(_DWORD *)(*(_QWORD *)(v175 + 464) + 268LL) >> 8)) & 0x1FF) != 0
                    || (unsigned int)IsOleDragDropCaptureWindow(v176) )
                  {
                    v328 = (struct tagPOINT)v421;
                    PhysicalToLogicalInPlacePointWithParent(ThreadDesktopWindow, (int *)&v328, (int *)&v421 + 2);
                    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
                      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
                      || (v178 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
                    {
                      v178 = 0;
                    }
                    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
                      || (v179 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
                    {
                      v179 = 0;
                    }
                    if ( v178 || v179 )
                    {
                      v180 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
                      LOBYTE(v181) = v179;
                      LOBYTE(v182) = v178;
                      WPP_RECORDER_AND_TRACE_SF_dddd(
                        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                        v182,
                        v181,
                        *(_QWORD *)(v180 + 69160),
                        5,
                        20,
                        34,
                        (__int64)&WPP_62b8cb8514ba365a29e38d0f8208fd40_Traceguids,
                        v421,
                        SBYTE4(v421),
                        v328.x,
                        v328.y);
                    }
                    v329 = (void *)((LOWORD(v328.y) << 16) | LOWORD(v328.x));
                    *(struct tagPOINT *)((char *)&v419 + 4) = v328;
                    NextSysMsg = v343;
                  }
                }
              }
              Win32HM_ExchangeThreadLock<1>((__int64)ThreadDesktopWindow, (__int64)v358);
              if ( (unsigned int)CheckCrossThreadInput(
                                   (struct tagTHREADINFO **)ThreadDesktopWindow,
                                   NextSysMsg,
                                   &v331,
                                   &v323,
                                   v344) )
                goto LABEL_827;
              if ( v331 )
              {
                v185 = *((_QWORD *)ThreadDesktopWindow + 2);
                if ( *(_QWORD *)(v185 + 472) != *(_QWORD *)(a1 + 472) )
                  goto LABEL_543;
                if ( !v334 )
                {
                  v334 = *((_QWORD *)ThreadDesktopWindow + 2);
                  Win32RawLockedW32Thread::Exchange((Win32RawLockedW32Thread *)v388, (struct _W32THREAD *)v185);
                }
              }
              else if ( (WORD2(v422) & 0x800) != 0
                     && !UIPrivilegeIsolation::CheckAccess(
                           (UIPrivilegeIsolation *)&v423,
                           (const struct tagUIPI_INFO *)(*(_QWORD *)(*((_QWORD *)ThreadDesktopWindow + 2) + 464LL)
                                                       + 864LL),
                           v184) )
              {
                EtwTraceUIPIMsgError(
                  0LL,
                  *(_QWORD *)(*((_QWORD *)ThreadDesktopWindow + 2) + 464LL),
                  v321[0],
                  v418,
                  *((_QWORD *)&v418 + 1));
LABEL_543:
                v186 = W32GetUserSessionState(v185, v183);
                zzzSetCursor(*(struct tagCURSOR **)(v186 + 21880), v187);
                goto LABEL_276;
              }
              v188 = (unsigned __int64)v328;
              v189 = *(_QWORD *)(*((_QWORD *)ThreadDesktopWindow + 2) + 472LL);
              v190 = *(_DWORD *)(v189 + 156);
              if ( v190 && (v191 = (struct tagWND *)(unsigned int)(v190 - 2), (_DWORD)v191) )
              {
                if ( (_DWORD)v191 != 1 )
                  goto LABEL_561;
                v192 = *((_QWORD *)ThreadDesktopWindow + 5);
                if ( (*(_BYTE *)(v192 + 26) & 0x40) != 0 )
                  v328.x = *(_DWORD *)(v192 + 96) - v328.x;
                else
                  v328.x -= *(_DWORD *)(v192 + 88);
                v189 = *(unsigned int *)(*((_QWORD *)ThreadDesktopWindow + 5) + 92LL);
              }
              else
              {
                v191 = ThreadDesktopWindow;
                v193 = *((_QWORD *)ThreadDesktopWindow + 5);
                if ( (*(_BYTE *)(v193 + 26) & 0x40) != 0 )
                  v328.x = *(_DWORD *)(v193 + 112) - v328.x;
                else
                  v328.x -= *(_DWORD *)(v193 + 104);
                v189 = *(unsigned int *)(*((_QWORD *)ThreadDesktopWindow + 5) + 108LL);
              }
              v328.y -= v189;
LABEL_561:
              if ( !v331 && *(_QWORD *)(a1 + 472) == *(_QWORD *)(W32GetUserSessionState(v189, v191) + 19176) )
              {
                v197 = *(_QWORD *)(a1 + 496);
                v198 = *(_QWORD *)(v197 + 192) != (_QWORD)ThreadDesktopWindow;
                if ( (unsigned int)Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline(
                                     v197,
                                     v194,
                                     v195,
                                     v196)
                  && Scrollbar::NonClient::UserModeSupportsUserModeScrollBars(v199) )
                {
                  NCHit = xxxFindNCHitEx(ThreadDesktopWindow, v332, v328);
                }
                else
                {
                  NCHit = FindNCHitEx(ThreadDesktopWindow, v332, v328);
                }
                if ( v321[0] != 512 || v198 || *(_DWORD *)(*(_QWORD *)(a1 + 496) + 200LL) != NCHit )
                  xxxTrackMouseMove(ThreadDesktopWindow, NCHit, v321[0], (__int64)&v423 + 12);
                if ( !v198 )
                {
                  v201 = *(_QWORD *)(a1 + 496);
                  if ( (*(_DWORD *)(v201 + 48) & 0x40) != 0
                    && (v321[0] != 512 || !PtInRect((_DWORD *)(v201 + 204), v188)) )
                  {
                    ResetMouseHover((struct tagDESKTOP *)v201, (struct tagPOINT)v188);
                  }
                }
                NextSysMsg = v343;
              }
              v202 = CheckPwndFilter((__int64)ThreadDesktopWindow, *(__int64 *)v346);
              v29 = v326;
              LOBYTE(v30) = v325;
              if ( v202 )
              {
                v204 = 0;
                LODWORD(v350) = 0;
                if ( v321[0] == 513 )
                {
                  v67 = (unsigned __int8)IsMessageInputSourceTouch(&v416, v203, v325) == 0;
                  v205 = *(_QWORD *)(a1 + 472);
                  if ( v67 )
                    *(_DWORD *)(v205 + 412) &= ~0x800000u;
                  else
                    *(_DWORD *)(v205 + 412) |= 0x800000u;
                  v206 = IsMessageInputSourcePen(&v416);
                  v207 = *(_QWORD *)(v357 + 472);
                  if ( v206 )
                    *(_DWORD *)(v207 + 412) |= 0x1000000u;
                  else
                    *(_DWORD *)(v207 + 412) &= ~0x1000000u;
LABEL_593:
                  if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)ThreadDesktopWindow + 17) + 8LL) + 8LL) & 8) != 0
                    || *(_DWORD *)(*(_QWORD *)(a1 + 472) + 156LL) == 1
                    || (unsigned int)IsMenuStarted(a1) )
                  {
                    v204 = 1;
                    LODWORD(v350) = 1;
                    v208 = *(_QWORD *)(a1 + 472);
                    if ( (unsigned int)v419 <= *(_DWORD *)(v208 + 168)
                      && !*(_DWORD *)(W32GetUserSessionState(v208, v203) + 16272) )
                    {
                      v209 = ThreadDesktopWindow ? *(_QWORD *)ThreadDesktopWindow : 0LL;
                      v210 = *(_QWORD *)(a1 + 472);
                      if ( v209 == *(_QWORD *)(v210 + 176)
                        && v321[0] == *(_DWORD *)(v210 + 160)
                        && (v321[0] != 523 || WORD1(v418) == *(_WORD *)(v210 + 164)) )
                      {
                        v211 = *(int *)(*(_QWORD *)(W32GetUserSessionState(v210, v203) + 19872) + 2040LL);
                        v366 = *(_DWORD *)(*(_QWORD *)(a1 + 472) + 184LL) - (((int)v211 - HIDWORD(v211)) >> 1);
                        v212 = *(int *)(*(_QWORD *)(W32GetUserSessionState(v366, HIDWORD(v211)) + 19872) + 2044LL);
                        v367 = *(_DWORD *)(*(_QWORD *)(a1 + 472) + 188LL) - (((int)v212 - HIDWORD(v212)) >> 1);
                        v213 = W32GetUserSessionState(v367, HIDWORD(v212));
                        v214 = *(_QWORD *)(a1 + 472);
                        v215 = *(int *)(*(_QWORD *)(v213 + 19872) + 2040LL) >> 31;
                        v368 = *(_DWORD *)(v214 + 184) + *(_DWORD *)(*(_QWORD *)(v213 + 19872) + 2040LL) / 2;
                        v369 = *(_DWORD *)(*(_QWORD *)(a1 + 472) + 188LL)
                             + *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v214, v215) + 19872) + 2044LL) / 2;
                        if ( PtInRect(&v366, *(unsigned __int64 *)((char *)&v419 + 4)) )
                        {
                          v321[0] += 2;
                          v204 = 2;
                          LODWORD(v350) = 2;
                        }
                      }
                    }
                  }
                  goto LABEL_607;
                }
                if ( v321[0] != 514 )
                {
                  if ( v321[0] == 516 )
                    goto LABEL_593;
                  if ( v321[0] != 517 )
                  {
                    if ( v321[0] == 519 )
                      goto LABEL_593;
                    if ( v321[0] != 520 )
                    {
                      if ( v321[0] != 523 )
                      {
                        if ( v321[0] != 524 )
                          goto LABEL_617;
                        goto LABEL_607;
                      }
                      goto LABEL_593;
                    }
                  }
                }
LABEL_607:
                v216 = *(_QWORD *)(a1 + 472);
                v217 = *(_DWORD *)(v216 + 412);
                if ( (v217 & 8) != 0 )
                  *(_DWORD *)(v216 + 412) = v217 | 4;
                if ( v321[0] - 514 <= 0xA )
                {
                  v218 = 1097;
                  if ( _bittest(&v218, v321[0] - 514) )
                  {
                    if ( *(_DWORD *)(*(_QWORD *)(a1 + 472) + 168LL) && ((HIDWORD(v423) - 4) & 0xFFFFFFFB) == 0 )
                    {
                      if ( HIDWORD(v423) == 4 )
                        TouchTimeFromCPLValue = GetTouchTimeFromCPLValue(300LL, 180LL, 5LL, 1LL);
                      else
                        TouchTimeFromCPLValue = GetPenDoubleClickTime(HIDWORD(v423), v203);
                      *(_DWORD *)(*(_QWORD *)(a1 + 472) + 168LL) = v426 + TouchTimeFromCPLValue;
                    }
                  }
                }
LABEL_617:
                if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)ThreadDesktopWindow + 2) + 472LL) + 156LL) == 1 )
                {
                  v321[0] -= 352;
                  v330 = (unsigned int)v332;
                }
                v220 = MiPCheckMsgFilter(NextSysMsg, v321[0], (unsigned int)v333, a5);
                v30 = v325;
                if ( v220 )
                {
                  if ( v331 )
                    goto LABEL_827;
                  if ( v321[0] - 512 > 0xE
                    || (_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 528), 0, 0) & 0x8000) == 0 )
                  {
                    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 528), 0, 0) & 0x100000) != 0 )
                    {
                      _InterlockedAnd((volatile signed __int32 *)(a1 + 528), 0xFFEFFFFF);
                      xxxWindowEvent(0x800Bu, 0LL, -9, 0, 1);
                    }
                    v427[0] = *(_QWORD *)((char *)&v419 + 4);
                    if ( ThreadDesktopWindow )
                      v427[1] = *(_QWORD *)ThreadDesktopWindow;
                    else
                      v427[1] = 0LL;
                    LODWORD(v428) = v332;
                    *((_QWORD *)&v428 + 1) = *((_QWORD *)&v420 + 1);
                    LODWORD(v429) = v418;
                    if ( v323 )
                    {
                      if ( v321[0] != 512 && v321[0] != 160 )
                      {
                        v339 = 1;
                        if ( (unsigned int)xxxCallCtfHook(7LL, 0LL, v321[0], (__int128 *)v427) )
                          goto LABEL_276;
                      }
                    }
                    v222 = **(_QWORD **)(a1 + 504);
                    if ( ((*(_DWORD *)(a1 + 720) | *(_DWORD *)(v222 + 16)) & 0x100) != 0 )
                    {
                      v339 = 1;
                      if ( xxxCallMouseHook(v321[0], (__int64)v427, v323) )
                        goto LABEL_276;
                    }
                    if ( (unsigned int)PsGetWin32KFilterSet(v222, v221, v30) == 5 )
                    {
                      v225 = *((_QWORD *)PtiCurrent(v224, v223) + 65);
                      v336 = 0;
                      v336 = *(_QWORD *)(v225 + 248) != 0LL;
                      if ( v336 )
                      {
                        if ( xxxClientCallLocalMouseHooks(v321[0], (__int64)v427, v323) )
                          goto LABEL_276;
                      }
                    }
                    if ( (*(_DWORD *)(a1 + 1360) & 0x2000LL) == 0 && ((v332 + 2) & 0xFFFFFFFD) == 0 )
                    {
                      CompositeAppFrameWindowOrSelf = 0LL;
                      if ( v348 )
                      {
                        if ( (unsigned int)IsIndependentInputWindow(ThreadDesktopWindow) )
                          CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(CompositionInputWindowUIOwner);
                        TopLevelWindow = (const struct tagWND *)GetTopLevelWindow((__int64)CompositionInputWindowUIOwner);
                        CompositeAppFrameWindowOrSelf = (struct tagTHREADINFO **)TopLevelWindow;
                        if ( TopLevelWindow )
                        {
                          CompositeAppFrameWindowOrSelf = (struct tagTHREADINFO **)CoreWindowProp::GetCompositeAppFrameWindowOrSelf(
                                                                                     TopLevelWindow,
                                                                                     v229);
                          Win32HMOptionalThreadLock<tagWND>::Win32HMOptionalThreadLock<tagWND>(
                            v401,
                            a1,
                            (__int64)CompositeAppFrameWindowOrSelf);
                          v230 = 0LL;
                          if ( CompositeAppFrameWindowOrSelf )
                            v230 = *CompositeAppFrameWindowOrSelf;
                          xxxSendTransformableMessageTimeout(
                            CompositeAppFrameWindowOrSelf,
                            32LL,
                            (unsigned __int64)v230,
                            (struct tagDRAWITEMSTRUCT *)((unsigned __int16)v332 | (WORD4(v417) << 16)),
                            0,
                            0,
                            0LL,
                            1,
                            1);
                          Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)v401, v231);
                        }
                      }
                      if ( !CompositeAppFrameWindowOrSelf )
                      {
                        if ( ThreadDesktopWindow )
                          v232 = *(_QWORD *)ThreadDesktopWindow;
                        else
                          v232 = 0LL;
                        xxxSendTransformableMessageTimeout(
                          (struct tagTHREADINFO **)ThreadDesktopWindow,
                          32LL,
                          v232,
                          (struct tagDRAWITEMSTRUCT *)((unsigned __int16)v332 | (WORD4(v417) << 16)),
                          0,
                          0,
                          0LL,
                          1,
                          1);
                      }
                      if ( *(struct tagQMSG **)(*(_QWORD *)(a1 + 472) + 88LL) == NextSysMsg
                        && NextSysMsg
                        && (unsigned int)IsMiPActive(a1, (__int64)NextSysMsg)
                        && (*((_DWORD *)NextSysMsg + 25) & 0x400) != 0
                        && (unsigned int)IsGenuineMouseInput((char *)NextSysMsg + 124)
                        && (unsigned int)IsMiPMouseMessage(*((unsigned int *)NextSysMsg + 6)) )
                      {
                        memset_0(v453, 0, 0xA8uLL);
                        GeneratePointerMessageFromMouse(
                          (struct tagQMSG *)v453,
                          v321[0],
                          NextSysMsg,
                          ThreadDesktopWindow,
                          v323);
                        SetMiPPromotion(*((struct tagTHREADINFO **)ThreadDesktopWindow + 2), v454);
                      }
                      goto LABEL_276;
                    }
                    if ( *(struct tagQMSG **)(*(_QWORD *)(a1 + 472) + 88LL) != NextSysMsg )
                      goto LABEL_827;
                    memset_0(&v410, 0, 0x60uLL);
                    v234 = v410;
                    v394 = v410;
                    v235 = v411;
                    v395 = v411;
                    v236 = v412;
                    v396 = v412;
                    v237 = v413;
                    v397 = v413;
                    v350 = v414;
                    v398 = v414;
                    v390 = v415;
                    v399 = v415;
                    v238 = 0;
                    v430 = v416;
                    v431 = v417;
                    v432 = v418;
                    v433 = v419;
                    v434 = v420;
                    v435 = v421;
                    v436 = v422;
                    v239 = v438;
                    v437 = v423;
                    v438[0] = v424;
                    v438[1] = v425;
                    v439 = v426;
                    if ( NextSysMsg && (unsigned int)IsMiPActive(a1, (__int64)NextSysMsg) )
                    {
                      DWORD2(v431) = v321[0];
                      *(_QWORD *)&v432 = v330;
                      if ( (*((_DWORD *)NextSysMsg + 25) & 0x400) != 0 )
                      {
                        memset_0(&v440, 0, 0xA8uLL);
                        if ( ShouldGenerateMipMessage((struct tagTHREADINFO *)a1, NextSysMsg, ThreadDesktopWindow) )
                        {
                          v240 = *(_QWORD *)(a1 + 1512);
                          if ( v240 && (*(_DWORD *)v240 & 1) != 0 )
                          {
                            v234 = *(_OWORD *)(v240 + 24);
                            v394 = v234;
                            v235 = *(_OWORD *)(v240 + 40);
                            v395 = v235;
                            v236 = *(_OWORD *)(v240 + 56);
                            v396 = v236;
                            v237 = *(_OWORD *)(v240 + 72);
                            v397 = v237;
                            v350 = *(_OWORD *)(v240 + 88);
                            v398 = v350;
                            v390 = *(_OWORD *)(v240 + 104);
                            v399 = v390;
                            v238 = 1;
                          }
                          if ( (unsigned int)GeneratePointerMessageFromMouse(
                                               (struct tagQMSG *)&v440,
                                               v321[0],
                                               NextSysMsg,
                                               ThreadDesktopWindow,
                                               v323) )
                          {
                            v416 = v440;
                            v417 = v441;
                            v418 = v442;
                            v419 = v443;
                            v420 = v444;
                            v421 = v445;
                            v422 = v446;
                            v239 = &v424;
                            v423 = v447;
                            v424 = v448;
                            v425 = v449;
                            v426 = v450;
                            v338 = 1;
                            v241 = DWORD2(v441);
                            if ( DWORD2(v441) == 582 && IsMiPEnabledForWindow((__int64)ThreadDesktopWindow) )
                            {
                              if ( v239 )
                                v239 = *(__int128 **)ThreadDesktopWindow;
                              else
                                v239 = 0LL;
                              *(_QWORD *)(*(_QWORD *)(a1 + 472) + 464LL) = v239;
                            }
                            else if ( ((v241 - 579) & 0xFFFFFFFB) == 0 )
                            {
                              *(_QWORD *)(*(_QWORD *)(a1 + 472) + 464LL) = 0LL;
                            }
                          }
                        }
                        if ( v323 )
                        {
                          *((_DWORD *)NextSysMsg + 25) &= ~0x400u;
                          goto LABEL_686;
                        }
LABEL_725:
                        v32 = v338;
                        goto LABEL_726;
                      }
                      if ( !v323 )
                        goto LABEL_725;
                      if ( (unsigned int)IsMiPMouseMessage(*((unsigned int *)NextSysMsg + 6)) )
                      {
                        if ( (unsigned int)IsGenuineMouseInput((char *)NextSysMsg + 124) )
                        {
                          v242 = *(unsigned int **)(a1 + 1512);
                          if ( v242 )
                          {
                            v239 = (__int128 *)*v242;
                            if ( ((unsigned __int8)v239 & 2) == 0 && ((unsigned __int8)v239 & 4) == 0 )
                              goto LABEL_683;
                          }
                        }
                        v243 = *(_DWORD **)(a1 + 1512);
                        if ( v243 )
                          *v243 &= ~2u;
                      }
                    }
LABEL_686:
                    if ( !v323 )
                      goto LABEL_725;
                    v244 = W32GetUserSessionState(v239, v233);
                    if ( (DWORD2(v431) == 512 || DWORD2(v431) == 160)
                      && (ThreadDesktopWindow ? (v245 = *(_QWORD *)ThreadDesktopWindow) : (v245 = 0LL),
                          v245 != *(_QWORD *)(v244 + 16344)
                       && (unsigned int)IsGenuineMouseInput((char *)NextSysMsg + 124)) )
                    {
                      LOBYTE(v246) = 1;
                      v247 = HMValidateHandleNoSecure(*(_QWORD *)(v244 + 16344), v246);
                      v248 = (LARGE_INTEGER *)v247;
                      if ( v247
                        && (unsigned int)IsMiPActive(*(_QWORD *)(v247 + 16), 0LL)
                        && (GetMiPWindowFlags((struct tagWND *)v248, v249) & 1) == 0 )
                      {
                        QuadPart = (struct tagQ **)v248[2].QuadPart;
                        if ( QuadPart == (struct tagQ **)a1 )
                        {
                          v251 = *(_QWORD *)(a1 + 1512);
                          v252 = *(_OWORD *)(v251 + 24);
                          v253 = *(_OWORD *)(v251 + 40);
                          v254 = *(_OWORD *)(v251 + 56);
                          v255 = *(_OWORD *)(v251 + 72);
                          v256 = *(_OWORD *)(v251 + 88);
                          v257 = *(_OWORD *)(v251 + 104);
                          if ( v238 )
                          {
                            *(_OWORD *)(v251 + 24) = v234;
                            *(_OWORD *)(v251 + 40) = v235;
                            *(_OWORD *)(v251 + 56) = v236;
                            *(_OWORD *)(v251 + 72) = v237;
                            *(_OWORD *)(v251 + 88) = v350;
                            *(_OWORD *)(v251 + 104) = v390;
                            v251 = *(_QWORD *)(a1 + 1512);
                          }
                          v405 = *v248;
                          v406 = 586LL;
                          v258 = ((*(_DWORD *)(v251 + 36) & 0xFFFFE1F7) << 16) | 1LL;
                          v407 = v258;
                          v408 = 0LL;
                          v409 = 0LL;
                          Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(v403, (__int64)v248);
                          FindTimer((__int64)v248, 65523LL, 2u, 1, 0LL);
                          if ( IsMiPEnabledForWindow((__int64)v248) )
                            xxxSendTransformableMessageTimeout(v260, 586LL, v258, 0LL, 0, 0, 0LL, 1, 0);
                          if ( v238 )
                          {
                            v261 = *(_QWORD *)(a1 + 1512);
                            *(_OWORD *)(v261 + 24) = v252;
                            *(_OWORD *)(v261 + 40) = v253;
                            *(_OWORD *)(v261 + 56) = v254;
                            *(_OWORD *)(v261 + 72) = v255;
                            *(_OWORD *)(v261 + 88) = v256;
                            *(_OWORD *)(v261 + 104) = v257;
                          }
                          Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)v403, v259);
                          NextSysMsg = v343;
                        }
                        else
                        {
                          PostEventMessageEx(
                            (struct tagTHREADINFO *)QuadPart,
                            QuadPart[59],
                            0x15u,
                            v248,
                            0,
                            0LL,
                            0LL,
                            0LL);
                        }
                      }
                      v262 = v338;
                      if ( v338 )
                      {
                        if ( ThreadDesktopWindow )
                          v263 = *(_QWORD *)ThreadDesktopWindow;
                        else
                          v263 = 0LL;
                        *(_QWORD *)(v244 + 16344) = v263;
                      }
                      else
                      {
                        *(_QWORD *)(v244 + 16344) = 0LL;
                      }
                    }
                    else
                    {
                      v262 = v338;
                    }
                    if ( !(_DWORD)v262 )
                    {
                      v264 = v204 - 1;
                      if ( v264 )
                      {
                        if ( v264 == 1 )
                          *(_DWORD *)(*(_QWORD *)(a1 + 472) + 168LL) = 0;
                      }
                      else
                      {
                        *(_DWORD *)(*(_QWORD *)(a1 + 472) + 160LL) = DWORD2(v417);
                        v265 = (unsigned __int64)v418 >> 16;
                        *(_WORD *)(*(_QWORD *)(a1 + 472) + 164LL) = WORD1(v418);
                        v266 = W32GetUserSessionState(v265, v262);
                        *(_DWORD *)(*(_QWORD *)(a1 + 472) + 168LL) = *(_DWORD *)(v266 + 14720) + v419;
                        if ( ThreadDesktopWindow )
                          v267 = *(_QWORD *)ThreadDesktopWindow;
                        else
                          v267 = 0LL;
                        *(_QWORD *)(*(_QWORD *)(a1 + 472) + 176LL) = v267;
                        *(_QWORD *)(*(_QWORD *)(a1 + 472) + 184LL) = *(_QWORD *)((char *)&v419 + 4);
                      }
                    }
                    v268 = (const struct tagQMSG *)&v430;
                    v32 = v338;
                    if ( !v338 )
                      v268 = (const struct tagQMSG *)&v416;
                    if ( (unsigned int)xxxMouseActivate((struct tagTHREADINFO *)a1, ThreadDesktopWindow, v268, v332) == 1 )
                    {
                      v18 = 1;
                      goto LABEL_276;
                    }
LABEL_726:
                    v18 = 1;
                    if ( v323 )
                    {
                      xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v416, 1);
                      if ( v323 )
                      {
                        if ( v339 && ((*(_BYTE *)(a1 + 720) | *(_BYTE *)(**(_QWORD **)(a1 + 504) + 16LL)) & 0x40) != 0 )
                          xxxCallHook(6LL, v321[0], (__int64)v427, 5);
                      }
                    }
                    v339 = 0;
                    v329 = (void *)((LOWORD(v328.y) << 16) | LOWORD(v328.x));
                    if ( v321[0] >= 0x200 )
                      v330 = (unsigned int)GetMouseKeyFlags(*(_QWORD *)(a1 + 472));
                    if ( (v321[0] - 171 <= 2 || v321[0] - 523 <= 2) && !v32 )
                      v330 |= v418;
                    v269 = *(_QWORD *)(a1 + 648);
                    if ( v332 == 5
                      && v323
                      && v269
                      && (*(_DWORD *)(v269 + 8) & 0x100) != 0
                      && *(_QWORD *)v269
                      && (**(_DWORD **)v269 & 1) != 0 )
                    {
                      MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock(
                        (MenuStateOwnerLockxxxUnlock *)v365,
                        *(struct tagTHREADINFO ***)(a1 + 648));
                      if ( (unsigned int)xxxCallHandleMenuMessages(
                                           (_QWORD *)v269,
                                           (__int64 *)ThreadDesktopWindow,
                                           v321[0],
                                           v330,
                                           (__int64)v329) )
                      {
                        MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)v365);
                        goto LABEL_21;
                      }
                      MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)v365);
                    }
                    if ( !v32 )
                      goto LABEL_346;
                    v129 = v333;
LABEL_748:
                    v59 = DWORD2(v417);
                    goto LABEL_749;
                  }
                }
              }
              break;
          }
        }
        if ( DWORD2(v417) == 283 )
          goto LABEL_122;
        if ( DWORD2(v417) == 35 )
        {
          v330 = 0LL;
          v329 = (void *)*((_QWORD *)&v418 + 1);
          if ( !ThreadDesktopWindow || (v127 = *((_QWORD *)ThreadDesktopWindow + 2), v127 == a1) )
          {
            if ( !(unsigned int)MiPCheckMsgFilter(NextSysMsg, DWORD2(v417), (unsigned int)v333, a5) )
              goto LABEL_827;
LABEL_403:
            if ( v323 )
              xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v416, 1);
            goto LABEL_346;
          }
          if ( *(_QWORD *)(v127 + 472) == *(_QWORD *)(a1 + 472) )
          {
            v128 = v334;
            if ( !v334 )
            {
              v128 = *((_QWORD *)ThreadDesktopWindow + 2);
              Win32RawLockedW32Thread::Exchange((Win32RawLockedW32Thread *)v388, (struct _W32THREAD *)v127);
            }
            goto LABEL_828;
          }
          goto LABEL_276;
        }
        if ( DWORD2(v417) != 254 )
          break;
LABEL_127:
        v329 = (void *)*((_QWORD *)&v418 + 1);
        v330 = v418;
        if ( !ThreadDesktopWindow )
          goto LABEL_276;
        if ( (unsigned int)CheckCrossThreadInput(
                             (struct tagTHREADINFO **)ThreadDesktopWindow,
                             NextSysMsg,
                             &v331,
                             &v323,
                             v344) )
          goto LABEL_827;
        if ( v331 )
          goto LABEL_276;
        if ( !v333 && a5 == -1 )
          goto LABEL_418;
        if ( v333 <= a5 )
        {
          if ( v321[0] >= v333 )
          {
            v62 = 1;
            if ( v321[0] <= a5 )
              goto LABEL_417;
          }
LABEL_416:
          v62 = 0;
          goto LABEL_417;
        }
        if ( v321[0] >= a5 && v321[0] <= v333 )
          goto LABEL_416;
        v62 = 1;
LABEL_417:
        LOBYTE(v30) = v325;
        if ( v62 )
        {
LABEL_418:
          v130 = CheckPwndFilter((__int64)ThreadDesktopWindow, *(__int64 *)v346);
          LOBYTE(v30) = v325;
          if ( v130 )
            goto LABEL_403;
        }
      }
      if ( DWORD2(v417) == 255 )
        break;
      if ( DWORD2(v417) == 256 )
        goto LABEL_137;
      if ( DWORD2(v417) != 257 )
      {
        if ( DWORD2(v417) == 258 )
          goto LABEL_194;
        if ( DWORD2(v417) != 260 )
        {
          if ( DWORD2(v417) != 261 )
          {
            if ( DWORD2(v417) == 281 )
              goto LABEL_122;
            goto LABEL_490;
          }
          goto LABEL_170;
        }
LABEL_137:
        v347 = 1;
        if ( (_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 528), 0, 0) & 0x400) != 0
          && (int)CheckProcessForeground((struct tagTHREADINFO *)a1) < 0 )
        {
          goto LABEL_827;
        }
        v330 = (unsigned __int8)v418;
        if ( !v323 || (WORD2(v422) & 0x8000) == 0 )
        {
          if ( v330 != 18 )
            *(_DWORD *)(*(_QWORD *)(a1 + 472) + 412LL) &= 0xFFFFFFF3;
          v63 = *(_BYTE *)(*(_QWORD *)(a1 + 472) + 260LL) & 0x10;
          if ( v330 == 44 )
          {
            if ( (*(_BYTE *)(*(_QWORD *)(a1 + 472) + 260LL) & 0x10) != 0 )
            {
              if ( (*(_DWORD *)(a1 + 924) & 0x10) == 0 )
                goto LABEL_148;
            }
            else if ( (*(_DWORD *)(a1 + 924) & 0x20) == 0 )
            {
LABEL_148:
              xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v416, 1);
              if ( !v63 && (DWORD2(v418) & 0xFF0000) != 0x10000LL )
              {
                v65 = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(a1 + 496) + 8LL) + 24LL);
                goto LABEL_153;
              }
              v66 = *(_QWORD *)(a1 + 472);
              v65 = *(struct tagWND **)(v66 + 128);
              v67 = v65 == 0LL;
              if ( v65 )
              {
                v65 = CoreWindowProp::GetCompositeAppFrameWindowOrSelf(*(const struct tagWND **)(v66 + 128), v64);
LABEL_153:
                v67 = v65 == 0LL;
              }
              if ( !v67 )
              {
                v68 = v424 != 1;
                Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(BugCheckParameter3, a1, (__int64)v65);
                xxxSnapWindow((__int64)v65, v68);
                Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v69);
              }
              goto LABEL_21;
            }
          }
          if ( *(_DWORD *)(W32GetUserSessionState(16LL, v44) + 16312)
            && (!*(_DWORD *)(W32GetUserSessionState(v70, v44) + 14708)
             || (*(_BYTE *)(W32GetUserSessionState(v72, v71) + 14704) & 2) == 0) )
          {
            v73 = *(_BYTE *)(*(_QWORD *)(a1 + 472) + 260LL);
            v74 = v330 | 0x400;
            if ( (v73 & 0x10) == 0 )
              v74 = v330;
            v75 = v74;
            LODWORD(v75) = v74 | 0x200;
            if ( (v73 & 4) == 0 )
              v75 = v74;
            v76 = (unsigned int)v75;
            LODWORD(v76) = v75 | 0x100;
            if ( (v73 & 1) == 0 )
              v76 = (unsigned int)v75;
            v77 = (__int64 *)HotKeyToWindow(v76, v75);
            if ( v77 )
            {
              if ( *(_QWORD *)(a1 + 496) == *(_QWORD *)(v77[2] + 496) )
              {
                PostTransformableMessage(*(struct tagWND **)(*(_QWORD *)(a1 + 472) + 128LL), 0x112u, 0xF150uLL, *v77, 0);
LABEL_683:
                xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v416, 1);
                goto LABEL_21;
              }
            }
          }
        }
        if ( v330 == 231 )
        {
          *(_WORD *)(a1 + 922) = WORD1(v418);
          *(_QWORD *)&v418 = 231LL;
        }
      }
LABEL_170:
      v78 = v418;
      v330 = (unsigned __int8)v418;
      if ( (unsigned __int8)v418 == 231LL )
        v78 = 231LL;
      *(_QWORD *)&v418 = v78;
      if ( !v323 || (WORD2(v422) & 0x8000) == 0 )
      {
        if ( *(_DWORD *)(W32GetUserSessionState(v78, v44) + 14280) )
        {
          if ( (GetAppImeCompatFlags(0LL, v79) & 0x800000) == 0 && BYTE10(v418) == 41 )
          {
            if ( v323 )
            {
              v80 = *(_QWORD *)(a1 + 472);
              if ( (*(_BYTE *)(v80 + 260) & 0x15) == 0
                && (*(_BYTE *)(v80 + 278) & 0x40) == 0
                && (*(_BYTE *)(v80 + 279) & 1) == 0 )
              {
                if ( (ThreadDesktopWindow = *(struct tagWND **)(v80 + 120), (v81 = ThreadDesktopWindow) == 0LL)
                  && (ThreadDesktopWindow = *(struct tagWND **)(v80 + 128), (v81 = ThreadDesktopWindow) == 0LL)
                  || *((_QWORD *)v81 + 2) == a1 )
                {
                  xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v416, 1);
                  if ( !v347 && ThreadDesktopWindow )
                  {
                    *(_QWORD *)&v404[0] = *(_QWORD *)ThreadDesktopWindow;
                    *((_QWORD *)&v404[0] + 1) = 80LL;
                    memset(&v404[1], 0, 32);
                    xxxCallCtfHook(3LL, 0LL, 1LL, v404);
                  }
                  goto LABEL_21;
                }
              }
            }
          }
        }
      }
      if ( v330 == 121 )
        v321[0] |= 4u;
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 472) + 260LL) & 4) != 0 && v330 == 27 )
        v321[0] |= 4u;
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 528), 0, 0) & 8) == 0 )
        *((_QWORD *)&v418 + 1) &= ~0x2000000uLL;
LABEL_194:
      v330 = (unsigned __int8)v418;
      v82 = *(_QWORD *)(a1 + 472);
      v83 = *(struct tagWND **)(v82 + 120);
      ThreadDesktopWindow = v83;
      if ( !*(_QWORD *)(v82 + 120) )
      {
        v83 = *(struct tagWND **)(v82 + 128);
        ThreadDesktopWindow = v83;
        if ( !v83 )
          goto LABEL_276;
        if ( v321[0] - 256 <= 3 )
          v321[0] += 4;
      }
      Win32HM_ExchangeThreadLock<1>((__int64)v83, (__int64)v358);
      v84 = *((_QWORD *)ThreadDesktopWindow + 2);
      v331 = v84 != v357;
      if ( v84 != v359 )
      {
        if ( *(_QWORD *)(*((_QWORD *)ThreadDesktopWindow + 2) + 472LL) != *(_QWORD *)(a1 + 472) )
          goto LABEL_276;
        if ( (unsigned int)IsInsideMenuLoop(a1) )
        {
          v86 = *(struct tagWND **)(**(_QWORD **)(a1 + 648) + 8LL);
        }
        else
        {
          v87 = *(_QWORD *)(a1 + 712);
          if ( v87 )
            v86 = *(struct tagWND **)(v87 + 16);
          else
            v86 = 0LL;
        }
        if ( v86 )
        {
          ThreadDesktopWindow = v86;
          v331 = *((_QWORD *)v86 + 2) != v85;
          Win32HM_ExchangeThreadLock<1>((__int64)v86, (__int64)v358);
        }
        if ( !v356 )
        {
          v356 = (struct _W32THREAD *)*((_QWORD *)ThreadDesktopWindow + 2);
          Win32RawLockedW32Thread::Exchange((Win32RawLockedW32Thread *)v387, v356);
        }
      }
      if ( !v333 && a5 == -1 )
        goto LABEL_219;
      if ( v333 <= a5 )
      {
        if ( v321[0] >= v333 )
        {
          v88 = 1;
          if ( v321[0] <= a5 )
            goto LABEL_218;
        }
LABEL_217:
        v88 = 0;
        goto LABEL_218;
      }
      if ( v321[0] >= a5 && v321[0] <= v333 )
        goto LABEL_217;
      v88 = 1;
LABEL_218:
      v29 = v326;
      LOBYTE(v30) = v325;
      if ( v88 )
      {
LABEL_219:
        v89 = CheckPwndFilter((__int64)ThreadDesktopWindow, *(__int64 *)v346);
        v29 = v326;
        LOBYTE(v30) = v325;
        if ( v89 )
        {
          if ( v331 )
            goto LABEL_827;
          if ( v323 )
          {
            if ( (WORD2(v422) & 0x8000) != 0 )
              goto LABEL_243;
            if ( !(unsigned int)IsInsideMenuLoop(a1) )
            {
              if ( v330 == 93 && v321[0] == 257 )
              {
                if ( ThreadDesktopWindow )
                  v91 = *(_QWORD *)ThreadDesktopWindow;
                else
                  v91 = 0LL;
                PostTransformableMessage(ThreadDesktopWindow, 0x7Bu, v91, -1LL, 0);
              }
              if ( v330 == 112 && v321[0] == 256 )
                _PostTransformableMessageExtended(ThreadDesktopWindow, 0x4Du, 0LL, 0LL, 0LL, 1);
            }
          }
          if ( v330 == 16 )
          {
            v92 = DWORD2(v418) & 0x1000000;
            if ( !v347 )
            {
              LOBYTE(v90) = *(_BYTE *)(*(_QWORD *)(a1 + 472) + 296LL);
              if ( ((unsigned __int8)v90 & (unsigned __int8)((unsigned int)v92 != 0LL ? 1 : 4)) != 0
                && (unsigned int)IsDesktopApp(*(_QWORD *)(a1 + 464), v90)
                && (_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 528), 0, 0) & 8) == 0 )
              {
                *(_QWORD *)&v418 = (v92 != 0) + 160LL;
                goto LABEL_683;
              }
            }
          }
          v352 = (1 << (2 * (v330 & 3))) & *(unsigned __int8 *)(((unsigned __int64)(unsigned __int8)v330 >> 2)
                                                              + *(_QWORD *)(a1 + 472)
                                                              + 256);
          if ( v352 )
          {
            if ( !v323 )
              goto LABEL_249;
            if ( NextSysMsg )
              *((_QWORD *)NextSysMsg + 5) |= 0x40000000uLL;
          }
LABEL_243:
          if ( !v323 )
            goto LABEL_249;
          if ( (WORD2(v422) & 0x8000) != 0 || !NextSysMsg || (*(_DWORD *)(a1 + 1360) & 0x10000000) == 0 )
          {
            xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v416, 1);
LABEL_249:
            v93 = v342;
            goto LABEL_250;
          }
          v93 = (ULONG_PTR)xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v416, 0);
          v342 = v93;
LABEL_250:
          v329 = (void *)*((_QWORD *)&v418 + 1);
          v330 = v418;
          if ( v352 )
            v329 = (void *)(*((_QWORD *)&v418 + 1) | 0x40000000LL);
          if ( v321[0] == 257 || v321[0] == 261 )
            v329 = (void *)((unsigned __int64)v329 | 0x80000000);
          if ( (*(_BYTE *)(*(_QWORD *)(a1 + 472) + 260LL) & 0x10) != 0 )
            v329 = (void *)((unsigned __int64)v329 | 0x20000000);
          if ( (unsigned int)IsMenuStarted(a1) )
            v329 = (void *)((unsigned __int64)v329 | 0x10000000);
          if ( (*(_DWORD *)(v94 + 412) & 0x4000) != 0 )
            v329 = (void *)((unsigned __int64)v329 | 0x8000000);
          if ( !v361 && !*(_QWORD *)(W32GetUserSessionState(v95, v94) + 12944) || (WORD2(v422) & 0x8000) != 0 )
            goto LABEL_290;
          if ( !v323 )
            goto LABEL_295;
          if ( (unsigned int)IsMenuStarted(a1)
            || (_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 528), 0, 0) & 0x2000000) != 0
            || !ThreadDesktopWindow )
          {
LABEL_290:
            if ( !v323 )
            {
LABEL_295:
              LOBYTE(v96) = v340;
              goto LABEL_296;
            }
            v96 = v340;
            if ( (WORD2(v422) & 0x8000) != 0 )
            {
              if ( (DWORD1(v422) & 0x4000000) != 0 )
                v96 = 2;
              v340 = v96;
              v341 = v96;
            }
          }
          else
          {
            LOWORD(v96) = v330;
            if ( v330 == 231 )
              LOWORD(v96) = 231;
            tagTHREADINFO::UpdateInputSource(
              (tagTHREADINFO *)a1,
              (const struct tagINPUT_MESSAGE_SOURCE *)((char *)&v423 + 12));
            tagTLBLOCK::_unnamed_type_list_::_unnamed_type_list_((tagTLBLOCK::_unnamed_type_list_ *)BugCheckParameter2);
            if ( v93 )
              Win32RawLockedItemBase<tagQMSG,0,1,1,1>::ManualLock<void>(BugCheckParameter2, v93);
            v97 = xxxImmProcessKey(*(struct tagQ **)(a1 + 472), ThreadDesktopWindow, v321[0], v96, (__int64)v329);
            LOBYTE(v96) = v97;
            v340 = v97;
            v341 = v97;
            if ( (v97 & 0x11) != 0 )
            {
              if ( v93 )
              {
                Win32RawLockedItemBase<tagQMSG,0,1,1,1>::UnlockWorker(BugCheckParameter2, 0, 1);
                v342 = 0LL;
              }
              Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
              goto LABEL_276;
            }
            if ( v93 )
              Win32RawLockedItemBase<tagQMSG,0,1,1,1>::UnlockWorker(BugCheckParameter2, 0, 0);
            Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
          }
LABEL_296:
          if ( v323 )
          {
            v324 = 1;
            v99 = 0;
            if ( (WORD2(v422) & 0x8000) == 0 )
            {
              v100 = *(_QWORD *)(a1 + 472);
              v101 = *(_QWORD *)(v100 + 424);
              *(_QWORD *)(v100 + 424) = *((_QWORD *)&v420 + 1);
              v102 = v96 & 2;
              tagTHREADINFO::UpdateInputSource(
                (tagTHREADINFO *)a1,
                (const struct tagINPUT_MESSAGE_SOURCE *)((char *)&v423 + 12));
              *(_QWORD *)&v370 = 0LL;
              v371 = 0LL;
              *((_QWORD *)&v370 + 1) = v329;
              *(_QWORD *)&v350 = (unsigned int)Feature_WebThreatDefenseToggle__private_featureState;
              if ( (Feature_WebThreatDefenseToggle__private_featureState & 0x10) == 0 )
              {
                LODWORD(v350) = Feature_WebThreatDefenseToggle__private_featureState | 1;
                wil_details_FeatureReporting_ReportUsageToService(
                  (__int64)&Feature_WebThreatDefenseToggle__private_descriptor,
                  Feature_WebThreatDefenseToggle__private_featureState | 1,
                  3u,
                  1LL);
                wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
                  v350,
                  3,
                  (__int64)&Feature_WebThreatDefenseToggle__private_descriptor);
              }
              v103 = *(_QWORD *)(a1 + 1376);
              v104 = *(_QWORD *)(a1 + 464);
              v105 = *(unsigned int *)(v104 + 276);
              if ( (v105 & 4) != 0 )
              {
                if ( (_DWORD)v103 != 1 || (LODWORD(v103) = 1, (v103 & 0x500000000LL) == 0) )
                  LODWORD(v103) = 0;
                if ( (_DWORD)v103
                  && *(_QWORD *)(a1 + 496) != *(_QWORD *)(W32GetUserSessionState(v104, v105) + 62976)
                  && CheckImEnabled() )
                {
                  LOWORD(v371) = 1;
                }
              }
              tagTLBLOCK::_unnamed_type_list_::_unnamed_type_list_((tagTLBLOCK::_unnamed_type_list_ *)v389);
              if ( v342 )
                Win32RawLockedItemBase<tagQMSG,0,1,1,1>::ManualLock<void>(v389, v342);
              v99 = xxxCallCtfHook(2LL, v102, v330, &v370);
              if ( (BYTE2(v371) & 1) != 0 )
              {
                if ( (*(_BYTE *)(*(_QWORD *)(a1 + 464) + 808LL) & 0x30) == 0x10 )
                  WORD1(v371) |= 0x10u;
                ProcessTranslatedChar((struct _CHARHOOKSTRUCT *)&v370);
              }
              *(_QWORD *)(*(_QWORD *)(a1 + 472) + 424LL) = v101;
              if ( v342 )
              {
                if ( (unsigned int)(v99 - 2) <= 1
                  && (*(_DWORD *)(a1 + 1360) & 0x20000000) == 0
                  && AllocQEntryEx(*(_QWORD *)(a1 + 472) + 24LL, (_DWORD *)v342, 2) )
                {
                  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
                    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x20000) == 0
                    || (v106 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
                  {
                    v106 = 0;
                  }
                  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
                    || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
                  {
                    v18 = 0;
                  }
                  if ( v106 || v18 )
                  {
                    v107 = *(_QWORD *)(a1 + 472);
                    v108 = *(_QWORD *)(v107 + 88);
                    v109 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
                    v320 = v108;
                    v110 = v342;
                    LOBYTE(v111) = v18;
                    LOBYTE(v112) = v106;
                    WPP_RECORDER_AND_TRACE_SF_qqq(
                      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                      v112,
                      v111,
                      *(_QWORD *)(v109 + 69160),
                      5,
                      18,
                      35,
                      (__int64)&WPP_62b8cb8514ba365a29e38d0f8208fd40_Traceguids,
                      v342,
                      v107,
                      v320);
                  }
                  else
                  {
                    v110 = v342;
                  }
                  Win32RawLockedItemBase<tagQMSG,0,1,1,1>::UnlockWorker(v389, 0, 0);
                  *(_QWORD *)(*(_QWORD *)(a1 + 472) + 88LL) = v110;
                  v18 = 1;
                  if ( v99 == 2 )
                  {
                    v29 = 1;
                  }
                  else
                  {
                    v29 = v326;
                    if ( v99 == 3 )
                      v29 = 2;
                  }
                  v326 = v29;
                  DeferSysPeekMsg(a1, v29);
                  v342 = 0LL;
                  Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)v389);
                  goto LABEL_34;
                }
                v342 = 0LL;
              }
              Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)v389);
              NextSysMsg = v343;
            }
            if ( v99 )
            {
              v98 = 1;
              goto LABEL_277;
            }
          }
          if ( ((*(_BYTE *)(a1 + 720) | *(_BYTE *)(**(_QWORD **)(a1 + 504) + 16LL)) & 8) == 0 )
          {
            v98 = v324;
LABEL_341:
            if ( !v98 || !v323 || ((*(_BYTE *)(a1 + 720) | *(_BYTE *)(**(_QWORD **)(a1 + 504) + 16LL)) & 0x40) == 0 )
              goto LABEL_346;
            v113 = v329;
            v114 = v330;
            v115 = 7LL;
LABEL_345:
            xxxCallHook(v115, v114, (__int64)v113, 5);
            goto LABEL_346;
          }
          v98 = 1;
          v324 = 1;
          if ( !(unsigned int)xxxCallHook(v323 == 0 ? 3 : 0, v330, (__int64)v329, 2) )
            goto LABEL_341;
LABEL_277:
          xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v416, 1);
          if ( v339 )
          {
            if ( ((*(_BYTE *)(a1 + 720) | *(_BYTE *)(**(_QWORD **)(a1 + 504) + 16LL)) & 0x40) != 0 )
              xxxCallHook(6LL, v321[0], (__int64)v427, 5);
            v339 = 0;
          }
          if ( v98 )
          {
            if ( ((*(_BYTE *)(a1 + 720) | *(_BYTE *)(**(_QWORD **)(a1 + 504) + 16LL)) & 0x40) != 0 )
              xxxCallHook(7LL, v330, (__int64)v329, 5);
            v324 = 0;
          }
          v29 = v326;
          LOBYTE(v30) = v325;
          if ( v323 )
            goto LABEL_21;
        }
      }
    }
    v329 = (void *)*((_QWORD *)&v418 + 1);
    v330 = v418;
    if ( DeleteHidDataIfAlreadyHandledByGRIB((struct tagTHREADINFO *)a1, *((__int64 *)&v418 + 1)) )
      goto LABEL_276;
    ThreadDesktopWindow = 0LL;
    v118 = 0LL;
    if ( v329 )
    {
      LOBYTE(v117) = 18;
      v119 = HMValidateHandleNoSecure((__int64)v329, v117);
      v118 = v119;
      if ( v119 )
        ThreadDesktopWindow = *(struct tagWND **)(v119 + 24);
    }
    Feature_FixMisdeliveredRawInput__private_IsEnabledDeviceUsageNoInline();
    if ( !ThreadDesktopWindow )
    {
      v121 = *(_QWORD *)(a1 + 472);
      ThreadDesktopWindow = *(struct tagWND **)(v121 + 120);
      if ( !ThreadDesktopWindow )
      {
        ThreadDesktopWindow = *(struct tagWND **)(v121 + 128);
        if ( !ThreadDesktopWindow )
        {
          InputTraceLogging::RawInput::SSQResult((__int64)v329, 0, v120);
          goto LABEL_276;
        }
      }
    }
    if ( (unsigned int)Feature_FixMisdeliveredRawInput__private_IsEnabledDeviceUsageNoInline()
      && v118
      && *(_QWORD *)(v118 + 16) != *((_QWORD *)ThreadDesktopWindow + 2) )
    {
      v353 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 10349);
    }
    Win32HM_ExchangeThreadLock<1>((__int64)ThreadDesktopWindow, (__int64)v358);
    if ( (unsigned int)CheckCrossThreadInput(
                         (struct tagTHREADINFO **)ThreadDesktopWindow,
                         NextSysMsg,
                         &v331,
                         &v323,
                         v344) )
    {
      v123 = 0;
LABEL_368:
      InputTraceLogging::RawInput::SSQResult((__int64)v329, v123, v122);
      goto LABEL_827;
    }
    if ( !v331 )
      goto LABEL_380;
    if ( *(_QWORD *)(*((_QWORD *)ThreadDesktopWindow + 2) + 472LL) != *(_QWORD *)(a1 + 472) )
      goto LABEL_276;
    if ( (unsigned int)IsInsideMenuLoop(a1) )
    {
      v124 = *(HWND **)(**(_QWORD **)(a1 + 648) + 8LL);
    }
    else
    {
      v125 = *(_QWORD *)(a1 + 712);
      if ( v125 )
        v124 = *(HWND **)(v125 + 16);
      else
        v124 = 0LL;
    }
    if ( v124 )
      InputTraceLogging::RawInput::IgnoreModalLoop(v329, *v124);
    if ( !v351 )
    {
      v351 = (struct _W32THREAD *)*((_QWORD *)ThreadDesktopWindow + 2);
      Win32RawLockedW32Thread::Exchange((Win32RawLockedW32Thread *)v392, v351);
    }
LABEL_380:
    if ( v333 || a5 != -1 )
    {
      if ( v333 <= a5 )
      {
        if ( v321[0] < v333 )
          goto LABEL_388;
        v126 = 1;
        if ( v321[0] > a5 )
          goto LABEL_388;
      }
      else
      {
        if ( v321[0] < a5 || v321[0] > v333 )
        {
          v126 = 1;
          goto LABEL_389;
        }
LABEL_388:
        v126 = 0;
      }
LABEL_389:
      if ( !v126 )
        goto LABEL_396;
    }
    if ( !(unsigned int)CheckPwndFilter((__int64)ThreadDesktopWindow, *(__int64 *)v346) )
    {
LABEL_396:
      InputTraceLogging::RawInput::SSQResult((__int64)v329, 2, v122);
      continue;
    }
    break;
  }
  if ( v331 )
  {
    v123 = 3;
    goto LABEL_368;
  }
  if ( v323 )
    xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v416, 1);
  InputTraceLogging::RawInput::SSQResult((__int64)v329, 4, v122);
LABEL_346:
  if ( *(_QWORD *)(a1 + 796) != *(_QWORD *)((char *)&v419 + 4) )
    _InterlockedOr((volatile signed __int32 *)(a1 + 528), 0x100000u);
  if ( NextSysMsg && ((BYTE4(v422) & 0x20) != 0 || (DWORD1(v422) & 0x8000000) != 0) )
  {
    if ( *((_DWORD *)NextSysMsg + 6) == 512 )
    {
      if ( ThreadDesktopWindow )
        v116 = *(_QWORD *)ThreadDesktopWindow;
      else
        v116 = 0LL;
      *((_QWORD *)NextSysMsg + 2) = v116;
      *((_DWORD *)NextSysMsg + 25) |= 0x200u;
    }
    *((_QWORD *)NextSysMsg + 8) = v329;
  }
  *(_QWORD *)(a1 + 796) = *(_QWORD *)((char *)&v419 + 4);
  *(_DWORD *)(a1 + 804) = *(_DWORD *)(*((_QWORD *)ThreadDesktopWindow + 5) + 288LL);
  *(_QWORD *)(a1 + 808) = v421;
  *(_DWORD *)(a1 + 608) = v419;
  *(_QWORD *)(*(_QWORD *)(a1 + 472) + 424LL) = *((_QWORD *)&v420 + 1);
  if ( v321[0] == 514 || v321[0] == 162 )
    *(_QWORD *)(a1 + 816) = v421;
  *(_QWORD *)(*(_QWORD *)(a1 + 472) + 80LL) = 1LL;
  *(_QWORD *)(a1 + 616) = 1LL;
  tagTHREADINFO::UpdateLastInputData((tagTHREADINFO *)a1, (const struct tagQMSG *)&v416);
  **(_DWORD **)(a1 + 488) &= ~8u;
  **(_QWORD **)(a1 + 520) &= 0x7FFFFFFFuLL;
  v286 = v340;
  v287 = v362;
  if ( v323 )
  {
    v288 = *(_QWORD **)(a1 + 520);
    if ( (BYTE4(v422) & 1) != 0 )
      *v288 |= 0x1000uLL;
    else
      *v288 &= ~0x1000uLL;
  }
  TransferWakeBit(a1, v321[0]);
  ClearWakeBit((struct tagTHREADINFO *)a1, 31751, 1);
  v289 = v323;
  if ( v323 )
  {
    if ( v338 )
    {
      v290 = *(_DWORD **)(a1 + 1512);
      if ( v290 )
      {
        if ( (*v290 & 1) != 0 && (*v290 & 4) != 0 )
        {
          SetMiPWakeBit((struct tagTHREADINFO *)a1);
          v289 = v323;
        }
      }
    }
  }
  if ( ThreadDesktopWindow )
    v291 = *(_QWORD *)ThreadDesktopWindow;
  else
    v291 = 0LL;
  *(_QWORD *)v287 = v291;
  *((_DWORD *)v287 + 2) = v321[0];
  v292 = v330;
  if ( (v286 & 2) != 0 )
    v292 = 229LL;
  *((_QWORD *)v287 + 2) = v292;
  *((_QWORD *)v287 + 3) = v329;
  *((_DWORD *)v287 + 8) = v419;
  *(_QWORD *)((char *)v287 + 36) = *(_QWORD *)((char *)&v419 + 4);
  InputTraceLogging::Delivery::ScanSysQueue(
    (const struct tagQMSG *)&v416,
    v287,
    (const struct tagTHREADINFO *)a1,
    v289 != 0);
  if ( v323 )
  {
    EtwTraceInputProcessDelay(a1);
    *(_DWORD *)(*(_QWORD *)(a1 + 472) + 432LL) = (MEMORY[0xFFFFF78000000320]
                                                * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  }
  EtwTraceRetrieveInputMessage(v287);
  CManageInScanSysQueueBit::~CManageInScanSysQueueBit((CManageInScanSysQueueBit *)v337, v293);
  Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(v358, v294);
  Win32RawLockedW32Thread::~Win32RawLockedW32Thread(v391, v295);
  Win32RawLockedW32Thread::~Win32RawLockedW32Thread(v392, v296);
  Win32RawLockedW32Thread::~Win32RawLockedW32Thread(v393, v297);
  Win32RawLockedW32Thread::~Win32RawLockedW32Thread(v388, v298);
  Win32RawLockedW32Thread::~Win32RawLockedW32Thread(v387, v299);
  return 1LL;
}
