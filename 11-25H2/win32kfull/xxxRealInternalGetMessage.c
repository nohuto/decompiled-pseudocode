/*
 * XREFs of xxxRealInternalGetMessage @ 0x14011559C
 * Callers:
 *     NtUserRealInternalGetMessage @ 0x140115020 (NtUserRealInternalGetMessage.c)
 *     xxxInternalGetMessage @ 0x1401153B0 (xxxInternalGetMessage.c)
 *     xxxMNLoop @ 0x14015A654 (xxxMNLoop.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1402524BC (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U1@U1@U2@U?$_tlgWrapperByVal@$01@@U3@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4334AEBU?$_tlgWrapperByVal@$01@@53@Z @ 0x140003AC0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U1@U1@U2@U-$_tlgWrapperByVal@$01@@.c)
 *     ??1?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x14001BAD0 (--1-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     xxxSleepThread2 @ 0x14001E134 (xxxSleepThread2.c)
 *     zzzWakeInputIdle @ 0x14001EC00 (zzzWakeInputIdle.c)
 *     ?xxxUpdateInputHangInfo@@YAXPEAUtagWND@@W4INPUTHANGTIME@@@Z @ 0x14001ED60 (-xxxUpdateInputHangInfo@@YAXPEAUtagWND@@W4INPUTHANGTIME@@@Z.c)
 *     xxxDoSysExpungeIfNeeded @ 0x14001F490 (xxxDoSysExpungeIfNeeded.c)
 *     xxxDrainQueueCompletions @ 0x140020480 (xxxDrainQueueCompletions.c)
 *     ?xxxSendPostedMessage@@YAXAEBUtagMSG@@PEAU1@@Z @ 0x14002E92C (-xxxSendPostedMessage@@YAXAEBUtagMSG@@PEAU1@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x14003874C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??0?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x140039968 (--0-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004CAC0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxDoPaint @ 0x14005138C (xxxDoPaint.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x14005F618 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x14005F670 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     ?_HandleShellHandwritingDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1400636D0 (-_HandleShellHandwritingDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1400653B0 (HMValidateHandleNoSecure.c)
 *     ?CallDelegateThread@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z @ 0x140066388 (-CallDelegateThread@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z.c)
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x14006667C (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 *     ?GetMessageW@Delivery@InputTraceLogging@@SAXPEBUtagMSG@@PEBUtagTHREADINFO@@PEAUtagWND@@PEAUtagBWND@@_N@Z @ 0x140068AD0 (-GetMessageW@Delivery@InputTraceLogging@@SAXPEBUtagMSG@@PEBUtagTHREADINFO@@PEAUtagWND@@PEAUtagBW.c)
 *     ?SaveMessageInfoHandle@@YAXPEAUtagTHREADINFO@@PEAUtagMSG@@@Z @ 0x14007A730 (-SaveMessageInfoHandle@@YAXPEAUtagTHREADINFO@@PEAUtagMSG@@@Z.c)
 *     xxxCallCtfHook @ 0x1400C4B80 (xxxCallCtfHook.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1400C5FF0 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     ?FreeSavedMessageInfoHandles@@YAXPEAUtagTHREADINFO@@@Z @ 0x1400C97E0 (-FreeSavedMessageInfoHandles@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     ?WakeSomeoneAfterUnlockingOrUndeferring@@YAXPEAUtagQMSG@@@Z @ 0x14011F8C4 (-WakeSomeoneAfterUnlockingOrUndeferring@@YAXPEAUtagQMSG@@@Z.c)
 *     CalcWakeMask @ 0x1401206B0 (CalcWakeMask.c)
 *     ?TraceLoggingMiPSuppressedForWindow@@YAXQEBUtagWND@@IH@Z @ 0x14012AD58 (-TraceLoggingMiPSuppressedForWindow@@YAXQEBUtagWND@@IH@Z.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x140137D10 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ?MarkPendingPromotion@PointerPromotion@@YAXPEAUtagTHREADINFO@@G@Z @ 0x140138CD4 (-MarkPendingPromotion@PointerPromotion@@YAXPEAUtagTHREADINFO@@G@Z.c)
 *     IsMiPPointerMessage @ 0x140138FC0 (IsMiPPointerMessage.c)
 *     ?HasCoreMessagingWindow@tagTHREADINFO@@QEBA_NXZ @ 0x140143750 (-HasCoreMessagingWindow@tagTHREADINFO@@QEBA_NXZ.c)
 *     ?WaitMaskIncludesUserInput@@YA_NI@Z @ 0x140143780 (-WaitMaskIncludesUserInput@@YA_NI@Z.c)
 *     IsPointerInputMessageWithState @ 0x140144520 (IsPointerInputMessageWithState.c)
 *     ?HandleProcessSpinning@@YAHXZ @ 0x140145050 (-HandleProcessSpinning@@YAHXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqq @ 0x140145220 (WPP_RECORDER_AND_TRACE_SF_qqq.c)
 *     xxxProcessDelegateCapturedPointers @ 0x14014B438 (xxxProcessDelegateCapturedPointers.c)
 *     IsTouchpadPointerInputMessage @ 0x140150714 (IsTouchpadPointerInputMessage.c)
 *     SlowAppThreadInShellFrame @ 0x140151514 (SlowAppThreadInShellFrame.c)
 *     IsShellFrameHangResilient @ 0x140151BD4 (IsShellFrameHangResilient.c)
 *     ?AreMultipleThreadsAttached@tagQ@@QEBA_NXZ @ 0x140151C1C (-AreMultipleThreadsAttached@tagQ@@QEBA_NXZ.c)
 *     IsMiPEnabledForWindow @ 0x14015DEA0 (IsMiPEnabledForWindow.c)
 *     ?xxxReceiveMessages@@YAXPEAUtagTHREADINFO@@@Z @ 0x14016A520 (-xxxReceiveMessages@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     xxxSleepThreadWithPwnd @ 0x14017BE54 (xxxSleepThreadWithPwnd.c)
 *     _tlgKeywordOn @ 0x14017EE94 (_tlgKeywordOn.c)
 *     ?FlushPostedRawInputAndUnlinkThisOne@@YAPEAUtagHIDDATA@@PEAUtagTHREADINFO@@PEAU1@PEAPEAPEAU1@@Z @ 0x14017F4E0 (-FlushPostedRawInputAndUnlinkThisOne@@YAPEAUtagHIDDATA@@PEAUtagTHREADINFO@@PEAU1@PEAPEAPEAU1@@Z.c)
 *     ?UnlinkHidData@@YAPEAUtagHIDDATA@@PEAUtagTHREADINFO@@PEAU1@PEAPEAPEAU1@@Z @ 0x14017F57C (-UnlinkHidData@@YAPEAUtagHIDDATA@@PEAUtagTHREADINFO@@PEAU1@PEAPEAPEAU1@@Z.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagMENU@@$0A@$00@@QEAAPEAUtagMENU@@XZ @ 0x140187B78 (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagMENU@@$0A@$00@@QEAAPEAUtagMENU@@XZ.c)
 *     ?IsPointerMessageTouchpad@@YAHPEAUtagTHREADINFO@@_KG@Z @ 0x140195478 (-IsPointerMessageTouchpad@@YAHPEAUtagTHREADINFO@@_KG@Z.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x14019612C (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     xxxClientCallDelegateThread @ 0x1401A58A0 (xxxClientCallDelegateThread.c)
 *     ?UnblockDeferredInput@@YAXPEAUtagTHREADINFO@@@Z @ 0x1401AFBA8 (-UnblockDeferredInput@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     xxxClientCallDefWindowProc @ 0x1401CAE94 (xxxClientCallDefWindowProc.c)
 *     xxxClientCallDefaultInputHandler @ 0x1401CCB18 (xxxClientCallDefaultInputHandler.c)
 *     ?CallShellHandwritingDelegateThread@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z @ 0x1401E396C (-CallShellHandwritingDelegateThread@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z.c)
 *     TryDetachShellFrame @ 0x14023FB5C (TryDetachShellFrame.c)
 *     zzzReattachThreads @ 0x14023FD24 (zzzReattachThreads.c)
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIH@Z @ 0x140245110 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIH@Z.c)
 *     zzzCalcStartCursorHide @ 0x140245FC0 (zzzCalcStartCursorHide.c)
 *     DoTimer @ 0x1402463F0 (DoTimer.c)
 *     ?ShouldReceiveTouchpadMessages@@YA_NPEBUtagTHREADINFO@@PEAUHWND__@@@Z @ 0x1402475D0 (-ShouldReceiveTouchpadMessages@@YA_NPEBUtagTHREADINFO@@PEAUHWND__@@@Z.c)
 *     Feature_MTestAbSh1__private_ReportDeviceUsage @ 0x14026AB0C (Feature_MTestAbSh1__private_ReportDeviceUsage.c)
 *     ?TraceLoggingSysQueueLockedRetryFailed@@YAXKK@Z @ 0x14026CED0 (-TraceLoggingSysQueueLockedRetryFailed@@YAXKK@Z.c)
 *     ?xxxCompletePendingPromotion@PointerPromotion@@YAXPEAUtagTHREADINFO@@@Z @ 0x14026D6B0 (-xxxCompletePendingPromotion@PointerPromotion@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?HijackHidData@RawInput@InputTraceLogging@@SAXPEAX@Z @ 0x14026F1C4 (-HijackHidData@RawInput@InputTraceLogging@@SAXPEAX@Z.c)
 *     ?FlushPostedRawInput@@YAXPEAUtagTHREADINFO@@@Z @ 0x140274548 (-FlushPostedRawInput@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline @ 0x140275110 (Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x14027C8BC (--0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ?StrugglingInputQueueStop@Mouse@InputTraceLogging@@SAXPEBUtagQ@@@Z @ 0x14027D0D4 (-StrugglingInputQueueStop@Mouse@InputTraceLogging@@SAXPEBUtagQ@@@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027D2B8 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     Feature_TouchpadPublicApis__private_IsEnabledDeviceUsageNoInline @ 0x140281BE4 (Feature_TouchpadPublicApis__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_YieldInputQueue2__private_GetVariant @ 0x140281C8C (Feature_YieldInputQueue2__private_GetVariant.c)
 *     Feature_YieldInputQueue2__private_IsEnabledNoReportingNoInline @ 0x140281CE0 (Feature_YieldInputQueue2__private_IsEnabledNoReportingNoInline.c)
 */

__int64 __fastcall xxxRealInternalGetMessage(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  unsigned int v9; // r12d
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct tagTHREADINFO *v12; // rsi
  unsigned int v13; // r13d
  struct tagWND *v14; // rax
  struct tagTHREADINFO **v15; // r15
  unsigned int v16; // ebx
  __int64 v17; // rdx
  __int64 v19; // rdx
  unsigned int v20; // eax
  _QWORD *v21; // r11
  unsigned int v22; // r13d
  __int64 v23; // rcx
  struct tagWND *v24; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v26; // ecx
  char v27; // bl
  unsigned __int64 v28; // rdx
  __int64 v29; // rdi
  struct tagTHREADINFO *v30; // rcx
  char v31; // r15
  bool v32; // r12
  __int64 v33; // rbx
  __int64 UserSessionState; // rax
  int v35; // r8d
  int v36; // edx
  __int64 v37; // rcx
  __int16 v38; // bx
  unsigned int v39; // r15d
  int v40; // edi
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rcx
  int v49; // eax
  const struct tagQ *v50; // rcx
  LARGE_INTEGER PerformanceCounter; // r15
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rbx
  int v56; // ecx
  unsigned __int64 v57; // rdi
  int v58; // r12d
  __int64 v59; // rax
  bool v60; // r15
  int v61; // ebx
  __int64 v62; // rcx
  struct tagWND *v63; // rdi
  int v64; // eax
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rcx
  int PostMessage; // eax
  int v69; // eax
  int v70; // r8d
  int v71; // r9d
  unsigned int v72; // ebx
  int v73; // ebx
  int v74; // eax
  unsigned __int64 v75; // rbx
  int IsEnabledDeviceUsageNoInline; // eax
  struct tagHIDDATA **v77; // r8
  __int64 v78; // r9
  __int64 v79; // rdx
  __int64 v80; // rcx
  unsigned int v81; // eax
  bool v82; // zf
  bool v83; // r12
  __int64 v84; // rdi
  __int64 v85; // rbx
  __int64 v86; // rax
  int v87; // r8d
  int v88; // edx
  __int64 v89; // r8
  __int64 v90; // rcx
  struct tagTHREADINFO *v91; // rax
  int v92; // ebx
  __int64 v93; // rax
  __int64 v94; // rdi
  __int64 v95; // r15
  int v96; // eax
  __int64 v97; // rax
  int v98; // eax
  int v99; // r13d
  int v100; // eax
  int v101; // ecx
  int v102; // r15d
  int v103; // eax
  unsigned int v104; // eax
  int v105; // eax
  __int64 v106; // rax
  int v107; // r12d
  void *v108; // rdi
  __int64 v109; // rbx
  __int64 v110; // r15
  __int64 v111; // rdx
  __int64 v112; // rcx
  __int64 v113; // r8
  __int64 v114; // r9
  struct tagHIDDATA *v115; // rax
  __int64 v116; // rdx
  __int64 v117; // rcx
  __int64 v118; // r8
  __int64 v119; // r9
  __int64 v120; // rax
  unsigned __int16 v121; // bx
  __int64 v122; // rdx
  __int64 v123; // rcx
  __int64 v124; // rax
  int v125; // eax
  unsigned int v126; // ebx
  __int64 v127; // rdx
  __int64 v128; // rdx
  __int64 v129; // rax
  struct CEResourceLock *TouchProcessorLock; // rax
  void *v131; // r8
  __int64 **v132; // rcx
  unsigned int v133; // ebx
  __int64 v134; // rdx
  __int64 v135; // rax
  struct CEResourceLock *v136; // rax
  void *v137; // r8
  bool v138; // r12
  char v139; // r15
  __int16 v140; // bx
  int v141; // edi
  __int64 v142; // rax
  int v143; // r8d
  int v144; // edx
  __int64 v145; // rdx
  __int64 v146; // rdx
  __int64 v147; // rcx
  const struct tagWND *v148; // rcx
  __int64 v149; // rax
  _DWORD *v150; // rdx
  struct tagWND *v151; // rax
  struct tagBWND *v152; // r9
  __int64 *v153; // [rsp+20h] [rbp-268h]
  int *v154; // [rsp+28h] [rbp-260h]
  int *v155; // [rsp+30h] [rbp-258h]
  _QWORD *v156; // [rsp+40h] [rbp-248h]
  int *v157; // [rsp+48h] [rbp-240h]
  __int16 *v158; // [rsp+50h] [rbp-238h]
  __int16 *v159; // [rsp+58h] [rbp-230h]
  unsigned __int64 *v160; // [rsp+60h] [rbp-228h]
  int v161; // [rsp+70h] [rbp-218h]
  int v162; // [rsp+74h] [rbp-214h]
  __int16 v163; // [rsp+78h] [rbp-210h]
  int v164; // [rsp+7Ch] [rbp-20Ch]
  unsigned int v165; // [rsp+80h] [rbp-208h]
  struct tagQMSG *v166; // [rsp+88h] [rbp-200h] BYREF
  int v167; // [rsp+90h] [rbp-1F8h]
  unsigned int v168; // [rsp+94h] [rbp-1F4h]
  int v169; // [rsp+98h] [rbp-1F0h] BYREF
  int v170; // [rsp+9Ch] [rbp-1ECh]
  unsigned int v171; // [rsp+A0h] [rbp-1E8h]
  unsigned int v172; // [rsp+A4h] [rbp-1E4h]
  int v173; // [rsp+A8h] [rbp-1E0h]
  __int16 v174; // [rsp+ACh] [rbp-1DCh] BYREF
  int v175; // [rsp+B0h] [rbp-1D8h]
  struct tagWND *v176; // [rsp+B8h] [rbp-1D0h]
  int v177; // [rsp+C8h] [rbp-1C0h] BYREF
  int v178; // [rsp+CCh] [rbp-1BCh] BYREF
  int v179; // [rsp+D0h] [rbp-1B8h] BYREF
  struct tagHIDDATA **v180; // [rsp+E0h] [rbp-1A8h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+E8h] [rbp-1A0h] BYREF
  __int64 *v182; // [rsp+F8h] [rbp-190h] BYREF
  __int64 *v183; // [rsp+100h] [rbp-188h] BYREF
  signed __int32 v184; // [rsp+108h] [rbp-180h]
  unsigned __int64 v185; // [rsp+110h] [rbp-178h] BYREF
  _QWORD v186[2]; // [rsp+118h] [rbp-170h] BYREF
  __int64 v187; // [rsp+128h] [rbp-160h] BYREF
  __int64 *v188; // [rsp+138h] [rbp-150h] BYREF
  __int64 *v189; // [rsp+140h] [rbp-148h] BYREF
  __int64 *v190[3]; // [rsp+148h] [rbp-140h] BYREF
  _OWORD v191[9]; // [rsp+160h] [rbp-128h] BYREF
  _BYTE v192[48]; // [rsp+1F0h] [rbp-98h] BYREF
  _BYTE v193[104]; // [rsp+220h] [rbp-68h] BYREF
  __int16 v194; // [rsp+298h] [rbp+10h] BYREF
  unsigned int v195; // [rsp+2A0h] [rbp+18h]

  v195 = a3;
  Win32HMOptionalThreadLockAlways<tagMENU>::Win32HMOptionalThreadLockAlways<tagMENU>(BugCheckParameter3);
  v169 = 0;
  v170 = 0;
  v167 = 0;
  v168 = 0;
  v9 = 0;
  v161 = 0;
  v12 = PtiCurrent(v11, v10);
  v13 = a6;
  EtwTraceEndAppMessageProcessing(a6);
  if ( ((a2 + 1) & 0xFFFFFFFFFFFEFFFFuLL) == 0 )
    a2 = 1LL;
  if ( a2 < 2 )
  {
    v15 = (struct tagTHREADINFO **)a2;
    v176 = (struct tagWND *)a2;
    v173 = 0;
  }
  else
  {
    v14 = (struct tagWND *)ValidateHwnd(a2);
    v15 = (struct tagTHREADINFO **)v14;
    v176 = v14;
    if ( !v14 )
    {
      v16 = 0;
      *(_QWORD *)a1 = 0LL;
      *(_DWORD *)(a1 + 8) = 0;
      EtwTraceBeginAppMessageProcessing(v13, 16LL, a1);
      if ( v13 )
        v16 = -1;
      goto LABEL_7;
    }
    Win32HM_LockIntoThread<0>((__int64)v12, (__int64)v14, BugCheckParameter3);
    v173 = 1;
  }
  ++*(_QWORD *)(*((_QWORD *)v12 + 65) + 8LL);
  v19 = 0xFFFFFFFFLL;
  if ( a4 )
    v19 = a4;
  v171 = v19;
  _InterlockedExchange(
    (volatile __int32 *)(*((_QWORD *)v12 + 61) + 20LL),
    (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  v20 = CalcWakeMask(v195, v19, WORD1(a5));
  v22 = v20;
  v172 = v20;
  if ( (v20 & 0x1C07) != 0 )
    *((_DWORD *)v12 + 400) = (*v21 * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( WaitMaskIncludesUserInput(v20) )
  {
    if ( v173 )
    {
      if ( v15[2] != v12 )
        goto LABEL_21;
      v24 = (struct tagWND *)v15;
    }
    else
    {
      if ( a2 )
        goto LABEL_21;
      v24 = 0LL;
    }
    xxxUpdateInputHangInfo(v24, 1LL);
  }
LABEL_21:
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v23);
  if ( CurrentProcessWin32Process )
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  v26 = *(_DWORD *)(CurrentProcessWin32Process + 12);
  if ( (v26 & 4) != 0 )
  {
    *(_DWORD *)(CurrentProcessWin32Process + 12) = v26 & 0xFFFFFFFB;
    zzzCalcStartCursorHide(0LL, 0LL);
  }
  xxxDoSysExpungeIfNeeded((__int64)v12);
  v27 = a5;
  v28 = 1LL;
  v162 = a5 & 1;
  if ( (a5 & 1) != 0
    && (v22 & 0x1CBF) != 0
    && (*((_DWORD *)v12 + 340) & 0x80000) != 0
    && (*(_DWORD *)(*((_QWORD *)v12 + 61) + 8LL) & v22) != 0 )
  {
    TryAttachShellFrame(v12, 1u);
    v28 = 1LL;
  }
  v29 = *((_QWORD *)v12 + 59);
  if ( *((_QWORD *)v12 + 69) )
  {
LABEL_33:
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x20000) == 0
      || (v31 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v31 = 0;
    }
    v28 = (unsigned __int64)&WPP_RECORDER_INITIALIZED;
    v32 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v31 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v33 = *(_QWORD *)(v29 + 72);
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      LOBYTE(v35) = v32;
      LOBYTE(v36) = v31;
      WPP_RECORDER_AND_TRACE_SF_qqq(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v36,
        v35,
        *(_QWORD *)(UserSessionState + 69160),
        4,
        18,
        20,
        (__int64)&WPP_62b8cb8514ba365a29e38d0f8208fd40_Traceguids,
        v29,
        (char)v12,
        v33);
      v27 = a5;
    }
    *(_QWORD *)(v29 + 72) = 0LL;
    v30 = 0LL;
    v9 = 0;
LABEL_41:
    if ( v30 == v12 )
      goto LABEL_43;
    goto LABEL_42;
  }
  v30 = *(struct tagTHREADINFO **)(v29 + 72);
  if ( v30 == v12 )
  {
    if ( *(_QWORD *)(v29 + 80) != *((_QWORD *)v12 + 77) )
      goto LABEL_41;
    goto LABEL_33;
  }
LABEL_42:
  **((_DWORD **)v12 + 61) &= ~1u;
LABEL_43:
  *((_WORD *)v12 + 460) = 0;
  v37 = v27 & 2;
  v175 = v27 & 2;
  if ( (v27 & 2) == 0 )
  {
    v175 = v27 & 2;
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)v12 + 132, 0, 0) & 0x80000) != 0 )
    {
      v184 = _InterlockedCompareExchange((volatile signed __int32 *)v12 + 132, 0, 0);
      v37 = *((_QWORD *)v12 + 65);
      *(_DWORD *)(v37 + 28) = v184 & 0xFFF7FFFF;
      _InterlockedOr((volatile signed __int32 *)(*((_QWORD *)v12 + 61) + 8LL), 0x2000u);
      _InterlockedOr((volatile signed __int32 *)(*((_QWORD *)v12 + 61) + 4LL), 0x2000u);
      _InterlockedAnd((volatile signed __int32 *)v12 + 132, 0xFFF7FFFF);
      v175 = v27 & 2;
    }
  }
  v38 = v22 & 0xFFBF;
  v163 = v22 & 0xFFBF;
  v39 = ~(v22 & 0xFFFFFFBF);
  v165 = v39;
  v40 = v22 & 0x1C07;
  v164 = v40;
  while ( 1 )
  {
    v166 = 0LL;
    v41 = *(_QWORD *)(W32GetUserSessionState(v37, v28) + 16912);
    if ( *((_QWORD *)v12 + 62) == v41 )
    {
      *(_QWORD *)(W32GetUserSessionState(v41, v28) + 16912) = 0LL;
      if ( *((_QWORD *)v12 + 62) )
        zzzReattachThreads(2LL, 0LL, 0LL);
    }
    *((_WORD *)v12 + 460) |= v38 & (unsigned __int16)*(_DWORD *)(*((_QWORD *)v12 + 61) + 4LL);
    _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)v12 + 61) + 4LL), v39);
    if ( ((unsigned __int8)v22 & *(_BYTE *)(*((_QWORD *)v12 + 61) + 8LL) & 0x40) != 0 )
    {
      xxxReceiveMessages(v12);
    }
    else if ( (*(_DWORD *)(*((_QWORD *)v12 + 61) + 8LL) & 0x40) != 0 )
    {
      v58 = v9 | 0x80;
LABEL_76:
      v161 = v58;
      goto LABEL_77;
    }
    if ( v40 != 0 && (v22 & 0x40) != 0 )
      xxxProcessDelegateCapturedPointers(v12);
    if ( tagTHREADINFO::HasCoreMessagingWindow(v12) && (v22 & 8) != 0 )
      xxxDrainQueueCompletions(0x80000000uLL, v42);
    if ( (unsigned int)Feature_YieldInputQueue2__private_IsEnabledNoReportingNoInline(v43, v42, v44, v45) )
    {
      v48 = *((_QWORD *)v12 + 59);
      v49 = *(_DWORD *)(v48 + 412);
      if ( (v49 & 0x1000) != 0 && !*(_DWORD *)(v48 + 40) && (v49 & 0x20) == 0 )
      {
        *(_DWORD *)(v48 + 412) = v49 & 0xFFFFEFFF;
        if ( (unsigned int)Feature_YieldInputQueue2__private_GetVariant(v48, v28, v46, v47) == 3 )
        {
          v50 = (const struct tagQ *)*((_QWORD *)v12 + 59);
          if ( *((_WORD *)v50 + 262) > 1u )
          {
            InputTraceLogging::Mouse::StrugglingInputQueueStop(v50);
            if ( dword_14039BBC0 )
            {
              if ( (unsigned __int8)tlgKeywordOn(&dword_14039BBC0, 0x400000000000LL) )
              {
                PerformanceCounter = KeQueryPerformanceCounter(0LL);
                v54 = W32GetUserSessionState(v53, v52);
                v55 = v54 + 69176;
                v56 = *(_DWORD *)(v54 + 69180);
                if ( !v56 )
                  *(LARGE_INTEGER *)(v54 + 69184) = PerformanceCounter;
                *(_DWORD *)(v54 + 69180) = v56 + 1;
                v28 = PerformanceCounter.QuadPart - *(_QWORD *)(*((_QWORD *)v12 + 59) + 528LL);
                *(_QWORD *)(v54 + 69192) += v28;
                if ( v28 > *(_QWORD *)(v54 + 69200) )
                {
                  *(_QWORD *)(v54 + 69200) = v28;
                  *(_DWORD *)(v54 + 69208) = *(_DWORD *)(*((_QWORD *)v12 + 58) + 56LL);
                  *(_DWORD *)(v54 + 69212) = *(_DWORD *)(*((_QWORD *)v12 + 59) + 520LL);
                  *(_WORD *)(v54 + 69216) = *(_WORD *)(*((_QWORD *)v12 + 59) + 526LL);
                  *(_WORD *)(v54 + 69218) = *(_WORD *)(*((_QWORD *)v12 + 59) + 524LL);
                }
                v57 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
                if ( (unsigned int)(v57 - *(_DWORD *)v55) >= 0xEA60 )
                {
                  if ( (unsigned int)dword_14039BBC0 > 5
                    && (unsigned __int8)tlgKeywordOn(&dword_14039BBC0, 0x400000000000LL) )
                  {
                    v185 = (unsigned __int64)(1000LL * *(_QWORD *)(v55 + 24)) / gliQpcFreq;
                    v194 = *(_WORD *)(v55 + 42);
                    v174 = *(_WORD *)(v55 + 40);
                    v177 = *(_DWORD *)(v55 + 36);
                    v186[0] = (unsigned __int64)(1000LL * *(_QWORD *)(v55 + 16)) / gliQpcFreq;
                    v186[1] = (unsigned __int64)(1000 * (PerformanceCounter.QuadPart - *(_QWORD *)(v55 + 8)))
                            / gliQpcFreq;
                    v178 = *(_DWORD *)(v55 + 4);
                    v179 = *(_DWORD *)(v55 + 32);
                    v187 = 0x1000000LL;
                    v160 = &v185;
                    v159 = &v194;
                    v158 = &v174;
                    v157 = &v177;
                    v156 = v186;
                    v155 = &v178;
                    v154 = &v179;
                    v153 = &v187;
                    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>>(
                      gliQpcFreq,
                      (__int64)&unk_1403681B0);
                  }
                  *(_DWORD *)v55 = v57;
                  *(_QWORD *)(v55 + 24) = 0LL;
                  *(_DWORD *)(v55 + 4) = 0;
                  *(_QWORD *)(v55 + 16) = 0LL;
                }
              }
            }
          }
        }
      }
    }
    if ( (*(_DWORD *)(*((_QWORD *)v12 + 61) + 8LL) & v22) == 0 )
    {
      v58 = v9 | 0x100;
      goto LABEL_76;
    }
    v61 = *(_DWORD *)(*((_QWORD *)v12 + 61) + 8LL);
    v62 = *((_QWORD *)v12 + 59);
    if ( *(struct tagTHREADINFO **)(v62 + 72) != v12 || (*(_DWORD *)(v62 + 412) & 0x400) == 0 )
      goto LABEL_92;
    EtwTraceInputQueueNoRemoveLocker(v62, v28, v46, v47);
    if ( ((unsigned __int16)v61 & (unsigned __int16)v22 & 0x3C07) == 0 )
    {
      if ( (v61 & 0x2000) != 0 )
      {
        v58 = v9 | 0x200;
        goto LABEL_76;
      }
LABEL_92:
      v63 = v176;
      goto LABEL_93;
    }
    LODWORD(v155) = (unsigned __int16)v61 & (unsigned __int16)v22 & 0x3C07;
    LODWORD(v154) = a5;
    LODWORD(v153) = v171;
    v63 = v176;
    v64 = xxxScanSysQueue(v12, a1, v176, v195, v153, v154, v155, &v166, v156, v157, v158, v159, v160);
    v67 = 1LL;
    if ( v64 == 1 )
    {
      v9 |= 2u;
      goto LABEL_132;
    }
    if ( !v64 )
      UnblockDeferredInput(v12);
LABEL_93:
    if ( ((unsigned __int8)v61 & (unsigned __int8)v22 & 8) == 0 )
      goto LABEL_105;
    PostMessage = xxxReadPostMessage(v12, (struct tagMSG *)a1, v63, v195, v171, v162);
    v67 = 0LL;
    if ( PostMessage )
      break;
    if ( (v63 || v195 <= v171 && v171 >= 0x200 && v195 <= 0x20E && (v195 || v171 != -1) && v195 > 0x60)
      && (*((_DWORD *)v12 + 340) & 0x20000000) != 0 )
    {
      memset(v191, 0, 48);
      if ( (unsigned int)xxxReadPostMessage(v12, (struct tagMSG *)v191, 0LL, 0x60u, 0x60u, 1) )
        xxxSendPostedMessage((const struct tagMSG *)v191, (struct tagMSG *)v191);
    }
LABEL_105:
    if ( v63 == (struct tagWND *)1 )
    {
      v58 = v9 | 0x400;
      goto LABEL_76;
    }
    if ( ((unsigned __int16)v61 & (unsigned __int16)v22 & 0x3C07) != 0 )
    {
      LODWORD(v155) = (unsigned __int16)v61 & (unsigned __int16)v22 & 0x3C07;
      LODWORD(v154) = a5;
      LODWORD(v153) = v171;
      v69 = xxxScanSysQueue(v12, a1, v63, v195, v153, v154, v155, &v166, v156, v157, v158, v159, v160);
      if ( v69 == 2 )
      {
        if ( (unsigned int)IsShellFrameHangResilient(v12)
          && ((unsigned __int8)v61 & (unsigned __int8)v22 & 1) != 0
          && a6 )
        {
          v70 = v170;
          if ( v170 )
          {
            v72 = v168;
            v71 = v167;
          }
          else
          {
            v71 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
            v167 = v71;
            v70 = v71;
            v170 = v71;
            v72 = 0;
            v168 = 0;
          }
          v28 = (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v70;
          if ( (unsigned int)v28 < 0xFA )
          {
            xxxSleepThread2(v22, 0xAu, 1, 0, (enum SLEEP_STATUS *)&v169);
            v168 = v72 + 1;
            goto LABEL_249;
          }
          if ( v71 == v70 )
          {
            TraceLoggingSysQueueLockedRetryFailed(v72, v28);
            v167 = 0;
          }
        }
      }
      else
      {
        v167 = 0;
        v168 = 0;
        v170 = 0;
        if ( v69 == 1 )
        {
          v9 |= 2u;
          goto LABEL_132;
        }
      }
    }
    else if ( (v61 & 0x2000) != 0 )
    {
      v58 = v9 | 0x800;
      goto LABEL_76;
    }
    if ( ((unsigned __int8)v22 & *(_BYTE *)(*((_QWORD *)v12 + 61) + 8LL) & 0x40) != 0 )
    {
      xxxReceiveMessages(v12);
    }
    else if ( (*(_DWORD *)(*((_QWORD *)v12 + 61) + 8LL) & 0x40) != 0 )
    {
      v58 = v9 | 0x1000;
      goto LABEL_76;
    }
    if ( (*(_DWORD *)(*((_QWORD *)v12 + 61) + 8LL) & v22) == 0 )
    {
      v58 = v9 | 0x2000;
      goto LABEL_76;
    }
    v73 = *(_DWORD *)(*((_QWORD *)v12 + 61) + 8LL);
    if ( ((unsigned __int8)v73 & (unsigned __int8)v22 & 0x20) != 0 )
    {
      v74 = xxxDoPaint(v63, a1);
      v67 = 0LL;
      if ( v74 )
      {
        v9 |= 4u;
        goto LABEL_132;
      }
    }
    if ( !v175 )
    {
      zzzWakeInputIdle((__int64)v12);
      xxxReceiveMessages(v12);
      if ( ((unsigned __int8)v22 & *(_BYTE *)(*((_QWORD *)v12 + 61) + 8LL) & 0x40) != 0 )
      {
        xxxReceiveMessages(v12);
      }
      else if ( (*(_DWORD *)(*((_QWORD *)v12 + 61) + 8LL) & 0x40) != 0 )
      {
        v58 = v9 | 0x4000;
        goto LABEL_76;
      }
      if ( (*(_DWORD *)(*((_QWORD *)v12 + 61) + 8LL) & v22) == 0 )
      {
        v58 = v9 | 0x8000;
        goto LABEL_76;
      }
      v73 = *(_DWORD *)(*((_QWORD *)v12 + 61) + 8LL);
    }
    if ( ((unsigned __int8)v73 & (unsigned __int8)v22 & 0x10) != 0 && (unsigned int)DoTimer(v63) )
    {
      v9 |= 8u;
      v161 = v9;
      goto LABEL_249;
    }
LABEL_77:
    v59 = *((_QWORD *)v12 + 59);
    if ( *(struct tagTHREADINFO **)(v59 + 72) == v12 )
    {
      *(_QWORD *)(v59 + 80) = 0LL;
      v60 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
         && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x20000) != 0
         && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
      v83 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v60 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v84 = *((_QWORD *)v12 + 59);
        v85 = *(_QWORD *)(v84 + 72);
        v86 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v28);
        LOBYTE(v87) = v83;
        LOBYTE(v88) = v60;
        WPP_RECORDER_AND_TRACE_SF_qqq(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v88,
          v87,
          *(_QWORD *)(v86 + 69160),
          4,
          18,
          21,
          (__int64)&WPP_62b8cb8514ba365a29e38d0f8208fd40_Traceguids,
          v84,
          (char)v12,
          v85);
      }
      *(_QWORD *)(*((_QWORD *)v12 + 59) + 72LL) = 0LL;
      **((_DWORD **)v12 + 61) &= ~1u;
    }
    if ( tagQ::AreMultipleThreadsAttached(*((tagQ **)v12 + 59)) )
    {
      v90 = *(_QWORD *)(v89 + 24);
      if ( v90 )
      {
        if ( (*(_DWORD *)(v90 + 100) & 0x10) == 0 )
        {
          v91 = *(struct tagTHREADINFO **)(v90 + 104);
          if ( v91 )
          {
            if ( v91 != v12 )
              WakeSomeoneAfterUnlockingOrUndeferring((struct tagQMSG *)v90);
          }
        }
      }
    }
    if ( !a6 )
    {
      if ( (a5 & 2) == 0 )
      {
        zzzWakeInputIdle((__int64)v12);
        xxxReceiveMessages(v12);
      }
      v9 = v161;
LABEL_286:
      LOBYTE(v102) = v162;
LABEL_287:
      v16 = 0;
      goto LABEL_288;
    }
    if ( v173 )
    {
      v92 = xxxSleepThreadWithPwnd(v176, v22);
LABEL_170:
      if ( !v92 )
      {
        v9 = v161 | 0x10000;
        goto LABEL_286;
      }
      v9 = 0;
      v161 = 0;
LABEL_249:
      v40 = v164;
      v39 = v165;
      goto LABEL_250;
    }
    v169 = 0;
    v93 = *((_QWORD *)v12 + 59);
    v94 = *(_QWORD *)(v93 + 80);
    v95 = *(_QWORD *)(v93 + 72);
    v96 = IsShellFrameHangResilient(v12);
    if ( v96 )
    {
      v167 = 0;
      v168 = 0;
      v170 = 0;
    }
    v92 = xxxSleepThread2(v22, v96 != 0 ? 0x7530 : 0, 1, 0, (enum SLEEP_STATUS *)&v169);
    if ( !(unsigned int)IsShellFrameHangResilient(v12) )
      goto LABEL_170;
    v37 = *(_QWORD *)(*((_QWORD *)v12 + 59) + 128LL);
    if ( v37 != *((_QWORD *)v12 + 198) )
    {
      if ( v37 )
        goto LABEL_170;
    }
    if ( !v169 )
      goto LABEL_170;
    v149 = SlowAppThreadInShellFrame(v12, v95, v94, v169 == 2);
    v9 = v161;
    v38 = v163;
    v40 = v164;
    v39 = v165;
    if ( v149 )
    {
      TryDetachShellFrame(v12, v149, v169 == 2);
LABEL_250:
      v38 = v163;
    }
  }
  if ( v162 )
  {
    v97 = *(unsigned int *)(a1 + 8);
    if ( (unsigned int)v97 < 0x400 )
      v67 = (unsigned __int16)MessageTable[v97] >> 15;
    if ( (_DWORD)v67 )
      xxxSendPostedMessage((const struct tagMSG *)a1, (struct tagMSG *)a1);
  }
  v9 |= 1u;
LABEL_132:
  v161 = v9;
  if ( *(_DWORD *)(a1 + 8) != 595 || (v75 = -1LL, *(_QWORD *)(a1 + 24) != -1LL) )
    v75 = 0LL;
  IsEnabledDeviceUsageNoInline = Feature_TouchpadPublicApis__private_IsEnabledDeviceUsageNoInline(v67, v28, v65, v66);
  v79 = *(unsigned int *)(a1 + 8);
  v80 = 0LL;
  v82 = IsEnabledDeviceUsageNoInline == 0;
  v81 = v79 - 571;
  if ( v82 )
  {
    LOBYTE(v80) = v81 <= 1;
    if ( !(_DWORD)v80
      && (!(unsigned int)IsTouchpadPointerInputMessage((unsigned int)v79)
       || !(unsigned int)IsPointerMessageTouchpad(v12, v75, *(_WORD *)(a1 + 16))) )
    {
      goto LABEL_185;
    }
    v98 = 1;
  }
  else
  {
    LOBYTE(v80) = v81 <= 1;
    if ( (_DWORD)v80 )
    {
      v80 = 0x2000002000LL;
      if ( (*((_QWORD *)v12 + 170) & 0x2000002000LL) == 0 )
      {
        v82 = *(_QWORD *)(a1 + 24) == 1LL;
        goto LABEL_189;
      }
      goto LABEL_190;
    }
    if ( !(unsigned int)IsTouchpadPointerInputMessage((unsigned int)v79)
      || (v82 = (unsigned int)IsPointerMessageTouchpad(v12, v75, *(_WORD *)(a1 + 16)) == 0, v98 = 1, v82) )
    {
LABEL_185:
      v98 = 0;
    }
  }
  if ( !v98 )
    goto LABEL_190;
  v82 = !ShouldReceiveTouchpadMessages(v12, *(HWND *)a1);
LABEL_189:
  v99 = 1;
  if ( !v82 )
LABEL_190:
    v99 = 0;
  v100 = *(_DWORD *)(a1 + 8);
  if ( v100 == 842 || v100 == 537 || v100 == 568 )
  {
    Feature_MTestAbSh1__private_ReportDeviceUsage(v80, v79, v77, v78);
    v101 = 1;
  }
  else
  {
    v101 = 0;
  }
  v102 = v162;
  if ( !v162 )
    goto LABEL_304;
  v103 = *(_DWORD *)(a1 + 8);
  if ( v103 == 258
    || (v104 = v103 - 578, v104 <= 5) && (v79 = 51LL, _bittest((const int *)&v79, v104))
    || v101
    || *(_WORD *)(a1 + 8) >= 0xC000u )
  {
    if ( (unsigned int)xxxCallCtfHook(3LL, 0LL, (unsigned int)a5, (__int128 *)a1) )
    {
      v105 = *(_DWORD *)(a1 + 8);
      if ( v105 == 258 )
      {
        *(_DWORD *)(a1 + 8) = 0;
        goto LABEL_206;
      }
      if ( v105 == 842 )
      {
LABEL_206:
        *(_QWORD *)(a1 + 24) = 0LL;
        *(_QWORD *)(a1 + 16) = 0LL;
      }
    }
  }
  if ( !v166 || !*((_QWORD *)v12 + 183) && !*((_QWORD *)v12 + 185) )
  {
LABEL_304:
    if ( !v99 )
    {
      v106 = *((_QWORD *)v12 + 63);
      v79 = (unsigned int)(*((_DWORD *)v12 + 180) | *(_DWORD *)(*(_QWORD *)v106 + 16LL));
      if ( ((*((_BYTE *)v12 + 720) | *(_BYTE *)(*(_QWORD *)v106 + 16LL)) & 0x10) != 0 )
      {
        v107 = *(_DWORD *)(a1 + 8);
        v108 = *(void **)(a1 + 24);
        v109 = 0LL;
        v110 = 0LL;
        v180 = 0LL;
        if ( v107 == 255 )
        {
          if ( v108 )
          {
            LOBYTE(v79) = 18;
            v109 = HMValidateHandleNoSecure((__int64)v108, v79);
            if ( v109 )
            {
              if ( (unsigned int)Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline(
                                   v112,
                                   v111,
                                   v113,
                                   v114) )
              {
                FlushPostedRawInput(v12);
                v115 = UnlinkHidData(v12, (struct tagHIDDATA *)v109, &v180);
              }
              else
              {
                v115 = FlushPostedRawInputAndUnlinkThisOne(v12, (struct tagHIDDATA *)v109, &v180);
              }
              v109 = (__int64)v115;
              if ( v115 )
              {
                if ( !(unsigned int)Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline(
                                      v117,
                                      v116,
                                      v118,
                                      v119) )
                  *(_DWORD *)(v109 + 48) |= 1u;
                v110 = *((_QWORD *)v12 + 143);
                *((_QWORD *)v12 + 143) = v109;
              }
            }
          }
        }
        xxxCallHook(0LL, (unsigned int)a5, a1, 3);
        if ( v109 )
        {
          *((_QWORD *)v12 + 143) = v110;
          if ( *(_DWORD *)(a1 + 8) == 255 )
          {
            LOBYTE(v79) = 18;
            v120 = HMValidateHandleNoSecure((__int64)v108, v79);
            if ( v120 )
            {
              *(_DWORD *)(v120 + 48) &= ~1u;
              v77 = v180;
              v79 = (__int64)*v180;
              *(_QWORD *)(v120 + 32) = *v180;
              *v77 = (struct tagHIDDATA *)v120;
            }
          }
        }
        if ( v107 == 255 && v108 && !*(_DWORD *)(a1 + 8) )
          InputTraceLogging::RawInput::HijackHidData(v108);
        v102 = v162;
        v9 = v161;
      }
    }
  }
  if ( v102 )
  {
    if ( *((_DWORD *)v12 + 310) )
      PointerPromotion::xxxCompletePendingPromotion(v12, (struct tagTHREADINFO *)v79);
    if ( *(_DWORD *)(a1 + 8) == 583 && _bittest16((const signed __int16 *)(a1 + 18), 0xDu) )
      PointerPromotion::MarkPendingPromotion(
        v12,
        (struct tagTHREADINFO *)*(unsigned __int16 *)(a1 + 16),
        (unsigned __int16)v77);
    v121 = 0;
    if ( (unsigned int)IsPointerInputMessageWithState(*(unsigned int *)(a1 + 8)) )
      v121 = *(_WORD *)(a1 + 16);
    v124 = W32GetUserSessionState(v123, v122);
    CTouchProcessor::UpdateThreadPointerList(
      *(CTouchProcessor **)(v124 + 3256),
      (struct tagTHREADINFO *)((char *)v12 + 1208),
      v121);
  }
  if ( v166 )
  {
    v125 = *((_DWORD *)v166 + 25);
    if ( (v125 & 0x100) != 0 )
    {
      if ( v102 )
      {
        if ( *((_QWORD *)v12 + 185) )
        {
          InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v182, "ShellHandwriting Delegation", 0LL);
          InputTraceLogging::Delivery::CallShellHandwritingDelegateThread(v166);
          InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
            v190,
            "ShellHandwriting DelegationCallout",
            (const struct InputTraceLogging::ThreadLockedPerfRegion *)&v182);
          v126 = xxxClientCallDelegateThread(*((_QWORD *)v12 + 185), a1, *((_QWORD *)v12 + 184));
          InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion(
            (InputTraceLogging::ThreadLockedPerfRegion *)v190,
            v127);
          v128 = *((unsigned int *)v166 + 25);
          if ( (v128 & 0x20) != 0 )
          {
            v129 = W32GetUserSessionState(v166, v128);
            TouchProcessorLock = CTouchProcessor::GetTouchProcessorLock(*(CTouchProcessor **)(v129 + 3256));
            CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v192, TouchProcessorLock, v131);
            *((_DWORD *)v166 + 25) &= ~0x100u;
            _HandleShellHandwritingDelegatedInputWorker(v12, v126, v166);
            CInpLockGuardExclusive::~CInpLockGuardExclusive((CInpLockGuardExclusive *)v192);
          }
          v132 = &v182;
          goto LABEL_247;
        }
        if ( *((_QWORD *)v12 + 183) )
        {
          InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v183, "Delegation", 0LL);
          EtwTraceBeginDelegateInputCallback(v166, a1);
          InputTraceLogging::Delivery::CallDelegateThread(v166);
          InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
            &v188,
            "DelegationCallout",
            (const struct InputTraceLogging::ThreadLockedPerfRegion *)&v183);
          v133 = xxxClientCallDelegateThread(*((_QWORD *)v12 + 183), a1, *((_QWORD *)v12 + 184));
          InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion(
            (InputTraceLogging::ThreadLockedPerfRegion *)&v188,
            v134);
          EtwTraceEndDelegateInputCallback(v166, a1);
          v128 = *((unsigned int *)v166 + 25);
          if ( (v128 & 0x20) != 0 )
          {
            v135 = W32GetUserSessionState(v166, v128);
            v136 = CTouchProcessor::GetTouchProcessorLock(*(CTouchProcessor **)(v135 + 3256));
            CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v193, v136, v137);
            *((_DWORD *)v166 + 25) &= ~0x100u;
            _HandleDelegatedInputWorker(v12, v133, v166);
            CInpLockGuardExclusive::~CInpLockGuardExclusive((CInpLockGuardExclusive *)v193);
          }
          v132 = &v183;
LABEL_247:
          v9 = 0x20000;
          v161 = 0x20000;
          InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion(
            (InputTraceLogging::ThreadLockedPerfRegion *)v132,
            v128);
LABEL_248:
          v22 = v172;
          goto LABEL_249;
        }
      }
      *((_DWORD *)v166 + 25) = v125 & 0xFFFFFEFF;
    }
  }
  if ( v99 )
  {
    InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v189, "PTPDownleveling", 0LL);
    v138 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x200) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v139 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v139 = 0;
    }
    if ( v138 || v139 )
    {
      v140 = *(_WORD *)(a1 + 16);
      v141 = *(_DWORD *)(a1 + 8);
      v142 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      LOBYTE(v143) = v139;
      LOBYTE(v144) = v138;
      WPP_RECORDER_AND_TRACE_SF_Dd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v144,
        v143,
        *(_QWORD *)(v142 + 69160),
        5,
        10,
        22,
        (__int64)&WPP_62b8cb8514ba365a29e38d0f8208fd40_Traceguids,
        v141,
        v140);
    }
    xxxClientCallDefaultInputHandler(a1);
    memset(&v191[3], 0, 48);
    *(_OWORD *)a1 = 0LL;
    *(_OWORD *)(a1 + 16) = 0LL;
    *(_OWORD *)(a1 + 32) = 0LL;
    InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion(
      (InputTraceLogging::ThreadLockedPerfRegion *)&v189,
      v145);
    v9 = v161;
    goto LABEL_248;
  }
  if ( (unsigned int)IsMiPPointerMessage(*(unsigned int *)(a1 + 8), *(_QWORD *)(a1 + 16)) )
  {
    LOBYTE(v146) = 1;
    v147 = HMValidateHandleNoSecure(*(_QWORD *)a1, v146);
    if ( v147 )
    {
      if ( !(unsigned int)IsMiPEnabledForWindow(v147) )
      {
        TraceLoggingMiPSuppressedForWindow(v148, *(_DWORD *)(a1 + 8), v102);
        if ( v102 )
          xxxClientCallDefWindowProc(a1);
        memset(&v191[6], 0, 48);
        *(_OWORD *)a1 = 0LL;
        *(_OWORD *)(a1 + 16) = 0LL;
        *(_OWORD *)(a1 + 32) = 0LL;
        goto LABEL_248;
      }
    }
  }
  if ( a6 && *(_DWORD *)(a1 + 8) == 18 )
  {
    v9 |= 0x40000u;
    goto LABEL_287;
  }
  v16 = 1;
  if ( v102 )
  {
    FreeSavedMessageInfoHandles(v12);
    SaveMessageInfoHandle(v12, (struct tagMSG *)a1);
  }
LABEL_288:
  if ( v173 )
    Win32HMThreadLockBase<tagMENU,0,1>::ManualUnlock<void>((ULONG_PTR)BugCheckParameter3);
  if ( !(unsigned int)HandleProcessSpinning() )
  {
    v16 = 0;
    goto LABEL_299;
  }
  if ( v16 )
  {
    if ( *(_DWORD *)(a1 + 8) == 512 && (*((_DWORD *)v12 + 340) & 0x40000LL) != 0 )
    {
      v150 = (_DWORD *)*((_QWORD *)v12 + 89);
      if ( v150 )
      {
        if ( (v150[50] & 0x8000) != 0 && v150[67] )
        {
          v150[68] += ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v150[67];
          ++v150[69];
          v150[67] = 0;
        }
      }
    }
LABEL_299:
    if ( v16 )
    {
      *((_QWORD *)v12 + 164) = *(_QWORD *)a1;
      *((_DWORD *)v12 + 330) = *(_DWORD *)(a1 + 8);
      *((_QWORD *)v12 + 166) = *(_QWORD *)(a1 + 16);
      LOBYTE(v150) = 1;
      v151 = (struct tagWND *)HMValidateHandleNoSecure(*(_QWORD *)a1, (__int64)v150);
      InputTraceLogging::Delivery::GetMessageW((const struct tagMSG *)a1, v12, v151, v152, v102);
    }
  }
  EtwTraceBeginAppMessageProcessing(a6, v9, a1);
LABEL_7:
  Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(BugCheckParameter3, v17);
  return v16;
}
