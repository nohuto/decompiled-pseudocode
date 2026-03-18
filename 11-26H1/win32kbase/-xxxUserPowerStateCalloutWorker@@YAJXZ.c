/*
 * XREFs of ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1401132A0
 * Callers:
 *     xxxUserPowerCalloutWorker @ 0x1401120B0 (xxxUserPowerCalloutWorker.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z @ 0x1400D00A0 (-UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z.c)
 *     PowerResumeSuspendEvent @ 0x1400E9090 (PowerResumeSuspendEvent.c)
 *     RIMSetSystemInputMode @ 0x1400E9970 (RIMSetSystemInputMode.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1400EA650 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1400EAAF4 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     PowerOnGdi @ 0x1400EB39C (PowerOnGdi.c)
 *     IsPowerOnGdiSupported @ 0x1400EB3F4 (IsPowerOnGdiSupported.c)
 *     ?AddPowerStateLogEntry@@YAXW4_POWER_STATE_LOG_ENTRY_TYPE@@K@Z @ 0x140111C50 (-AddPowerStateLogEntry@@YAXW4_POWER_STATE_LOG_ENTRY_TYPE@@K@Z.c)
 *     McTemplateK0dq_EtwWriteTransfer @ 0x14012B4B0 (McTemplateK0dq_EtwWriteTransfer.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x14013DAF4 (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     IsCurrentSessionHostServiceSession @ 0x140142338 (IsCurrentSessionHostServiceSession.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x14014B830 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     IsCurrentSessionServiceSession @ 0x140165ED8 (IsCurrentSessionServiceSession.c)
 *     xxxSendMessageBSM @ 0x14017AE70 (xxxSendMessageBSM.c)
 *     IsxxxSendMessageBSMSupported @ 0x14017EBA8 (IsxxxSendMessageBSMSupported.c)
 *     EtwTraceWinlogonSleepStartEvent @ 0x14018D720 (EtwTraceWinlogonSleepStartEvent.c)
 *     DrvStopPresenterView @ 0x14018FDDC (DrvStopPresenterView.c)
 *     EtwTraceWinlogonSleepEndEvent @ 0x140192280 (EtwTraceWinlogonSleepEndEvent.c)
 *     IsPowerOffGdiSupported @ 0x140193FAC (IsPowerOffGdiSupported.c)
 *     PowerOffGdi @ 0x1401A4DCC (PowerOffGdi.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     IoControl @ 0x1401C4530 (IoControl.c)
 *     xxxUserSetDisplayConfig @ 0x1401D2DF0 (xxxUserSetDisplayConfig.c)
 *     PowerOffMonitor @ 0x1401D62C0 (PowerOffMonitor.c)
 *     PowerOnMonitor @ 0x1401D6660 (PowerOnMonitor.c)
 *     xxxSendWinlogonPowerMessage @ 0x1401D9BF0 (xxxSendWinlogonPowerMessage.c)
 *     ProcessDelayedSdc @ 0x140249448 (ProcessDelayedSdc.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall xxxUserPowerStateCalloutWorker(int a1, int a2, int a3)
{
  __int64 UserSessionState; // rbx
  unsigned int v4; // r9d
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r12
  int v8; // edi
  __int64 (*v9)(void); // rax
  int v10; // r8d
  __int64 v11; // rcx
  int v12; // r15d
  int v13; // edx
  __int64 (*v14)(void); // rax
  int v15; // eax
  int v16; // ecx
  int v17; // edx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // ecx
  int (*v21)(void); // rax
  __int64 v22; // rcx
  void (*v23)(void); // rax
  __int64 v24; // r9
  __int64 v25; // rdx
  NTSTATUS v26; // eax
  int v27; // edx
  int v28; // r8d
  __int64 v30; // rax
  int v31; // edx
  int v32; // ecx
  int v33; // r8d
  __int64 v34; // rcx
  int v35; // r8d
  __int64 v36; // rcx
  int v37; // eax
  int v38; // r8d
  __int64 v39; // rax
  int v40; // edx
  int v41; // ecx
  int v42; // r8d
  int v43; // edx
  int v44; // ecx
  int v45; // r8d
  int v46; // edx
  int v47; // ecx
  int v48; // r8d
  unsigned int v49; // ebx
  int v50; // edx
  int v51; // ecx
  int v52; // r8d
  int v53; // edx
  int v54; // ecx
  int v55; // r8d
  __int64 v56; // rax
  int v57; // edx
  int v58; // ecx
  int v59; // r8d
  int v60; // edx
  int v61; // ecx
  int v62; // r8d
  int v63; // edx
  int v64; // ecx
  int v65; // r8d
  __int64 v66; // rax
  int v67; // edx
  int v68; // ecx
  int v69; // r9d
  int v70; // r8d
  __int64 v71; // rax
  __int64 v72; // rcx
  int v73; // edx
  int v74; // ecx
  int v75; // r8d
  __int64 v76; // rcx
  int v77; // eax
  int v78; // r8d
  int v79; // edx
  int v80; // ecx
  int v81; // r8d
  int v82; // r9d
  int v83; // r8d
  __int64 v84; // rcx
  int v85; // eax
  int v86; // r8d
  __int64 v87; // rax
  __int64 v88; // rax
  int v89; // eax
  int v90; // edx
  int v91; // ecx
  int v92; // r8d
  __int64 v93; // rax
  int v94; // edx
  int v95; // ecx
  int v96; // r8d
  __int64 v97; // rax
  __int64 v98; // rax
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // rcx
  int v102; // edx
  int v103; // r8d
  __int64 v104; // rax
  int v105; // r9d
  bool v106; // zf
  int v107; // edx
  int v108; // ecx
  int v109; // r8d
  int v110; // r9d
  int v111; // r8d
  __int64 v112; // rcx
  int v113; // eax
  int v114; // r8d
  __int64 v115; // rcx
  int v116; // edi
  int v117; // ecx
  signed __int32 v118[8]; // [rsp+8h] [rbp-100h] BYREF
  __int64 OutputBufferLength; // [rsp+28h] [rbp-E0h]
  __int64 v120; // [rsp+30h] [rbp-D8h]
  __int64 v121; // [rsp+48h] [rbp-C0h]
  __int64 v122; // [rsp+50h] [rbp-B8h]
  __int64 v123; // [rsp+58h] [rbp-B0h]
  int v124; // [rsp+68h] [rbp-A0h]
  _BYTE v125[4]; // [rsp+6Ch] [rbp-9Ch] BYREF
  int SystemInformation; // [rsp+70h] [rbp-98h]
  __int128 SystemInformation_8; // [rsp+78h] [rbp-90h] BYREF
  __int128 v128; // [rsp+88h] [rbp-80h]
  _DWORD v129[2]; // [rsp+98h] [rbp-70h] BYREF
  __int64 v130; // [rsp+A0h] [rbp-68h]
  _BYTE v131[8]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v132; // [rsp+B0h] [rbp-58h]
  __int128 InputBuffer; // [rsp+B8h] [rbp-50h] BYREF
  _OWORD v134[2]; // [rsp+C8h] [rbp-40h] BYREF
  _OWORD v135[2]; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v136; // [rsp+108h] [rbp+0h]

  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  v4 = *(_DWORD *)(UserSessionState + 3032);
  v131[0] = 0;
  CDisplayScenarioContextScope::ContextScopeConstructor((CDisplayScenarioContextScope *)v131, 0LL, 0x11u, v4);
  v7 = v132;
  v136 = 0LL;
  memset(v135, 0, sizeof(v135));
  InputBuffer = 0LL;
  v8 = *(_DWORD *)(UserSessionState + 3032);
  *(_DWORD *)(UserSessionState + 3032) = 15;
  SystemInformation = v8;
  LOBYTE(v124) = Microsoft_Windows_Win32kEnableBits & 8;
  SystemInformation_8 = 0LL;
  v128 = 0LL;
  memset(v134, 0, sizeof(v134));
  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    McTemplateK0dq_EtwWriteTransfer(v5, &StartPowerStateCalloutWorker, v6, (unsigned int)v8, 0);
  v9 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v5) + 48) + 1992LL);
  if ( !v9 )
  {
    v12 = -1073741637;
    v13 = -1073741637;
    goto LABEL_110;
  }
  v12 = v9();
  v13 = v12;
  if ( v12 < 0 )
  {
LABEL_110:
    v117 = 5;
    goto LABEL_108;
  }
  v14 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v11) + 48) + 2000LL);
  if ( !v14 )
  {
    v12 = -1073741637;
    v13 = -1073741637;
    goto LABEL_107;
  }
  v15 = v14();
  v12 = v15;
  v13 = v15;
  if ( v15 < 0 )
  {
LABEL_107:
    v117 = 6;
LABEL_108:
    AddPowerStateLogEntry(v117, v13, v10);
    goto LABEL_26;
  }
  if ( !*(_DWORD *)(W32GetUserSessionState(v16, v15, v10) + 2728) )
  {
    v12 = -2143420409;
    goto LABEL_26;
  }
  if ( v8 > 10 )
  {
    if ( v8 == 11 )
    {
      if ( *(_BYTE *)W32GetUserGdiSessionState(0LL) )
      {
        v124 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3914LL);
      }
      v116 = 0;
      if ( (int)IsPowerOnGdiSupported(v115) >= 0 )
      {
        PowerOnGdi(v7, 0, 2u);
        v116 = 1;
      }
      if ( (*(_DWORD *)(UserSessionState + 2960) & 0x20) != 0 )
        PowerOnMonitor(MonitorRequestReasonDP);
      if ( v116 )
        ProcessDelayedSdc(v7);
      goto LABEL_25;
    }
    if ( v8 == 12 )
    {
      if ( *(_BYTE *)W32GetUserGdiSessionState((unsigned int)(v8 - 12)) )
      {
        v124 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3459LL);
      }
      PowerOffMonitor(MonitorRequestReasonSxTransition);
      goto LABEL_26;
    }
    v18 = (unsigned int)(v8 - 13);
    if ( v8 != 13 )
    {
      if ( v8 != 14 || (int)IsxxxSendMessageBSMSupported() < 0 )
        goto LABEL_26;
      v106 = *(_DWORD *)(UserSessionState + 3020) == 5;
      *(_DWORD *)(UserSessionState + 2976) = 16;
      OutputBufferLength = UserSessionState + 2976;
      if ( v106 )
      {
        *(_DWORD *)(UserSessionState + 2980) = 536870952;
        if ( (unsigned int)xxxSendMessageBSM(v18, 536, 4, v105, OutputBufferLength) )
          goto LABEL_25;
        v107 = 4;
      }
      else
      {
        *(_DWORD *)(UserSessionState + 2980) = 0x20000000;
        if ( !(unsigned int)xxxSendMessageBSM(v18, 536, 18, v105, OutputBufferLength) )
          AddPowerStateLogEntry(7, 18, v109);
        if ( (unsigned int)xxxSendMessageBSM(v108, 536, 7, v110, UserSessionState + 2976) )
          goto LABEL_25;
        v107 = 7;
      }
      AddPowerStateLogEntry(7, v107, v19);
      goto LABEL_25;
    }
    if ( *(_BYTE *)W32GetUserGdiSessionState(v18) )
    {
      v124 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3478LL);
    }
    if ( (unsigned int)IsCurrentSessionServiceSession() )
      goto LABEL_26;
    EtwTraceWinlogonSleepStartEvent(1LL);
    AddPowerStateLogEntry(3, 263, v111);
    LOBYTE(v112) = 1;
    v113 = xxxSendWinlogonPowerMessage(v112, 263LL, UserSessionState + 3016);
    AddPowerStateLogEntry(4, v113, v114);
    EtwTraceWinlogonSleepStartEvent(0LL);
LABEL_25:
    v8 = SystemInformation;
    goto LABEL_26;
  }
  switch ( v8 )
  {
    case 10:
      if ( *(_BYTE *)W32GetUserGdiSessionState(v18) )
      {
        v124 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3894LL);
      }
      *(_DWORD *)(UserSessionState + 2960) = *(_DWORD *)(UserSessionState + 2960) & 0xFFFFFFDF | (*(_DWORD *)(UserSessionState + 2748) != 0
                                                                                                ? 0x20
                                                                                                : 0);
      PowerOffMonitor(MonitorRequestReasonDP);
      if ( (int)IsPowerOffGdiSupported() >= 0 )
        PowerOffGdi(v7);
      goto LABEL_26;
    case 1:
      v98 = W32GetUserSessionState(0, v17, v19);
      ExEnterCriticalRegionAndAcquireFastMutexUnsafe(*(_QWORD *)(v98 + 512));
      v101 = *((_QWORD *)PtiCurrent(v100, v99) + 95);
      *(_QWORD *)(UserSessionState + 2968) = v101;
      v104 = W32GetUserSessionState(v101, v102, v103);
      ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(*(_QWORD *)(v104 + 512));
      goto LABEL_26;
    case 2:
      *(_DWORD *)(UserSessionState + 2756) = 1;
      _InterlockedOr(v118, 0);
      if ( !*(_BYTE *)(W32GetUserSessionState(0, v17, v19) + 528) )
        RIMSetSystemInputMode(2u);
      if ( !*(_BYTE *)W32GetUserGdiSessionState(v72) )
        PowerOffMonitor(*(enum POWER_MONITOR_REQUEST_REASON *)(UserSessionState + 3036));
      *(_DWORD *)(UserSessionState + 2788) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      if ( !(unsigned int)IsCurrentSessionServiceSession() )
      {
        EtwTraceWinlogonSleepStartEvent(1LL);
        AddPowerStateLogEntry(3, 1, v75);
        LOBYTE(v76) = 1;
        v77 = xxxSendWinlogonPowerMessage(v76, 262LL, UserSessionState + 3016);
        AddPowerStateLogEntry(4, v77, v78);
        EtwTraceWinlogonSleepStartEvent(0LL);
      }
      LOBYTE(v73) = 1;
      LOBYTE(v74) = 1;
      if ( !(unsigned int)PowerResumeSuspendEvent(v74, v73, 0) && (int)IsxxxSendMessageBSMSupported() >= 0 )
      {
        *(_DWORD *)(UserSessionState + 2980) = 536870952;
        *(_DWORD *)(UserSessionState + 2976) = 16;
        if ( !(unsigned int)xxxSendMessageBSM(v80, 536, 4, v82, UserSessionState + 2976) )
          AddPowerStateLogEntry(7, 4, v81);
      }
      if ( *(_DWORD *)(UserSessionState + 3020) == 5 && !*(_WORD *)(W32GetUserSessionState(v80, v79, v81) + 68744) )
      {
        if ( (*(_DWORD *)(UserSessionState + 3024) & 8) != 0 )
        {
          if ( (unsigned __int8)DrvStopPresenterView() )
          {
            if ( *(_QWORD *)(W32GetUserSessionState(v80, v79, v81) + 19176) )
            {
              v87 = W32GetUserSessionState(v80, v79, v81);
              v123 = 0LL;
              v122 = v7;
              v121 = 0LL;
              v88 = *(_QWORD *)(v87 + 19176);
              LOBYTE(v120) = 0;
              v89 = xxxUserSetDisplayConfig(0LL, 0LL, 2191LL, 0LL, v88, v120, 0LL, 0LL, 0LL, v7, 0LL);
              if ( v89 < 0 )
                AddPowerStateLogEntry(9, v89, v81);
            }
          }
        }
        else
        {
          EtwTraceWinlogonSleepEndEvent(1LL);
          AddPowerStateLogEntry(3, 259, v83);
          LOBYTE(v84) = 1;
          v85 = xxxSendWinlogonPowerMessage(v84, 259LL, UserSessionState + 3016);
          AddPowerStateLogEntry(4, v85, v86);
          EtwTraceWinlogonSleepEndEvent(0LL);
        }
      }
      if ( !*(_WORD *)(W32GetUserSessionState(v80, v79, v81) + 68744) && (int)IsPowerOffGdiSupported() >= 0 )
        PowerOffGdi(v7);
      v93 = W32GetUserSessionState(v91, v90, v92);
      ExEnterCriticalRegionAndAcquireFastMutexUnsafe(*(_QWORD *)(v93 + 512));
      *(_QWORD *)(UserSessionState + 2968) = 0LL;
      v97 = W32GetUserSessionState(v95, v94, v96);
      ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(*(_QWORD *)(v97 + 512));
      goto LABEL_25;
  }
  v20 = v8 - 3;
  if ( v8 == 3 )
  {
    if ( *(_DWORD *)(UserSessionState + 3020) == 5 )
      LODWORD(InputBuffer) = 3;
    else
      LODWORD(InputBuffer) = *(_DWORD *)(UserSessionState + 3016);
    LOBYTE(v20) = 1;
    if ( !(unsigned int)PowerResumeSuspendEvent(v20, 0, 0) )
    {
      *(_QWORD *)((char *)&InputBuffer + 4) = 4LL;
      LOBYTE(v25) = 1;
      WORD6(InputBuffer) = 256;
      goto LABEL_22;
    }
    goto LABEL_25;
  }
  v18 = (unsigned int)(v8 - 5);
  if ( v8 == 5 )
  {
    v30 = W32GetUserSessionState(0, v17, v19);
    CInputGlobals::UpdateLastInputTime(
      *(struct W32_PUSH_LOCK **)(v30 + 3056),
      (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
      6u);
    if ( !*(_BYTE *)(W32GetUserSessionState(v32, v31, v33) + 528) )
      RIMSetSystemInputMode(0);
    v124 = *(_DWORD *)(UserSessionState + 3020);
    if ( !(unsigned int)IsCurrentSessionHostServiceSession() )
    {
      if ( v124 == 5 )
      {
        LODWORD(v134[1]) &= ~1u;
        *(_QWORD *)&v128 = v134;
        *(_QWORD *)&SystemInformation_8 = 0x6B7568430000002DLL;
        DWORD2(SystemInformation_8) = 10;
        DWORD2(v128) = 32;
        *(_QWORD *)&v134[0] = 0x100000004LL;
        DWORD2(v134[0]) = 4;
        ZwSetSystemInformation(SystemSuperfetchInformation, &SystemInformation_8, 0x20uLL);
      }
      EtwTraceWinlogonSleepEndEvent(1LL);
      AddPowerStateLogEntry(3, 262, v35);
      v129[1] = 1;
      v130 = 0LL;
      v129[0] = 0;
      LOBYTE(v36) = 1;
      v37 = xxxSendWinlogonPowerMessage(v36, 262LL, v129);
      AddPowerStateLogEntry(4, v37, v38);
      EtwTraceWinlogonSleepEndEvent(0LL);
      if ( v124 == 5 )
      {
        v39 = v128;
        *(_DWORD *)(v128 + 16) |= 1u;
        *(_DWORD *)(v39 + 8) = 4;
        ZwSetSystemInformation(SystemSuperfetchInformation, &SystemInformation_8, 0x20uLL);
      }
    }
    if ( (int)IsPowerOnGdiSupported(v34) >= 0 )
      PowerOnGdi(v7, 1u, 5u);
    *(_DWORD *)(UserSessionState + 2756) = 0;
    _InterlockedOr(v118, 0);
    if ( *(_DWORD *)(W32GetUserSessionState(v41, v40, v42) + 2692) )
    {
      *(_DWORD *)(W32GetUserSessionState(v44, v43, v45) + 2700) = 1;
      v49 = *(_DWORD *)(W32GetUserSessionState(v47, v46, v48) + 2696);
      *(_DWORD *)(W32GetUserSessionState(v51, v50, v52) + 2704) = v49;
      v56 = W32GetUserSessionState(v54, v53, v55);
      ExEnterCriticalRegionAndAcquireFastMutexUnsafe(*(_QWORD *)(v56 + 512));
      *(_DWORD *)(W32GetUserSessionState(v58, v57, v59) + 2692) = 0;
      *(_DWORD *)(W32GetUserSessionState(v61, v60, v62) + 2696) = 0;
      v66 = W32GetUserSessionState(v64, v63, v65);
      ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(*(_QWORD *)(v66 + 512));
      PoSetUserPresent(v49);
    }
    else
    {
      *(_DWORD *)(UserSessionState + 2760) = 1;
    }
    *((_QWORD *)&SystemInformation_8 + 1) = 10LL;
    memset((char *)v134 + 12, 0, 20);
    *(_QWORD *)&v128 = v134;
    *((_QWORD *)&v128 + 1) = 32LL;
    *(_QWORD *)&SystemInformation_8 = 0x6B7568430000002DLL;
    LODWORD(v134[1]) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 4)) & 0xFFFFFFFE;
    *(_QWORD *)&v134[0] = 0x100000004LL;
    DWORD2(v134[0]) = 6;
    ZwSetSystemInformation(SystemSuperfetchInformation, &SystemInformation_8, 0x20uLL);
    LOBYTE(v67) = 1;
    if ( !(unsigned int)PowerResumeSuspendEvent(0, v67, 0) && (int)IsxxxSendMessageBSMSupported() >= 0 )
    {
      *(_QWORD *)&v135[0] = 0x2000000000000010LL;
      if ( !(unsigned int)xxxSendMessageBSM(v68, 536, 18, v69, (__int64)v135) )
        AddPowerStateLogEntry(7, 18, v70);
    }
    IoControl(2LL);
    v71 = v128;
    *(_DWORD *)(v128 + 16) |= 1u;
    *(_DWORD *)(v71 + 8) = 6;
    ZwSetSystemInformation(SystemSuperfetchInformation, &SystemInformation_8, 0x20uLL);
    goto LABEL_25;
  }
  if ( v8 == 6 )
  {
    v21 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v18) + 48) + 1848LL);
    if ( v21 )
    {
      if ( v21() >= 0 )
      {
        v23 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v22) + 48) + 1856LL);
        if ( v23 )
          v23();
      }
    }
    if ( !(unsigned int)PowerResumeSuspendEvent(0, 0, 0) )
    {
      *(_QWORD *)((char *)&InputBuffer + 4) = 18LL;
      v25 = 1LL;
      WORD6(InputBuffer) = 1;
LABEL_22:
      LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v125, v25, v19, v24);
      v26 = ZwPowerInformation(NotifyUserModeLegacyPowerEvent, &InputBuffer, 0x10u, 0LL, 0);
      if ( v26 < 0 )
        AddPowerStateLogEntry(8, v26, v28);
      LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v125, v27, v28);
      goto LABEL_25;
    }
  }
LABEL_26:
  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    McTemplateK0dq_EtwWriteTransfer(v18, &StopPowerStateCalloutWorker, v19, (unsigned int)v8, v12);
  CDisplayScenarioContextScope::~CDisplayScenarioContextScope((CDisplayScenarioContextScope *)v131);
  return (unsigned int)v12;
}
