/*
 * XREFs of ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1400E96D0
 * Callers:
 *     xxxUserPowerCalloutWorker @ 0x1400E9120 (xxxUserPowerCalloutWorker.c)
 * Callees:
 *     CitLastInputUpdate @ 0x14007DA30 (CitLastInputUpdate.c)
 *     PowerOnMonitor @ 0x14007FA80 (PowerOnMonitor.c)
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x14007FE94 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     PowerUnDimMonitor @ 0x140080194 (PowerUnDimMonitor.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140081F58 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ?GetLastInputTime@CInputGlobals@@QEBA_KXZ @ 0x140099090 (-GetLastInputTime@CInputGlobals@@QEBA_KXZ.c)
 *     ?GetGlobalTickCount@CInputGlobals@@QEBA_KW4INPUT_GLOBALS_TICK_COUNT@@@Z @ 0x1400990F0 (-GetGlobalTickCount@CInputGlobals@@QEBA_KW4INPUT_GLOBALS_TICK_COUNT@@@Z.c)
 *     ?UpdateGlobalTickCount@CInputGlobals@@QEAA_NW4INPUT_GLOBALS_TICK_COUNT@@@Z @ 0x14009AF70 (-UpdateGlobalTickCount@CInputGlobals@@QEAA_NW4INPUT_GLOBALS_TICK_COUNT@@@Z.c)
 *     ?UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z @ 0x14009B1F0 (-UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z.c)
 *     ?_SetForegroundPriority@ForegroundBoost@@YAXPEAUtagPROCESSINFO@@PEBUtagTHREADINFO@@W4ForegroundPriorityClass@1@W4ForegroundBoostSource@1@@Z @ 0x14009D1A0 (-_SetForegroundPriority@ForegroundBoost@@YAXPEAUtagPROCESSINFO@@PEBUtagTHREADINFO@@W4ForegroundP.c)
 *     PowerOffMonitor @ 0x1400E1480 (PowerOffMonitor.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1400E1920 (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     EnterPowerCrit @ 0x1400E95D0 (EnterPowerCrit.c)
 *     LeavePowerCrit @ 0x1400E9600 (LeavePowerCrit.c)
 *     ?ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1400EA3AC (-ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z.c)
 *     PowerIsDisplayRequired @ 0x1400EDB30 (PowerIsDisplayRequired.c)
 *     ?DisarmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1400F090C (-DisarmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x1400F7E74 (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x14010EDF8 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     EtwTraceStopPowerEventCalloutWorker @ 0x140115D20 (EtwTraceStopPowerEventCalloutWorker.c)
 *     McTemplateK0qxq_EtwWriteTransfer @ 0x140115D54 (McTemplateK0qxq_EtwWriteTransfer.c)
 *     SetTimerCoalescingTolerance @ 0x140115E34 (SetTimerCoalescingTolerance.c)
 *     IsSetTimerCoalescingToleranceSupported @ 0x140116A64 (IsSetTimerCoalescingToleranceSupported.c)
 *     ?PowerEvent@Power@InputTraceLogging@@SAXW4_PSPOWEREVENTTYPE@@_K@Z @ 0x140128C28 (-PowerEvent@Power@InputTraceLogging@@SAXW4_PSPOWEREVENTTYPE@@_K@Z.c)
 *     PostPlaySoundMessage @ 0x14012CBC4 (PostPlaySoundMessage.c)
 *     ApiSetPsW32ScreenSaver_Show @ 0x14012DD68 (ApiSetPsW32ScreenSaver_Show.c)
 *     xxxSendMessageBSM @ 0x140143D90 (xxxSendMessageBSM.c)
 *     PowerDimMonitor @ 0x140146808 (PowerDimMonitor.c)
 *     IsxxxSendMessageBSMSupported @ 0x1401473F8 (IsxxxSendMessageBSMSupported.c)
 *     EtwTraceIdleActionExpiration @ 0x14014F590 (EtwTraceIdleActionExpiration.c)
 *     IsPowerOffGdiSupported @ 0x140156BF8 (IsPowerOffGdiSupported.c)
 *     PowerOnGdi @ 0x1401598FC (PowerOnGdi.c)
 *     IsPowerOnGdiSupported @ 0x14015BA24 (IsPowerOnGdiSupported.c)
 *     PowerOffGdi @ 0x140160250 (PowerOffGdi.c)
 *     PostWinlogonMessage @ 0x14016BE20 (PostWinlogonMessage.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1401A6050 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ?PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1401B003C (-PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     ?PowerOffSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401B02CC (-PowerOffSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?PowerOnSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4_POWERON_LOC@@@Z @ 0x1401B0460 (-PowerOnSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4_POWER.c)
 *     ?ShouldEscapeProximity@@YAEXZ @ 0x1401B05EC (-ShouldEscapeProximity@@YAEXZ.c)
 *     ?UpdateAdaptiveSessionState@@YAXXZ @ 0x1401B0780 (-UpdateAdaptiveSessionState@@YAXXZ.c)
 *     PowerResumeSuspendEvent @ 0x1401B0E50 (PowerResumeSuspendEvent.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1401B6C6C (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     ProcessDelayedSdc @ 0x14023F218 (ProcessDelayedSdc.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxUserPowerEventCalloutWorker(struct _WIN32_POWEREVENT_PARAMETERS *a1)
{
  unsigned int v1; // r9d
  unsigned int v3; // r15d
  __int64 v4; // rsi
  __int64 v5; // r13
  unsigned int v6; // r12d
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // r8d
  _DWORD *UserSessionState; // r14
  unsigned int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  _DWORD *v23; // rcx
  struct W32_PUSH_LOCK *v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rcx
  CInputGlobals *v27; // rdi
  __int64 GlobalTickCount; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rcx
  int v44; // ecx
  int v45; // r9d
  int v46; // r8d
  int v47; // edx
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // rdx
  NTSTATUS v51; // ebx
  __int64 v52; // rdx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // rax
  int v57; // ecx
  int v58; // r9d
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rdx
  __int64 v62; // rcx
  enum _MONITOR_DISPLAY_STATE v63; // ecx
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v64; // rdx
  __int64 v65; // rdx
  __int64 v66; // rcx
  unsigned __int64 v67; // rcx
  __int64 v68; // rbx
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // rdx
  __int64 v76; // rcx
  bool v77; // zf
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // rax
  NTSTATUS v81; // ebx
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // rax
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // rax
  int v96; // ebx
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // rax
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // rax
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // rax
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // rax
  __int64 v111; // rdx
  __int64 v112; // rcx
  _BYTE v114[4]; // [rsp+3Ch] [rbp-35h] BYREF
  __int64 v115; // [rsp+40h] [rbp-31h] BYREF
  unsigned __int64 OutputBuffer; // [rsp+48h] [rbp-29h] BYREF
  _BYTE v117[8]; // [rsp+50h] [rbp-21h] BYREF
  __int64 v118; // [rsp+58h] [rbp-19h]
  __int128 InputBuffer; // [rsp+60h] [rbp-11h] BYREF
  _OWORD v120[2]; // [rsp+70h] [rbp-1h] BYREF
  __int64 v121; // [rsp+90h] [rbp+1Fh]

  v1 = *((_DWORD *)a1 + 6);
  v117[0] = 0;
  CDisplayScenarioContextScope::ContextScopeConstructor((CDisplayScenarioContextScope *)v117, 0LL, 0x10u, v1);
  v3 = *((_DWORD *)a1 + 4);
  v4 = *((_QWORD *)a1 + 3);
  v5 = v118;
  memset(v120, 0, sizeof(v120));
  v121 = 0LL;
  v6 = 0;
  OutputBuffer = 0LL;
  InputBuffer = 0LL;
  v115 = 0LL;
  UserSessionState = (_DWORD *)W32GetUserSessionState(v8, v7);
  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    McTemplateK0qxq_EtwWriteTransfer(v10, (unsigned int)&StartPowerEventCalloutWorker, v11, v3, v4, 0);
  if ( *(_DWORD *)(W32GetUserSessionState(v10, v9) + 2728) )
  {
    InputTraceLogging::Power::PowerEvent(v3, v4);
    if ( (int)v3 > 8 )
    {
      if ( v3 != 9 )
      {
        switch ( v3 )
        {
          case 0xAu:
            if ( *(_BYTE *)W32GetUserGdiSessionState() )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1442LL);
            PowerDisplayBurst((enum POWER_MONITOR_REQUEST_REASON)v4);
            goto LABEL_144;
          case 0xBu:
            if ( !*(_DWORD *)(W32GetUserGdiSessionState() + 36)
              && !UserSessionState[690]
              && UserSessionState[722] == (_DWORD)v4
              && (!*(_BYTE *)W32GetUserGdiSessionState() || *(_DWORD *)(W32GetUserSessionState(v112, v111) + 596)) )
            {
              if ( (_DWORD)v4 == 1 )
              {
                PowerUnDimMonitor(v112, v111);
              }
              else if ( (_DWORD)v4 == 2 )
              {
                PowerDimMonitor();
              }
            }
            goto LABEL_144;
          case 0xCu:
            goto LABEL_97;
          case 0xDu:
            if ( !*(_BYTE *)W32GetUserGdiSessionState() )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1239LL);
            if ( *(_DWORD *)(W32GetUserGdiSessionState() + 36) )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1241LL);
            PowerOnSession((unsigned int)v4);
            break;
          case 0xEu:
            if ( !*(_BYTE *)W32GetUserGdiSessionState() )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1223LL);
            if ( *(_DWORD *)(W32GetUserGdiSessionState() + 36) )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1225LL);
            PowerOffSession((enum POWER_MONITOR_REQUEST_REASON)v4, v64);
            break;
          case 0xFu:
            if ( !*(_BYTE *)W32GetUserGdiSessionState() )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1273LL);
            if ( *(_DWORD *)(W32GetUserGdiSessionState() + 36) || UserSessionState[690] )
              goto LABEL_144;
            if ( v4 == 1 )
            {
              *(_DWORD *)(W32GetUserSessionState(v60, v59) + 596) = 1;
              PowerUnDimMonitor(v62, v61);
              v63 = PowerMonitorOn;
            }
            else
            {
              if ( v4 != 2 )
              {
                if ( v4 )
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1303LL);
                *(_DWORD *)(W32GetUserSessionState(v60, v59) + 596) = 0;
                goto LABEL_144;
              }
              *(_DWORD *)(W32GetUserSessionState(v60, v59) + 596) = 1;
              PowerDimMonitor();
              v63 = PowerMonitorDim;
            }
            UpdateDisplayState(v63, MonitorRequestReasonMax|MonitorRequestReasonPowerButton, 1);
LABEL_144:
            EtwTraceStopPowerEventCalloutWorker(v3, v4, v6);
            v13 = v6;
            goto LABEL_145;
          case 0x10u:
            goto LABEL_97;
          default:
            goto LABEL_73;
        }
        UserSessionSwitchBlock_End();
        goto LABEL_144;
      }
    }
    else if ( v3 != 8 )
    {
      switch ( v3 )
      {
        case 0u:
          if ( !*(_DWORD *)(W32GetUserSessionState(0LL, v14) + 68612) )
          {
            LOBYTE(v49) = 1;
            if ( !(unsigned int)PowerResumeSuspendEvent(0LL, 0LL, v49) )
            {
              LODWORD(InputBuffer) = 0;
              *(_QWORD *)((char *)&InputBuffer + 4) = 7LL;
              WORD6(InputBuffer) = 0;
              LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v114, 1);
              ZwPowerInformation(NotifyUserModeLegacyPowerEvent, &InputBuffer, 0x10u, 0LL, 0);
              LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v114, v50);
            }
          }
          LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v114, 1);
          v51 = ZwPowerInformation(LastSleepTime, 0LL, 0, &OutputBuffer, 8u);
          LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v114, v52);
          if ( v51 || (v56 = W32GetUserSessionState(v54, v53), *(_QWORD *)(v56 + 63464) < OutputBuffer) )
          {
            LOBYTE(v55) = 1;
            LOBYTE(v53) = 1;
            if ( !(unsigned int)PowerResumeSuspendEvent(0LL, v53, v55) )
            {
              *(_QWORD *)&v120[0] = 0x2000000000000010LL;
              if ( (int)IsxxxSendMessageBSMSupported() >= 0 )
                xxxSendMessageBSM(v57, 536, 7, v58, (__int64)v120);
            }
          }
          if ( (int)IsSetTimerCoalescingToleranceSupported() < 0 )
            goto LABEL_144;
          v17 = 0LL;
          goto LABEL_22;
        case 1u:
          v6 = PostWinlogonMessage(256LL, v4);
          if ( !v6 )
            PostPlaySoundMessage(v4);
          goto LABEL_144;
        case 2u:
          if ( !*(_DWORD *)(W32GetUserSessionState(0LL, v14) + 68612) )
          {
            LODWORD(InputBuffer) = 0;
            *(_QWORD *)((char *)&InputBuffer + 4) = 10LL;
            WORD6(InputBuffer) = 0;
            LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v114, 1);
            ZwPowerInformation(NotifyUserModeLegacyPowerEvent, &InputBuffer, 0x10u, 0LL, 0);
            LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v114, v48);
          }
          *(_QWORD *)&v120[0] = 0x1000000010LL;
          if ( (int)IsxxxSendMessageBSMSupported() < 0 )
            goto LABEL_144;
          v46 = 10;
          v47 = 536;
          break;
        case 3u:
          *(_QWORD *)&v120[0] = 0x1000000010LL;
          if ( (int)IsxxxSendMessageBSMSupported() < 0 )
            goto LABEL_144;
          v46 = 0;
          v47 = 30;
          break;
        case 4u:
LABEL_97:
          if ( *(_BYTE *)W32GetUserGdiSessionState() )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1057LL);
          if ( v3 == 16 )
          {
            v67 = (unsigned __int64)MEMORY[0xFFFFF78000000004] << 32;
            v68 = (v67 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
            v69 = W32GetUserSessionState(v67, v68);
            CInputGlobals::UpdateLastInputTime(*(struct W32_PUSH_LOCK **)(v69 + 3056), v68, 5u);
            CitLastInputUpdate(5, v68, 0LL, 0);
            if ( UserSessionState[722] )
              UpdateAdaptiveSessionState();
          }
          EnterPowerCrit(v66, v65);
          v72 = W32GetUserSessionState(v71, v70);
          DisarmPowerWatchdog(*(_QWORD *)(v72 + 544));
          LeavePowerCrit(v74, v73);
          if ( v3 == 12 )
            UserSessionSwitchBlock_End();
          if ( !*(_DWORD *)(W32GetUserGdiSessionState() + 36) && !UserSessionState[690] )
          {
            v77 = *(_WORD *)(W32GetUserSessionState(v76, v75) + 68752) == 0;
            HIDWORD(v115) = v4;
            LOBYTE(v115) = v77;
            if ( UserSessionState[694] && v77 && (_DWORD)v4 != 22 )
            {
              if ( (_DWORD)v4 != 1 || !ShouldEscapeProximity() )
              {
                v6 = 0;
                goto LABEL_128;
              }
              UserSessionState[694] = 0;
            }
            v80 = W32GetUserSessionState(v79, v78);
            ArmPowerWatchdog(*(_QWORD *)(v80 + 552), 32LL);
            v81 = ZwPowerInformation((POWER_INFORMATION_LEVEL)68, &v115, 8u, 0LL, 0);
            *(_DWORD *)(W32GetUserSessionState(v83, v82) + 564) = v81;
            v86 = W32GetUserSessionState(v85, v84);
            DisarmPowerWatchdog(*(_QWORD *)(v86 + 552));
            if ( *(_DWORD *)(W32GetUserSessionState(v88, v87) + 564)
              && *(_DWORD *)(W32GetUserSessionState(v90, v89) + 564) != 259
              && *(_DWORD *)(W32GetUserSessionState(v90, v89) + 564) != -1073741823 )
            {
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1163LL);
            }
            if ( *(_DWORD *)(W32GetUserSessionState(v90, v89) + 564) == 259 )
            {
              if ( !*(_BYTE *)(W32GetUserSessionState(v92, v91) + 568) )
              {
                *(_BYTE *)(W32GetUserSessionState(v79, v78) + 568) = 1;
                v95 = W32GetUserSessionState(v94, v93);
                *(_DWORD *)(v95 + 572) = HIDWORD(v115);
                UserSessionSwitchBlock_Start();
              }
              goto LABEL_128;
            }
            if ( *(_DWORD *)(W32GetUserSessionState(v92, v91) + 564) == -1073741823 )
            {
LABEL_128:
              EnterPowerCrit(v79, v78);
              v105 = W32GetUserSessionState(v104, v103);
              --*(_DWORD *)(v105 + 560);
              if ( *(_DWORD *)(W32GetUserSessionState(v107, v106) + 560) )
              {
                v110 = W32GetUserSessionState(v109, v108);
                ArmPowerWatchdog(*(_QWORD *)(v110 + 544), 16LL);
              }
              LeavePowerCrit(v109, v108);
              goto LABEL_144;
            }
            v96 = 0;
            if ( !*(_DWORD *)(W32GetUserGdiSessionState() + 28) && (int)IsPowerOnGdiSupported() >= 0 )
            {
              v99 = W32GetUserSessionState(v98, v97);
              ArmPowerWatchdog(*(_QWORD *)(v99 + 552), 48LL);
              PowerOnGdi(v5, 0LL, 0LL);
              v102 = W32GetUserSessionState(v101, v100);
              DisarmPowerWatchdog(*(_QWORD *)(v102 + 552));
              v96 = 1;
            }
            PowerOnMonitor(HIDWORD(v115), v5, 0);
            if ( v96 )
              ProcessDelayedSdc(v5);
          }
          if ( (int)IsSetTimerCoalescingToleranceSupported() >= 0 )
            SetTimerCoalescingTolerance(0LL);
          goto LABEL_128;
        case 5u:
          if ( *(_BYTE *)W32GetUserGdiSessionState() )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1014LL);
          if ( *(_DWORD *)(W32GetUserGdiSessionState() + 36) )
            goto LABEL_144;
          HIDWORD(v115) = v4;
          PowerOffMonitor((unsigned int)v4, v5);
          if ( !*(_WORD *)(W32GetUserSessionState(v41, v40) + 68752)
            && *(_BYTE *)(W32GetUserSessionState(v43, v42) + 604)
            && !UserSessionState[689]
            && (int)IsPowerOffGdiSupported() >= 0 )
          {
            PowerOffGdi(v5);
          }
          if ( (int)IsSetTimerCoalescingToleranceSupported() < 0 || HIDWORD(v115) == 17 )
            goto LABEL_144;
          v17 = 2LL;
LABEL_22:
          SetTimerCoalescingTolerance(v17);
          goto LABEL_144;
        case 6u:
          v18 = W32GetUserSessionState(v3 - 6, v14);
          if ( CInputGlobals::UpdateGlobalTickCount(*(_QWORD *)(v18 + 3056), 2) )
          {
            v21 = W32GetUserSessionState(v20, v19);
            EtwTraceIdleActionExpiration(1LL, *(unsigned int *)(v21 + 62816));
          }
          if ( UserSessionState[688]
            || (v23 = *(_DWORD **)(W32GetUserSessionState(v20, v19) + 19872), (*v23 & 0x200) != 0)
            && (v24 = *(struct W32_PUSH_LOCK **)(W32GetUserSessionState(v23, v22) + 3056),
                v27 = *(CInputGlobals **)(W32GetUserSessionState(v26, v25) + 3056),
                GlobalTickCount = CInputGlobals::GetGlobalTickCount(v24, 1),
                GlobalTickCount != CInputGlobals::GetLastInputTime(v27)) )
          {
            if ( !(unsigned int)PowerIsDisplayRequired() || *(_DWORD *)(W32GetUserSessionState(v30, v29) + 19072) )
            {
              if ( *(_QWORD *)(W32GetUserSessionState(v30, v29) + 62824) )
              {
                v34 = *(_QWORD *)(W32GetUserSessionState(v32, v31) + 62824);
                if ( (*(_DWORD *)(v34 + 12) & 0x400000) == 0 )
                {
                  v35 = *(_QWORD *)(W32GetUserSessionState(v34, v33) + 62824);
                  *(_DWORD *)(v35 + 12) |= 0x400000u;
                  v38 = *(_QWORD *)(W32GetUserSessionState(v35, v36) + 62824);
                  if ( *(_QWORD *)(v38 + 328) )
                  {
                    v39 = W32GetUserSessionState(v38, v37);
                    ForegroundBoost::_SetForegroundPriority(
                      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v39 + 62824) + 328LL) + 464LL),
                      *(_QWORD *)(*(_QWORD *)(v39 + 62824) + 328LL),
                      1,
                      8u);
                  }
                }
              }
              else
              {
                ApiSetPsW32ScreenSaver_Show();
              }
            }
          }
          goto LABEL_144;
        case 7u:
          if ( *(_DWORD *)(W32GetUserGdiSessionState() + 36) || UserSessionState[690] || !UserSessionState[688] )
            goto LABEL_144;
          PowerDimMonitor();
          if ( !*(_WORD *)(W32GetUserSessionState(v16, v15) + 68752) )
            UpdateDisplayState(PowerMonitorDim, MonitorRequestReasonMax, 1);
          if ( (int)IsSetTimerCoalescingToleranceSupported() < 0 )
            goto LABEL_144;
          v17 = 1LL;
          goto LABEL_22;
        default:
LABEL_73:
          v6 = -1073741822;
          goto LABEL_144;
      }
      xxxSendMessageBSM(v44, v47, v46, v45, (__int64)v120);
      goto LABEL_144;
    }
    UpdateAdaptiveSessionState();
    goto LABEL_144;
  }
  v13 = -1073741823;
  EtwTraceStopPowerEventCalloutWorker(v3, v4, 3221225473LL);
LABEL_145:
  CDisplayScenarioContextScope::~CDisplayScenarioContextScope((CDisplayScenarioContextScope *)v117);
  return v13;
}
