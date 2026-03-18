/*
 * XREFs of ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x140112470
 * Callers:
 *     xxxUserPowerCalloutWorker @ 0x1401120B0 (xxxUserPowerCalloutWorker.c)
 * Callees:
 *     ?SetForegroundPriority@ForegroundBoost@@YAXPEBUtagTHREADINFO@@W4ForegroundPriorityClass@1@W4ForegroundBoostSource@1@@Z @ 0x1400CCB40 (-SetForegroundPriority@ForegroundBoost@@YAXPEBUtagTHREADINFO@@W4ForegroundPriorityClass@1@W4Fore.c)
 *     ?UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z @ 0x1400D00A0 (-UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z.c)
 *     CitLastInputUpdate @ 0x1400D3D50 (CitLastInputUpdate.c)
 *     PowerResumeSuspendEvent @ 0x1400E9090 (PowerResumeSuspendEvent.c)
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1400EA20C (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1400EA650 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ?UpdateAdaptiveSessionState@@YAXXZ @ 0x1400EA8F0 (-UpdateAdaptiveSessionState@@YAXXZ.c)
 *     ?GetLastInputTime@CInputGlobals@@QEBA_KXZ @ 0x1400EAA30 (-GetLastInputTime@CInputGlobals@@QEBA_KXZ.c)
 *     ?GetGlobalTickCount@CInputGlobals@@QEBA_KW4INPUT_GLOBALS_TICK_COUNT@@@Z @ 0x1400EAA90 (-GetGlobalTickCount@CInputGlobals@@QEBA_KW4INPUT_GLOBALS_TICK_COUNT@@@Z.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1400EAAF4 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     PowerOnGdi @ 0x1400EB39C (PowerOnGdi.c)
 *     IsPowerOnGdiSupported @ 0x1400EB3F4 (IsPowerOnGdiSupported.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1401116D8 (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1401117CC (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     EtwTraceStopPowerEventCalloutWorker @ 0x140113E04 (EtwTraceStopPowerEventCalloutWorker.c)
 *     McTemplateK0qxq_EtwWriteTransfer @ 0x140113E38 (McTemplateK0qxq_EtwWriteTransfer.c)
 *     PowerIsDisplayRequired @ 0x1401357B0 (PowerIsDisplayRequired.c)
 *     ?DisarmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x14014B2CC (-DisarmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x14014B830 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     SetTimerCoalescingTolerance @ 0x140156610 (SetTimerCoalescingTolerance.c)
 *     IsSetTimerCoalescingToleranceSupported @ 0x1401570D4 (IsSetTimerCoalescingToleranceSupported.c)
 *     ?PowerEvent@Power@InputTraceLogging@@SAXW4_PSPOWEREVENTTYPE@@_K@Z @ 0x1401619E8 (-PowerEvent@Power@InputTraceLogging@@SAXW4_PSPOWEREVENTTYPE@@_K@Z.c)
 *     ?UpdateGlobalTickCount@CInputGlobals@@QEAA_NW4INPUT_GLOBALS_TICK_COUNT@@@Z @ 0x140162140 (-UpdateGlobalTickCount@CInputGlobals@@QEAA_NW4INPUT_GLOBALS_TICK_COUNT@@@Z.c)
 *     PostPlaySoundMessage @ 0x140166100 (PostPlaySoundMessage.c)
 *     ApiSetPsW32ScreenSaver_Show @ 0x140169CCC (ApiSetPsW32ScreenSaver_Show.c)
 *     xxxSendMessageBSM @ 0x14017AE70 (xxxSendMessageBSM.c)
 *     IsxxxSendMessageBSMSupported @ 0x14017EBA8 (IsxxxSendMessageBSMSupported.c)
 *     EtwTraceIdleActionExpiration @ 0x14018DFB0 (EtwTraceIdleActionExpiration.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1401B6474 (-PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     ?ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1401C1404 (-ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z.c)
 *     ?PowerOffSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401D5704 (-PowerOffSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?PowerOnSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4_POWERON_LOC@@@Z @ 0x1401D5828 (-PowerOnSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4_POWER.c)
 *     ?ShouldEscapeProximity@@YAEXZ @ 0x1401D59B4 (-ShouldEscapeProximity@@YAEXZ.c)
 *     PowerDimMonitor @ 0x1401D6144 (PowerDimMonitor.c)
 *     PowerOffMonitor @ 0x1401D62C0 (PowerOffMonitor.c)
 *     PowerOnMonitor @ 0x1401D6660 (PowerOnMonitor.c)
 *     PowerUnDimMonitor @ 0x1401D6960 (PowerUnDimMonitor.c)
 *     PostWinlogonMessage @ 0x1401D97F0 (PostWinlogonMessage.c)
 *     ProcessDelayedSdc @ 0x140249448 (ProcessDelayedSdc.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 __fastcall xxxUserPowerEventCalloutWorker(struct _WIN32_POWEREVENT_PARAMETERS *a1)
{
  unsigned int v1; // ebx
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v3; // r13
  unsigned int v4; // r15d
  __int64 v5; // rsi
  unsigned int v6; // r12d
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  _DWORD *UserSessionState; // r14
  int v15; // edx
  int v16; // r8d
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  __int64 v20; // rcx
  __int64 v21; // rax
  int v22; // edx
  int v23; // ecx
  int v24; // r8d
  __int64 v25; // rax
  int v26; // edx
  _DWORD *v27; // rcx
  int v28; // r8d
  __int64 v29; // rbx
  int v30; // edx
  int v31; // ecx
  int v32; // r8d
  CInputGlobals *v33; // rdi
  __int64 GlobalTickCount; // rbx
  int v35; // edx
  int v36; // ecx
  int v37; // r8d
  int v38; // edx
  int v39; // ecx
  int v40; // r8d
  int v41; // edx
  __int64 v42; // rcx
  int v43; // r8d
  __int64 v44; // rcx
  int v45; // edx
  int v46; // r8d
  int v47; // edx
  __int64 v48; // rcx
  int v49; // r8d
  __int64 v50; // rax
  int v51; // ecx
  int v52; // r9d
  int v53; // r8d
  int v54; // edx
  __int64 v55; // rdx
  __int64 v56; // r8
  __int64 v57; // r9
  int v58; // edx
  int v59; // r8d
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // r9
  int v63; // edx
  int v64; // r8d
  NTSTATUS v65; // ebx
  int v66; // edx
  int v67; // r8d
  int v68; // edx
  int v69; // ecx
  int v70; // r8d
  int v71; // ecx
  int v72; // r9d
  int v73; // edx
  int v74; // ecx
  int v75; // r8d
  enum _MONITOR_DISPLAY_STATE v76; // ecx
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v77; // rdx
  int v78; // edx
  int v79; // ecx
  int v80; // r8d
  __int64 v81; // rbx
  __int64 v82; // rax
  __int64 v83; // rax
  int v84; // edx
  int v85; // ecx
  int v86; // r8d
  __int64 v87; // rax
  int v88; // edx
  int v89; // ecx
  int v90; // r8d
  __int64 v91; // rax
  int v92; // edx
  int v93; // ecx
  int v94; // r8d
  bool v95; // zf
  int v96; // edx
  int v97; // ecx
  int v98; // r8d
  __int64 v99; // rax
  NTSTATUS v100; // ebx
  int v101; // edx
  int v102; // ecx
  int v103; // r8d
  int v104; // edx
  int v105; // ecx
  int v106; // r8d
  __int64 v107; // rax
  int v108; // edx
  int v109; // ecx
  int v110; // r8d
  int v111; // edx
  int v112; // ecx
  int v113; // r8d
  int v114; // edx
  int v115; // ecx
  int v116; // r8d
  int v117; // edx
  int v118; // ecx
  int v119; // r8d
  int v120; // ebx
  __int64 v121; // rcx
  int v122; // edx
  int v123; // ecx
  int v124; // r8d
  __int64 v125; // rax
  int v126; // edx
  int v127; // ecx
  int v128; // r8d
  __int64 v129; // rax
  __int64 v130; // rax
  int v131; // edx
  int v132; // ecx
  int v133; // r8d
  __int64 v134; // rax
  int v135; // edx
  int v136; // ecx
  int v137; // r8d
  int v138; // edx
  int v139; // ecx
  int v140; // r8d
  __int64 v141; // rax
  __int64 v142; // rax
  int v143; // edx
  int v144; // ecx
  int v145; // r8d
  __int64 v146; // [rsp+38h] [rbp-49h] BYREF
  POWER_MONITOR_REQUEST_REASON v147[2]; // [rsp+40h] [rbp-41h] BYREF
  unsigned __int8 v148[8]; // [rsp+48h] [rbp-39h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v149; // [rsp+50h] [rbp-31h] BYREF
  unsigned __int64 OutputBuffer; // [rsp+58h] [rbp-29h] BYREF
  __int128 InputBuffer; // [rsp+60h] [rbp-21h] BYREF
  _OWORD v152[2]; // [rsp+70h] [rbp-11h] BYREF
  __int64 v153; // [rsp+90h] [rbp+Fh]
  GUID ActivityId; // [rsp+98h] [rbp+17h] BYREF

  v1 = *((_DWORD *)a1 + 6);
  v148[0] = 0;
  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  DisplayScenarioContextEnsureAndAssociate(&ActivityId, 0x10u, v1, &v149, v148);
  v3 = v149;
  v4 = *((_DWORD *)a1 + 4);
  v5 = *((_QWORD *)a1 + 3);
  memset(v152, 0, sizeof(v152));
  v153 = 0LL;
  v6 = 0;
  OutputBuffer = 0LL;
  InputBuffer = 0LL;
  *(_QWORD *)v147 = 0LL;
  UserSessionState = (_DWORD *)W32GetUserSessionState(v8, v7, v9);
  LOBYTE(v146) = Microsoft_Windows_Win32kEnableBits & 8;
  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    McTemplateK0qxq_EtwWriteTransfer(v11, (unsigned int)&StartPowerEventCalloutWorker, v12, v4, v5, 0, v146);
  if ( *(_DWORD *)(W32GetUserSessionState(v11, v10, v12) + 2728) )
  {
    InputTraceLogging::Power::PowerEvent(v4, v5);
    if ( (int)v4 > 8 )
    {
      if ( v4 != 9 )
      {
        switch ( v4 )
        {
          case 0xAu:
            if ( *(_BYTE *)W32GetUserGdiSessionState() )
            {
              LODWORD(v146) = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1400LL);
            }
            PowerDisplayBurst((enum POWER_MONITOR_REQUEST_REASON)v5);
            goto LABEL_141;
          case 0xBu:
            if ( !*(_DWORD *)(W32GetUserGdiSessionState() + 36)
              && !UserSessionState[689]
              && UserSessionState[722] == (_DWORD)v5
              && (!*(_BYTE *)W32GetUserGdiSessionState() || *(_DWORD *)(W32GetUserSessionState(v144, v143, v145) + 596)) )
            {
              if ( (_DWORD)v5 == 1 )
              {
                PowerUnDimMonitor();
              }
              else if ( (_DWORD)v5 == 2 )
              {
                PowerDimMonitor();
              }
            }
            goto LABEL_141;
          case 0xCu:
            goto LABEL_94;
          case 0xDu:
            if ( !*(_BYTE *)W32GetUserGdiSessionState() )
            {
              LODWORD(v146) = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1197LL);
            }
            if ( *(_DWORD *)(W32GetUserGdiSessionState() + 36) )
            {
              LODWORD(v146) = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1199LL);
            }
            PowerOnSession((unsigned int)v5);
            break;
          case 0xEu:
            if ( !*(_BYTE *)W32GetUserGdiSessionState() )
            {
              LODWORD(v146) = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1181LL);
            }
            if ( *(_DWORD *)(W32GetUserGdiSessionState() + 36) )
            {
              LODWORD(v146) = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1183LL);
            }
            PowerOffSession((enum POWER_MONITOR_REQUEST_REASON)v5, v77);
            break;
          case 0xFu:
            if ( !*(_BYTE *)W32GetUserGdiSessionState() )
            {
              LODWORD(v146) = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1231LL);
            }
            if ( *(_DWORD *)(W32GetUserGdiSessionState() + 36) || UserSessionState[689] )
              goto LABEL_141;
            if ( v5 == 1 )
            {
              *(_DWORD *)(W32GetUserSessionState(v74, v73, v75) + 596) = 1;
              PowerUnDimMonitor();
              v76 = PowerMonitorOn;
            }
            else
            {
              if ( v5 != 2 )
              {
                if ( v5 )
                {
                  LODWORD(v146) = 0x20000;
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1261LL);
                }
                *(_DWORD *)(W32GetUserSessionState(v74, v73, v75) + 596) = 0;
                goto LABEL_141;
              }
              *(_DWORD *)(W32GetUserSessionState(v74, v73, v75) + 596) = 1;
              PowerDimMonitor();
              v76 = PowerMonitorDim;
            }
            UpdateDisplayState(v76, MonitorRequestReasonMax|MonitorRequestReasonPowerButton, 1);
LABEL_141:
            EtwTraceStopPowerEventCalloutWorker(v4, v5, v6);
            CDisplayScenarioContextScope::~CDisplayScenarioContextScope((CDisplayScenarioContextScope *)v148);
            return v6;
          case 0x10u:
            goto LABEL_94;
          default:
            goto LABEL_70;
        }
        UserSessionSwitchBlock_End();
        goto LABEL_141;
      }
    }
    else if ( v4 != 8 )
    {
      switch ( v4 )
      {
        case 0u:
          if ( !*(_DWORD *)(W32GetUserSessionState(0, v15, v16) + 68604) )
          {
            LOBYTE(v61) = 1;
            if ( !(unsigned int)PowerResumeSuspendEvent(0, 0, v61) )
            {
              LOBYTE(v60) = 1;
              *(_QWORD *)((char *)&InputBuffer + 4) = 7LL;
              WORD6(InputBuffer) = 0;
              LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)((char *)&v146 + 4), v60, v61, v62);
              ZwPowerInformation(NotifyUserModeLegacyPowerEvent, &InputBuffer, 0x10u, 0LL, 0);
              LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)((char *)&v146 + 4), v63, v64);
            }
          }
          LOBYTE(v60) = 1;
          LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)((char *)&v146 + 4), v60, v61, v62);
          v65 = ZwPowerInformation(LastSleepTime, 0LL, 0, &OutputBuffer, 8u);
          LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)((char *)&v146 + 4), v66, v67);
          if ( v65 || *(_QWORD *)(W32GetUserSessionState(v69, v68, v70) + 63472) < OutputBuffer )
          {
            LOBYTE(v70) = 1;
            LOBYTE(v68) = 1;
            if ( !(unsigned int)PowerResumeSuspendEvent(0, v68, v70) )
            {
              *(_QWORD *)&v152[0] = 0x2000000000000010LL;
              if ( (int)IsxxxSendMessageBSMSupported() >= 0 )
                xxxSendMessageBSM(v71, 536, 7, v72, (__int64)v152);
            }
          }
          if ( (int)IsSetTimerCoalescingToleranceSupported() < 0 )
            goto LABEL_141;
          v20 = 0LL;
          goto LABEL_24;
        case 1u:
          v6 = PostWinlogonMessage(256LL, v5);
          if ( !v6 )
            PostPlaySoundMessage(v5);
          goto LABEL_141;
        case 2u:
          if ( !*(_DWORD *)(W32GetUserSessionState(0, v15, v16) + 68604) )
          {
            LOBYTE(v55) = 1;
            *(_QWORD *)((char *)&InputBuffer + 4) = 10LL;
            WORD6(InputBuffer) = 0;
            LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)((char *)&v146 + 4), v55, v56, v57);
            ZwPowerInformation(NotifyUserModeLegacyPowerEvent, &InputBuffer, 0x10u, 0LL, 0);
            LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)((char *)&v146 + 4), v58, v59);
          }
          *(_QWORD *)&v152[0] = 0x1000000010LL;
          if ( (int)IsxxxSendMessageBSMSupported() < 0 )
            goto LABEL_141;
          v53 = 10;
          v54 = 536;
          break;
        case 3u:
          *(_QWORD *)&v152[0] = 0x1000000010LL;
          if ( (int)IsxxxSendMessageBSMSupported() < 0 )
            goto LABEL_141;
          v53 = 0;
          v54 = 30;
          break;
        case 4u:
LABEL_94:
          if ( *(_BYTE *)W32GetUserGdiSessionState() )
          {
            LODWORD(v146) = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1015LL);
          }
          if ( v4 == 16 )
          {
            v81 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
            v82 = W32GetUserSessionState(0, v81, v80);
            CInputGlobals::UpdateLastInputTime(*(struct W32_PUSH_LOCK **)(v82 + 3056), v81, 5u);
            CitLastInputUpdate(5, v81, 0LL, 0);
            if ( UserSessionState[722] )
              UpdateAdaptiveSessionState();
          }
          v83 = W32GetUserSessionState(v79, v78, v80);
          ExEnterCriticalRegionAndAcquireFastMutexUnsafe(*(_QWORD *)(v83 + 512));
          v87 = W32GetUserSessionState(v85, v84, v86);
          DisarmPowerWatchdog(*(_QWORD *)(v87 + 544));
          v91 = W32GetUserSessionState(v89, v88, v90);
          ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(*(_QWORD *)(v91 + 512));
          if ( v4 == 12 )
            UserSessionSwitchBlock_End();
          if ( !*(_DWORD *)(W32GetUserGdiSessionState() + 36) && !UserSessionState[689] )
          {
            v95 = *(_WORD *)(W32GetUserSessionState(v93, v92, v94) + 68744) == 0;
            v147[1] = v5;
            LOBYTE(v147[0]) = v95;
            if ( UserSessionState[693] && v95 && (_DWORD)v5 != 22 )
            {
              if ( (_DWORD)v5 != 1 || !ShouldEscapeProximity() )
              {
                v6 = 0;
                goto LABEL_125;
              }
              UserSessionState[693] = 0;
            }
            v99 = W32GetUserSessionState(v97, v96, v98);
            ArmPowerWatchdog(*(_QWORD *)(v99 + 552), 32LL);
            v100 = ZwPowerInformation((POWER_INFORMATION_LEVEL)68, v147, 8u, 0LL, 0);
            *(_DWORD *)(W32GetUserSessionState(v102, v101, v103) + 564) = v100;
            v107 = W32GetUserSessionState(v105, v104, v106);
            DisarmPowerWatchdog(*(_QWORD *)(v107 + 552));
            if ( *(_DWORD *)(W32GetUserSessionState(v109, v108, v110) + 564)
              && *(_DWORD *)(W32GetUserSessionState(v112, v111, v113) + 564) != 259
              && *(_DWORD *)(W32GetUserSessionState(v112, v111, v113) + 564) != -1073741823 )
            {
              LODWORD(v146) = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1121LL);
            }
            if ( *(_DWORD *)(W32GetUserSessionState(v112, v111, v113) + 564) == 259 )
            {
              if ( !*(_BYTE *)(W32GetUserSessionState(v115, v114, v116) + 568) )
              {
                *(_BYTE *)(W32GetUserSessionState(v97, v96, v98) + 568) = 1;
                *(POWER_MONITOR_REQUEST_REASON *)(W32GetUserSessionState(v118, v117, v119) + 572) = v147[1];
                UserSessionSwitchBlock_Start();
              }
              goto LABEL_125;
            }
            if ( *(_DWORD *)(W32GetUserSessionState(v115, v114, v116) + 564) == -1073741823 )
            {
LABEL_125:
              v130 = W32GetUserSessionState(v97, v96, v98);
              ExEnterCriticalRegionAndAcquireFastMutexUnsafe(*(_QWORD *)(v130 + 512));
              v134 = W32GetUserSessionState(v132, v131, v133);
              --*(_DWORD *)(v134 + 560);
              if ( *(_DWORD *)(W32GetUserSessionState(v136, v135, v137) + 560) )
              {
                v141 = W32GetUserSessionState(v139, v138, v140);
                ArmPowerWatchdog(*(_QWORD *)(v141 + 544), 16LL);
              }
              v142 = W32GetUserSessionState(v139, v138, v140);
              ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(*(_QWORD *)(v142 + 512));
              goto LABEL_141;
            }
            v120 = 0;
            if ( !*(_DWORD *)(W32GetUserGdiSessionState() + 28) && (int)IsPowerOnGdiSupported(v121) >= 0 )
            {
              v125 = W32GetUserSessionState(v123, v122, v124);
              ArmPowerWatchdog(*(_QWORD *)(v125 + 552), 48LL);
              PowerOnGdi((__int64)v3, 0, 0);
              v129 = W32GetUserSessionState(v127, v126, v128);
              DisarmPowerWatchdog(*(_QWORD *)(v129 + 552));
              v120 = 1;
            }
            PowerOnMonitor(v147[1]);
            if ( v120 )
              ProcessDelayedSdc(v3);
          }
          if ( (int)IsSetTimerCoalescingToleranceSupported() >= 0 )
            SetTimerCoalescingTolerance(0LL);
          goto LABEL_125;
        case 5u:
          if ( *(_BYTE *)W32GetUserGdiSessionState() )
          {
            LODWORD(v146) = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 985LL);
          }
          if ( *(_DWORD *)(W32GetUserGdiSessionState() + 36) )
            goto LABEL_141;
          v147[1] = v5;
          PowerOffMonitor((enum POWER_MONITOR_REQUEST_REASON)v5);
          if ( (int)IsSetTimerCoalescingToleranceSupported() < 0 || v147[1] == MonitorRequestReasonGracePeriod )
            goto LABEL_141;
          v20 = 2LL;
LABEL_24:
          SetTimerCoalescingTolerance(v20);
          goto LABEL_141;
        case 6u:
          v21 = W32GetUserSessionState(0, v15, v16);
          if ( (unsigned __int8)CInputGlobals::UpdateGlobalTickCount(*(_QWORD *)(v21 + 3056), 2LL) )
          {
            v25 = W32GetUserSessionState(v23, v22, v24);
            EtwTraceIdleActionExpiration(1LL, *(unsigned int *)(v25 + 62808));
          }
          if ( UserSessionState[687]
            || (v27 = *(_DWORD **)(W32GetUserSessionState(v23, v22, v24) + 19904), (*v27 & 0x200) != 0)
            && (v29 = *(_QWORD *)(W32GetUserSessionState((_DWORD)v27, v26, v28) + 3056),
                v33 = *(CInputGlobals **)(W32GetUserSessionState(v31, v30, v32) + 3056),
                GlobalTickCount = CInputGlobals::GetGlobalTickCount(v29, 1),
                GlobalTickCount != CInputGlobals::GetLastInputTime(v33)) )
          {
            if ( !(unsigned int)PowerIsDisplayRequired() || *(_DWORD *)(W32GetUserSessionState(v36, v35, v37) + 19112) )
            {
              if ( *(_QWORD *)(W32GetUserSessionState(v36, v35, v37) + 62816) )
              {
                v42 = *(_QWORD *)(W32GetUserSessionState(v39, v38, v40) + 62816);
                if ( (*(_DWORD *)(v42 + 12) & 0x400000) == 0 )
                {
                  v44 = *(_QWORD *)(W32GetUserSessionState(v42, v41, v43) + 62816);
                  *(_DWORD *)(v44 + 12) |= 0x400000u;
                  v48 = *(_QWORD *)(W32GetUserSessionState(v44, v45, v46) + 62816);
                  if ( *(_QWORD *)(v48 + 336) )
                  {
                    v50 = W32GetUserSessionState(v48, v47, v49);
                    ForegroundBoost::SetForegroundPriority(*(_QWORD *)(*(_QWORD *)(v50 + 62816) + 336LL), 1u, 8u);
                  }
                }
              }
              else
              {
                ApiSetPsW32ScreenSaver_Show();
              }
            }
          }
          goto LABEL_141;
        case 7u:
          if ( *(_DWORD *)(W32GetUserGdiSessionState() + 36) || UserSessionState[689] || !UserSessionState[687] )
            goto LABEL_141;
          PowerDimMonitor();
          if ( !*(_WORD *)(W32GetUserSessionState(v18, v17, v19) + 68744) )
            UpdateDisplayState(PowerMonitorDim, MonitorRequestReasonMax, 1);
          if ( (int)IsSetTimerCoalescingToleranceSupported() < 0 )
            goto LABEL_141;
          v20 = 1LL;
          goto LABEL_24;
        default:
LABEL_70:
          v6 = -1073741822;
          goto LABEL_141;
      }
      xxxSendMessageBSM(v51, v54, v53, v52, (__int64)v152);
      goto LABEL_141;
    }
    UpdateAdaptiveSessionState();
    goto LABEL_141;
  }
  EtwTraceStopPowerEventCalloutWorker(v4, v5, 3221225473LL);
  if ( v148[0] )
    DisplayScenarioContextDissociate(&v149);
  return 3221225473LL;
}
