/*
 * XREFs of xxxSystemParametersInfoWorker @ 0x140197AB8
 * Callers:
 *     EditionxxxSystemParametersInfoWorker @ 0x140197AA0 (EditionxxxSystemParametersInfoWorker.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     PostShellHookMessagesEx @ 0x1400216D0 (PostShellHookMessagesEx.c)
 *     ?GetCurrent@CTopologyManager@@SAPEAVCMonitorTopology@@XZ @ 0x1400229C8 (-GetCurrent@CTopologyManager@@SAPEAVCMonitorTopology@@XZ.c)
 *     ??1CCurrentMonitorTopologyPtr@@QEAA@XZ @ 0x1400232B8 (--1CCurrentMonitorTopologyPtr@@QEAA@XZ.c)
 *     ?OnWorkAreaChanged@DesktopRecalc@@YAXPEAVCMonitorTopology@@@Z @ 0x140028434 (-OnWorkAreaChanged@DesktopRecalc@@YAXPEAVCMonitorTopology@@@Z.c)
 *     ??0_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ @ 0x14002B2A0 (--0_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ.c)
 *     xxxWindowEvent @ 0x14002EAB0 (xxxWindowEvent.c)
 *     xxxInternalInvalidate @ 0x140030AC0 (xxxInternalInvalidate.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GetWindowNCMetrics @ 0x140042BB0 (GetWindowNCMetrics.c)
 *     GetDPIMetrics @ 0x140042DD8 (GetDPIMetrics.c)
 *     GetDPIServerInfo @ 0x140042F14 (GetDPIServerInfo.c)
 *     GetProcessDpiServerInfo @ 0x140042F48 (GetProcessDpiServerInfo.c)
 *     GetDpiForSystem @ 0x1400433C4 (GetDpiForSystem.c)
 *     GetDpiDependentMetric @ 0x14004B938 (GetDpiDependentMetric.c)
 *     IntersectRect @ 0x140052D08 (IntersectRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x14005F670 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     CheckWinstaAttributeAccess @ 0x14005FF00 (CheckWinstaAttributeAccess.c)
 *     GreExtGetObjectW @ 0x14007D99C (GreExtGetObjectW.c)
 *     GetMonitorWorkRect @ 0x140090FBC (GetMonitorWorkRect.c)
 *     GetMonitorRect @ 0x140091000 (GetMonitorRect.c)
 *     _MonitorFromRect @ 0x1400913B0 (_MonitorFromRect.c)
 *     CreateBitmapStrip @ 0x1400C0830 (CreateBitmapStrip.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1400C5FF0 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     SetDesktopPattern @ 0x1400E4610 (SetDesktopPattern.c)
 *     SetPointer @ 0x140123830 (SetPointer.c)
 *     ?xxxUpdateSystemCursorsFromRegistry@@YAXPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x140124220 (-xxxUpdateSystemCursorsFromRegistry@@YAXPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReaso.c)
 *     xxxUpdateSystemIconsFromRegistry @ 0x140125CF4 (xxxUpdateSystemIconsFromRegistry.c)
 *     EditionxxxBroadcastSPIChange @ 0x1401289F0 (EditionxxxBroadcastSPIChange.c)
 *     xxxSendNotifyMessage @ 0x14012B560 (xxxSendNotifyMessage.c)
 *     xxxSetDeskWallpaper @ 0x14012F684 (xxxSetDeskWallpaper.c)
 *     LoadWallpaperFilenameFromRegistry @ 0x14012FB54 (LoadWallpaperFilenameFromRegistry.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x14012FC60 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x140131080 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     xxxMetricsRecalc @ 0x140147B70 (xxxMetricsRecalc.c)
 *     SetKeyboardRate @ 0x140148D58 (SetKeyboardRate.c)
 *     ??1?$Win32RawOptionalLockedItemAlways@UtagPROFILEUSERNAME@@$1?Win32FreePool@@YAXPEAX@Z@@QEAA@XZ @ 0x140148E8C (--1-$Win32RawOptionalLockedItemAlways@UtagPROFILEUSERNAME@@$1-Win32FreePool@@YAXPEAX@Z@@QEAA@XZ.c)
 *     SortMonitorsInSpatialOrder @ 0x14014A9F0 (SortMonitorsInSpatialOrder.c)
 *     bSetDevDragWidth @ 0x14014AA24 (bSetDevDragWidth.c)
 *     ?ArrangementParameterInfo@WindowArrangementSPI@@YA?AW4ParamInfoResult@1@IKPEAX_N1@Z @ 0x14014C274 (-ArrangementParameterInfo@WindowArrangementSPI@@YA-AW4ParamInfoResult@1@IKPEAX_N1@Z.c)
 *     IsRemoteConnection @ 0x1401590F0 (IsRemoteConnection.c)
 *     GetMonitorMenuRect @ 0x140159A1C (GetMonitorMenuRect.c)
 *     IsWindowUnderActiveLockScreen @ 0x140169524 (IsWindowUnderActiveLockScreen.c)
 *     CheckGrantedAccess @ 0x1401768E8 (CheckGrantedAccess.c)
 *     ?CanForceForeground@@YA_NPEBUtagPROCESSINFO@@@Z @ 0x14018E130 (-CanForceForeground@@YA_NPEBUtagPROCESSINFO@@@Z.c)
 *     ?zzzRefreshSizes@CCursorSizes@@QEAAXXZ @ 0x1401B79FC (-zzzRefreshSizes@CCursorSizes@@QEAAXXZ.c)
 *     _GetIMEShowStatus @ 0x1401D253C (_GetIMEShowStatus.c)
 *     ?SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z @ 0x1401D5D34 (-SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z.c)
 *     UpdateWinIniInt @ 0x1401D5E24 (UpdateWinIniInt.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1401D5EB8 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?IsWDAGContainer@@YAHXZ @ 0x1401DCC04 (-IsWDAGContainer@@YAHXZ.c)
 *     GetEasTimeout @ 0x1401EDBA0 (GetEasTimeout.c)
 *     GreSetFontEnumeration @ 0x140203D30 (GreSetFontEnumeration.c)
 *     ?_SwapMouseButton@@YAHH@Z @ 0x140203DD0 (-_SwapMouseButton@@YAHH@Z.c)
 *     GetUserHandedness @ 0x140204B90 (GetUserHandedness.c)
 *     ?TraceLoggingSPISetMenuDropAlignmentEvent@@YAXHH@Z @ 0x140215394 (-TraceLoggingSPISetMenuDropAlignmentEvent@@YAXHH@Z.c)
 *     GetKbdLangSwitch @ 0x1402178A0 (GetKbdLangSwitch.c)
 *     ?xxxSetIMEShowStatus@@YAHHHPEAH@Z @ 0x140219D50 (-xxxSetIMEShowStatus@@YAHHHPEAH@Z.c)
 *     ?xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z @ 0x14021B380 (-xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z.c)
 *     _SetDoubleClickTime @ 0x14021B824 (_SetDoubleClickTime.c)
 *     ?UpdateCurrent@CTopologyManager@@SA_NXZ @ 0x14021E9D8 (-UpdateCurrent@CTopologyManager@@SA_NXZ.c)
 *     ?WorkAreaChanged@DesktopRecalc@InputTraceLogging@@SAXPEAXUtagRECT@@11H@Z @ 0x1402204D4 (-WorkAreaChanged@DesktopRecalc@InputTraceLogging@@SAXPEAXUtagRECT@@11H@Z.c)
 *     GreSetLCDOrientation @ 0x140221040 (GreSetLCDOrientation.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddddd @ 0x140229024 (WPP_RECORDER_AND_TRACE_SF_dddddddd.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x14023C19C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     SetMouseTrails @ 0x140241038 (SetMouseTrails.c)
 *     ClearKeyboardStates @ 0x140247ACC (ClearKeyboardStates.c)
 *     ReadPointerDeviceSettingsFull @ 0x14025517C (ReadPointerDeviceSettingsFull.c)
 *     ?NotifyISMPenButtonYieldSettingChange@@YAXXZ @ 0x140291574 (-NotifyISMPenButtonYieldSettingChange@@YAXXZ.c)
 *     ?SetHighContrastWorker@@YAHREAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z @ 0x1402919EC (-SetHighContrastWorker@@YAHREAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z.c)
 *     ?SetMouseKeys@@YAHPEAU_UNICODE_STRING@@PEAUtagMOUSEKEYS@@@Z @ 0x140291C34 (-SetMouseKeys@@YAHPEAU_UNICODE_STRING@@PEAUtagMOUSEKEYS@@@Z.c)
 *     ?SetSoundSentry@@YAHPEAU_UNICODE_STRING@@PEAUtagSOUNDSENTRYW@@@Z @ 0x140291D34 (-SetSoundSentry@@YAHPEAU_UNICODE_STRING@@PEAUtagSOUNDSENTRYW@@@Z.c)
 *     ?xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z @ 0x140291E34 (-xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z.c)
 *     WritePointerDeviceSettingsFull @ 0x1402AE5EC (WritePointerDeviceSettingsFull.c)
 *     ?DwmNotifyWorkAreaChanged@@YAXXZ @ 0x1402AF9AC (-DwmNotifyWorkAreaChanged@@YAXXZ.c)
 *     ?TraceLoggingMouseWheelRoutingModeChange@@YAXK@Z @ 0x1402B7FDC (-TraceLoggingMouseWheelRoutingModeChange@@YAXK@Z.c)
 *     ?TraceLoggingSPISetDesktopDPIOverrideEvent@@YAXHH@Z @ 0x1402B80DC (-TraceLoggingSPISetDesktopDPIOverrideEvent@@YAXHH@Z.c)
 *     ?TraceLoggingSPISetModernDPIOverrideEvent@@YAXHH@Z @ 0x1402B8160 (-TraceLoggingSPISetModernDPIOverrideEvent@@YAXHH@Z.c)
 *     ?TraceLoggingSPISetPenVisualizationEvent@@YAXKK@Z @ 0x1402B81E4 (-TraceLoggingSPISetPenVisualizationEvent@@YAXKK@Z.c)
 *     ?ValidateDesktopRecalcSetting@DesktopRecalcSettings@@YA_NIK@Z @ 0x1402C6780 (-ValidateDesktopRecalcSetting@DesktopRecalcSettings@@YA_NIK@Z.c)
 *     ?GetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@@Z @ 0x1402E0044 (-GetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@@Z.c)
 *     ?SetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@H@Z @ 0x1402E0D98 (-SetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@H@Z.c)
 *     DwmAsyncNotifyWindowShadowChange @ 0x140324DBC (DwmAsyncNotifyWindowShadowChange.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

__int64 __fastcall xxxSystemParametersInfoWorker(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  unsigned int v6; // esi
  unsigned __int64 CurrentProcessWin32Process; // rax
  struct tagPROCESSINFO *v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // r15d
  int v11; // ebx
  int v12; // r14d
  unsigned int updated; // edi
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v17; // eax
  bool v18; // zf
  unsigned int v19; // eax
  bool v20; // zf
  unsigned int v21; // eax
  int v22; // ecx
  int v23; // eax
  __int64 v24; // rdx
  int v25; // eax
  __int64 v26; // rcx
  unsigned int v27; // esi
  __int64 v28; // rdx
  __int64 v29; // rcx
  unsigned int v30; // ebx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rdx
  int v35; // esi
  int v36; // ecx
  unsigned int v37; // esi
  struct _UNICODE_STRING *v38; // rax
  struct _UNICODE_STRING *v39; // r15
  __int64 v40; // rcx
  int v41; // ebx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // r13
  int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rax
  unsigned __int8 v51; // al
  int v52; // ebx
  int v53; // ebx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // rax
  int v60; // ecx
  int v61; // ecx
  unsigned int DpiForSystem; // eax
  int v63; // ecx
  int UserHandedness; // eax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rcx
  unsigned int v70; // esi
  __int64 v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rcx
  INT v74; // ebx
  __int64 v75; // rax
  __int64 v76; // rcx
  __int64 v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r13
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // rdx
  __int64 v88; // rcx
  struct tagWND *v89; // rcx
  struct _UNICODE_STRING *v90; // rsi
  int v91; // ebx
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // rsi
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // rax
  __int64 v98; // rcx
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // rax
  int v104; // eax
  __int64 v105; // r15
  __int64 v106; // rcx
  __int64 v107; // rdx
  __int64 v108; // rcx
  int v109; // esi
  int v110; // r13d
  int v111; // ebx
  __int64 v112; // rdx
  __int64 v113; // rcx
  int v114; // eax
  __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 v117; // rax
  int v118; // ecx
  int v119; // edx
  int v120; // edx
  __int64 v121; // rdx
  __int64 v122; // rcx
  __int64 v123; // rax
  __int64 v124; // rdx
  __int64 v125; // rcx
  unsigned int v126; // esi
  __int64 v127; // rax
  __int64 v128; // rdx
  __int64 v129; // rcx
  INT v130; // ebx
  __int64 v131; // rax
  __int64 v132; // rcx
  __int64 v133; // rax
  __int64 v134; // rdx
  __int64 v135; // rcx
  __int64 v136; // rdx
  __int64 v137; // rcx
  __int64 v138; // rdx
  __int64 v139; // rcx
  __int64 v140; // rcx
  __int64 v141; // rcx
  __int64 v142; // rcx
  __int64 v143; // rcx
  __int64 DPIMetrics; // rax
  __int64 v145; // r9
  _WORD *v146; // r8
  __int64 v147; // rax
  __int64 v148; // rdx
  __int64 v149; // rcx
  __int64 v150; // rax
  bool v151; // zf
  struct _UNICODE_STRING *v152; // rax
  int v153; // ebx
  _DWORD *v154; // rdi
  __int64 v155; // rcx
  __int64 v156; // rdx
  __int64 v157; // rbx
  __int64 v158; // rdx
  __int64 v159; // rcx
  __int64 v160; // rcx
  __int64 v161; // rdx
  __int64 v162; // rbx
  __int64 v163; // rdx
  __int64 v164; // rcx
  __int64 v165; // rcx
  __int64 v166; // rdx
  int *v167; // rbx
  int v168; // ecx
  struct tagMOUSEKEYS *v169; // r15
  __int64 v170; // rcx
  int v171; // edx
  unsigned int v172; // ecx
  struct _UNICODE_STRING *v173; // rbx
  struct tagMOUSEKEYS *v174; // r13
  __int64 v175; // rdx
  __int64 v176; // rcx
  __int64 v177; // rdx
  __int64 v178; // rcx
  __int64 v179; // rsi
  __int64 v180; // rdx
  __int64 v181; // rcx
  __int16 v182; // bx
  __int64 v183; // rdx
  __int64 v184; // rcx
  __int64 v185; // rax
  __int64 v186; // rcx
  int v187; // edi
  __int64 v188; // rdx
  __int64 v189; // rdx
  __int64 v190; // rcx
  __int64 v191; // rdx
  __int64 v192; // rcx
  struct tagTHREADINFO *v193; // rbx
  __int64 v194; // rdx
  __int64 v195; // rcx
  __int64 v196; // rbx
  __int64 v197; // rdx
  __int64 v198; // rcx
  __int64 v199; // rdx
  __int64 v200; // rcx
  __int64 v201; // rcx
  __int64 v202; // rdx
  __int64 v203; // rax
  _OWORD *MonitorMenuRect; // rax
  __int64 v205; // rax
  int *v206; // rdi
  __int64 v207; // rdx
  __int64 v208; // rcx
  struct CMonitorTopology *Current; // rbx
  char v210; // di
  __int64 v211; // rcx
  __int64 v212; // rdx
  __int64 v213; // rcx
  __int64 v214; // rdx
  __int64 v215; // rcx
  __int64 v216; // rcx
  unsigned int v217; // eax
  __int64 v218; // rax
  __int64 v219; // rdx
  char v220; // cl
  _DWORD *v221; // rcx
  int v222; // edi
  int v223; // esi
  int v224; // r14d
  int v225; // r15d
  __int64 v226; // rax
  int v227; // r8d
  int v228; // edx
  __int64 v229; // rcx
  struct CMonitorTopology *v230; // rdx
  __int64 v231; // rcx
  bool v232; // r15
  __int64 v233; // rax
  int v234; // r8d
  int v235; // edx
  bool v236; // bl
  __int64 v237; // rax
  int v238; // r8d
  int v239; // edx
  _DWORD *v240; // rbx
  unsigned int v241; // eax
  unsigned int v242; // eax
  __int64 v243; // rdx
  __int64 v244; // rcx
  __int64 v245; // rax
  __int64 v246; // rdx
  __int64 v247; // rcx
  int v248; // ebx
  __int64 v249; // rdx
  __int64 v250; // rcx
  const wchar_t *v251; // r9
  __int64 v252; // rax
  const wchar_t *v253; // r9
  __int64 v254; // rax
  _OWORD *v255; // rcx
  _OWORD *v256; // rax
  unsigned int v257; // r15d
  struct tagSOUNDSENTRYW *v258; // rsi
  __int64 v259; // rcx
  int v260; // edx
  unsigned int v261; // ecx
  struct _UNICODE_STRING *v262; // rbx
  _DWORD *v263; // r15
  __int64 v264; // rcx
  size_t v265; // r8
  const void *v266; // rdx
  __int64 v267; // rbx
  __int64 v268; // rdx
  __int64 v269; // rcx
  int v270; // ecx
  __int64 v271; // rax
  __int64 v272; // rdx
  __int64 v273; // rax
  __int64 v274; // rdx
  __int64 v275; // rcx
  __int64 v276; // rdx
  __int64 v277; // rcx
  unsigned int v278; // esi
  unsigned int v279; // edx
  int v280; // edx
  __int64 v281; // rbx
  struct tagTHREADINFO *v282; // rax
  __int64 v283; // rdx
  __int64 v284; // rcx
  __int64 v285; // rbx
  __int64 v286; // rcx
  __int64 v287; // rcx
  __int64 v288; // rcx
  __int64 v289; // rdx
  __int64 v290; // rcx
  __int64 v291; // rcx
  __int64 v292; // rdx
  __int64 v293; // rcx
  __int64 v294; // rdx
  __int64 v295; // rcx
  unsigned int v296; // esi
  __int64 v297; // rcx
  __int64 v298; // rcx
  __int64 v299; // rdx
  __int64 v300; // rcx
  volatile signed __int32 *v301; // rcx
  unsigned int *v302; // r15
  __int64 v303; // rax
  __int64 v304; // rdi
  const wchar_t *v305; // rsi
  const wchar_t *v306; // r9
  int v307; // ebx
  __int64 v308; // r15
  __int64 v309; // rbx
  __int64 v310; // rdx
  __int64 v311; // rcx
  __int64 UserSessionState; // rax
  __int64 v313; // rax
  bool v314; // zf
  unsigned int i; // ebx
  unsigned int v316; // eax
  unsigned int v317; // eax
  unsigned int v318; // eax
  __int64 v319; // rdx
  __int64 v320; // rcx
  __int64 v321; // rdx
  __int64 v322; // rcx
  __int64 v323; // rdx
  __int64 v324; // rcx
  bool v325; // zf
  unsigned int v326; // eax
  unsigned int v327; // eax
  unsigned int v328; // eax
  __int64 v329; // rax
  int *v330; // rsi
  __int64 v331; // rcx
  __int64 v332; // rdx
  __int64 v333; // rcx
  __int64 v334; // rdx
  __int64 v335; // rcx
  __int64 v336; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 DispInfo; // rax
  int v339; // ecx
  InteractiveControlManager *v340; // rax
  InteractiveControlManager *v341; // rax
  __int64 v342; // rdx
  __int64 v343; // rcx
  __int64 v344; // rdx
  __int64 v345; // rcx
  __int64 v346; // rdx
  __int64 v347; // rcx
  __int64 v348; // rdx
  __int64 v349; // rcx
  __int64 v350; // rdx
  __int64 v351; // rcx
  __int64 v352; // rdx
  __int64 v353; // rcx
  __int64 v354; // rax
  __int64 v355; // rdx
  __int64 v356; // rax
  __int64 v357; // rdx
  __int64 v358; // rcx
  __int64 v359; // rdx
  __int64 v360; // rcx
  __int64 v361; // rcx
  int v362; // edi
  int v363; // ebx
  __int64 v364; // rdx
  __int64 v365; // rcx
  __int64 v366; // rdi
  __int64 v367; // rdx
  __int64 v368; // rcx
  __int64 v369; // r13
  __int64 v370; // rdx
  __int64 v371; // rcx
  __int64 v372; // r14
  __int64 v373; // rdx
  __int64 v374; // rcx
  __int64 v375; // rsi
  __int64 v376; // rdx
  __int64 v377; // rcx
  __int64 v378; // rbx
  __int64 v379; // rdx
  __int64 v380; // rcx
  __int64 v381; // r15
  __int64 v382; // rdx
  __int64 v383; // rcx
  int v384; // ecx
  int v385; // edx
  int *v386; // rax
  __int64 v387; // rdx
  int v388; // ecx
  __int64 v389; // rax
  __int64 v390; // rcx
  int v391; // eax
  unsigned int ProfileValue; // eax
  __int64 v393; // rbx
  int v394; // r8d
  unsigned __int64 v395; // rax
  int v396; // ecx
  int v397; // r8d
  unsigned __int64 v398; // rdx
  int v399; // r8d
  __int64 v400; // rcx
  __int64 v401; // r8
  unsigned int v402; // esi
  unsigned int v403; // esi
  unsigned int v404; // esi
  unsigned int v405; // esi
  unsigned int v406; // esi
  __int64 v407; // rbx
  __int64 v408; // rdx
  __int64 v409; // rcx
  __int64 v410; // rdx
  __int64 v411; // rcx
  int v412; // ebx
  __int64 v413; // rbx
  __int64 v414; // rdx
  __int64 v415; // rcx
  __int64 v416; // rbx
  __int64 v417; // rdx
  __int64 v418; // rcx
  __int64 v419; // rax
  void *v420; // rax
  __int64 v421; // rbx
  __int64 v422; // rdx
  __int64 v423; // rcx
  __int64 v424; // rdx
  __int64 v425; // rcx
  __int64 v426; // rax
  __int64 v427; // rdx
  __int64 v428; // rcx
  struct tagWND *v429; // rcx
  unsigned int v430; // r8d
  __int64 v431; // rax
  __int64 v432; // rbx
  __int64 v433; // rax
  unsigned int v434; // r14d
  int v435; // ebx
  __int64 v436; // rdx
  __int64 v437; // rcx
  int v438; // ebx
  __int64 v439; // rdx
  __int64 v440; // rcx
  int v441; // ebx
  __int64 v442; // rdx
  int v443; // ecx
  _DWORD *v444; // rax
  int v445; // ebx
  __int64 v446; // rdx
  __int64 v447; // rcx
  char v448; // r14
  bool v449; // r13
  int v450; // ebx
  int v451; // edi
  __int64 v452; // rdx
  __int64 v453; // rcx
  __int64 v454; // rax
  int v455; // r8d
  int v456; // edx
  int v457; // ebx
  __int64 v458; // rdx
  __int64 v459; // rcx
  __int64 v460; // rax
  unsigned int *v461; // rax
  __int64 v462; // rcx
  int v463; // edi
  BOOL v464; // ebx
  __int64 v465; // rdx
  __int64 v466; // rdx
  __int64 v467; // rcx
  int v468; // [rsp+80h] [rbp-3F8h]
  _DWORD v469[3]; // [rsp+84h] [rbp-3F4h] BYREF
  int v470; // [rsp+90h] [rbp-3E8h] BYREF
  int v471; // [rsp+94h] [rbp-3E4h] BYREF
  int v472; // [rsp+98h] [rbp-3E0h]
  char v473; // [rsp+9Ch] [rbp-3DCh]
  __int64 v474; // [rsp+A0h] [rbp-3D8h] BYREF
  int v475; // [rsp+A8h] [rbp-3D0h]
  bool v476; // [rsp+ACh] [rbp-3CCh]
  int v477; // [rsp+B0h] [rbp-3C8h]
  int v478; // [rsp+B4h] [rbp-3C4h]
  int v479; // [rsp+B8h] [rbp-3C0h]
  int v480; // [rsp+BCh] [rbp-3BCh]
  unsigned int v481; // [rsp+C0h] [rbp-3B8h]
  __int64 v482; // [rsp+C8h] [rbp-3B0h]
  struct tagPROCESSINFO *v483; // [rsp+D0h] [rbp-3A8h]
  struct tagMOUSEKEYS *v484; // [rsp+D8h] [rbp-3A0h]
  struct tagRECT v485; // [rsp+E0h] [rbp-398h] BYREF
  struct tagRECT v486; // [rsp+100h] [rbp-378h] BYREF
  struct tagRECT v487; // [rsp+110h] [rbp-368h] BYREF
  struct tagRECT v488; // [rsp+130h] [rbp-348h] BYREF
  __int128 v489; // [rsp+140h] [rbp-338h]
  __int128 v490; // [rsp+150h] [rbp-328h] BYREF
  __int128 v491; // [rsp+160h] [rbp-318h] BYREF
  __int128 v492; // [rsp+170h] [rbp-308h] BYREF
  unsigned __int16 v493[40]; // [rsp+180h] [rbp-2F8h] BYREF
  _WORD v494[40]; // [rsp+1D0h] [rbp-2A8h] BYREF
  _BYTE v495[528]; // [rsp+220h] [rbp-258h] BYREF

  v481 = a4;
  v6 = a1;
  v469[0] = a1;
  LODWORD(v474) = a1;
  *(_QWORD *)&v469[1] = a3;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v483 = (struct tagPROCESSINFO *)CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
  {
    v9 = -*(_QWORD *)CurrentProcessWin32Process;
    v8 = (struct tagPROCESSINFO *)(CurrentProcessWin32Process & -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL));
    v483 = v8;
  }
  v10 = 0;
  v468 = 0;
  v471 = 0;
  v11 = a4 & 1;
  v477 = v11;
  v12 = (a4 >> 1) & 1;
  v478 = v12;
  LODWORD(v482) = v12;
  updated = !(a4 & 1);
  v472 = updated;
  v470 = updated;
  v475 = v481 & 0x8000;
  v480 = 0;
  *(_QWORD *)&v487.left = W32GetUserSessionState(v9, v8);
  *(_QWORD *)&v486.left = *(_QWORD *)&v487.left + 20944LL;
  v484 = (struct tagMOUSEKEYS *)(*(_QWORD *)&v487.left + 20576LL);
  *(_QWORD *)&v488.left = *(_QWORD *)&v487.left + 21056LL;
  *(_QWORD *)&v485.left = W32GetUserSessionState(*(_QWORD *)&v487.left + 21056LL, *(_QWORD *)&v487.left);
  *(_QWORD *)&v490 = *(_QWORD *)&v485.left + 66804LL;
  v494[0] = 0;
  if ( v6 > 0x50 )
  {
    switch ( v6 )
    {
      case 'Q':
      case 'R':
        return 1LL;
      case 'S':
      case 'T':
        goto LABEL_14;
      case 'U':
      case 'V':
        return 1LL;
      case '\\':
      case 'a':
        goto LABEL_951;
    }
  }
  else
  {
    switch ( v6 )
    {
      case 0x50u:
LABEL_14:
        **(_DWORD **)&v469[1] = 0;
        return 1LL;
      case 7u:
        goto LABEL_951;
      case 8u:
        goto LABEL_951;
      case 0xCu:
        goto LABEL_951;
      case 0x27u:
        goto LABEL_951;
      case 0x28u:
        goto LABEL_951;
      case 0x31u:
        goto LABEL_951;
      case 0x3Eu:
        goto LABEL_951;
    }
    v15 = v6 - 63;
    if ( v6 == 63 )
      goto LABEL_951;
    if ( v6 == 79 )
      goto LABEL_14;
  }
  if ( (v6 & 1) != 0 && v6 == 8193 && *((int *)v483 + 3) >= 0 && !CanForceForeground(v483, v14) )
  {
LABEL_951:
    v270 = 87;
    goto LABEL_952;
  }
  if ( *(_QWORD *)v483 == *(_QWORD *)(W32GetUserGdiSessionState(v15) + 40) )
  {
    v24 = 2LL;
LABEL_99:
    v470 = 1;
    v472 = 1;
    updated = 1;
    goto LABEL_100;
  }
  if ( v6 > 0x35 )
  {
    if ( v6 > 0x77 )
    {
      if ( v6 == 161 || v6 == 163 )
        goto LABEL_95;
      v20 = v6 == 4135;
LABEL_87:
      if ( !v20 )
        goto LABEL_88;
LABEL_95:
      v25 = 16;
      goto LABEL_96;
    }
    if ( v6 == 119 )
      goto LABEL_95;
    if ( v6 > 0x4D )
    {
      if ( v6 <= 0x63 )
      {
        if ( v6 == 99 || v6 == 87 || v6 == 88 || v6 == 90 || v6 == 91 )
          goto LABEL_95;
        v18 = v6 == 96;
        goto LABEL_37;
      }
      v21 = v6 - 101;
      if ( v6 - 101 > 8 )
        goto LABEL_88;
      v22 = 325;
    }
    else
    {
      if ( v6 == 77 )
        goto LABEL_95;
      if ( v6 > 0x43 )
      {
        if ( v6 == 69 || v6 == 71 || v6 == 73 || v6 == 75 )
          goto LABEL_95;
        v18 = v6 == 76;
        goto LABEL_37;
      }
      v21 = v6 - 55;
      if ( v6 - 55 > 0xC )
        goto LABEL_88;
      v22 = 5205;
    }
    if ( _bittest(&v22, v21) )
      goto LABEL_95;
    goto LABEL_88;
  }
  if ( v6 == 53 )
    goto LABEL_95;
  if ( v6 > 0x1C )
  {
    if ( v6 <= 0x25 )
    {
      switch ( v6 )
      {
        case 0x25u:
          goto LABEL_95;
        case 0x1Du:
          goto LABEL_95;
        case 0x1Eu:
          goto LABEL_95;
        case 0x20u:
          goto LABEL_95;
        case 0x21u:
          goto LABEL_95;
      }
      v19 = v6 - 34;
      if ( v6 == 34 )
        goto LABEL_95;
LABEL_55:
      v20 = v19 == 2;
      goto LABEL_87;
    }
    if ( v6 == 42 || v6 == 44 || v6 == 46 || v6 == 47 )
      goto LABEL_95;
    v18 = v6 == 51;
LABEL_37:
    if ( v18 )
      goto LABEL_95;
LABEL_88:
    if ( (v6 & 0x3000) != 0 && (v6 & 1) != 0 )
    {
      v479 = 16;
      goto LABEL_90;
    }
    v25 = 2;
LABEL_96:
    v479 = v25;
    if ( v25 == 2 )
      goto LABEL_97;
LABEL_90:
    v23 = CheckWinstaAttributeAccess(16LL);
    goto LABEL_91;
  }
  if ( v6 == 28 )
    goto LABEL_95;
  if ( v6 > 0x11 )
  {
    if ( v6 == 19 || v6 == 20 || v6 == 21 || v6 == 23 )
      goto LABEL_95;
    v19 = v6 - 24;
    if ( v6 == 24 )
      goto LABEL_44;
    goto LABEL_55;
  }
  v17 = 133204;
  if ( _bittest(&v17, v6) )
    goto LABEL_95;
  if ( v6 != 13 )
  {
    v18 = v6 == 15;
    goto LABEL_37;
  }
LABEL_44:
  if ( (*(_QWORD *)&v469[1] & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    if ( !a2 )
      return 1LL;
    goto LABEL_95;
  }
  v479 = 2;
LABEL_97:
  v23 = CheckGrantedAccess(*((_DWORD *)v483 + 166), 2u);
LABEL_91:
  if ( !v23 )
    return 0LL;
  v24 = 2LL;
  if ( v479 == 2 )
    goto LABEL_99;
LABEL_100:
  v26 = 4134LL;
  if ( v6 > 0x1026 )
  {
    if ( v6 == 4135 )
    {
      LOBYTE(v10) = a2 != 0;
      if ( (unsigned int)CheckDesktopPolicy(0LL, 112LL) )
      {
        v11 = 0;
        updated = 0;
      }
      if ( v11 )
      {
        updated = UpdateWinIniInt(0LL, 4LL, 112LL, v10);
        v468 = updated;
      }
      v35 = v12;
      if ( updated )
        *(_DWORD *)(W32GetUserSessionState(v467, v466) + 19072) = v10;
      goto LABEL_945;
    }
    if ( v6 == 8228 )
    {
      UserHandedness = GetUserHandedness();
      goto LABEL_167;
    }
    if ( v6 != 8229 )
      goto LABEL_808;
    a2 = 0;
    if ( (unsigned int)RIMIsDefaultUILanguageRTL() )
      LOBYTE(a2) = v469[1] == 0;
    else
      LOBYTE(a2) = v469[1] != 0;
    goto LABEL_934;
  }
  if ( v6 == 4134 )
  {
    v314 = *(_DWORD *)(W32GetUserSessionState(4134LL, 2LL) + 19072) == 0;
    goto LABEL_676;
  }
  if ( v6 > 0x64 )
  {
    v26 = 137LL;
    if ( v6 <= 0x89 )
    {
      if ( v6 == 137 )
        goto LABEL_695;
      if ( v6 <= 0x78 )
      {
        if ( v6 == 120 )
        {
          v36 = *(_DWORD *)(W32GetUserSessionState(137LL, 2LL) + 69112);
          goto LABEL_127;
        }
        if ( v6 <= 0x6F )
        {
          if ( v6 != 111 )
          {
            v291 = v6 - 101;
            switch ( v6 )
            {
              case 'e':
                if ( v11 )
                {
                  v468 = UpdateWinIniInt(0LL, 12LL, 92LL, a2);
                  updated = v468;
                }
                if ( updated )
                  *(_DWORD *)(W32GetUserSessionState(v291, v24) + 16280) = a2;
                goto LABEL_125;
              case 'f':
                v36 = *(_DWORD *)(W32GetUserSessionState(v6 - 102, 2LL) + 16284);
                goto LABEL_127;
              case 'g':
                v296 = 10;
                if ( a2 >= 0xA )
                  v296 = a2;
                v297 = 0x7FFFFFFFLL;
                if ( v296 > 0x7FFFFFFF )
                  v296 = 0x7FFFFFFF;
                if ( v11 )
                {
                  v468 = UpdateWinIniInt(0LL, 12LL, 93LL, v296);
                  updated = v468;
                }
                if ( updated )
                  *(_DWORD *)(W32GetUserSessionState(v297, v24) + 16284) = v296;
                goto LABEL_125;
              case 'j':
                v36 = *(_DWORD *)(W32GetUserSessionState(v6 - 106, 2LL) + 66032);
                goto LABEL_127;
              case 'k':
                if ( (unsigned int)CheckDesktopPolicy(0LL, 94LL) )
                {
                  v11 = 0;
                  updated = 0;
                }
                if ( v11 )
                {
                  v468 = UpdateWinIniInt(0LL, 4LL, 94LL, a2);
                  updated = v468;
                }
                if ( updated )
                  *(_DWORD *)(W32GetUserSessionState(v295, v294) + 66032) = a2;
                goto LABEL_125;
            }
            if ( v6 != 108 )
            {
              v26 = v6 - 109;
              if ( v6 == 109 )
              {
                if ( (unsigned int)CheckDesktopPolicy(0LL, 15LL) )
                {
                  v11 = 0;
                  updated = 0;
                }
                if ( v11 )
                {
                  v468 = UpdateWinIniInt(0LL, 4LL, 15LL, a2);
                  updated = v468;
                }
                if ( updated )
                  *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v293, v292) + 19872) + 4992LL) = a2;
                goto LABEL_125;
              }
              if ( v6 != 110 )
                goto LABEL_808;
              UserHandedness = GetIMEShowStatus();
LABEL_167:
              **(_DWORD **)&v469[1] = UserHandedness;
              goto LABEL_125;
            }
            v120 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v6 - 108, 2LL) + 19872) + 4992LL);
            goto LABEL_282;
          }
          updated = xxxSetIMEShowStatus(a2 != 0, v11, &v471);
          goto LABEL_363;
        }
        if ( v6 == 112 )
        {
          UserHandedness = GetMouseSensitivity(0LL);
          goto LABEL_167;
        }
        if ( v6 == 113 )
        {
          if ( (unsigned __int8)IsValidMouseSensitivity(v469[1]) )
          {
            if ( v11 )
            {
              RtlStringCchPrintfW(v493, 0x28uLL, L"%d", *(_QWORD *)&v469[1]);
              v468 = FastUpdateWinIni(0LL, 12LL, 608LL, v493);
              updated = v468;
            }
            if ( updated )
            {
              UpdateMouseSensitivity(v469[1]);
              for ( i = 0; i < 2; ++i )
                ResetAccelerationCurves(i);
            }
            goto LABEL_125;
          }
          return 0LL;
        }
        if ( v6 != 114 )
        {
          switch ( v6 )
          {
            case 's':
              if ( *(_QWORD *)(W32GetUserSessionState(v6 - 115, 2LL) + 62792) )
              {
                UserSessionState = W32GetUserSessionState(v311, v310);
                RtlStringCchCopyW(*(char **)&v469[1], 260LL, (char *)(*(_QWORD *)(UserSessionState + 62792) + 4LL));
                goto LABEL_125;
              }
              tagTLBLOCK::_unnamed_type_list_::_unnamed_type_list_((tagTLBLOCK::_unnamed_type_list_ *)&v488);
              v313 = CreateProfileUserName(&v488);
              LoadWallpaperFilenameFromRegistry(v313, *(unsigned __int16 **)&v469[1], 0x104u);
              goto LABEL_139;
            case 't':
              if ( a2 && a2 != 12 )
                return 0LL;
              v264 = *(_QWORD *)&v469[1];
              if ( !*(_QWORD *)&v469[1] || **(_DWORD **)&v469[1] != 12 )
                return 0LL;
              v265 = 8LL;
              v266 = (const void *)(*(_QWORD *)&v487.left + 21836LL);
              goto LABEL_517;
            case 'u':
              v302 = *(unsigned int **)&v469[1];
              *(_QWORD *)&v490 = *(_QWORD *)&v469[1];
              if ( (!a2 || a2 == 12) && *(_QWORD *)&v469[1] && **(_DWORD **)&v469[1] == 12 )
              {
                if ( v11 )
                {
                  tagTLBLOCK::_unnamed_type_list_::_unnamed_type_list_((tagTLBLOCK::_unnamed_type_list_ *)&v485);
                  v303 = CreateProfileUserName(&v485);
                  v304 = v303;
                  *(_QWORD *)&v488.left = v303;
                  v305 = L"1";
                  v306 = L"1";
                  if ( !*(_DWORD *)(*(_QWORD *)&v469[1] + 4LL) )
                    v306 = L"0";
                  v307 = FastWriteProfileStringW(v303, 48LL, L"On", v306);
                  RtlStringCchPrintfW(v493, 0x28uLL, L"%d", *(unsigned int *)(*(_QWORD *)&v469[1] + 8LL));
                  v468 = v307 & FastWriteProfileStringW(v304, 48LL, L"Locale", v493);
                  updated = v468;
                  if ( !v468 )
                  {
                    v308 = *(_QWORD *)&v487.left;
                    if ( !*(_DWORD *)(*(_QWORD *)&v487.left + 21836LL) )
                      v305 = L"0";
                    FastWriteProfileStringW(*(_QWORD *)&v488.left, 48LL, L"On", v305);
                    RtlStringCchPrintfW(v493, 0x28uLL, L"%d", *(unsigned int *)(v308 + 21840));
                    FastWriteProfileStringW(*(_QWORD *)&v488.left, 48LL, L"Locale", v493);
                  }
                  Win32RawOptionalLockedItemAlways<tagPROFILEUSERNAME,&void Win32FreePool(void *)>::~Win32RawOptionalLockedItemAlways<tagPROFILEUSERNAME,&void Win32FreePool(void *)>((__int64)&v485);
                  v302 = (unsigned int *)v490;
                }
                if ( updated )
                {
                  v309 = *(_QWORD *)&v487.left;
                  memmove((void *)(*(_QWORD *)&v487.left + 21832LL), v302, *v302);
                  *(_DWORD *)(v309 + 21832) = 12;
                }
                goto LABEL_125;
              }
              return 0LL;
          }
          v298 = v6 - 118;
          if ( v6 != 118 )
          {
            if ( *(_DWORD *)(W32GetUserSessionState(v298, 2LL) + 62704) && !v475 )
              goto LABEL_796;
            if ( (unsigned int)CheckDesktopPolicy(0LL, 618LL) )
            {
              v11 = 0;
              updated = 0;
              v470 = 0;
            }
            if ( v11 )
            {
              v468 = UpdateWinIniInt(0LL, 4LL, 618LL, a2 != 0);
              v471 = v468;
              updated = v468;
              v470 = v468;
            }
            if ( !updated )
              goto LABEL_366;
            v301 = *(volatile signed __int32 **)(W32GetUserSessionState(v300, v299) + 19872);
            if ( a2 )
              _InterlockedOr(v301, 0x200u);
            else
              _InterlockedAnd(v301, 0xFFFFFDFF);
            v91 = v471;
            goto LABEL_650;
          }
          v280 = **(_DWORD **)(W32GetUserSessionState(v298, 2LL) + 19872) >> 9;
LABEL_556:
          **(_DWORD **)&v469[1] = v280 & 1;
          goto LABEL_134;
        }
        v314 = *(_QWORD *)(W32GetUserSessionState(v6 - 114, 2LL) + 62824) == 0LL;
LABEL_676:
        v36 = !v314;
        goto LABEL_127;
      }
      if ( v6 <= 0x81 )
      {
        if ( v6 != 129 )
        {
          switch ( v6 )
          {
            case 'y':
              if ( (unsigned int)CheckDesktopPolicy(0LL, 621LL) )
              {
                v11 = 0;
                updated = 0;
              }
              if ( v11 )
              {
                v468 = UpdateWinIniInt(0LL, 4LL, 621LL, a2);
                updated = v468;
              }
              if ( updated )
                *(_DWORD *)(W32GetUserSessionState(v324, v323) + 69112) = a2;
              goto LABEL_125;
            case 'z':
              v36 = *(_DWORD *)(W32GetUserSessionState(137LL, 2LL) + 36408);
              goto LABEL_127;
            case '{':
              if ( (unsigned int)CheckDesktopPolicy(0LL, 622LL) )
              {
                v11 = 0;
                updated = 0;
              }
              if ( v11 )
              {
                v468 = UpdateWinIniInt(0LL, 4LL, 622LL, a2);
                updated = v468;
              }
              if ( updated )
                *(_DWORD *)(W32GetUserSessionState(v322, v321) + 36408) = a2;
              goto LABEL_125;
            case '|':
              v36 = *(_DWORD *)(W32GetUserSessionState(137LL, 2LL) + 36404);
              goto LABEL_127;
          }
          v316 = v6 - 125;
          if ( v6 == 125 )
          {
            if ( (unsigned int)CheckDesktopPolicy(0LL, 623LL) )
            {
              v11 = 0;
              updated = 0;
            }
            if ( v11 )
            {
              v468 = UpdateWinIniInt(0LL, 52LL, 623LL, a2);
              updated = v468;
            }
            if ( updated )
              *(_DWORD *)(W32GetUserSessionState(v320, v319) + 36404) = a2;
            goto LABEL_125;
          }
          goto LABEL_693;
        }
        goto LABEL_695;
      }
      v325 = v6 == 130;
      v326 = v6 - 130;
LABEL_717:
      if ( !v325 )
      {
        v327 = v326 - 1;
        if ( v327 )
        {
          v328 = v327 - 1;
          if ( v328 )
          {
            v316 = v328 - 1;
            if ( v316 )
            {
LABEL_693:
              v317 = v316 - 1;
              if ( v317 && v317 - 1 > 1 )
                goto LABEL_808;
            }
          }
        }
      }
LABEL_695:
      v318 = WindowArrangementSPI::ArrangementParameterInfo(v6, a2, *(_DWORD **)&v469[1], v11, updated != 0);
      v468 = v318 & 1;
      updated = (v318 >> 1) & 1;
      goto LABEL_134;
    }
    if ( v6 <= 0x9C )
    {
      if ( v6 == 156 )
        goto LABEL_734;
      if ( v6 <= 0x94 )
      {
        if ( v6 != 148 )
        {
          if ( v6 == 138 )
            goto LABEL_695;
          v326 = v6 - 139;
          v325 = v6 == 139;
          goto LABEL_717;
        }
LABEL_734:
        updated = ReadPointerDeviceSettingsFull(v6, *(_QWORD *)&v469[1]);
        goto LABEL_125;
      }
      if ( v6 != 149 && (v6 == 150 || v6 != 151 && (v6 == 152 || v6 == 154)) )
        goto LABEL_734;
LABEL_733:
      v91 = WritePointerDeviceSettingsFull(v6, *(_QWORD *)&v469[1], v481 & 1);
      goto LABEL_227;
    }
    if ( v6 > 0xA6 )
    {
      if ( v6 != 167 )
      {
        switch ( v6 )
        {
          case 0xA8u:
            v36 = *(_DWORD *)(W32GetUserSessionState(137LL, 2LL) + 66096);
            goto LABEL_127;
          case 0xA9u:
            if ( !*(_DWORD *)(W32GetUserGdiSessionState(137LL) + 36) )
            {
              if ( !*(_DWORD *)(W32GetUserSessionState(v358, v357) + 62704) || v475 )
              {
                *(_DWORD *)(W32GetUserSessionState(v360, v359) + 66096) = a2 != 0;
                if ( v477 )
                {
                  updated = UpdateWinIniInt(0LL, 4LL, 205LL, a2);
                  v468 = updated;
                }
                goto LABEL_125;
              }
              goto LABEL_796;
            }
            break;
          case 0xAAu:
            v36 = *(_DWORD *)(W32GetUserSessionState(137LL, 2LL) + 66092);
            goto LABEL_127;
          case 0xABu:
            v343 = *(_QWORD *)(W32GetUserSessionState(137LL, 2LL) + 63552);
            if ( *((_DWORD *)v483 + 14) == v343 )
            {
              *(_DWORD *)(W32GetUserSessionState(v343, v342) + 66092) = a2 != 0;
              if ( *(_DWORD *)(W32GetUserSessionState(v345, v344) + 66092) )
              {
                if ( !*(_QWORD *)(W32GetUserSessionState(v347, v346) + 18904)
                  || (v351 = *(_QWORD *)(W32GetUserSessionState(v349, v348) + 18904), !*(_QWORD *)(v351 + 472))
                  || (v353 = *(_QWORD *)(W32GetUserSessionState(v351, v350) + 18904),
                      !*(_QWORD *)(*(_QWORD *)(v353 + 472) + 128LL))
                  || (v354 = W32GetUserSessionState(v353, v352),
                      (unsigned int)IsWindowUnderActiveLockScreen(
                                      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v354 + 18904) + 472LL) + 128LL),
                                      v355)) )
                {
                  xxxSetForegroundWindow2(0LL, 0LL, 0LL);
                }
                ClearKeyboardStates();
              }
              v356 = W32GetUserSessionState(v347, v346);
              GreLddmProcessLockScreen(*(unsigned int *)(v356 + 66092));
              goto LABEL_125;
            }
            break;
          case 0xACu:
            v341 = InteractiveControlManager::Instance(137LL, 2LL);
            updated = (int)InteractiveControlManager::GetExternalParameters(
                             v341,
                             *(struct tagINTERACTIVECTRL_PARAMETERS **)&v469[1]) >= 0;
            goto LABEL_125;
          case 0xADu:
            v340 = InteractiveControlManager::Instance(137LL, 2LL);
            v468 = (int)InteractiveControlManager::SetExternalParameters(
                          v340,
                          *(struct tagINTERACTIVECTRL_PARAMETERS **)&v469[1],
                          v481 & 1) >= 0;
            goto LABEL_125;
          default:
            goto LABEL_808;
        }
        return 0LL;
      }
      goto LABEL_800;
    }
    if ( v6 != 166 )
    {
      if ( v6 == 157 )
        goto LABEL_733;
      if ( v6 == 158 )
      {
LABEL_800:
        v488 = 0LL;
        v489 = 0LL;
        if ( (int)DrvDisplayConfigGetScaleFactorOverrides(&v488, 1LL) >= 0 )
        {
          if ( a2 != 158 )
          {
            v361 = *(_QWORD *)&v469[1];
            **(_QWORD **)&v469[1] = *(_QWORD *)((char *)&v489 + 4);
            *(_DWORD *)(v361 + 8) = HIDWORD(v489);
            goto LABEL_125;
          }
          v36 = DWORD2(v489);
          goto LABEL_127;
        }
        return 0LL;
      }
      if ( v6 != 159 )
      {
        switch ( v6 )
        {
          case 0xA0u:
            **(_DWORD **)&v469[1] = 6;
            goto LABEL_134;
          case 0xA1u:
            goto LABEL_133;
          case 0xA2u:
            DispInfo = GetDispInfo(137LL);
            MonitorMenuRect = GetMonitorMenuRect(&v488, *(struct tagMONITOR **)(DispInfo + 104));
            goto LABEL_415;
          case 0xA3u:
            v488 = 0LL;
            if ( *(_QWORD *)&v469[1] )
            {
              if ( *(_DWORD *)(*(_QWORD *)&v469[1] + 8LL) < **(_DWORD **)&v469[1]
                || *(_DWORD *)(*(_QWORD *)&v469[1] + 12LL) < *(_DWORD *)(*(_QWORD *)&v469[1] + 4LL) )
              {
                return 0LL;
              }
              v329 = MonitorFromRect(*(INT **)&v469[1], 1u, 0);
            }
            else
            {
              v329 = *(_QWORD *)(GetDispInfo(137LL) + 104);
            }
            *(_QWORD *)&v485.left = v329;
            v492 = *(_OWORD *)GetMonitorRect((__int64)&v490, v329);
            v330 = (int *)&v492;
            if ( *(_QWORD *)&v469[1] )
              v330 = *(int **)&v469[1];
            if ( (unsigned int)IntersectRect(&v488, v330, (int *)&v492)
              && *(_QWORD *)&v488.left == *(_QWORD *)v330
              && *(_QWORD *)&v488.right == *((_QWORD *)v330 + 1) )
            {
              if ( (W32GetCurrentThreadDpiAwarenessContext(v331) & 0xF) != 2
                && *((_QWORD *)PtiCurrent(v333, v332) + 62)
                && (v336 = **(_QWORD **)(*((_QWORD *)PtiCurrent(v335, v334) + 62) + 8LL),
                    (*(_DWORD *)(v336 + 64) & 1) != 0) )
              {
                CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v336);
                LogicalToPhysicalDPIRect(*(_QWORD *)&v485.left + 112LL, &v488, CurrentThreadDpiAwarenessContext, &v485);
              }
              else
              {
                *(struct tagRECT *)(*(_QWORD *)&v485.left + 112LL) = v488;
              }
              goto LABEL_125;
            }
            goto LABEL_951;
        }
        if ( v6 != 165 )
          goto LABEL_808;
        goto LABEL_800;
      }
    }
    if ( a2 + 11 <= 0x16 )
    {
      if ( (unsigned int)CheckDesktopPolicy(0LL, 628LL) )
      {
        v11 = 0;
        updated = 0;
      }
      if ( v11 )
      {
        v488 = 0LL;
        LODWORD(v489) = 0;
        DWORD1(v489) = a2;
        LODWORD(v474) = a2 != 159;
        if ( PreAllocateForPrimaryMonitorChange() && (int)DrvDisplayConfigSetScaleFactorOverride(&v488, &v474) >= 0 )
        {
          if ( a2 == 159 )
            TraceLoggingSPISetModernDPIOverrideEvent(v339, 159);
          else
            TraceLoggingSPISetDesktopDPIOverrideEvent(v339, a2);
          updated = 1;
        }
        else
        {
          updated = 0;
        }
      }
      goto LABEL_125;
    }
    return 0LL;
  }
  if ( v6 == 100 )
  {
    v36 = *(_DWORD *)(W32GetUserSessionState(4134LL, 2LL) + 16280);
    goto LABEL_127;
  }
  if ( v6 <= 0x2B )
  {
    if ( v6 == 43 )
    {
      v154 = *(_DWORD **)&v469[1];
      **(_DWORD **)&v469[1] = 20;
      v155 = *(_QWORD *)(W32GetUserSessionState(4134LL, 2LL) + 19872);
      v154[1] = *(_DWORD *)(v155 + 2124) - 6;
      v157 = *(_QWORD *)(W32GetUserSessionState(v155, v156) + 19872);
      v160 = (unsigned int)(*(_DWORD *)(v157 + 2084)
                          - *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v159, v158) + 19872) + 2124LL));
      v154[2] = v160;
      v162 = *(_QWORD *)(W32GetUserSessionState(v160, v161) + 19872);
      v165 = (unsigned int)(*(_DWORD *)(v162 + 2088)
                          - *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v164, v163) + 19872) + 2128LL));
      v154[3] = v165;
      v154[4] = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v165, v166) + 19872) + 2120LL);
LABEL_368:
      v35 = v12;
      updated = v472;
      goto LABEL_945;
    }
    if ( v6 <= 0x18 )
    {
      if ( v6 == 24 )
      {
        if ( (*(_QWORD *)&v469[1] & 0xFFFFFFFFFFFF0000uLL) == 0 )
        {
          if ( a2 )
          {
            if ( (W32GetCurrentThreadDpiAwarenessContext(4134LL) & 0xF) != 0 )
            {
              v127 = PsGetCurrentProcessWin32Process(v122);
              if ( v127 )
              {
                v129 = -*(_QWORD *)v127;
                v128 = -(__int64)(*(_QWORD *)v127 != 0LL);
                v127 &= v128;
              }
              v130 = *(unsigned __int16 *)(v127 + 272);
              v131 = W32GetUserSessionState(v129, v128);
              v126 = EngMulDiv(a2, *(unsigned __int16 *)(*(_QWORD *)(v131 + 19872) + 6998LL), v130);
              v133 = PsGetCurrentProcessWin32Process(v132);
              if ( v133 )
                v133 &= -(__int64)(*(_QWORD *)v133 != 0LL);
              a2 = EngMulDiv(v126, 96, *(unsigned __int16 *)(v133 + 272));
              v11 = v477;
            }
            else
            {
              v123 = W32GetUserSessionState(v122, v121);
              v126 = EngMulDiv(a2, *(unsigned __int16 *)(*(_QWORD *)(v123 + 19872) + 6998LL), 96);
            }
            v135 = *(_QWORD *)(W32GetUserSessionState(v125, v124) + 19872);
            if ( v126 <= *(_DWORD *)(v135 + 2308) )
            {
              v135 = *(_QWORD *)(W32GetUserSessionState(v135, v134) + 19872);
              v126 = *(_DWORD *)(v135 + 2308);
            }
            v137 = *(_QWORD *)(W32GetUserSessionState(v135, v134) + 19872);
            if ( a2 <= *(_DWORD *)(v137 + 2428) )
              a2 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v137, v136) + 19872) + 2428LL);
            if ( v11 )
            {
              v468 = SetWindowMetricInt(0LL, 0x41u, v126);
              updated = v468;
            }
            if ( updated )
            {
              SetDpiDepSysMet(19LL, v126);
              *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v139, v138) + 19872) + 2480LL) = a2;
            }
          }
          goto LABEL_125;
        }
        DpiForSystem = GetDpiForSystem();
        v63 = 19;
LABEL_166:
        UserHandedness = GetDpiDependentMetric(v63, DpiForSystem);
        goto LABEL_167;
      }
      v26 = 13LL;
      if ( v6 <= 0xD )
      {
        if ( v6 != 13 )
        {
          if ( v6 != 1 )
          {
            if ( v6 == 2 )
            {
              if ( v11 )
              {
                RtlLoadStringOrError(105 - (unsigned int)(a2 != 0), v493, 10LL);
                v468 = FastUpdateWinIni(0LL, 11LL, 9LL, v493);
                updated = v468;
              }
              if ( updated )
              {
                v59 = W32GetUserSessionState(v26, v24);
                if ( a2 )
                  *(_DWORD *)(v59 + 66800) |= 0x80000u;
                else
                  *(_DWORD *)(v59 + 66800) &= ~0x80000u;
              }
              goto LABEL_125;
            }
            if ( v6 == 3 )
            {
              v57 = *(unsigned int *)(W32GetUserSessionState(13LL, 2LL) + 16288);
              **(_DWORD **)&v469[1] = v57;
              *(_DWORD *)(*(_QWORD *)&v469[1] + 4LL) = *(_DWORD *)(W32GetUserSessionState(v57, v58) + 16292);
              *(_DWORD *)(*(_QWORD *)&v469[1] + 8LL) = (unsigned __int8)MouseAccelerationEnabled();
              goto LABEL_125;
            }
            if ( v6 != 4 )
            {
              if ( v6 == 5 )
              {
                v36 = *(_DWORD *)(GetDPIServerInfo() + 4);
                goto LABEL_127;
              }
              if ( v6 != 6 )
              {
                if ( v6 != 10 )
                {
                  if ( v6 == 11 )
                  {
                    v27 = 31;
                    if ( a2 <= 0x1F )
                      v27 = a2;
                    if ( v11 )
                    {
                      v468 = UpdateWinIniInt(0LL, 13LL, 13LL, v27);
                      updated = v468;
                    }
                    if ( !updated )
                      goto LABEL_125;
                    v30 = v27 | *(_DWORD *)(W32GetUserSessionState(v26, v24) + 12868) & 0xFFFFFFE0;
                    goto LABEL_124;
                  }
                  goto LABEL_808;
                }
                v36 = *(_DWORD *)(W32GetUserSessionState(13LL, 2LL) + 12868) & 0x1F;
LABEL_127:
                **(_DWORD **)&v469[1] = v36;
                goto LABEL_125;
              }
              v37 = 1;
              if ( (int)a2 > 1 )
                v37 = a2;
              if ( v37 >= 0x32 )
                v37 = 50;
              if ( v37 == (__int64)*(int *)(GetDPIServerInfo() + 4) )
                goto LABEL_133;
              tagTLBLOCK::_unnamed_type_list_::_unnamed_type_list_((tagTLBLOCK::_unnamed_type_list_ *)&v488);
              v38 = (struct _UNICODE_STRING *)CreateProfileUserName(&v488);
              v39 = v38;
              if ( v11 )
              {
                v468 = SetWindowMetricInt(v38, 0x88u, v37);
                updated = v468;
              }
              if ( updated )
              {
                xxxSetAndDrawNCMetrics(v39, v37, 0LL);
                v41 = *(_DWORD *)(GetProcessDpiServerInfo(v40) + 4);
                v44 = W32GetUserSessionState(v43, v42);
                bSetDevDragWidth(*(_QWORD *)(*(_QWORD *)(v44 + 56968) + 48LL), v41 + 3);
              }
LABEL_139:
              Win32RawOptionalLockedItemAlways<tagPROFILEUSERNAME,&void Win32FreePool(void *)>::~Win32RawOptionalLockedItemAlways<tagPROFILEUSERNAME,&void Win32FreePool(void *)>((__int64)&v488);
              goto LABEL_125;
            }
            if ( !v11 )
            {
LABEL_152:
              if ( updated )
              {
                v52 = **(_DWORD **)&v469[1];
                *(_DWORD *)(W32GetUserSessionState(v26, v24) + 16288) = v52;
                v53 = *(_DWORD *)(*(_QWORD *)&v469[1] + 4LL);
                *(_DWORD *)(W32GetUserSessionState(v55, v54) + 16292) = v53;
                LOBYTE(v56) = *(_DWORD *)(*(_QWORD *)&v469[1] + 8LL) != 0;
                EnableMouseAcceleration(v56);
              }
              goto LABEL_125;
            }
            tagTLBLOCK::_unnamed_type_list_::_unnamed_type_list_((tagTLBLOCK::_unnamed_type_list_ *)&v488);
            v45 = CreateProfileUserName(&v488);
            v481 = UpdateWinIniInt(v45, 12LL, 10LL, (unsigned int)**(_DWORD **)&v469[1]);
            v478 = UpdateWinIniInt(v45, 12LL, 11LL, *(unsigned int *)(*(_QWORD *)&v469[1] + 4LL));
            v46 = UpdateWinIniInt(v45, 12LL, 12LL, *(unsigned int *)(*(_QWORD *)&v469[1] + 8LL));
            v480 = v46;
            v48 = v481;
            if ( v481 )
            {
              if ( v478 && v46 )
              {
                v10 = 1;
                v468 = 1;
LABEL_151:
                updated = v10;
                Win32RawOptionalLockedItemAlways<tagPROFILEUSERNAME,&void Win32FreePool(void *)>::~Win32RawOptionalLockedItemAlways<tagPROFILEUSERNAME,&void Win32FreePool(void *)>((__int64)&v488);
                goto LABEL_152;
              }
              v49 = W32GetUserSessionState(v481, v47);
              UpdateWinIniInt(v45, 12LL, 10LL, *(unsigned int *)(v49 + 16288));
            }
            if ( v478 )
            {
              v50 = W32GetUserSessionState(v48, v47);
              UpdateWinIniInt(v45, 12LL, 11LL, *(unsigned int *)(v50 + 16292));
            }
            if ( v480 )
            {
              v51 = MouseAccelerationEnabled();
              UpdateWinIniInt(v45, 12LL, 12LL, v51);
            }
            goto LABEL_151;
          }
          v60 = *(_DWORD *)(W32GetUserSessionState(13LL, 2LL) + 66800) >> 19;
          goto LABEL_162;
        }
        if ( (*(_QWORD *)&v469[1] & 0xFFFFFFFFFFFF0000uLL) == 0 )
        {
          if ( a2 )
          {
            if ( (W32GetCurrentThreadDpiAwarenessContext(13LL) & 0xF) != 0 )
            {
              v71 = PsGetCurrentProcessWin32Process(v66);
              if ( v71 )
              {
                v73 = -*(_QWORD *)v71;
                v72 = -(__int64)(*(_QWORD *)v71 != 0LL);
                v71 &= v72;
              }
              v74 = *(unsigned __int16 *)(v71 + 272);
              v75 = W32GetUserSessionState(v73, v72);
              v70 = EngMulDiv(a2, *(unsigned __int16 *)(*(_QWORD *)(v75 + 19872) + 6998LL), v74);
              v77 = PsGetCurrentProcessWin32Process(v76);
              if ( v77 )
                v77 &= -(__int64)(*(_QWORD *)v77 != 0LL);
              a2 = EngMulDiv(v70, 96, *(unsigned __int16 *)(v77 + 272));
              v11 = v477;
            }
            else
            {
              v67 = W32GetUserSessionState(v66, v65);
              v70 = EngMulDiv(a2, *(unsigned __int16 *)(*(_QWORD *)(v67 + 19872) + 6998LL), 96);
            }
            v79 = *(_QWORD *)(W32GetUserSessionState(v69, v68) + 19872);
            if ( v70 <= *(_DWORD *)(v79 + 2304) )
            {
              v79 = *(_QWORD *)(W32GetUserSessionState(v79, v78) + 19872);
              v70 = *(_DWORD *)(v79 + 2304);
            }
            v81 = *(_QWORD *)(W32GetUserSessionState(v79, v78) + 19872);
            if ( a2 <= *(_DWORD *)(v81 + 2424) )
              a2 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v81, v80) + 19872) + 2424LL);
            if ( v11 )
            {
              v468 = SetWindowMetricInt(0LL, 0x40u, v70);
              updated = v468;
            }
            if ( updated )
            {
              SetDpiDepSysMet(18LL, v70);
              *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v83, v82) + 19872) + 2476LL) = a2;
            }
          }
          goto LABEL_125;
        }
        DpiForSystem = GetDpiForSystem();
        v63 = 18;
        goto LABEL_166;
      }
      if ( v6 != 14 )
      {
        if ( v6 != 15 )
        {
          if ( v6 == 16 )
          {
            v36 = *(_DWORD *)(W32GetUserSessionState(13LL, 2LL) + 62816) > 0;
            goto LABEL_127;
          }
          if ( v6 != 17 )
          {
            if ( v6 != 20 )
            {
              if ( v6 != 21 )
              {
                if ( v6 == 22 )
                {
                  v36 = (*(int *)(W32GetUserSessionState(13LL, 2LL) + 12868) >> 5) & 3;
                  goto LABEL_127;
                }
                if ( v6 == 23 )
                {
                  if ( v11 )
                  {
                    v468 = UpdateWinIniInt(0LL, 13LL, 106LL, a2);
                    updated = v468;
                  }
                  if ( !updated )
                    goto LABEL_125;
                  v30 = (32 * a2) | *(_DWORD *)(W32GetUserSessionState(v26, v24) + 12868) & 0xFFFFFF9F;
LABEL_124:
                  *(_DWORD *)(W32GetUserSessionState(v29, v28) + 12868) = v30;
                  v33 = W32GetUserSessionState(v32, v31);
                  SetKeyboardRate(*(unsigned int *)(v33 + 12868), v34);
LABEL_125:
                  v35 = v12;
LABEL_945:
                  v91 = v468;
                  goto LABEL_946;
                }
                goto LABEL_808;
              }
              if ( a2 != -1 || !*(_QWORD *)&v469[1] )
              {
                tagTLBLOCK::_unnamed_type_list_::_unnamed_type_list_((tagTLBLOCK::_unnamed_type_list_ *)&v488);
                v84 = CreateProfileUserName(&v488);
                if ( (unsigned int)CheckDesktopPolicy(v84, 2LL) )
                {
                  v11 = 0;
                  updated = 0;
                }
                if ( v11 && *(_QWORD *)&v469[1] )
                {
                  FastGetProfileStringFromIDW(v84, 4LL, 2LL, &pszFormat, v495, 260, 0);
                  v468 = FastUpdateWinIni(v84, 4LL, 2LL, *(_QWORD *)&v469[1]);
                  updated = v468;
                }
                if ( updated )
                {
                  if ( !(unsigned int)SetDesktopPattern(v84, *(const wchar_t **)&v469[1]) )
                  {
                    if ( v11 && *(_QWORD *)&v469[1] )
                      FastUpdateWinIni(v84, 4LL, 2LL, v495);
                    Win32RawOptionalLockedItemAlways<tagPROFILEUSERNAME,&void Win32FreePool(void *)>::~Win32RawOptionalLockedItemAlways<tagPROFILEUSERNAME,&void Win32FreePool(void *)>((__int64)&v488);
                    return 0LL;
                  }
                  xxxSendNotifyMessage((struct tagWND *)0xFFFFFFFFFFFFFFFFLL, 0x15u, 0LL, 0LL, 1);
                  if ( *((_QWORD *)PtiCurrent(v86, v85) + 62) )
                    v89 = *(struct tagWND **)(*(_QWORD *)(*((_QWORD *)PtiCurrent(v88, v87) + 62) + 8LL) + 24LL);
                  else
                    v89 = 0LL;
                  xxxInternalInvalidate(v89, (HRGN)1, 0x10485u);
                }
                goto LABEL_139;
              }
              goto LABEL_951;
            }
            tagTLBLOCK::_unnamed_type_list_::_unnamed_type_list_((tagTLBLOCK::_unnamed_type_list_ *)&v488);
            v90 = (struct _UNICODE_STRING *)CreateProfileUserName(&v488);
            if ( (unsigned int)CheckDesktopPolicy(v90, 67LL) )
            {
              v11 = 0;
              updated = 0;
            }
            if ( v11 )
            {
              if ( a2 == -1 )
              {
                updated = 1;
              }
              else
              {
                FastGetProfileStringFromIDW(v90, 4LL, 67LL, &pszFormat, v495, 260, 8);
                v468 = FastUpdateWinIni(v90, 4LL, 67LL, *(_QWORD *)&v469[1]);
                updated = v468;
              }
            }
            if ( updated && !(unsigned int)xxxSetDeskWallpaper(v90, *(__int64 *)&v469[1]) )
            {
              if ( !v11 )
              {
                v91 = 0;
                updated = 0;
                goto LABEL_226;
              }
              if ( a2 != -1 )
              {
                FastUpdateWinIni(v90, 4LL, 67LL, v495);
                v468 = 0;
                updated = 0;
              }
            }
            v91 = v468;
LABEL_226:
            Win32RawOptionalLockedItemAlways<tagPROFILEUSERNAME,&void Win32FreePool(void *)>::~Win32RawOptionalLockedItemAlways<tagPROFILEUSERNAME,&void Win32FreePool(void *)>((__int64)&v488);
LABEL_227:
            v35 = v12;
LABEL_946:
            v257 = v469[0];
            goto LABEL_947;
          }
          if ( a2 - 2 > 0xFFFFFFFC )
          {
            if ( !*(_DWORD *)(W32GetUserSessionState(13LL, 2LL) + 62704) || v475 )
            {
              v94 = W32GetUserSessionState(v93, v92);
              v97 = W32GetUserSessionState(v96, v95);
              *(_DWORD *)(v97 + 66100) = a2 == -1;
              if ( *(_DWORD *)(W32GetUserGdiSessionState(v98) + 36) )
                return 0LL;
              if ( (unsigned int)CheckDesktopPolicy(0LL, 100LL) )
              {
                v11 = 0;
                updated = 0;
                v470 = 0;
              }
              if ( v11 )
              {
                v468 = UpdateWinIniInt(0LL, 4LL, 100LL, a2);
                v471 = v468;
                updated = v468;
                v470 = v468;
              }
              if ( updated )
              {
                if ( *(_DWORD *)(W32GetUserSessionState(v100, v99) + 19072) )
                {
                  v91 = v468;
                }
                else
                {
                  v103 = W32GetUserSessionState(v102, v101);
                  CInputGlobals::UpdateLastInputTime(
                    *(_QWORD *)(v103 + 3056),
                    (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                   * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
                    7LL);
                  v91 = v471;
                  updated = v470;
                }
                v104 = *(_DWORD *)(v94 + 62816);
                if ( v104 >= 0 )
                {
                  if ( a2 )
                    goto LABEL_227;
                }
                else if ( !a2 )
                {
                  goto LABEL_227;
                }
                *(_DWORD *)(v94 + 62816) = -v104;
                goto LABEL_227;
              }
LABEL_366:
              v91 = v468;
              goto LABEL_227;
            }
LABEL_796:
            v270 = 329;
LABEL_952:
            UserSetLastError(v270);
          }
          return 0LL;
        }
        v105 = W32GetUserSessionState(13LL, 2LL);
        if ( *(_DWORD *)(W32GetUserGdiSessionState(v106) + 36) )
          return 0LL;
        if ( *(_DWORD *)(W32GetUserSessionState(v108, v107) + 62704) && !v475 )
          goto LABEL_796;
        v109 = 1000 * a2;
        v110 = 1000 * GetEasTimeout();
        if ( v110 && ((v480 = 1, *(int *)(v105 + 62816) > 0) && v110 < v109 || (v477 = v11, v109 <= 0)) )
        {
          UserSetLastError(1260);
          v111 = 0;
          updated = 0;
          v470 = 0;
        }
        else
        {
          v111 = v477;
        }
        if ( (unsigned int)CheckDesktopPolicy(0LL, 99LL) )
        {
          if ( !v480 )
          {
LABEL_268:
            v470 = 0;
            updated = 0;
            v111 = 0;
            goto LABEL_269;
          }
          v475 = 0;
          if ( (unsigned int)FastGetProfileIntFromID(0LL, 4LL, 99LL) )
          {
            v114 = 1000 * v475;
            v475 = v114;
            if ( v114 )
            {
              if ( v114 < v110 && *(int *)(v105 + 62816) > 0 && v114 < v109 )
              {
                UserSetLastError(1260);
                goto LABEL_268;
              }
            }
          }
        }
LABEL_269:
        if ( v111 )
        {
          v468 = UpdateWinIniInt(0LL, 4LL, 99LL, v109 / 0x3E8u);
          v471 = v468;
          updated = v468;
          v470 = v468;
        }
        if ( updated )
        {
          if ( *(_DWORD *)(W32GetUserSessionState(v113, v112) + 19072) )
          {
            v91 = v468;
          }
          else
          {
            v117 = W32GetUserSessionState(v116, v115);
            CInputGlobals::UpdateLastInputTime(
              *(_QWORD *)(v117 + 3056),
              (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
             * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
              7LL);
            v91 = v471;
            updated = v470;
          }
          if ( *(int *)(v105 + 62816) < 0 && !v480 )
            v109 = -v109;
          *(_DWORD *)(v105 + 62816) = v109;
          goto LABEL_227;
        }
        goto LABEL_366;
      }
      v118 = *(_DWORD *)(W32GetUserSessionState(13LL, 2LL) + 62816);
      v119 = -v118;
      if ( v118 > 0 )
        v119 = v118;
      v120 = v119 / 1000;
LABEL_282:
      **(_DWORD **)&v469[1] = v120;
      goto LABEL_125;
    }
    if ( v6 <= 0x21 )
    {
      if ( v6 == 33 )
      {
        if ( v11 )
        {
          v468 = UpdateWinIniInt(0LL, 12LL, 5LL, a2);
          updated = v468;
        }
        if ( updated )
          _SwapMouseButton(a2 != 0);
        goto LABEL_125;
      }
      if ( v6 != 25 )
      {
        v140 = v6 - 26;
        if ( v6 == 26 )
        {
          if ( v11 )
          {
            v468 = SetWindowMetricInt(0LL, 0x42u, a2 != 0);
            updated = v468;
          }
          if ( updated )
          {
            v147 = W32GetUserSessionState(v140, v24);
            if ( a2 )
              *(_DWORD *)(v147 + 66800) |= 0x200000u;
            else
              *(_DWORD *)(v147 + 66800) &= ~0x200000u;
            xxxMetricsRecalc(2LL, 0LL, 0, 0, 0, 0, 0);
          }
          goto LABEL_125;
        }
        if ( v6 == 27 )
        {
          v120 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v6 - 27, 2LL) + 19872) + 2056LL);
          goto LABEL_282;
        }
        v141 = v6 - 28;
        if ( v6 != 28 )
        {
          v142 = v6 - 29;
          if ( v6 == 29 )
          {
            if ( v11 )
            {
              v468 = UpdateWinIniInt(0LL, 12LL, 97LL, a2);
              updated = v468;
            }
            if ( updated )
              *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v142, v24) + 19872) + 2040LL) = a2;
            goto LABEL_125;
          }
          v143 = v6 - 30;
          if ( v6 == 30 )
          {
            if ( v11 )
            {
              v468 = UpdateWinIniInt(0LL, 12LL, 98LL, a2);
              updated = v468;
            }
            if ( updated )
              *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v143, v24) + 19872) + 2044LL) = a2;
            goto LABEL_125;
          }
          if ( v6 != 31 )
          {
            if ( v11 )
            {
              v468 = UpdateWinIniInt(0LL, 12LL, 6LL, a2);
              updated = v468;
            }
            if ( updated )
              SetDoubleClickTime(a2);
            goto LABEL_125;
          }
          DPIMetrics = GetDPIMetrics();
          v146 = *(_WORD **)&v469[1];
          goto LABEL_315;
        }
LABEL_934:
        if ( v11 )
        {
          v468 = UpdateWinIniInt(0LL, 3LL, 96LL, a2);
          updated = v468;
          v472 = v468;
        }
        if ( updated )
        {
          v462 = *(_QWORD *)(W32GetUserSessionState(v141, v24) + 19872);
          v463 = *(_DWORD *)(v462 + 2056);
          v464 = a2 != 0;
          *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v462, v465) + 19872) + 2056LL) = v464;
          TraceLoggingSPISetMenuDropAlignmentEvent(v463, v464);
          updated = v472;
        }
        goto LABEL_125;
      }
      v60 = *(_DWORD *)(W32GetUserSessionState(v6 - 25, 2LL) + 66800) >> 21;
LABEL_162:
      v61 = v60 & 1;
LABEL_163:
      **(_DWORD **)&v469[1] = v61;
      goto LABEL_134;
    }
    if ( v6 != 34 )
    {
      if ( v6 == 35 )
      {
        **(_DWORD **)&v469[1] = 1;
        goto LABEL_134;
      }
      if ( v6 != 36 )
      {
        switch ( v6 )
        {
          case '%':
            if ( (unsigned int)CheckDesktopPolicy(0LL, 107LL) )
            {
              v11 = 0;
              updated = 0;
            }
            if ( v11 )
            {
              v468 = UpdateWinIniInt(0LL, 4LL, 107LL, a2 == 1);
              updated = v468;
            }
            if ( updated )
            {
              v150 = W32GetUserSessionState(v149, v148);
              if ( a2 == 1 )
                *(_DWORD *)(v150 + 66800) |= 0x100000u;
              else
                *(_DWORD *)(v150 + 66800) &= ~0x100000u;
            }
            goto LABEL_125;
          case '&':
            v60 = *(_DWORD *)(W32GetUserSessionState(4134LL, 2LL) + 66800) >> 20;
            goto LABEL_162;
          case ')':
            if ( *(_QWORD *)&v469[1] )
            {
              GetWindowNCMetrics(*(__int64 *)&v469[1]);
              goto LABEL_125;
            }
            return 0LL;
        }
LABEL_343:
        v18 = (unsigned int)xxxSetSPIMetrics(0LL, v6, *(void **)&v469[1], v11, &v471) == 0;
        v468 = v471;
        if ( v18 )
        {
          updated = 0;
        }
        else if ( v11 )
        {
          updated = v471;
        }
        RtlLoadStringOrError(135LL, v494, 40LL);
        goto LABEL_125;
      }
LABEL_134:
      v35 = v12;
      goto LABEL_945;
    }
    if ( *(_QWORD *)&v469[1] )
      v151 = a2 == 92;
    else
      v151 = a2 == 0;
    if ( !v151 )
      return 0LL;
    tagTLBLOCK::_unnamed_type_list_::_unnamed_type_list_((tagTLBLOCK::_unnamed_type_list_ *)&v488);
    v152 = (struct _UNICODE_STRING *)CreateProfileUserName(&v488);
    v153 = xxxSetSPIMetrics(v152, 0x22u, *(void **)&v469[1], v11, &v471);
    Win32RawOptionalLockedItemAlways<tagPROFILEUSERNAME,&void Win32FreePool(void *)>::~Win32RawOptionalLockedItemAlways<tagPROFILEUSERNAME,&void Win32FreePool(void *)>((__int64)&v488);
    if ( v153 )
    {
      v468 = v471;
      if ( v477 )
        updated = v471;
      goto LABEL_366;
    }
    updated = 0;
LABEL_363:
    v91 = v471;
    goto LABEL_227;
  }
  if ( v6 <= 0x48 )
  {
    if ( v6 == 72 )
    {
      v267 = *(_QWORD *)&v469[1];
      if ( !*(_QWORD *)&v469[1] || a2 != 8 )
        return 0LL;
      **(_DWORD **)&v469[1] = 8;
      *(_DWORD *)(v267 + 4) = *(_WORD *)(W32GetUserSessionState(4134LL, 2LL) + 66802) & 1;
      goto LABEL_134;
    }
    if ( v6 <= 0x39 )
    {
      switch ( v6 )
      {
        case '9':
          if ( v11 )
          {
            RtlStringCchPrintfW(v493, 0x28uLL, L"%d", a2 == 1);
            v468 = FastWriteProfileStringW(0LL, 20LL, L"On", v493);
            updated = v468;
          }
          if ( updated )
          {
            v245 = W32GetUserSessionState(v26, v24);
            if ( a2 == 1 )
              *(_DWORD *)(v245 + 66800) |= 0x8000u;
            else
              *(_DWORD *)(v245 + 66800) &= ~0x8000u;
            SetAccessEnabledFlag();
            v248 = (*(_DWORD *)(W32GetUserSessionState(v247, v246) + 66800) >> 15) & 1;
            *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v250, v249) + 19872) + 2176LL) = v248;
          }
          goto LABEL_125;
        case ',':
          goto LABEL_343;
        case '-':
          v240 = *(_DWORD **)&v469[1];
          **(_DWORD **)&v469[1] = 108;
          v241 = GetDpiForSystem();
          v240[1] = GetDpiDependentMetric(18, v241);
          v242 = GetDpiForSystem();
          v240[2] = GetDpiDependentMetric(19, v242);
          v240[3] = (*(_DWORD *)(W32GetUserSessionState(v244, v243) + 66800) >> 21) & 1;
          DPIMetrics = GetDPIMetrics();
          v146 = v240 + 4;
LABEL_315:
          GreExtGetObjectW(*(Gre::Base **)(DPIMetrics + 64), 92LL, v146, v145);
          goto LABEL_125;
        case '.':
          goto LABEL_343;
        case '/':
          v488 = 0LL;
          if ( *(_QWORD *)&v469[1] )
          {
            if ( *(_DWORD *)(*(_QWORD *)&v469[1] + 8LL) < **(_DWORD **)&v469[1]
              || *(_DWORD *)(*(_QWORD *)&v469[1] + 12LL) < *(_DWORD *)(*(_QWORD *)&v469[1] + 4LL) )
            {
              return 0LL;
            }
            v205 = MonitorFromRect(*(INT **)&v469[1], 1u, 0);
          }
          else
          {
            v205 = *(_QWORD *)(GetDispInfo(4134LL) + 104);
          }
          v474 = v205;
          v491 = *(_OWORD *)GetMonitorRect((__int64)&v490, v205);
          v206 = (int *)&v491;
          if ( *(_QWORD *)&v469[1] )
            v206 = *(int **)&v469[1];
          if ( (unsigned int)IntersectRect(&v488, v206, (int *)&v491)
            && *(_QWORD *)&v488.left == *(_QWORD *)v206
            && *(_QWORD *)&v488.right == *((_QWORD *)v206 + 1) )
          {
            v490 = *(_OWORD *)GetMonitorWorkRect((__int64)&v490, v474);
            if ( v490 != *(_OWORD *)&v488 )
            {
              Current = CTopologyManager::GetCurrent(v208, v207);
              *(_QWORD *)&v490 = Current;
              v210 = 1;
              v468 = 1;
              if ( (W32GetCurrentThreadDpiAwarenessContext(v211) & 0xF) != 2 )
              {
                if ( *((_QWORD *)PtiCurrent(v213, v212) + 62) )
                {
                  v216 = **(_QWORD **)(*((_QWORD *)PtiCurrent(v215, v214) + 62) + 8LL);
                  if ( (*(_DWORD *)(v216 + 64) & 1) != 0 )
                  {
                    v217 = W32GetCurrentThreadDpiAwarenessContext(v216);
                    LogicalToPhysicalDPIRect(&v488, &v488, v217, &v474);
                  }
                }
              }
              v485 = v488;
              v218 = *(_QWORD *)(v474 + 40);
              v487 = *(struct tagRECT *)(v218 + 44);
              v486 = *(struct tagRECT *)(v218 + 28);
              InputTraceLogging::DesktopRecalc::WorkAreaChanged(*(void **)v474, &v486, &v487, &v485, a2 != 0);
              v219 = v474;
              *(struct tagRECT *)(*(_QWORD *)(v474 + 40) + 44LL) = v488;
              if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
                || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
                || (v220 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
              {
                v220 = 0;
              }
              v473 = v220;
              v476 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
              if ( v220 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              {
                v221 = *(_DWORD **)(v474 + 40);
                v222 = v221[14];
                v223 = v221[13];
                v224 = v221[12];
                v225 = v221[11];
                v226 = W32GetUserSessionState(v221, v219);
                LOBYTE(v227) = v476;
                LOBYTE(v228) = v473;
                WPP_RECORDER_AND_TRACE_SF_dddddddd(
                  *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                  v228,
                  v227,
                  *(_QWORD *)(v226 + 69160),
                  4,
                  7,
                  10,
                  (__int64)&WPP_f3d3c18d459639338220467da00acca9_Traceguids,
                  v225,
                  v224,
                  v223,
                  v222,
                  v488.left,
                  v488.top,
                  v488.right,
                  v488.bottom);
                v12 = v478;
                v210 = 1;
              }
              CTopologyManager::UpdateCurrent();
              v231 = *(_QWORD *)(GetDispInfo(v229) + 104);
              if ( v474 == v231 )
                SortMonitorsInSpatialOrder(v231, (__int64)v230);
              if ( a2 )
              {
                if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
                  || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
                  || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
                {
                  v210 = 0;
                }
                v232 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
                if ( v210 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                {
                  v233 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v230);
                  LOBYTE(v234) = v232;
                  LOBYTE(v235) = v210;
                  WPP_RECORDER_AND_TRACE_SF_(
                    *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                    v235,
                    v234,
                    *(_QWORD *)(v233 + 69160),
                    4,
                    7,
                    11,
                    (__int64)&WPP_f3d3c18d459639338220467da00acca9_Traceguids);
                }
                DesktopRecalc::OnWorkAreaChanged(Current, v230);
              }
              else
              {
                if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
                  || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
                  || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
                {
                  v210 = 0;
                }
                v236 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
                if ( v210 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                {
                  v237 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v230);
                  LOBYTE(v238) = v236;
                  LOBYTE(v239) = v210;
                  WPP_RECORDER_AND_TRACE_SF_(
                    *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                    v239,
                    v238,
                    *(_QWORD *)(v237 + 69160),
                    3,
                    7,
                    12,
                    (__int64)&WPP_f3d3c18d459639338220467da00acca9_Traceguids);
                }
              }
              DwmNotifyWorkAreaChanged();
              CCurrentMonitorTopologyPtr::~CCurrentMonitorTopologyPtr((CMonitorTopology **)&v490);
            }
LABEL_133:
            updated = 1;
            goto LABEL_134;
          }
          goto LABEL_951;
      }
      if ( v6 != 48 )
      {
        if ( v6 == 54 )
        {
          v196 = *(_QWORD *)&v469[1];
          if ( (!a2 || a2 == 28) && *(_QWORD *)&v469[1] && **(_DWORD **)&v469[1] == 28 )
          {
            memmove((void *)(*(_QWORD *)&v469[1] + 4LL), (char *)v484 + 4, 0x18uLL);
            *(_DWORD *)(*(_QWORD *)&v469[1] + 4LL) &= 0x4CFFFFFFu;
            if ( *(_BYTE *)(W32GetUserSessionState(v198, v197) + 20887) )
              *(_DWORD *)(v196 + 4) |= 0x80000000;
            v201 = (*(unsigned __int16 *)(W32GetUserSessionState(v200, v199) + 20604) & 3u) << 24;
            *(_DWORD *)(v196 + 4) |= v201;
            *(_DWORD *)(v196 + 4) |= (*(_WORD *)(W32GetUserSessionState(v201, v202) + 20606) & 3) << 28;
            goto LABEL_125;
          }
          return 0LL;
        }
        if ( v6 == 55 )
        {
          v169 = *(struct tagMOUSEKEYS **)&v469[1];
          if ( !a2 || a2 == 28 )
          {
            if ( *(_QWORD *)&v469[1] )
            {
              if ( **(_DWORD **)&v469[1] == 28 )
              {
                v170 = *(_DWORD *)(*(_QWORD *)&v469[1] + 4LL) & 0x4CFFFFFF;
                *(_DWORD *)(*(_QWORD *)&v469[1] + 4LL) = v170;
                if ( (unsigned __int8)v170 == (_DWORD)v170 )
                {
                  v171 = *(_DWORD *)(W32GetUserSessionState(v170, 2LL) + 20580);
                  v172 = *((_DWORD *)v169 + 1) | 2;
                  if ( (v171 & 2) == 0 )
                    v172 = *((_DWORD *)v169 + 1) & 0xFFFFFFFD;
                  *((_DWORD *)v169 + 1) = v172;
                  if ( (unsigned int)(*((_DWORD *)v169 + 2) - 10) <= 0x15E
                    && (unsigned int)(*((_DWORD *)v169 + 3) - 1000) <= 0xFA0 )
                  {
                    if ( v11 )
                    {
                      tagTLBLOCK::_unnamed_type_list_::_unnamed_type_list_((tagTLBLOCK::_unnamed_type_list_ *)&v488);
                      v173 = (struct _UNICODE_STRING *)CreateProfileUserName(&v488);
                      v468 = SetMouseKeys(v173, v169);
                      updated = v468;
                      v472 = v468;
                      v174 = v484;
                      if ( !v468 )
                        SetMouseKeys(v173, v484);
                      Win32RawOptionalLockedItemAlways<tagPROFILEUSERNAME,&void Win32FreePool(void *)>::~Win32RawOptionalLockedItemAlways<tagPROFILEUSERNAME,&void Win32FreePool(void *)>((__int64)&v488);
                    }
                    else
                    {
                      v174 = v484;
                    }
                    if ( updated )
                    {
                      memmove(v174, v169, *(unsigned int *)v169);
                      *(_DWORD *)v174 = 28;
                      CalculateMouseTable();
                      v178 = *(unsigned int *)(W32GetUserSessionState(v176, v175) + 20580);
                      if ( (v178 & 1) != 0 )
                      {
                        v179 = W32GetUserSessionState(v178, v177);
                        v182 = *(_WORD *)(W32GetUserSessionState(v181, v180) + 13984);
                        v185 = W32GetUserSessionState(v184, v183);
                        v186 = *(unsigned __int8 *)(((unsigned __int64)(unsigned __int8)v182 >> 2) + v179 + 14336);
                        v187 = v186 & (1 << (2 * (*(_WORD *)(v185 + 13984) & 3) + 1));
                        v190 = (*(_DWORD *)(W32GetUserSessionState(v186, v188) + 20580) >> 7) & 1;
                        *(_BYTE *)(W32GetUserSessionState(v190, v189) + 20887) = (_DWORD)v190 != (v187 != 0);
                        MKShowMouseCursor();
                        updated = v472;
                      }
                      else
                      {
                        MKHideMouseCursor();
                      }
                      SetAccessEnabledFlag();
                      v193 = PtiCurrent(v192, v191);
                      if ( ((*((_DWORD *)v193 + 180) | *(_DWORD *)(**((_QWORD **)PtiCurrent(v195, v194) + 63) + 16LL)) & 0x800) != 0 )
                        xxxCallHook(11LL, 3LL, 0LL, 10);
                      PostShellHookMessagesEx((LastWokenThread *)0xB, 3LL);
                    }
                    goto LABEL_125;
                  }
                }
              }
            }
          }
          return 0LL;
        }
        if ( v6 != 56 )
          goto LABEL_808;
        v167 = *(int **)&v469[1];
        v168 = *(_DWORD *)(W32GetUserSessionState(4134LL, 2LL) + 66800) >> 15;
LABEL_382:
        *v167 = v168 & 1;
        goto LABEL_134;
      }
      v203 = GetDispInfo(4134LL);
      MonitorMenuRect = (_OWORD *)GetMonitorWorkRect((__int64)&v488, *(_QWORD *)(v203 + 104));
LABEL_415:
      **(_OWORD **)&v469[1] = *MonitorMenuRect;
      goto LABEL_125;
    }
    if ( v6 != 64 )
    {
      if ( v6 == 65 )
      {
        v258 = *(struct tagSOUNDSENTRYW **)&v469[1];
        if ( !a2 || a2 == 56 )
        {
          if ( *(_QWORD *)&v469[1] )
          {
            if ( **(_DWORD **)&v469[1] == 56 )
            {
              v259 = *(unsigned int *)(*(_QWORD *)&v469[1] + 4LL);
              if ( (*(_DWORD *)(*(_QWORD *)&v469[1] + 4LL) & 7) == (_DWORD)v259
                && *(_DWORD *)(*(_QWORD *)&v469[1] + 32LL) <= 3u
                && !*(_DWORD *)(*(_QWORD *)&v469[1] + 8LL)
                && !*(_DWORD *)(*(_QWORD *)&v469[1] + 20LL) )
              {
                v260 = *(_DWORD *)(W32GetUserSessionState(v259, 2LL) + 20948);
                v261 = *(_DWORD *)(*(_QWORD *)&v469[1] + 4LL) | 2;
                if ( (v260 & 2) == 0 )
                  v261 = *(_DWORD *)(*(_QWORD *)&v469[1] + 4LL) & 0xFFFFFFFD;
                *(_DWORD *)(*(_QWORD *)&v469[1] + 4LL) = v261;
                if ( v11 )
                {
                  tagTLBLOCK::_unnamed_type_list_::_unnamed_type_list_((tagTLBLOCK::_unnamed_type_list_ *)&v488);
                  v262 = (struct _UNICODE_STRING *)CreateProfileUserName(&v488);
                  v468 = SetSoundSentry(v262, v258);
                  updated = v468;
                  v263 = *(_DWORD **)&v486.left;
                  if ( !v468 )
                    SetSoundSentry(v262, *(struct tagSOUNDSENTRYW **)&v486.left);
                  Win32RawOptionalLockedItemAlways<tagPROFILEUSERNAME,&void Win32FreePool(void *)>::~Win32RawOptionalLockedItemAlways<tagPROFILEUSERNAME,&void Win32FreePool(void *)>((__int64)&v488);
                }
                else
                {
                  v263 = *(_DWORD **)&v486.left;
                }
                if ( updated )
                {
                  memmove(v263, v258, *(unsigned int *)v258);
                  *v263 = 56;
                  SetAccessEnabledFlag();
                }
                goto LABEL_125;
              }
            }
          }
        }
        return 0LL;
      }
      if ( v6 == 66 )
      {
        *(_QWORD *)&v490 = *(_QWORD *)&v469[1];
        *(_DWORD *)(*(_QWORD *)&v469[1] + 4LL) = *(_DWORD *)(*(_QWORD *)&v487.left + 21044LL);
        v255 = *(_OWORD **)(v490 + 8);
        v256 = *(_OWORD **)&v488.left;
        do
        {
          *v255 = *v256;
          v255[1] = v256[1];
          v255[2] = v256[2];
          v255[3] = v256[3];
          v255[4] = v256[4];
          v255[5] = v256[5];
          v255[6] = v256[6];
          v255 += 8;
          *(v255 - 1) = v256[7];
          v256 += 8;
          --v24;
        }
        while ( v24 );
        v257 = v469[0];
        v35 = v12;
        v91 = v471;
        updated = v470;
        goto LABEL_947;
      }
      if ( v6 != 67 )
      {
        switch ( v6 )
        {
          case 'D':
            v167 = *(int **)&v469[1];
            v168 = *(_DWORD *)(W32GetUserSessionState(4134LL, 2LL) + 66800) >> 17;
            break;
          case 'E':
            if ( v11 )
            {
              v253 = L"1";
              if ( !a2 )
                v253 = L"0";
              v468 = FastWriteProfileStringW(0LL, 27LL, L"On", v253);
              updated = v468;
            }
            if ( updated )
            {
              v254 = W32GetUserSessionState(v26, v24);
              if ( a2 )
                *(_DWORD *)(v254 + 66800) |= 0x20000u;
              else
                *(_DWORD *)(v254 + 66800) &= ~0x20000u;
            }
            goto LABEL_125;
          case 'F':
            v167 = *(int **)&v469[1];
            v168 = *(_DWORD *)(W32GetUserSessionState(4134LL, 2LL) + 66800) >> 18;
            break;
          case 'G':
            if ( v11 )
            {
              v251 = L"1";
              if ( !a2 )
                v251 = L"0";
              v468 = FastWriteProfileStringW(0LL, 28LL, L"On", v251);
              updated = v468;
            }
            if ( updated )
            {
              v252 = W32GetUserSessionState(v26, v24);
              if ( a2 )
                *(_DWORD *)(v252 + 66800) |= 0x40000u;
              else
                *(_DWORD *)(v252 + 66800) &= ~0x40000u;
            }
            goto LABEL_125;
          default:
            goto LABEL_808;
        }
        goto LABEL_382;
      }
      v91 = SetHighContrastWorker(*(struct tagINTERNALSETHIGHCONTRAST *volatile *)&v469[1], v11, &v470);
LABEL_650:
      updated = v470;
      goto LABEL_227;
    }
    if ( a2 && a2 != 56 )
      return 0LL;
    v264 = *(_QWORD *)&v469[1];
    if ( !*(_QWORD *)&v469[1] || **(_DWORD **)&v469[1] != 56 )
      return 0LL;
    v265 = 52LL;
    v266 = (const void *)(*(_QWORD *)&v486.left + 4LL);
LABEL_517:
    memmove((void *)(v264 + 4), v266, v265);
    goto LABEL_125;
  }
  if ( v6 > 0x5A )
  {
    switch ( v6 )
    {
      case '[':
        return GetKbdLangSwitch(0LL);
      case ']':
        if ( v11 )
        {
          RtlStringCchPrintfW(v493, 0x28uLL, L"%d", a2);
          v468 = FastUpdateWinIni(0LL, 12LL, 613LL, v493);
          updated = v468;
        }
        if ( updated )
          SetMouseTrails(a2);
        goto LABEL_125;
      case '^':
        if ( *(_DWORD *)(W32GetUserSessionState(v6 - 94, 2LL) + 16296) )
          v61 = *(_DWORD *)(W32GetUserSessionState(v290, v289) + 16296) + 1;
        else
          v61 = *(_DWORD *)(W32GetUserSessionState(v290, v289) + 16296);
        goto LABEL_163;
    }
    if ( v6 != 95 )
    {
      v286 = v6 - 96;
      if ( v6 == 96 )
      {
        if ( v11 )
        {
          v468 = UpdateWinIniInt(0LL, 12LL, 7LL, a2 != 0);
          updated = v468;
        }
        if ( updated )
        {
          v288 = *(_QWORD *)(W32GetUserSessionState(v286, v24) + 19872);
          if ( a2 )
            *(_DWORD *)(v288 + 7004) |= 2u;
          else
            *(_DWORD *)(v288 + 7004) &= ~2u;
        }
        goto LABEL_125;
      }
      v287 = v6 - 98;
      if ( v6 != 98 )
      {
        if ( v11 )
        {
          v468 = UpdateWinIniInt(0LL, 12LL, 91LL, a2);
          updated = v468;
        }
        if ( updated )
          *(_DWORD *)(W32GetUserSessionState(v287, v24) + 16276) = a2;
        goto LABEL_125;
      }
      v36 = *(_DWORD *)(W32GetUserSessionState(v287, 2LL) + 16276);
      goto LABEL_127;
    }
    v279 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v6 - 95, 2LL) + 19872) + 7004LL);
    goto LABEL_555;
  }
  switch ( v6 )
  {
    case 'Z':
      v281 = **(_QWORD **)&v469[1];
      v282 = PtiCurrent(4134LL, 2LL);
      v285 = HKLtoPKL(v282, v281);
      if ( v285 )
      {
        if ( updated )
        {
          *(_QWORD *)&v488.left = W32GetUserSessionState(v284, v283) + 14272;
          *(_QWORD *)&v488.right = v285;
          HMAssignmentLock(&v488, 0LL);
        }
        goto LABEL_125;
      }
      return 0LL;
    case 'I':
      goto LABEL_343;
    case 'J':
      v279 = *(_DWORD *)(*(_QWORD *)(W32GetSessionState(4134, 2LL) + 96) + 20372LL);
LABEL_555:
      v280 = v279 >> 1;
      goto LABEL_556;
    case 'K':
      if ( (unsigned int)CheckDesktopPolicy(0LL, 200LL) )
      {
        v11 = 0;
        updated = 0;
      }
      v278 = a2 != 0 ? 2 : 0;
      if ( v11 )
      {
        v468 = UpdateWinIniInt(0LL, 4LL, 200LL, v278);
        updated = v468;
      }
      if ( updated )
        GreSetFontEnumeration(v278 | 4);
      goto LABEL_125;
    case 'L':
      if ( (unsigned int)CheckDesktopPolicy(0LL, 198LL) )
      {
        v11 = 0;
        updated = 0;
      }
      if ( v11 )
      {
        v468 = UpdateWinIniInt(0LL, 4LL, 198LL, a2);
        updated = v468;
      }
      if ( updated )
        *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v277, v276) + 19872) + 2168LL) = a2;
      goto LABEL_125;
    case 'M':
      if ( (unsigned int)CheckDesktopPolicy(0LL, 199LL) )
      {
        v11 = 0;
        updated = 0;
      }
      if ( v11 )
      {
        v468 = UpdateWinIniInt(0LL, 4LL, 199LL, a2);
        updated = v468;
      }
      if ( updated )
        *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v275, v274) + 19872) + 2172LL) = a2;
      goto LABEL_125;
    case 'W':
      tagTLBLOCK::_unnamed_type_list_::_unnamed_type_list_((tagTLBLOCK::_unnamed_type_list_ *)&v488);
      v273 = CreateProfileUserName(&v488);
      xxxUpdateSystemCursorsFromRegistry(v273, 2u);
      goto LABEL_139;
    case 'X':
      tagTLBLOCK::_unnamed_type_list_::_unnamed_type_list_((tagTLBLOCK::_unnamed_type_list_ *)&v488);
      v271 = CreateProfileUserName(&v488);
      xxxUpdateSystemIconsFromRegistry(v271, v272);
      goto LABEL_139;
    case 'Y':
      if ( *(_QWORD *)(W32GetUserSessionState(4134LL, 2LL) + 14272) )
      {
        **(_QWORD **)&v469[1] = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v269, v268) + 14272) + 40LL);
        goto LABEL_125;
      }
      v270 = 21;
      goto LABEL_952;
  }
LABEL_808:
  if ( v6 < 0xB4 )
  {
    v270 = 1439;
    goto LABEL_952;
  }
  LODWORD(v474) = v6 & 0x3000;
  if ( (v6 & 1) == 0 )
  {
    if ( (v6 & 0x3000) != 0x1000 )
    {
      v386 = (int *)UPDWORDPointer(v6);
      v388 = *v386;
      **(_DWORD **)&v469[1] = *v386;
      if ( v6 != 8204 || v388 )
        goto LABEL_368;
      v385 = *(_DWORD *)(*(_QWORD *)(W32GetSessionState(0, v387) + 96) + 13456LL);
      goto LABEL_845;
    }
    v362 = 0;
    v363 = 0;
    if ( v6 < 0x103E )
    {
      if ( *(int *)(W32GetUserSessionState(v26, 2LL) + 66804) < 0 )
      {
        if ( v6 != 4104 )
        {
          if ( v6 == 4106 )
          {
            v362 = (*(_DWORD *)(W32GetUserSessionState(v26, v24) + 66800) >> 17) & 1;
            v363 = v362;
            goto LABEL_835;
          }
          if ( v6 != 4114 && v6 != 4116 && v6 != 4120 && v6 != 4122 )
          {
            if ( v6 == 4132
              && (*(_DWORD *)(W32GetUserSessionState(v26, v24) + 43264)
               || *(_DWORD *)(W32GetUserSessionState(v26, v24) + 63416)) )
            {
              v363 = 1;
            }
            goto LABEL_835;
          }
        }
        if ( *(_DWORD *)(W32GetUserSessionState(v26, v24) + 43264) )
          v363 = 1;
        goto LABEL_835;
      }
      if ( v6 != 4096 )
      {
        if ( v6 == 4106 )
        {
          v362 = 1;
        }
        else if ( v6 == 4108 || v6 == 4124 || v6 == 4126 )
        {
          goto LABEL_835;
        }
        v363 = 1;
      }
    }
LABEL_835:
    if ( v363 )
    {
      **(_DWORD **)&v469[1] = v362;
      goto LABEL_368;
    }
    if ( v6 == 4158 && IsRemoteConnection(v26, v24) && !(unsigned int)IsWDAGContainer() )
    {
      v366 = W32GetUserSessionState(v365, v364);
      v369 = W32GetUserSessionState(v368, v367);
      v372 = W32GetUserSessionState(v371, v370);
      v375 = W32GetUserSessionState(v374, v373);
      v378 = W32GetUserSessionState(v377, v376);
      v381 = W32GetUserSessionState(v380, v379);
      **(_DWORD **)&v469[1] = (*(_DWORD *)(v369 + 66804) & 2 | *(_DWORD *)(v381 + 66804) & 4 | *(_DWORD *)(W32GetUserSessionState(v383, v382) + 66804) & 8 | *(_DWORD *)(v372 + 66804) & 0x200 | *(_DWORD *)(v375 + 66804) & 0x800 | *(_DWORD *)(v378 + 66804) & 0x1000 | *(_DWORD *)(v366 + 66804) & 0x2000) != 0;
      v12 = v478;
      goto LABEL_368;
    }
    v384 = *(_DWORD *)(v490 + 4 * ((unsigned __int64)(v6 - 4096) >> 6));
    v385 = _bittest(&v384, (unsigned __int8)(((v6 - 4096) >> 1) - 32 * ((v6 - 4096) >> 6)));
LABEL_845:
    **(_DWORD **)&v469[1] = v385;
    goto LABEL_368;
  }
  tagTLBLOCK::_unnamed_type_list_::_unnamed_type_list_((tagTLBLOCK::_unnamed_type_list_ *)&v488);
  v389 = CreateProfileUserName(&v488);
  v482 = v389;
  if ( (_DWORD)v474 != 4096 )
  {
    if ( *(_DWORD *)(UPDWORDPointer(v6) + 4) == 4 )
    {
      v431 = UPDWORDPointer(v6);
      if ( (unsigned int)CheckDesktopPolicy(v482, *(_QWORD *)(v431 + 8)) )
      {
        v11 = 0;
        updated = 0;
        v472 = 0;
      }
    }
    v35 = v12;
    v257 = v469[0];
    if ( v11 )
    {
      if ( v469[0] == 8235 || v469[0] == 8239 )
      {
        v35 = 0;
        if ( !DesktopRecalcSettings::ValidateDesktopRecalcSetting((DesktopRecalcSettings *)v469[0], v469[1], v430) )
        {
          updated = 0;
          v472 = 0;
          v11 = 0;
        }
      }
      if ( v11 )
      {
        v432 = *(_QWORD *)(UPDWORDPointer(v469[0]) + 8);
        v433 = UPDWORDPointer(v469[0]);
        v468 = FastWriteProfileValue(v482, *(unsigned int *)(v433 + 4), v432, 4LL, &v469[1], 4);
        updated = v468;
        v472 = v468;
      }
    }
    v434 = *(_DWORD *)UPDWORDPointer(v469[0]);
    if ( updated )
    {
      v435 = v469[1];
      *(_DWORD *)UPDWORDPointer(v469[0]) = v435;
      if ( v469[0] > 0x2011u )
      {
        switch ( v469[0] )
        {
          case 0x2013:
            v461 = (unsigned int *)UPDWORDPointer(8211LL);
            GreSetLCDOrientation(*v461);
            break;
          case 0x201D:
            TraceLoggingMouseWheelRoutingModeChange(v469[1]);
            break;
          case 0x201F:
            TraceLoggingSPISetPenVisualizationEvent(v434, v469[1]);
            break;
          case 0x2029:
            v460 = W32GetUserSessionState(v437, v436);
            CCursorSizes::zzzRefreshSizes(*(CCursorSizes **)(v460 + 36344));
            break;
        }
      }
      else
      {
        switch ( v469[0] )
        {
          case 0x2011:
            if ( *(_DWORD *)UPDWORDPointer(v469[0]) )
            {
              v457 = *(_DWORD *)UPDWORDPointer(8209LL);
              *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v459, v458) + 19872) + 2232LL) = v457;
            }
            break;
          case 0x2001:
            if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
              || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
              || (v448 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
            {
              v448 = 0;
            }
            v449 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( v448 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              v450 = *(_DWORD *)UPDWORDPointer(v469[0]);
              v451 = *((_DWORD *)v483 + 14);
              v454 = W32GetUserSessionState(v453, v452);
              LOBYTE(v455) = v449;
              LOBYTE(v456) = v448;
              WPP_RECORDER_AND_TRACE_SF_Dd(
                *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                v456,
                v455,
                *(_QWORD *)(v454 + 69160),
                4,
                2,
                13,
                (__int64)&WPP_f3d3c18d459639338220467da00acca9_Traceguids,
                v451,
                v450);
              updated = v472;
            }
            break;
          case 0x2007:
            v445 = *(_DWORD *)UPDWORDPointer(8199LL);
            *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v447, v446) + 19872) + 7008LL) = v445;
            break;
          case 0x200B:
            v444 = (_DWORD *)UPDWORDPointer(8203LL);
            GreSetFontEnumeration(8 * (*v444 & 2 | 4u));
            break;
          case 0x200D:
            v441 = *(_DWORD *)UPDWORDPointer(8205LL);
            *(_DWORD *)(*(_QWORD *)(W32GetSessionState(v443, v442) + 96) + 13456LL) = v441;
            break;
          default:
            if ( v469[0] == 8207 && *(_DWORD *)UPDWORDPointer(8207LL) )
            {
              v438 = *(_DWORD *)UPDWORDPointer(v469[0]);
              *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v440, v439) + 19872) + 2228LL) = v438;
            }
            break;
        }
      }
    }
    goto LABEL_930;
  }
  v390 = *(_QWORD *)&v485.left;
  if ( *(_DWORD *)(*(_QWORD *)&v485.left + 66820LL) == 4 )
  {
    v391 = CheckDesktopPolicy(v389, *(_QWORD *)(*(_QWORD *)&v485.left + 66824LL));
    v390 = *(_QWORD *)&v485.left;
    v18 = v391 == 0;
    v389 = v482;
    if ( !v18 )
    {
      v11 = 0;
      updated = 0;
    }
  }
  if ( v11 )
  {
    ProfileValue = FastGetProfileValue(
                     v389,
                     *(unsigned int *)(v390 + 66820),
                     *(_QWORD *)(v390 + 66824),
                     0LL,
                     &v474,
                     8,
                     0);
    v393 = v490;
    memmove((char *)&v474 + ProfileValue, (const void *)(ProfileValue + (_QWORD)v490), 8LL - ProfileValue);
    v394 = 1 << (((v6 - 4096) >> 1) - 32 * ((v6 - 4096) >> 6));
    v395 = (unsigned __int64)(v6 - 4096) >> 6;
    v396 = *((_DWORD *)&v474 + v395);
    if ( *(_QWORD *)&v469[1] )
      v397 = v396 | v394;
    else
      v397 = v396 & ~v394;
    *((_DWORD *)&v474 + v395) = v397;
    v468 = FastWriteProfileValue(
             v482,
             *(unsigned int *)(*(_QWORD *)&v485.left + 66820LL),
             *(_QWORD *)(*(_QWORD *)&v485.left + 66824LL),
             3LL,
             &v474,
             8);
    updated = v468;
  }
  else
  {
    v393 = v490;
  }
  if ( !updated )
    goto LABEL_889;
  v398 = v6 - 4096;
  v399 = 1 << (((v6 - 4096) >> 1) - 32 * ((v6 - 4096) >> 6));
  v400 = *(unsigned int *)(v393 + 4 * (v398 >> 6));
  if ( *(_QWORD *)&v469[1] )
    v401 = (unsigned int)v400 | v399;
  else
    v401 = (unsigned int)v400 & ~v399;
  *(_DWORD *)(v393 + 4 * (v398 >> 6)) = v401;
  if ( v6 > 0x1025 )
  {
    if ( v6 != 4159 )
    {
      switch ( v6 )
      {
        case 0x104Fu:
        case 0x1051u:
          xxxWindowEvent(0x80000007, 0LL, v6, *(_QWORD *)&v469[1] != 0LL, 0);
          break;
        case 0x1053u:
          NotifyISMPenButtonYieldSettingChange();
          break;
        case 0x1055u:
          *(_DWORD *)(*(_QWORD *)(W32GetSessionState(v400, v398) + 96) + 24320LL) = *(_QWORD *)&v469[1] != 0LL;
          break;
      }
      goto LABEL_889;
    }
    v421 = *(_QWORD *)(W32GetUserSessionState(v400, v398) + 19872);
    LODWORD(v421) = (*(_DWORD *)(W32GetUserSessionState(v423, v422) + 66804) ^ *(_DWORD *)(v421 + 7004)) & 0x80000000;
    v426 = W32GetUserSessionState(v425, v424);
    *(_DWORD *)(*(_QWORD *)(v426 + 19872) + 7004LL) ^= v421;
    SetPointer(1LL);
    goto LABEL_884;
  }
  if ( v6 == 4133 )
  {
    v420 = (void *)ReferenceDwmApiPort(v400, v398);
    DwmAsyncNotifyWindowShadowChange(v420);
    goto LABEL_889;
  }
  v402 = v6 - 4101;
  if ( !v402 )
  {
    v416 = *(_QWORD *)(W32GetUserSessionState(v400, v398) + 19872);
    v412 = (*(_DWORD *)(W32GetUserSessionState(v418, v417) + 66804) ^ *(_DWORD *)(v416 + 7004)) & 4;
    goto LABEL_873;
  }
  v403 = v402 - 2;
  if ( !v403 )
  {
    v413 = *(_QWORD *)(W32GetUserSessionState(v400, v398) + 19872);
    v412 = (*(_DWORD *)(W32GetUserSessionState(v415, v414) + 66804) ^ *(_DWORD *)(v413 + 7004)) & 8;
    goto LABEL_873;
  }
  v404 = v403 - 2;
  if ( !v404 )
  {
LABEL_884:
    CreateBitmapStrip(v400, v398, v401);
LABEL_885:
    if ( *((_QWORD *)PtiCurrent(v400, v398) + 62) )
      v429 = *(struct tagWND **)(*(_QWORD *)(*((_QWORD *)PtiCurrent(v428, v427) + 62) + 8LL) + 24LL);
    else
      v429 = 0LL;
    xxxInternalInvalidate(v429, (HRGN)1, 0x10485u);
    goto LABEL_889;
  }
  v405 = v404 - 2;
  if ( !v405 )
  {
    v407 = *(_QWORD *)(W32GetUserSessionState(v400, v398) + 19872);
    v412 = (*(_DWORD *)(W32GetUserSessionState(v409, v408) + 66804) ^ *(_DWORD *)(v407 + 7004)) & 0x20;
LABEL_873:
    v419 = W32GetUserSessionState(v411, v410);
    *(_DWORD *)(*(_QWORD *)(v419 + 19872) + 7004LL) ^= v412;
    goto LABEL_889;
  }
  v406 = v405 - 16;
  if ( v406 )
  {
    if ( v406 == 8 )
      goto LABEL_885;
  }
  else
  {
    SetPointer(1LL);
  }
LABEL_889:
  v35 = v12;
  v257 = v469[0];
LABEL_930:
  Win32RawOptionalLockedItemAlways<tagPROFILEUSERNAME,&void Win32FreePool(void *)>::~Win32RawOptionalLockedItemAlways<tagPROFILEUSERNAME,&void Win32FreePool(void *)>((__int64)&v488);
  v91 = v468;
LABEL_947:
  if ( v91 )
  {
    if ( v35 )
      EditionxxxBroadcastSPIChange(v257, (__int64)v494, 1);
  }
  return updated;
}
