/*
 * XREFs of xxxRealDefWindowProc @ 0x140259FFC
 * Callers:
 *     xxxDefWindowProc @ 0x1400C36C0 (xxxDefWindowProc.c)
 *     ?xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x140167A50 (-xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??1?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x14001BAD0 (--1-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x14001D970 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     xxxSleepThread2 @ 0x14001E134 (xxxSleepThread2.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x140020958 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x140021688 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     PostShellHookMessagesEx @ 0x1400216D0 (PostShellHookMessagesEx.c)
 *     xxxRedrawTitle @ 0x140021BF8 (xxxRedrawTitle.c)
 *     ?IsInsideUserApiHook@@YAHXZ @ 0x140022DA4 (-IsInsideUserApiHook@@YAHXZ.c)
 *     ?PostIAMShellHookMessage@@YAXI_J@Z @ 0x140023794 (-PostIAMShellHookMessage@@YAXI_J@Z.c)
 *     IsImmersiveApplicationBandId @ 0x140029E44 (IsImmersiveApplicationBandId.c)
 *     xxxSendMinRectMessages @ 0x14002ADF4 (xxxSendMinRectMessages.c)
 *     ??0?$Win32HMOptionalThreadLock@UtagWND@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x14002D4E4 (--0-$Win32HMOptionalThreadLock@UtagWND@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x14002EA74 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxWindowEvent @ 0x14002EAB0 (xxxWindowEvent.c)
 *     xxxSendTransformableMessageTimeout @ 0x140030264 (xxxSendTransformableMessageTimeout.c)
 *     _GetDesktopWindow @ 0x140034670 (_GetDesktopWindow.c)
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x14003507C (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     xxxInternalDoSyncPaint @ 0x1400356D0 (xxxInternalDoSyncPaint.c)
 *     BuildHwndList @ 0x140036200 (BuildHwndList.c)
 *     FreeHwndList @ 0x140036740 (FreeHwndList.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetOrClrWF @ 0x1400373A0 (SetOrClrWF.c)
 *     GetAppCompatFlags2 @ 0x140038130 (GetAppCompatFlags2.c)
 *     _GetTopLevelWindow @ 0x140038170 (_GetTopLevelWindow.c)
 *     ??1?$Win32HMThreadLockAlways@UtagACCELTABLE@@@@QEAA@XZ @ 0x14003D904 (--1-$Win32HMThreadLockAlways@UtagACCELTABLE@@@@QEAA@XZ.c)
 *     xxxDWP_DoNCActivate @ 0x14003EE4C (xxxDWP_DoNCActivate.c)
 *     xxxDrawCaptionBar @ 0x140044E0C (xxxDrawCaptionBar.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x1400461EC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     _SetMenuDefaultItem @ 0x1400464EC (_SetMenuDefaultItem.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x140047180 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140047684 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     xxxCalcClientRect @ 0x140047B98 (xxxCalcClientRect.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140048F0C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140049F78 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     DefSetText @ 0x14004A028 (DefSetText.c)
 *     DesktopVerifyHeapLargeUnicodeString @ 0x14004A3E0 (DesktopVerifyHeapLargeUnicodeString.c)
 *     xxxAdjustSize @ 0x14004B4E8 (xxxAdjustSize.c)
 *     ??$?0VSharedUserObjPointerFieldspwndParent@tagWND@@@?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@PEAUtagTHREADINFO@@AEAV?$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@@@Z @ 0x14004DCF4 (--$-0VSharedUserObjPointerFieldspwndParent@tagWND@@@-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@PE.c)
 *     ?xxxDWP_Paint@@YAXPEAUtagWND@@@Z @ 0x140050458 (-xxxDWP_Paint@@YAXPEAUtagWND@@@Z.c)
 *     xxxDWP_EraseBkgnd @ 0x140054368 (xxxDWP_EraseBkgnd.c)
 *     GreSetTextColor @ 0x140056CB4 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x140056D44 (GreSetBkColor.c)
 *     GetNonChildAncestor @ 0x14005E7A4 (GetNonChildAncestor.c)
 *     xxxReleaseCapture @ 0x14006247C (xxxReleaseCapture.c)
 *     xxxSetCapture @ 0x140062528 (xxxSetCapture.c)
 *     HMValidateHandleNoSecure @ 0x1400653B0 (HMValidateHandleNoSecure.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x140068988 (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1400C5FF0 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     _FreeTouchInputInfo @ 0x1400CABF0 (_FreeTouchInputInfo.c)
 *     xxxMessageBeep @ 0x1401107D4 (xxxMessageBeep.c)
 *     _GetProcessWindowStation @ 0x140111060 (_GetProcessWindowStation.c)
 *     xxxInternalGetMessage @ 0x1401153B0 (xxxInternalGetMessage.c)
 *     xxxGetTitleBarInfoEx @ 0x140118784 (xxxGetTitleBarInfoEx.c)
 *     WCSToMBEx @ 0x14011BD24 (WCSToMBEx.c)
 *     xxxSendNotifyMessage @ 0x14012B560 (xxxSendNotifyMessage.c)
 *     xxxTrackPopupMenuEx @ 0x14015AE18 (xxxTrackPopupMenuEx.c)
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x14015BC98 (-GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x14015CE44 (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     xxxDefPointerProc @ 0x14015D838 (xxxDefPointerProc.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1401701A0 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@I@Z @ 0x140175800 (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@I@Z.c)
 *     GetThreadDesktopWindow @ 0x1401785A0 (GetThreadDesktopWindow.c)
 *     xxxDestroyWindow @ 0x14017EBE0 (xxxDestroyWindow.c)
 *     _IsDescendant @ 0x14017FA7C (_IsDescendant.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x140181818 (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagMENU@@$0A@$00@@QEAAPEAUtagMENU@@XZ @ 0x140187B78 (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagMENU@@$0A@$00@@QEAAPEAUtagMENU@@XZ.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x140187CB8 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@Z @ 0x14018AF44 (-getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@.c)
 *     TextCopy @ 0x14019540C (TextCopy.c)
 *     DWP_SetHotKey @ 0x1401A8FA4 (DWP_SetHotKey.c)
 *     ?HotKeyHelper@@YAPEAPEAUtagHOTKEYSTRUCT@@PEAUtagWND@@@Z @ 0x1401A910C (-HotKeyHelper@@YAPEAPEAUtagHOTKEYSTRUCT@@PEAUtagWND@@@Z.c)
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1401BAE34 (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 *     xxxGetSysMenu @ 0x1401BC884 (xxxGetSysMenu.c)
 *     DWP_GetIcon @ 0x1401CB10C (DWP_GetIcon.c)
 *     xxxDWP_UpdateUIState @ 0x1401CE994 (xxxDWP_UpdateUIState.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1401CF77C (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     FindNCHit @ 0x1401D7FEC (FindNCHit.c)
 *     xxxLoadUserApiHook @ 0x1401D9C7C (xxxLoadUserApiHook.c)
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1401DB0A4 (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 *     xxxClientShutdown @ 0x1401DFACC (xxxClientShutdown.c)
 *     xxxHandleWindowPosChanged @ 0x1401F8394 (xxxHandleWindowPosChanged.c)
 *     ??$?0VSmartObjStackRef@@@?$Win32HMThreadLockAlways@UtagMENU@@@@QEAA@AEAV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1401FEBB4 (--$-0VSmartObjStackRef@@@-$Win32HMThreadLockAlways@UtagMENU@@@@QEAA@AEAV-$SmartObjStackRef@UtagM.c)
 *     MNClearCachedPopupSizes @ 0x1401FED6C (MNClearCachedPopupSizes.c)
 *     xxxDrawMenuBarUnderlines @ 0x140205BB0 (xxxDrawMenuBarUnderlines.c)
 *     SfnCOPYGLOBALDATA @ 0x140209C80 (SfnCOPYGLOBALDATA.c)
 *     ?DWP_DrawItem@@YAXPEAUtagDRAWITEMSTRUCT@@@Z @ 0x14020E5F4 (-DWP_DrawItem@@YAXPEAUtagDRAWITEMSTRUCT@@@Z.c)
 *     ??$?0VSharedUserObjPointerFieldspwndParent@tagWND@@@?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@AEAV?$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@@@Z @ 0x14021B2A0 (--$-0VSharedUserObjPointerFieldspwndParent@tagWND@@@-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@AE.c)
 *     xxxSendHelpMessage @ 0x140225E8C (xxxSendHelpMessage.c)
 *     GetContextHelpId @ 0x140226B5C (GetContextHelpId.c)
 *     ?xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z @ 0x14023A8E4 (-xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z.c)
 *     ?xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z @ 0x140259C18 (-xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x140259D40 (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 *     xxxDrawWindowFrame @ 0x14025CE6C (xxxDrawWindowFrame.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundEffects@@@Z @ 0x140279134 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline @ 0x140281C38 (Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline.c)
 *     ?UserModeSupportsUserModeScrollBars@NonClient@Scrollbar@@YA_NXZ @ 0x1402AC9D0 (-UserModeSupportsUserModeScrollBars@NonClient@Scrollbar@@YA_NXZ.c)
 *     Feature_MsgUseCSRSSTrueIL__private_IsEnabledDeviceUsageNoInline @ 0x1402B3154 (Feature_MsgUseCSRSSTrueIL__private_IsEnabledDeviceUsageNoInline.c)
 *     xxxSysCommand @ 0x1402B6EB4 (xxxSysCommand.c)
 *     xxxClientDoScrollMenu @ 0x1402BD7BC (xxxClientDoScrollMenu.c)
 *     xxxClientInitPSBInfo @ 0x1402BE108 (xxxClientInitPSBInfo.c)
 *     ?xxxCloseApplication@@YAXPEAUtagTHREADINFO@@@Z @ 0x1402CA6B4 (-xxxCloseApplication@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qDll @ 0x1402CA75C (WPP_RECORDER_AND_TRACE_SF_qDll.c)
 *     _InitPwSB @ 0x1402E19AC (_InitPwSB.c)
 *     xxxDoScrollMenu @ 0x1402E8138 (xxxDoScrollMenu.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxRealDefWindowProc(struct tagWND *a1, __int64 a2, __int64 a3, struct tagDRAWITEMSTRUCT *a4)
{
  unsigned int v6; // edi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // edi
  unsigned int v13; // edi
  unsigned int v14; // edi
  unsigned int v15; // edi
  ULONG v16; // ecx
  ULONG v17; // ecx
  __int64 v18; // r12
  struct _LARGE_UNICODE_STRING *StrName; // rax
  unsigned int v20; // r8d
  char **v21; // rdi
  int v22; // eax
  signed int v23; // eax
  __int64 v24; // rdx
  int v25; // ebx
  struct _LARGE_UNICODE_STRING *v26; // rax
  char *v28; // rcx
  int v29; // eax
  unsigned __int64 v30; // rbx
  __int64 v31; // rax
  struct tagWND *v32; // rbx
  __int64 v33; // rdx
  ULONG_PTR *v34; // rcx
  char v35; // cl
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  int v39; // eax
  struct tagTHREADINFO **v40; // rbx
  __int64 v41; // rdx
  unsigned __int64 v42; // rbx
  __int64 v43; // rax
  unsigned int v44; // edi
  unsigned int v45; // edi
  unsigned int v46; // edi
  unsigned int v47; // edi
  struct tagWND ***v48; // rax
  __int64 v49; // rdx
  int v50; // r14d
  int TitleBarInfo; // eax
  unsigned int v52; // edi
  unsigned int v53; // edi
  unsigned int v54; // edi
  unsigned int v55; // edi
  unsigned int ContextHelpId; // r9d
  __int64 v57; // r14
  int v58; // r14d
  HICON updated; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  struct tagWND *v62; // r12
  __int64 v63; // rbx
  __int64 ProcessWindowStation; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  int NCHit; // edi
  char *v68; // rsi
  struct tagTHREADINFO *v69; // rax
  Scrollbar::NonClient *v70; // rcx
  __int64 v71; // rdx
  char v72; // bl
  struct tagTHREADINFO **v73; // rbx
  unsigned __int64 v74; // rax
  __int64 v75; // rdx
  ULONG_PTR *v76; // rcx
  struct tagBWL *v77; // rax
  struct tagBWL *v78; // r15
  __int64 *v79; // rbx
  __int64 v80; // rcx
  ULONG_PTR v81; // rax
  __int64 v82; // rdx
  unsigned int v83; // edi
  unsigned int v84; // edi
  unsigned int v85; // edi
  unsigned int v86; // edi
  __int64 v87; // rdx
  __int64 v88; // rcx
  HDC v89; // rbx
  __int64 v90; // rcx
  __int64 v91; // rax
  int v92; // r8d
  int v93; // edx
  Scrollbar::NonClient *v94; // rcx
  int inited; // eax
  __int64 v96; // r8
  __int64 v97; // r9
  struct tagTHREADINFO *v98; // rdi
  int v99; // ecx
  __int64 v100; // rcx
  int v101; // edi
  unsigned int v102; // eax
  unsigned int v103; // ebx
  __int64 v104; // r9
  __int16 v105; // r13
  struct tagTHREADINFO *v106; // rax
  __int64 v107; // rcx
  struct tagTHREADINFO *v108; // rbx
  unsigned __int64 v109; // r13
  int v110; // eax
  struct tagTHREADINFO *v111; // rcx
  struct tagWND *Host; // rax
  __int64 TopLevelWindow; // rax
  struct tagDRAWITEMSTRUCT *v114; // r9
  unsigned __int64 v115; // r8
  unsigned int v116; // edx
  struct tagWND *v117; // rcx
  struct tagTHREADINFO *v118; // rax
  HDC DCEx; // rbx
  struct tagTHREADINFO *v120; // rax
  __int64 v121; // rbx
  int v122; // ecx
  struct tagTHREADINFO **NonChildAncestor; // rdi
  __int64 v124; // rdx
  __int64 v125; // rcx
  struct tagWND *v126; // rdi
  __int64 v127; // rbx
  __int64 v128; // rdx
  int v129; // edi
  __int64 v130; // rcx
  const struct tagUIPI_INFO *v131; // r8
  ULONG_PTR *v132; // rdx
  bool v133; // al
  BOOL v134; // edi
  struct tagTHREADINFO *v135; // r12
  __int64 v136; // r8
  __int64 *v137; // r8
  const struct tagWND *v138; // rcx
  struct tagWND *CompositionInputWindowUIOwner; // rbx
  __int64 v140; // rdx
  __int64 v141; // rax
  struct tagWND *v142; // rbx
  __int64 v143; // rdx
  __int64 v144; // rdx
  unsigned int v145; // edi
  unsigned int v146; // edi
  unsigned int v147; // edi
  unsigned int v148; // edi
  __int64 v149; // rdi
  __int64 v150; // rbx
  __int64 v151; // r14
  unsigned int v152; // ebx
  ULONG_PTR v153; // r12
  __int16 v154; // di
  _DWORD *v155; // rcx
  __int64 v156; // rcx
  __int64 v157; // rcx
  __int64 v158; // r8
  _DWORD *v159; // rcx
  __int64 v160; // rcx
  __int64 v161; // rdx
  unsigned int v162; // edi
  unsigned int v163; // edi
  unsigned int v164; // edi
  __int64 v165; // rcx
  int v166; // ebx
  __int64 v167; // rdx
  __int64 v168; // rcx
  int v169; // ebx
  __int64 v170; // rdx
  __int64 UserSessionState; // rax
  __int64 v172; // rdx
  __int64 v173; // rcx
  __int64 v174; // rax
  __int64 v175; // rdx
  __int64 v176; // rcx
  __int64 v177; // rax
  __int64 v178; // rdx
  __int64 v179; // rcx
  __int64 v180; // rax
  __int64 v181; // rdx
  __int64 v182; // rcx
  __int64 v183; // rcx
  unsigned __int16 v184; // dx
  __int64 v185; // rdx
  unsigned __int16 v186; // r13
  struct tagTHREADINFO *v187; // rax
  __int64 v188; // rdx
  __int64 v189; // rcx
  unsigned int v190; // ebx
  __int64 SysMenu; // rax
  __int64 v192; // rcx
  _QWORD *v193; // rcx
  __int64 v194; // rcx
  __int64 v195; // rdx
  __int64 v196; // rcx
  unsigned int v197; // edi
  unsigned int v198; // edi
  unsigned int v199; // edi
  __int64 v200; // rax
  __int64 v201; // rax
  __int64 v202; // rcx
  struct tagTHREADINFO *v203; // rcx
  __int64 v204; // rcx
  int v205; // edi
  struct tagTHREADINFO *v206; // rbx
  __int64 v207; // rdx
  __int64 v208; // rcx
  struct tagINPUT_MESSAGE_SOURCE *v209; // [rsp+20h] [rbp-138h]
  ULONG v210; // [rsp+28h] [rbp-130h]
  int v211; // [rsp+40h] [rbp-118h]
  char v212; // [rsp+60h] [rbp-F8h]
  bool v213; // [rsp+61h] [rbp-F7h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+68h] [rbp-F0h] BYREF
  ULONG BytesInMultiByteString[2]; // [rsp+78h] [rbp-E0h] BYREF
  __int64 v216[2]; // [rsp+80h] [rbp-D8h] BYREF
  _QWORD *v217; // [rsp+90h] [rbp-C8h]
  ULONG_PTR v218[2]; // [rsp+98h] [rbp-C0h] BYREF
  _OWORD v219[2]; // [rsp+A8h] [rbp-B0h] BYREF
  __int128 v220; // [rsp+C8h] [rbp-90h]
  ULONG_PTR v221[2]; // [rsp+E0h] [rbp-78h] BYREF
  ULONG_PTR v222; // [rsp+F0h] [rbp-68h] BYREF
  int v223; // [rsp+F8h] [rbp-60h]
  _QWORD v224[3]; // [rsp+100h] [rbp-58h] BYREF

  v6 = a2;
  BugCheckParameter3[0] = (ULONG_PTR)a1;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v216, a2);
  if ( a1 == (struct tagWND *)-1LL || v6 > 0x400 )
    goto LABEL_459;
  if ( v6 > 0xAC )
  {
    if ( v6 > 0x205 )
    {
      if ( v6 > 0x245 )
      {
        if ( v6 > 0x317 )
        {
          v197 = v6 - 793;
          if ( v197 )
          {
            v198 = v197 - 2;
            if ( v198 )
            {
              v199 = v198 - 36;
              if ( v199 )
              {
                if ( v199 == 10 && a3 )
                {
                  v200 = *((_QWORD *)a1 + 13);
                  v201 = v200 ? *(_QWORD *)(v200 + 16) : 0LL;
                  if ( v201 && *(struct tagWND **)(v201 + 1592) == a1 )
                    xxxSetFocus(a1, v8);
                }
                goto LABEL_459;
              }
              TitleBarInfo = xxxGetTitleBarInfoEx(a1, a4);
            }
            else
            {
              if ( !IsInsideUserApiHook(v9, v8) )
                goto LABEL_459;
              v203 = PtiCurrent(v202, v8);
              if ( (_InterlockedCompareExchange((volatile signed __int32 *)v203 + 132, 0, 0) & 1) != 0 )
                goto LABEL_459;
              TitleBarInfo = xxxLoadUserApiHook((__int64)v203, v8);
            }
            goto LABEL_449;
          }
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) != 0x40 )
          {
            if ( a1 != (struct tagWND *)GetDesktopWindow((__int64)a1) )
            {
              v205 = 0;
              v206 = PtiCurrent(v204, v8);
              v8 = **((_QWORD **)PtiCurrent(v208, v207) + 63);
              if ( ((*((_DWORD *)v206 + 180) | *(_DWORD *)(v8 + 16)) & 0x800) != 0 )
                LOBYTE(v205) = (unsigned int)xxxCallHook(12LL, a3, (__int64)a4, 10) != 0;
              if ( !v205 )
                PostShellHookMessagesEx((LastWokenThread *)0xC, (__int64)a4);
            }
            goto LABEL_459;
          }
          Win32HMThreadLockAlways<tagWND>::Win32HMThreadLockAlways<tagWND>(v224, (__int64 *)a1 + 13);
          v74 = xxxSendTransformableMessageTimeout(*((struct tagTHREADINFO ***)a1 + 13), 793LL, a3, a4, 0, 0, 0LL, 1, 1);
          v76 = v224;
          goto LABEL_453;
        }
        if ( v6 == 791 )
        {
          TitleBarInfo = xxxDWPPrint(a1, (HDC)a3, (__int64)a4);
          goto LABEL_449;
        }
        if ( v6 != 582 && v6 != 583 && v6 != 590 && v6 != 591 )
        {
          if ( v6 != 787 )
            goto LABEL_459;
          v68 = (char *)a1 + 40;
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 8) != 0
            || *(_QWORD *)(*((_QWORD *)a1 + 2) + 472LL) != *(_QWORD *)(W32GetUserSessionState(v9, v8) + 18888)
            && !(unsigned __int8)xxxSetForegroundWindowWithOptions(a1, 2LL, 0LL) )
          {
            goto LABEL_459;
          }
          goto LABEL_419;
        }
      }
      else if ( v6 != 581 )
      {
        if ( v6 <= 0x22A )
        {
          if ( v6 == 554 )
          {
            SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v216, v8);
            return 1162627398LL;
          }
          if ( v6 != 522 )
          {
            if ( v6 == 524 )
            {
LABEL_226:
              v105 = 0;
              if ( WORD1(a3) == 1 )
              {
                v105 = 1;
              }
              else if ( WORD1(a3) == 2 )
              {
                v105 = 2;
LABEL_392:
                v186 = v105 | 0x8000;
                if ( v6 != 524 )
                {
                  v187 = PtiCurrent((unsigned int)WORD1(a3) - 1, v8);
                  LOWORD(a3) = GetMouseKeyFlags(*((_QWORD *)v187 + 59));
                }
                v104 = (unsigned __int16)a3 | ((unsigned __int64)v186 << 16);
                v211 = 1;
                v185 = 793LL;
                goto LABEL_380;
              }
              if ( !v105 )
                goto LABEL_459;
              goto LABEL_392;
            }
            if ( v6 != 526 )
            {
              if ( v6 - 536 > 1 )
                goto LABEL_459;
              goto LABEL_161;
            }
          }
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) != 0x40 )
            goto LABEL_459;
          Win32HMThreadLockAlways<tagWND>::Win32HMThreadLockAlways<tagWND>(v218, (__int64 *)a1 + 13);
LABEL_397:
          xxxSendTransformableMessageTimeout(*((struct tagTHREADINFO ***)a1 + 13), v6, a3, a4, 0, 0, 0LL, 1, 1);
          v34 = v218;
          goto LABEL_398;
        }
        if ( v6 == 555 )
        {
          v190 = *(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 24LL);
          SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v216, v8);
          return ((unsigned __int64)v190 >> 4) & 1;
        }
        if ( v6 == 576 )
        {
          if ( *((struct tagDRAWITEMSTRUCT **)PtiCurrent(v9, v8) + 149) == a4 )
            *((_QWORD *)PtiCurrent(v189, v188) + 149) = 0LL;
          FreeTouchInputInfo((__int64)a4);
          goto LABEL_459;
        }
        if ( v6 != 577 && v6 - 578 > 1 )
          goto LABEL_459;
      }
      updated = (HICON)xxxDefPointerProc(v9, v6, a3, 0LL);
      goto LABEL_152;
    }
    if ( v6 == 517 )
    {
      v183 = *((_QWORD *)a1 + 5);
      v184 = *(_WORD *)(v183 + 108) + WORD1(a4);
      if ( (*(_BYTE *)(v183 + 26) & 0x40) != 0 )
        v104 = ((unsigned __int64)v184 << 16) | (unsigned __int16)(*(_WORD *)(v183 + 112) - (_WORD)a4);
      else
        v104 = (v184 << 16) | (unsigned __int16)(*(_WORD *)(v183 + 104) + (_WORD)a4);
LABEL_378:
      v211 = 0;
LABEL_379:
      v185 = 123LL;
LABEL_380:
      xxxSendTransformableMessageTimeout(
        (struct tagTHREADINFO **)a1,
        v185,
        *(_QWORD *)a1,
        (struct tagDRAWITEMSTRUCT *)v104,
        0,
        0,
        0LL,
        1,
        v211);
      goto LABEL_459;
    }
    if ( v6 <= 0x11C )
    {
      if ( v6 == 284 )
        goto LABEL_459;
      if ( v6 <= 0x105 )
      {
        switch ( v6 )
        {
          case 0x105u:
            goto LABEL_262;
          case 0xAEu:
            DCEx = (HDC)_GetDCEx(a1, 0LL, 65537LL);
            xxxDrawCaptionBar(a1, DCEx, a3);
            _ReleaseDC(DCEx);
            goto LABEL_459;
          case 0xAFu:
            xxxDrawWindowFrame(a1, (HDC)a3);
            goto LABEL_459;
        }
        if ( v6 != 256 )
        {
          v9 = v6 - 257;
          if ( v6 != 257 )
          {
            if ( v6 != 260 )
              goto LABEL_459;
            v106 = PtiCurrent(v9, v8);
            v108 = v106;
            v109 = (unsigned __int64)a4 >> 16;
            if ( (v109 & 0x2000) != 0 )
            {
              if ( (v109 & 0x4000) == 0 )
              {
                if ( a3 != 18 || (v107 = *((_QWORD *)v106 + 59), v110 = *(_DWORD *)(v107 + 412), (v110 & 8) != 0) )
                {
                  *(_DWORD *)(*((_QWORD *)v108 + 59) + 412LL) &= 0xFFFFFFF3;
                }
                else
                {
                  *(_DWORD *)(v107 + 412) = v110 | 8;
                  xxxDrawMenuBarUnderlines((__int64)a1, 1LL);
                }
              }
              *(_DWORD *)(*((_QWORD *)v108 + 59) + 412LL) &= ~0x10u;
              v111 = PtiCurrent(v107, v8);
              if ( *(_QWORD *)(*((_QWORD *)v111 + 59) + 128LL) && (_DWORD)a3 == 115 )
                xxxCloseApplication(v111);
              goto LABEL_459;
            }
            if ( a3 != 121 )
              goto LABEL_459;
            *(_DWORD *)(*((_QWORD *)v106 + 59) + 412LL) |= 0x10u;
            goto LABEL_258;
          }
LABEL_262:
          v120 = PtiCurrent(v9, v8);
          v121 = (__int64)v120;
          if ( a3 == 18
            && (v122 = *(_DWORD *)(*((_QWORD *)v120 + 59) + 412LL), (v122 & 0x80u) == 0)
            && (v122 & 0xC) == 8
            || a3 == 121 && (*(_DWORD *)(*((_QWORD *)v120 + 59) + 412LL) & 0x10) != 0 )
          {
            NonChildAncestor = (struct tagTHREADINFO **)GetNonChildAncestor((__int64)a1);
            Win32HMOptionalThreadLock<tagWND>::Win32HMOptionalThreadLock<tagWND>(
              BugCheckParameter3,
              v121,
              (__int64)NonChildAncestor);
            if ( a3 == 121 )
              xxxDrawMenuBarUnderlines((__int64)a1, 1LL);
            xxxSendTransformableMessageTimeout(NonChildAncestor, 274LL, 0xF100uLL, 0LL, 0, 0, 0LL, 1, 0);
            Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v124);
          }
          if ( a3 == 18 )
          {
            *(_DWORD *)(*(_QWORD *)(v121 + 472) + 412LL) &= ~0x80u;
            xxxDrawMenuBarUnderlines((__int64)a1, 0LL);
          }
          *(_DWORD *)(*(_QWORD *)(v121 + 472) + 412LL) &= 0xFFFFFFE3;
          goto LABEL_459;
        }
        if ( a3 != 27 )
        {
          if ( a3 != 121 )
            goto LABEL_459;
          v118 = PtiCurrent(v6 - 256, v8);
          *(_DWORD *)(*((_QWORD *)v118 + 59) + 412LL) |= 0x10u;
LABEL_258:
          if ( (_GetKeyState(16LL) & 0x8000u) == 0LL )
            goto LABEL_459;
          v104 = -1LL;
          goto LABEL_378;
        }
        if ( !(unsigned int)CoreWindowProp::IsComponent(a1, v8) )
          goto LABEL_459;
        Host = CoreWindowProp::GetHost(a1);
        if ( !Host )
          goto LABEL_459;
        TopLevelWindow = GetTopLevelWindow((__int64)Host);
        if ( !TopLevelWindow )
          goto LABEL_459;
        v114 = a4;
        v115 = 27LL;
        v116 = v6;
        v117 = (struct tagWND *)TopLevelWindow;
LABEL_301:
        _PostTransformableMessageExtended(v117, v116, v115, (__int64)v114, 0LL, 1);
        goto LABEL_459;
      }
      if ( v6 != 262 )
      {
        if ( v6 != 265 )
        {
          if ( v6 == 274 )
          {
            xxxSysCommand(a1);
            goto LABEL_459;
          }
          v125 = v6 - 281;
          if ( v6 == 281 )
          {
            LODWORD(v125) = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0;
            if ( (_BYTE)v125 != 64 )
              goto LABEL_459;
            v126 = (struct tagWND *)*((_QWORD *)a1 + 13);
            v127 = *(_QWORD *)(*((_QWORD *)v126 + 2) + 464LL);
            BugCheckParameter3[0] = *((_QWORD *)PtiCurrent(v125, v8) + 58);
            if ( v127 != BugCheckParameter3[0] )
            {
              v129 = IsMessageAllowedAcrossILByReceiver((struct tagPROCESSINFO *)v127, v126, 0x119u);
              if ( !v129 )
                v129 = IsMessageAlwaysAllowedAcrossIL(0x119u, v128);
              if ( !v129 )
              {
                if ( (unsigned int)Feature_MsgUseCSRSSTrueIL__private_IsEnabledDeviceUsageNoInline() )
                {
                  v132 = (ULONG_PTR *)(v127 + 864);
                }
                else
                {
                  if ( *(_QWORD *)v127 == *(_QWORD *)(W32GetUserGdiSessionState(v130) + 40) )
                  {
                    v222 = 0x2000LL;
                    v223 = 0;
                  }
                  else
                  {
                    v222 = *(_QWORD *)(v127 + 864);
                    v223 = *(_DWORD *)(v127 + 872);
                  }
                  v132 = &v222;
                }
                v133 = UIPrivilegeIsolation::CheckAccess(
                         (UIPrivilegeIsolation *)(BugCheckParameter3[0] + 864),
                         (const struct tagUIPI_INFO *)v132,
                         v131);
                v134 = v133;
                if ( !v133 )
                {
                  EtwTraceUIPIMsgError(BugCheckParameter3[0], v127, 281LL, a3, a4);
                  UserSetLastError(v134 + 5);
                  if ( !v134 )
                    goto LABEL_459;
                }
              }
            }
            Win32HMThreadLockAlways<tagWND>::Win32HMThreadLockAlways<tagWND>(v218, (__int64 *)a1 + 13);
            v74 = xxxSendTransformableMessageTimeout(
                    *((struct tagTHREADINFO ***)a1 + 13),
                    281LL,
                    a3,
                    a4,
                    0,
                    0,
                    0LL,
                    1,
                    1);
            v76 = v218;
          }
          else
          {
            if ( v6 != 282 || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) != 0x40 )
              goto LABEL_459;
            Win32HMThreadLockAlways<tagWND>::Win32HMThreadLockAlways<tagWND>(v221, (__int64 *)a1 + 13);
            v74 = xxxSendTransformableMessageTimeout(
                    *((struct tagTHREADINFO ***)a1 + 13),
                    282LL,
                    a3,
                    a4,
                    0,
                    0,
                    0LL,
                    1,
                    1);
            v76 = v221;
          }
          goto LABEL_453;
        }
        if ( a3 == 0xFFFF )
          goto LABEL_459;
        v114 = a4;
        v115 = a3;
        v116 = 258;
        goto LABEL_300;
      }
      v135 = PtiCurrent(0LL, v8);
      *(_DWORD *)(*((_QWORD *)v135 + 59) + 412LL) &= 0xFFFFFFF3;
      if ( a3 == 13 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) != 0 )
      {
        v114 = 0LL;
        v116 = 274;
        v115 = 61728LL;
LABEL_300:
        v117 = a1;
        goto LABEL_301;
      }
      if ( (WORD1(a4) & 0x2000) == 0 || !a3 )
      {
        if ( a3 != 27 )
          xxxMessageBeep(0LL, v8);
        goto LABEL_459;
      }
      if ( a3 == 9 || a3 == 27 )
        goto LABEL_459;
      if ( a3 == 32 )
      {
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
        {
          Win32HMThreadLockAlways<tagWND>::Win32HMThreadLockAlways<tagWND>(v218, (__int64)v135, (__int64 *)a1 + 13);
          goto LABEL_397;
        }
        v136 = *(_QWORD *)(*((_QWORD *)v135 + 59) + 128LL);
        if ( v136 && (unsigned int)IsImmersiveApplicationBandId(*(_DWORD *)(*(_QWORD *)(v136 + 40) + 236LL)) )
        {
          PostIAMShellHookMessage(0x21u, *v137);
          goto LABEL_459;
        }
        v138 = *(const struct tagWND **)(*((_QWORD *)v135 + 59) + 128LL);
        if ( v138 && (*((_DWORD *)v138 + 95) & 0x40000000) != 0 )
        {
          CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(v138);
          if ( (unsigned int)CoreWindowProp::IsComponent(
                               *(const struct tagWND **)(*((_QWORD *)v135 + 59) + 128LL),
                               v140) )
            CompositionInputWindowUIOwner = CoreWindowProp::GetTopLevelHostForComponent(
                                              *(const struct tagWND **)(*((_QWORD *)v135 + 59) + 128LL),
                                              v8);
          if ( CompositionInputWindowUIOwner )
          {
            v141 = GetTopLevelWindow((__int64)CompositionInputWindowUIOwner);
            v142 = (struct tagWND *)v141;
            if ( v141 )
            {
              Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(
                BugCheckParameter3,
                (__int64)v135,
                v141);
              xxxForceForegroundWindowNoRestoreFocus((__int64)v142, 0);
              if ( Win32HMThreadLockBase<tagMENU,0,1>::ManualUnlock<void>(BugCheckParameter3, v143) )
                _PostTransformableMessageExtended(v142, 0x112u, 0xF100uLL, 32LL, 0LL, 1);
              Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(
                BugCheckParameter3,
                v144);
            }
          }
          goto LABEL_459;
        }
      }
      xxxSendTransformableMessageTimeout(
        (struct tagTHREADINFO **)a1,
        274LL,
        0xF100uLL,
        (struct tagDRAWITEMSTRUCT *)(unsigned int)a3,
        0,
        0,
        0LL,
        1,
        0);
      goto LABEL_459;
    }
    if ( v6 > 0x134 )
    {
      v162 = v6 - 309;
      if ( v162 )
      {
        v163 = v162 - 1;
        if ( !v163 )
          goto LABEL_366;
        v164 = v163 - 1;
        if ( v164 )
        {
          if ( v164 != 1 )
            goto LABEL_459;
          goto LABEL_366;
        }
        v9 = *(_QWORD *)(W32GetUserSessionState(v9, v8) + 19872);
        if ( *(_WORD *)(v9 + 6996) < 8u
          || (v165 = *(_QWORD *)(W32GetUserSessionState(v9, v8) + 19872),
              v166 = *(_DWORD *)(v165 + 4648),
              v9 = *(_QWORD *)(W32GetUserSessionState(v165, v167) + 19872),
              v166 != *(_DWORD *)(v9 + 4568))
          || (v168 = *(_QWORD *)(W32GetUserSessionState(v9, v8) + 19872),
              v169 = *(_DWORD *)(v168 + 4648),
              v9 = *(_QWORD *)(W32GetUserSessionState(v168, v170) + 19872),
              v169 == *(_DWORD *)(v9 + 4588)) )
        {
          UserSessionState = W32GetUserSessionState(v9, v8);
          GreSetBkColor((HDC)a3, *(_DWORD *)(*(_QWORD *)(UserSessionState + 19872) + 4648LL));
          v174 = W32GetUserSessionState(v173, v172);
          GreSetTextColor((HDC)a3, *(_DWORD *)(*(_QWORD *)(v174 + 19872) + 4628LL));
          v18 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v176, v175) + 19872) + 4944LL);
          goto LABEL_200;
        }
        v149 = 4648LL;
        v151 = 4856LL;
      }
      else
      {
        v149 = 4628LL;
        v151 = 4816LL;
      }
      v150 = 4640LL;
      goto LABEL_374;
    }
    if ( v6 == 308 )
    {
LABEL_331:
      v149 = 4588LL;
      v150 = 4600LL;
      v151 = 4736LL;
LABEL_374:
      v177 = W32GetUserSessionState(v9, v8);
      GreSetBkColor((HDC)a3, *(_DWORD *)(v149 + *(_QWORD *)(v177 + 19872)));
      v180 = W32GetUserSessionState(v179, v178);
      GreSetTextColor((HDC)a3, *(_DWORD *)(v150 + *(_QWORD *)(v180 + 19872)));
      v18 = *(_QWORD *)(v151 + *(_QWORD *)(W32GetUserSessionState(v182, v181) + 19872));
      goto LABEL_200;
    }
    v145 = v6 - 295;
    if ( v145 )
    {
      v146 = v145 - 1;
      if ( !v146 )
      {
        updated = (HICON)xxxDWP_UpdateUIState((struct tagWND **)a1, a3, (__int64)a4);
        goto LABEL_152;
      }
      v147 = v146 - 1;
      if ( !v147 )
      {
        v152 = *(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 27LL);
        SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v216, v8);
        return ((((unsigned __int64)v152 >> 2) | v152 & 0x40) >> 5) | v152 & 4;
      }
      v148 = v147 - 9;
      if ( v148 )
      {
        if ( v148 != 1 )
          goto LABEL_459;
        goto LABEL_331;
      }
LABEL_366:
      v149 = 4628LL;
      v150 = 4600LL;
      v151 = 4816LL;
      goto LABEL_374;
    }
    BugCheckParameter3[0] = (unsigned __int16)a3;
    v153 = (unsigned __int64)a3 >> 16;
    v222 = (unsigned __int64)a3 >> 16;
    if ( (a3 & 0xFFF80000LL) != 0 )
      goto LABEL_459;
    v154 = 3;
    if ( (unsigned __int16)a3 > 3u || a4 )
      goto LABEL_459;
    if ( (_WORD)a3 == 3 )
    {
      LOWORD(v222) = 0;
      v155 = *(_DWORD **)(W32GetUserSessionState(3LL, v8) + 19872);
      if ( (*v155 & 0x80u) == 0 )
      {
        v8 = *(_QWORD *)(W32GetUserSessionState(v155, v8) + 19872);
        if ( (*(_DWORD *)(v8 + 7004) & 0x20) == 0 )
        {
          v8 = *(_QWORD *)(W32GetUserSessionState(v156, v8) + 19872);
          if ( *(int *)(v8 + 7004) < 0 && (GetAppCompatFlags2(1024LL, v8) & 2) == 0 )
          {
            v158 = (unsigned __int16)(((**(_DWORD **)(W32GetUserSessionState(v157, v8) + 19872) & 0x40) != 0) + 1);
            a3 = v158 | 0x30000;
            goto LABEL_350;
          }
        }
      }
    }
    else
    {
      v159 = *(_DWORD **)(W32GetUserSessionState((unsigned __int16)a3, v8) + 19872);
      if ( (*v159 & 0x80u) != 0
        || (v160 = *(_QWORD *)(W32GetUserSessionState(v159, v8) + 19872), (*(_DWORD *)(v160 + 7004) & 0x20) != 0)
        || *(int *)(*(_QWORD *)(W32GetUserSessionState(v160, v8) + 19872) + 7004LL) >= 0
        || (GetAppCompatFlags2(1024LL, v8) & 2) != 0 )
      {
        LOWORD(v153) = WORD1(a3) & 0xFFFC;
        v222 = v153;
      }
    }
    LOWORD(v158) = BugCheckParameter3[0];
    v154 = v222;
LABEL_350:
    if ( !v154 )
      goto LABEL_459;
    if ( (v154 & 1) != 0 )
      v8 = ((_WORD)v158 == 1) ^ (*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 27LL) >> 7);
    else
      v8 = 0LL;
    if ( (v154 & 2) != 0 )
      v8 = ((_WORD)v158 == 1) ^ (*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 27LL) >> 6) & 1 | (unsigned int)v8;
    if ( (v154 & 4) != 0 )
      v8 = ((_WORD)v158 == 1) ^ (*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 27LL) >> 2) & 1 | (unsigned int)v8;
    if ( !(_DWORD)v8 )
      goto LABEL_459;
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
    {
      Win32HMThreadLockAlways<tagWND>::Win32HMThreadLockAlways<tagWND>(v218, (__int64 *)a1 + 13);
      v30 = xxxSendTransformableMessageTimeout(*((struct tagTHREADINFO ***)a1 + 13), 295LL, a3, 0LL, 0, 0, 0LL, 1, 1);
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)v218, v161);
      goto LABEL_450;
    }
    updated = (HICON)xxxSendTransformableMessageTimeout((struct tagTHREADINFO **)a1, 296LL, a3, 0LL, 0, 0, 0LL, 1, 1);
    goto LABEL_152;
  }
  if ( v6 == 172 )
    goto LABEL_226;
  if ( v6 > 0x3B )
  {
    if ( v6 <= 0x80 )
    {
      if ( v6 == 128 )
      {
        updated = xxxDWP_SetIcon(a1, a3, (HICON)a4);
        goto LABEL_152;
      }
      if ( v6 <= 0x50 )
      {
        if ( v6 == 80 )
        {
          v61 = *((_QWORD *)PtiCurrent(v9, v8) + 59);
          v62 = *(struct tagWND **)(v61 + 120);
          BugCheckParameter3[0] = (ULONG_PTR)v62;
          if ( !v62
            || v62 == a1
            || (v63 = *((_QWORD *)a1 + 17),
                **(_WORD **)(v63 + 8) == *(_WORD *)(*(_QWORD *)(W32GetUserSessionState(v61, v60) + 19872) + 904LL)) )
          {
            ProcessWindowStation = GetProcessWindowStation(0LL);
            if ( !xxxActivateKeyboardLayout(ProcessWindowStation, a4, 256LL, a1) )
              UserSetLastError(1457);
            goto LABEL_459;
          }
          Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(&v222, (__int64)v62);
          xxxSendTransformableMessageTimeout(
            (struct tagTHREADINFO **)BugCheckParameter3[0],
            80LL,
            a3,
            a4,
            0,
            0,
            0LL,
            1,
            1);
          v34 = &v222;
          goto LABEL_398;
        }
        v52 = v6 - 70;
        if ( !v52 )
        {
          if ( (*((_DWORD *)a4 + 8) & 1) == 0 )
            xxxAdjustSize(a1, (int *)a4 + 6, (int *)a4 + 7);
          goto LABEL_459;
        }
        v53 = v52 - 1;
        if ( !v53 )
        {
          xxxHandleWindowPosChanged(a1, (__int64)a4);
          goto LABEL_459;
        }
        v54 = v53 - 2;
        if ( v54 )
        {
          v55 = v54 - 4;
          if ( !v55 )
          {
            ContextHelpId = GetContextHelpId(a1);
            v57 = *((_QWORD *)a1 + 5);
            if ( (*(_BYTE *)(v57 + 31) & 0xC0) == 0x40 )
              v58 = *(_DWORD *)(v57 + 320);
            else
              v58 = 0;
            xxxSendHelpMessage((struct tagTHREADINFO **)a1, 1LL, v58, *(_QWORD *)a1, ContextHelpId);
            goto LABEL_459;
          }
          if ( v55 != 2 || !ValidateHwnd(a3) )
            goto LABEL_459;
LABEL_161:
          v18 = 1LL;
          goto LABEL_200;
        }
        updated = (HICON)SfnCOPYGLOBALDATA(0LL, 0LL, a3, a4);
LABEL_152:
        v30 = (unsigned __int64)updated;
        goto LABEL_450;
      }
      if ( v6 == 81 )
      {
        v77 = BuildHwndList(*((struct tagWND **)a1 + 14), 2LL, 0LL, 1);
        v78 = v77;
        if ( v77 )
        {
          v79 = (__int64 *)((char *)v77 + 32);
          v80 = *((_QWORD *)v77 + 4);
          if ( v80 != 1 )
          {
            do
            {
              LOBYTE(v8) = 1;
              v81 = HMValidateHandleNoSecure(v80, v8);
              BugCheckParameter3[0] = v81;
              if ( v81 )
              {
                Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(&v222, v81);
                xxxSendTransformableMessageTimeout(
                  (struct tagTHREADINFO **)BugCheckParameter3[0],
                  81LL,
                  a3,
                  a4,
                  0,
                  0,
                  0LL,
                  1,
                  1);
                Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)&v222, v82);
              }
              v80 = *++v79;
            }
            while ( *v79 != 1 );
          }
          FreeHwndList(v78, v8);
        }
        goto LABEL_459;
      }
      if ( v6 != 83 )
      {
        if ( v6 == 85 )
        {
          if ( a4 == (struct tagDRAWITEMSTRUCT *)3 )
          {
            v72 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 19LL);
            SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v216, v8);
            return 2LL - ((v72 & 0x20) != 0);
          }
          goto LABEL_459;
        }
        if ( v6 != 123 )
        {
          if ( v6 != 127 )
            goto LABEL_459;
          updated = (HICON)DWP_GetIcon((__int64)a1, (unsigned int)a3);
          goto LABEL_152;
        }
        NCHit = FindNCHit((__int64)a1, (int)a4);
        if ( (unsigned int)(NCHit - 6) <= 1 )
        {
          v69 = PtiCurrent(v66, v65);
          if ( (unsigned int)IsDescendant(*(_QWORD *)(*((_QWORD *)v69 + 59) + 128LL), (__int64)a1) )
          {
            if ( (unsigned int)Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline()
              && Scrollbar::NonClient::UserModeSupportsUserModeScrollBars(v70) )
            {
              xxxClientDoScrollMenu(*(_QWORD *)a1, v71, (unsigned int)(NCHit - 6), a4);
            }
            else
            {
              xxxDoScrollMenu(a1);
            }
          }
          goto LABEL_459;
        }
        v68 = (char *)a1 + 40;
        LOBYTE(v66) = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0;
        if ( (_BYTE)v66 == 64 )
        {
          Win32HMThreadLockAlways<tagWND>::Win32HMThreadLockAlways<tagWND>(BugCheckParameter3, (__int64 *)a1 + 13);
          xxxSendTransformableMessageTimeout(
            *((struct tagTHREADINFO ***)a1 + 13),
            123LL,
            *(_QWORD *)a1,
            a4,
            0,
            0,
            0LL,
            1,
            1);
LABEL_40:
          v34 = BugCheckParameter3;
LABEL_398:
          Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)v34, v33);
          goto LABEL_459;
        }
        if ( a1 != *(struct tagWND **)(*((_QWORD *)PtiCurrent(v66, v65) + 59) + 128LL) )
          goto LABEL_459;
        if ( NCHit != 2 )
        {
          if ( NCHit != 3 )
            goto LABEL_459;
          goto LABEL_222;
        }
LABEL_419:
        v103 = (*(_BYTE *)(*(_QWORD *)v68 + 31LL) & 0x21) != 0 ? 61728 : 61488;
LABEL_420:
        SysMenu = xxxGetSysMenu(a1, 1LL);
        v217 = 0LL;
        SmartObjStackRefBase<tagMENU>::operator=((__int64)v216, SysMenu);
        if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v216) )
        {
          if ( IsInsideUserApiHook(v192, v8) )
          {
            v193 = v217;
            if ( !v217 )
              v193 = *(_QWORD **)v216[0];
            MNClearCachedPopupSizes(v193);
          }
          v194 = (__int64)v217;
          if ( !v217 )
            v194 = *(_QWORD *)v216[0];
          SetMenuDefaultItem(v194, v103, 0);
          PostShellHookMessagesEx((LastWokenThread *)9, *(_QWORD *)a1);
          Win32HMThreadLockAlways<tagMENU>::Win32HMThreadLockAlways<tagMENU>(v218, (__int64)v216);
          if ( a4 == (struct tagDRAWITEMSTRUCT *)0xFFFFFFFFLL )
          {
            if ( (*(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v196, v195) + 19872) + 2120LL) & 8) != 0 )
            {
              *(_OWORD *)((char *)v224 + 4) = 0LL;
              LODWORD(v224[0]) = 20;
              if ( (unsigned int)xxxSendMinRectMessages((unsigned __int64 *)a1, (__int64)v224 + 4) )
                xxxTrackPopupMenuEx((__int64)v216, 576LL, HIDWORD(v224[0]), v224[1], (__int64)a1, (__int64)v224);
            }
          }
          else
          {
            xxxTrackPopupMenuEx((__int64)v216, 514LL, (__int16)a4, SWORD1(a4), (__int64)a1, 0LL);
          }
          Win32HMThreadLockAlways<tagACCELTABLE>::~Win32HMThreadLockAlways<tagACCELTABLE>((ULONG_PTR)v218);
        }
        goto LABEL_459;
      }
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
        v73 = (struct tagTHREADINFO **)*((_QWORD *)a1 + 13);
      else
        v73 = (struct tagTHREADINFO **)*((_QWORD *)a1 + 15);
      if ( !v73 || v73 == (struct tagTHREADINFO **)GetThreadDesktopWindow(0LL, v8) )
        goto LABEL_459;
      Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(&v222, (__int64)v73);
      v74 = xxxSendTransformableMessageTimeout(v73, 83LL, a3, a4, 0, 0, 0LL, 1, 1);
      v76 = &v222;
LABEL_453:
      v18 = v74;
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)v76, v75);
      goto LABEL_200;
    }
    if ( v6 <= 0x88 )
    {
      if ( v6 == 136 )
      {
        SetOrClrWF(0, a1, 0x280u, 1);
        xxxInternalDoSyncPaint(a1, a3);
        goto LABEL_459;
      }
      v83 = v6 - 129;
      if ( v83 )
      {
        v84 = v83 - 2;
        if ( !v84 )
        {
          xxxCalcClientRect(a1, a4, 0);
          goto LABEL_459;
        }
        v85 = v84 - 1;
        if ( !v85 )
        {
          v39 = FindNCHit((__int64)a1, (int)a4);
          goto LABEL_168;
        }
        v86 = v85 - 1;
        if ( !v86 )
        {
          SetOrClrWF(1, a1, 0x180u, 1);
          v89 = (HDC)_GetDCEx(a1, a3, 328833LL);
          if ( v89 )
          {
            if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL) & 0x40) != 0 )
              W32GetUserSessionState(v88, v87);
            xxxDrawWindowFrame(a1, v89);
            _ReleaseDC(v89);
          }
          SetOrClrWF(0, a1, 0x180u, 1);
          goto LABEL_459;
        }
        if ( v86 == 1 )
        {
          xxxDWP_DoNCActivate(a1, (_WORD)a3 != 0, (__int64)a4);
          goto LABEL_161;
        }
LABEL_459:
        SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v216, v8);
        return 0LL;
      }
      v8 = *(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 30LL);
      if ( (v8 & 0x30) != 0 )
      {
        v90 = *(_QWORD *)&WPP_GLOBAL_Control;
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
          || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
        {
          LOBYTE(v90) = 0;
          v18 = 1LL;
        }
        else
        {
          v18 = 1LL;
          LOBYTE(v90) = 1;
        }
        v212 = v90;
        v213 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( (_BYTE)v90 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v91 = W32GetUserSessionState(v90, v8);
          LOBYTE(v92) = v213;
          LOBYTE(v93) = v212;
          WPP_RECORDER_AND_TRACE_SF_qDll(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v93,
            v92,
            *(_QWORD *)(v91 + 69160));
        }
        if ( (unsigned int)Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline()
          && Scrollbar::NonClient::UserModeSupportsUserModeScrollBars(v94) )
        {
          inited = xxxClientInitPSBInfo(*(_QWORD *)a1);
          goto LABEL_184;
        }
        if ( !InitPwSB(a1) )
        {
          inited = 0;
LABEL_184:
          if ( !inited )
            goto LABEL_459;
        }
      }
      else
      {
        v18 = 1LL;
      }
      if ( a4 )
      {
        *(_QWORD *)BytesInMultiByteString = (char *)a4 + 80;
        if ( !*((_QWORD *)a1 + 3)
          || !*(_QWORD *)BytesInMultiByteString
          || !*(_QWORD *)(*(_QWORD *)BytesInMultiByteString + 8LL) )
        {
          *(_DWORD *)(*((_QWORD *)a1 + 5) + 184LL) = 0;
          goto LABEL_200;
        }
        if ( *(int *)(*(_QWORD *)BytesInMultiByteString + 4LL) < 0
          && **(_DWORD **)BytesInMultiByteString
          && **(_BYTE **)(*(_QWORD *)BytesInMultiByteString + 8LL) == 0xFF
          || *(int *)(*(_QWORD *)BytesInMultiByteString + 4LL) >= 0
          && **(_DWORD **)BytesInMultiByteString >= 2u
          && **(_WORD **)(*(_QWORD *)BytesInMultiByteString + 8LL) == 0xFFFF )
        {
          SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v216, v8);
          return 1LL;
        }
      }
      SetOrClrWF(1, a1, 0x202u, 1);
      TitleBarInfo = DefSetText((__int64)a1, (unsigned int *)a4 + 20, v96, v97);
LABEL_449:
      v30 = TitleBarInfo;
      goto LABEL_450;
    }
    if ( v6 == 161 || v6 == 162 || v6 == 163 )
    {
      xxxDWP_NCMouse(a1, v6, a3, a4);
      goto LABEL_459;
    }
    if ( v6 != 164 )
      goto LABEL_459;
    memset(v219, 0, sizeof(v219));
    v220 = 0LL;
    v98 = PtiCurrent(v9, v8);
    v99 = FindNCHit((__int64)a1, (int)a4);
    if ( (unsigned int)(v99 - 6) <= 1 )
    {
      if ( !(unsigned int)IsDescendant(*(_QWORD *)(*((_QWORD *)v98 + 59) + 128LL), (__int64)a1) )
        goto LABEL_459;
    }
    else if ( (unsigned int)(v99 - 2) > 1 || a1 != *(struct tagWND **)(*((_QWORD *)v98 + 59) + 128LL) )
    {
      goto LABEL_459;
    }
    xxxSetCapture(a1, v8);
    while ( 1 )
    {
      LODWORD(v209) = 1;
      if ( (unsigned int)xxxInternalGetMessage((__int64)v219, 0LL, 512, 526, (unsigned __int64)v209, 0) )
      {
        if ( DWORD2(v219[0]) == 517 )
          break;
      }
      if ( a1 != *(struct tagWND **)(*((_QWORD *)v98 + 59) + 112LL) || !(unsigned int)xxxSleepThread2(6u, 0, 1, 0, 0LL) )
        goto LABEL_459;
    }
    xxxReleaseCapture(v100, v8);
    v101 = WORD2(v220) | (WORD4(v220) << 16);
    v102 = FindNCHit((__int64)a1, v101);
    v8 = v102;
    if ( ((v102 - 2) & 0xFFFFFFFA) != 0 )
      goto LABEL_459;
    v68 = (char *)a1 + 40;
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 232LL) & 0x40) != 0 )
    {
      if ( v102 == 2 )
        goto LABEL_419;
      if ( v102 == 3 )
      {
LABEL_222:
        v103 = 61536;
        goto LABEL_420;
      }
    }
    v104 = v101;
    v211 = 0;
    goto LABEL_379;
  }
  if ( v6 == 59 )
  {
    v39 = xxxClientShutdown((__int64)a1, a3);
    goto LABEL_168;
  }
  if ( v6 <= 0x19 )
  {
    if ( v6 != 25 )
    {
      if ( v6 <= 0xF )
      {
        if ( v6 != 15 )
        {
          v12 = v6 - 6;
          if ( v12 )
          {
            v13 = v12 - 5;
            if ( !v13 )
            {
              xxxDWP_SetRedraw(a1, a3 != 0);
              goto LABEL_459;
            }
            v14 = v13 - 1;
            if ( v14 )
            {
              v15 = v14 - 1;
              if ( v15 )
              {
                if ( v15 == 1 )
                {
                  v16 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 184LL);
                  if ( v16 )
                  {
                    BytesInMultiByteString[0] = 0;
                    if ( a4 )
                    {
                      RtlUnicodeToMultiByteSize(BytesInMultiByteString, *((PCWCH *)a1 + 23), v16);
                      v17 = BytesInMultiByteString[0];
                    }
                    else
                    {
                      v17 = v16 >> 1;
                      BytesInMultiByteString[0] = v17;
                    }
                    v18 = v17;
                    goto LABEL_200;
                  }
                }
                goto LABEL_459;
              }
              if ( a3 )
              {
                if ( *((_QWORD *)a1 + 23) )
                {
                  *(_OWORD *)BugCheckParameter3 = 0LL;
                  StrName = tagWND::ProtectedLargeUnicodeStringWNDstrName::getStrName(
                              (struct tagWND *)((char *)a1 + 184),
                              (struct _LARGE_UNICODE_STRING *)BugCheckParameter3);
                  DesktopVerifyHeapLargeUnicodeString(*((_QWORD *)a1 + 3), (ULONG_PTR)StrName);
                }
                v20 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 184LL);
                v21 = (char **)((char *)a4 + 8);
                v22 = *((_DWORD *)a4 + 1);
                if ( v20 )
                {
                  if ( v22 >= 0 )
                  {
                    *(_OWORD *)BugCheckParameter3 = 0LL;
                    v26 = tagWND::ProtectedLargeUnicodeStringWNDstrName::getStrName(
                            (struct tagWND *)((char *)a1 + 184),
                            (struct _LARGE_UNICODE_STRING *)BugCheckParameter3);
                    v25 = TextCopy((__int64)v26, *v21, a3);
                    v23 = 2 * v25;
                  }
                  else
                  {
                    v23 = WCSToMBEx(0, *((WCHAR **)a1 + 23), v20 >> 1, (PCHAR *)a4 + 1, (v22 & 0x7FFFFFFF) - 1, v210);
                    v25 = v23;
                    (*v21)[v23] = 0;
                  }
                  *(_DWORD *)a4 = v23;
                  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v216, v24);
                  return v25;
                }
                v28 = *v21;
                if ( v22 >= 0 )
                  *(_WORD *)v28 = 0;
                else
                  *v28 = 0;
              }
              goto LABEL_459;
            }
            v29 = DefSetText((__int64)a1, (unsigned int *)a4, v10, v11);
            v30 = v29;
            if ( v29 )
            {
              xxxRedrawTitle(a1, 8LL);
              xxxWindowEvent(0x800Cu, a1, 0, 0, 0);
            }
LABEL_450:
            SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v216, v8);
            return v30;
          }
          if ( a3 )
            xxxSetFocus(a1, v8);
          if ( *(char *)(*((_QWORD *)a1 + 5) + 232LL) >= 0 )
            goto LABEL_459;
          v31 = *((_QWORD *)a1 + 2);
          v32 = *(struct tagWND **)(v31 + 1592);
          if ( !v32 )
            goto LABEL_459;
          Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(
            BugCheckParameter3,
            *(_QWORD *)(v31 + 1592));
          xxxSendNotifyMessage(v32, 0x349u, a3, 0LL, 0);
          goto LABEL_40;
        }
LABEL_66:
        xxxDWP_Paint(a1);
        goto LABEL_459;
      }
      if ( v6 == 16 )
      {
        xxxDestroyWindow(a1, v8);
        goto LABEL_459;
      }
      if ( v6 != 17 && v6 != 19 )
      {
        if ( v6 != 20 )
        {
          if ( v6 != 24 )
            goto LABEL_459;
          if ( !(_WORD)a4 )
            goto LABEL_459;
          v8 = *((_QWORD *)a1 + 5);
          v35 = *(_BYTE *)(v8 + 31);
          if ( (((v35 & 0xC0) + 0x80) & 0xBF) != 0 && !*((_QWORD *)a1 + 15) )
            goto LABEL_459;
          if ( a3 )
          {
            if ( (v35 & 0x10) != 0 || (*(_BYTE *)(v8 + 17) & 0x40) == 0 )
              goto LABEL_459;
          }
          else if ( (v35 & 0x10) == 0 )
          {
            goto LABEL_459;
          }
          SetOrClrWF(0, a1, 0x140u, 1);
          if ( !a3 )
            SetOrClrWF(1, a1, 0x140u, 1);
          v38 = W32GetUserSessionState(v37, v36);
          xxxShowWindowEx(
            a1,
            (a3 != 0 ? 4 : 0) | *(_DWORD *)(v38 + 66800) & 0x10000u,
            *(_DWORD *)(v38 + 66800) & 0x10000);
          goto LABEL_459;
        }
LABEL_65:
        v39 = xxxDWP_EraseBkgnd((__int64)a1, v6, a3);
LABEL_168:
        v18 = v39;
        goto LABEL_200;
      }
      goto LABEL_161;
    }
    goto LABEL_331;
  }
  if ( v6 <= 0x2B )
  {
    switch ( v6 )
    {
      case 0x2Bu:
        DWP_DrawItem(a4, v8);
        goto LABEL_459;
      case 0x1Fu:
        xxxDWP_DoCancelMode(a1, v8);
        goto LABEL_459;
      case 0x20u:
        v39 = xxxDWP_SetCursor(a1, a3, (__int16)a4, WORD1(a4));
        goto LABEL_168;
    }
    if ( v6 != 33 )
    {
      if ( v6 == 38 )
        goto LABEL_66;
      if ( v6 != 39 )
        goto LABEL_459;
      goto LABEL_65;
    }
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
      v40 = (struct tagTHREADINFO **)*((_QWORD *)a1 + 13);
    else
      v40 = 0LL;
    if ( v40 )
    {
      Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, (__int64)v40);
      v42 = xxxSendTransformableMessageTimeout(v40, 33LL, a3, a4, 0, 0, 0LL, 1, 1);
      if ( v42 )
      {
        Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v41);
        v18 = v42;
LABEL_200:
        SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v216, v8);
        return v18;
      }
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v41);
    }
    if ( (_WORD)a4 != 2 || (v43 = 3LL, WORD1(a4) != 513) )
      v43 = 1LL;
    v18 = v43;
    goto LABEL_200;
  }
  v44 = v6 - 46;
  if ( !v44 || (v45 = v44 - 1) == 0 )
  {
    v18 = -1LL;
    goto LABEL_200;
  }
  v46 = v45 - 3;
  if ( !v46 )
  {
    TitleBarInfo = DWP_SetHotKey(a1, a3);
    goto LABEL_449;
  }
  v47 = v46 - 1;
  if ( v47 )
  {
    if ( v47 != 2 )
      goto LABEL_459;
    v30 = ((unsigned __int64)*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 16LL) >> 6) & 1;
    goto LABEL_450;
  }
  v48 = HotKeyHelper(a1, v8);
  v50 = 0;
  if ( *v48 )
    v50 = *((_DWORD *)*v48 + 2);
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v216, v49);
  return v50;
}
