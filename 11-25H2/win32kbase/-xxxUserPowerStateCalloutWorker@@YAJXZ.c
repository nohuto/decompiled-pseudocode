/*
 * XREFs of ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1400EA660
 * Callers:
 *     xxxUserPowerCalloutWorker @ 0x1400E9120 (xxxUserPowerCalloutWorker.c)
 * Callees:
 *     PowerOnMonitor @ 0x14007FA80 (PowerOnMonitor.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140081F58 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     IsCurrentSessionServiceSession @ 0x140083918 (IsCurrentSessionServiceSession.c)
 *     ?UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z @ 0x14009B1F0 (-UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     McTemplateK0dq_EtwWriteTransfer @ 0x1400E0DF0 (McTemplateK0dq_EtwWriteTransfer.c)
 *     PowerOffMonitor @ 0x1400E1480 (PowerOffMonitor.c)
 *     EnterPowerCrit @ 0x1400E95D0 (EnterPowerCrit.c)
 *     LeavePowerCrit @ 0x1400E9600 (LeavePowerCrit.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x1400F7E74 (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     IsCurrentSessionHostServiceSession @ 0x1401014D8 (IsCurrentSessionHostServiceSession.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x14010EDF8 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     RIMSetSystemInputMode @ 0x14011F8FC (RIMSetSystemInputMode.c)
 *     ?AddPowerStateLogEntry@@YAXW4_POWER_STATE_LOG_ENTRY_TYPE@@K@Z @ 0x14012EA64 (-AddPowerStateLogEntry@@YAXW4_POWER_STATE_LOG_ENTRY_TYPE@@K@Z.c)
 *     xxxSendMessageBSM @ 0x140143D90 (xxxSendMessageBSM.c)
 *     IsxxxSendMessageBSMSupported @ 0x1401473F8 (IsxxxSendMessageBSMSupported.c)
 *     EtwTraceWinlogonSleepStartEvent @ 0x140150FD0 (EtwTraceWinlogonSleepStartEvent.c)
 *     DrvStopPresenterView @ 0x14015329C (DrvStopPresenterView.c)
 *     IsPowerOffGdiSupported @ 0x140156BF8 (IsPowerOffGdiSupported.c)
 *     EtwTraceWinlogonSleepEndEvent @ 0x140159730 (EtwTraceWinlogonSleepEndEvent.c)
 *     PowerOnGdi @ 0x1401598FC (PowerOnGdi.c)
 *     IsPowerOnGdiSupported @ 0x14015BA24 (IsPowerOnGdiSupported.c)
 *     PowerOffGdi @ 0x140160250 (PowerOffGdi.c)
 *     xxxUserSetDisplayConfig @ 0x1401683C0 (xxxUserSetDisplayConfig.c)
 *     xxxSendWinlogonPowerMessage @ 0x14016C260 (xxxSendWinlogonPowerMessage.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1401A6050 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     Feature_KeyboardLEDImprovements__private_IsEnabledDeviceUsageNoInline @ 0x1401B0DA4 (Feature_KeyboardLEDImprovements__private_IsEnabledDeviceUsageNoInline.c)
 *     PowerResumeSuspendEvent @ 0x1401B0E50 (PowerResumeSuspendEvent.c)
 *     IoControl @ 0x140216750 (IoControl.c)
 *     ProcessDelayedSdc @ 0x14023F218 (ProcessDelayedSdc.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall xxxUserPowerStateCalloutWorker(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v3; // rdi
  unsigned int v4; // r9d
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r13
  int v9; // esi
  __int64 (*v10)(void); // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // ebx
  __int64 (*v14)(void); // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // r15d
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rcx
  int (*v22)(void); // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  void (*v25)(void); // rax
  NTSTATUS v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // rcx
  unsigned int v34; // eax
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  unsigned int v42; // ebx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rdx
  int v54; // ecx
  int v55; // r9d
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rax
  NTSTATUS v60; // eax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rcx
  unsigned int v66; // eax
  __int64 v67; // rdx
  __int64 v68; // rcx
  int v69; // r9d
  __int64 v70; // rcx
  unsigned int v71; // eax
  __int64 v72; // rax
  __int64 v73; // rcx
  int v74; // eax
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // rcx
  __int64 v80; // rdx
  int v81; // r9d
  bool v82; // zf
  __int64 v83; // rdx
  int v84; // ecx
  int v85; // r9d
  __int64 v86; // rcx
  unsigned int v87; // eax
  int v88; // esi
  __int64 v89; // rcx
  signed __int32 v91[8]; // [rsp+8h] [rbp-100h] BYREF
  __int64 OutputBufferLength; // [rsp+28h] [rbp-E0h]
  __int64 v93; // [rsp+30h] [rbp-D8h]
  __int64 v94; // [rsp+48h] [rbp-C0h]
  __int64 v95; // [rsp+50h] [rbp-B8h]
  __int64 v96; // [rsp+58h] [rbp-B0h]
  _BYTE SystemInformation[4]; // [rsp+68h] [rbp-A0h] BYREF
  int SystemInformation_4; // [rsp+6Ch] [rbp-9Ch]
  __int128 SystemInformation_8; // [rsp+70h] [rbp-98h] BYREF
  __int128 v100; // [rsp+80h] [rbp-88h]
  int v101; // [rsp+90h] [rbp-78h]
  _DWORD v102[2]; // [rsp+98h] [rbp-70h] BYREF
  __int64 v103; // [rsp+A0h] [rbp-68h]
  _BYTE v104[8]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v105; // [rsp+B0h] [rbp-58h]
  __int128 InputBuffer; // [rsp+B8h] [rbp-50h] BYREF
  _OWORD v107[2]; // [rsp+C8h] [rbp-40h] BYREF
  _OWORD v108[2]; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v109; // [rsp+108h] [rbp+0h]

  UserSessionState = W32GetUserSessionState(a1, a2);
  v3 = UserSessionState + 368;
  v4 = *(_DWORD *)(UserSessionState + 3032);
  v104[0] = 0;
  CDisplayScenarioContextScope::ContextScopeConstructor((CDisplayScenarioContextScope *)v104, 0LL, 0x11u, v4);
  v8 = v105;
  v103 = 0LL;
  memset(v108, 0, sizeof(v108));
  v109 = 0LL;
  InputBuffer = 0LL;
  v9 = *(_DWORD *)(v3 + 2664);
  *(_DWORD *)(v3 + 2664) = 15;
  v101 = v9;
  SystemInformation_8 = 0LL;
  v100 = 0LL;
  memset(v107, 0, sizeof(v107));
  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
  {
    LODWORD(OutputBufferLength) = 0;
    McTemplateK0dq_EtwWriteTransfer(v6, &StartPowerStateCalloutWorker, v7, v9, OutputBufferLength);
  }
  v10 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v6, v5) + 48) + 2264LL);
  if ( !v10 )
  {
    v13 = -1073741637;
    goto LABEL_110;
  }
  v13 = v10();
  if ( v13 < 0 )
  {
LABEL_110:
    v89 = 5LL;
    goto LABEL_111;
  }
  v14 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v12, v11) + 48) + 2272LL);
  if ( !v14 )
  {
    v13 = -1073741637;
    goto LABEL_108;
  }
  v17 = v14();
  v13 = v17;
  if ( v17 < 0 )
  {
LABEL_108:
    v89 = 6LL;
LABEL_111:
    AddPowerStateLogEntry(v89, (unsigned int)v13);
    goto LABEL_112;
  }
  if ( !*(_DWORD *)(W32GetUserSessionState(v16, v15) + 2728) )
  {
    v13 = -2143420409;
    goto LABEL_112;
  }
  if ( v9 > 10 )
  {
    if ( v9 == 11 )
    {
      if ( *(_BYTE *)W32GetUserGdiSessionState(0LL) )
      {
        SystemInformation_4 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3866LL);
      }
      v88 = 0;
      if ( (int)((__int64 (*)(void))IsPowerOnGdiSupported)() >= 0 )
      {
        PowerOnGdi(v8, 0LL, 2LL);
        v88 = 1;
      }
      if ( (*(_DWORD *)(v3 + 2592) & 0x20) != 0 )
        PowerOnMonitor(19LL, v8, 2u);
      if ( v88 )
        ProcessDelayedSdc(v8);
      goto LABEL_112;
    }
    if ( v9 == 12 )
    {
      if ( *(_BYTE *)W32GetUserGdiSessionState((unsigned int)(v9 - 12)) )
      {
        SystemInformation_4 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3405LL);
      }
      PowerOffMonitor(20LL, v8);
      goto LABEL_112;
    }
    v19 = (unsigned int)(v9 - 13);
    if ( v9 == 13 )
    {
      if ( *(_BYTE *)W32GetUserGdiSessionState(v19) )
      {
        SystemInformation_4 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3424LL);
      }
      if ( !(unsigned int)IsCurrentSessionServiceSession() )
      {
        EtwTraceWinlogonSleepStartEvent(1LL);
        AddPowerStateLogEntry(3LL, 263LL);
        LOBYTE(v86) = 1;
        v87 = xxxSendWinlogonPowerMessage(v86, 263LL, v3 + 2648);
        AddPowerStateLogEntry(4LL, v87);
        EtwTraceWinlogonSleepStartEvent(0LL);
      }
      goto LABEL_95;
    }
    if ( v9 != 14 )
      goto LABEL_112;
    if ( (int)IsxxxSendMessageBSMSupported() < 0 )
      goto LABEL_95;
    v82 = *(_DWORD *)(v3 + 2652) == 5;
    *(_DWORD *)(v3 + 2608) = 16;
    OutputBufferLength = v3 + 2608;
    if ( v82 )
    {
      *(_DWORD *)(v3 + 2612) = 536870952;
      if ( (unsigned int)xxxSendMessageBSM(v19, 536, 4, v81, OutputBufferLength) )
      {
LABEL_95:
        v13 = v17;
        goto LABEL_112;
      }
      v83 = 4LL;
    }
    else
    {
      *(_DWORD *)(v3 + 2612) = 0x20000000;
      if ( !(unsigned int)xxxSendMessageBSM(v19, 536, 18, v81, OutputBufferLength) )
        AddPowerStateLogEntry(7LL, 18LL);
      if ( (unsigned int)xxxSendMessageBSM(v84, 536, 7, v85, v3 + 2608) )
        goto LABEL_95;
      v83 = 7LL;
    }
    AddPowerStateLogEntry(7LL, v83);
    goto LABEL_95;
  }
  switch ( v9 )
  {
    case 10:
      if ( *(_BYTE *)W32GetUserGdiSessionState(v19) )
      {
        SystemInformation_4 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3846LL);
      }
      *(_DWORD *)(v3 + 2592) = (*(_DWORD *)(v3 + 2384) != 0 ? 0x20 : 0) | *(_DWORD *)(v3 + 2592) & 0xFFFFFFDF;
      PowerOffMonitor(19LL, v8);
      if ( (int)IsPowerOffGdiSupported() >= 0 )
        PowerOffGdi(v8);
      goto LABEL_112;
    case 1:
      EnterPowerCrit(0LL, v18);
      v79 = *((_QWORD *)PtiCurrent() + 96);
      *(_QWORD *)(v3 + 2600) = v79;
      LeavePowerCrit(v79, v80);
      goto LABEL_112;
    case 2:
      *(_DWORD *)(v3 + 2392) = 1;
      _InterlockedOr(v91, 0);
      if ( !*(_BYTE *)(W32GetUserSessionState(0LL, v18) + 528) )
        RIMSetSystemInputMode(2LL);
      if ( !*(_BYTE *)W32GetUserGdiSessionState(v62) )
        PowerOffMonitor(*(unsigned int *)(v3 + 2668), v8);
      *(_DWORD *)(v3 + 2424) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      if ( !(unsigned int)IsCurrentSessionServiceSession() )
      {
        EtwTraceWinlogonSleepStartEvent(1LL);
        AddPowerStateLogEntry(3LL, 1LL);
        LOBYTE(v65) = 1;
        v66 = xxxSendWinlogonPowerMessage(v65, 262LL, v3 + 2648);
        AddPowerStateLogEntry(4LL, v66);
        EtwTraceWinlogonSleepStartEvent(0LL);
      }
      LOBYTE(v63) = 1;
      LOBYTE(v64) = 1;
      if ( !(unsigned int)PowerResumeSuspendEvent(v64, v63, 0LL) && (int)IsxxxSendMessageBSMSupported() >= 0 )
      {
        *(_DWORD *)(v3 + 2612) = 536870952;
        *(_DWORD *)(v3 + 2608) = 16;
        if ( !(unsigned int)xxxSendMessageBSM(v68, 536, 4, v69, v3 + 2608) )
          AddPowerStateLogEntry(7LL, 4LL);
      }
      if ( *(_DWORD *)(v3 + 2652) == 5 && !*(_WORD *)(W32GetUserSessionState(v68, v67) + 68752) )
      {
        if ( (*(_DWORD *)(v3 + 2656) & 8) != 0 )
        {
          if ( (unsigned __int8)DrvStopPresenterView() )
          {
            if ( *(_QWORD *)(W32GetUserSessionState(v68, v67) + 19144) )
            {
              v72 = W32GetUserSessionState(v68, v67);
              v96 = 0LL;
              v95 = v8;
              v94 = 0LL;
              v73 = *(_QWORD *)(v72 + 19144);
              LOBYTE(v93) = 0;
              v74 = xxxUserSetDisplayConfig(0LL, 0LL, 2191LL, 0LL, v73, v93, 0LL, 0LL, 0LL, v8, 0LL);
              if ( v74 < 0 )
                AddPowerStateLogEntry(9LL, (unsigned int)v74);
            }
          }
        }
        else
        {
          EtwTraceWinlogonSleepEndEvent(1LL);
          AddPowerStateLogEntry(3LL, 259LL);
          LOBYTE(v70) = 1;
          v71 = xxxSendWinlogonPowerMessage(v70, 259LL, v3 + 2648);
          AddPowerStateLogEntry(4LL, v71);
          EtwTraceWinlogonSleepEndEvent(0LL);
        }
      }
      if ( !*(_WORD *)(W32GetUserSessionState(v68, v67) + 68752) && (int)IsPowerOffGdiSupported() >= 0 )
        PowerOffGdi(v8);
      EnterPowerCrit(v76, v75);
      *(_QWORD *)(v3 + 2600) = 0LL;
      LeavePowerCrit(v78, v77);
      goto LABEL_95;
  }
  v21 = (unsigned int)(v9 - 3);
  if ( v9 == 3 )
  {
    if ( *(_DWORD *)(v3 + 2652) == 5 )
      LODWORD(InputBuffer) = 3;
    else
      LODWORD(InputBuffer) = *(_DWORD *)(v3 + 2648);
    LOBYTE(v21) = 1;
    if ( !(unsigned int)PowerResumeSuspendEvent(v21, 0LL, 0LL) )
    {
      *(_QWORD *)((char *)&InputBuffer + 4) = 4LL;
      WORD6(InputBuffer) = 256;
      LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)SystemInformation, 1);
      v60 = ZwPowerInformation(NotifyUserModeLegacyPowerEvent, &InputBuffer, 0x10u, 0LL, 0);
      if ( v60 < 0 )
        AddPowerStateLogEntry(8LL, (unsigned int)v60);
      LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)SystemInformation, v61);
    }
  }
  else
  {
    v19 = (unsigned int)(v9 - 5);
    if ( v9 != 5 )
    {
      if ( v9 != 6 )
        goto LABEL_112;
      v22 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v19, v18) + 48) + 2072LL);
      if ( v22 )
      {
        if ( v22() >= 0 )
        {
          v25 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v24, v23) + 48) + 2080LL);
          if ( v25 )
            v25();
        }
      }
      if ( !(unsigned int)PowerResumeSuspendEvent(0LL, 0LL, 0LL) )
      {
        LODWORD(InputBuffer) = 0;
        *(_QWORD *)((char *)&InputBuffer + 4) = 18LL;
        WORD6(InputBuffer) = 1;
        LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)SystemInformation, 1);
        v26 = ZwPowerInformation(NotifyUserModeLegacyPowerEvent, &InputBuffer, 0x10u, 0LL, 0);
        if ( v26 < 0 )
          AddPowerStateLogEntry(8LL, (unsigned int)v26);
        LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)SystemInformation, v27);
      }
      goto LABEL_95;
    }
    v28 = W32GetUserSessionState(v19, v18);
    CInputGlobals::UpdateLastInputTime(
      *(struct W32_PUSH_LOCK **)(v28 + 3056),
      (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
      6u);
    if ( !*(_BYTE *)(W32GetUserSessionState(v30, v29) + 528) )
      RIMSetSystemInputMode(0LL);
    SystemInformation_4 = *(_DWORD *)(v3 + 2652);
    v31 = IsCurrentSessionHostServiceSession();
    v32 = 0LL;
    if ( !v31 )
    {
      if ( SystemInformation_4 == 5 )
      {
        memset((char *)v107 + 12, 0, 20);
        *(_QWORD *)&v100 = v107;
        *((_QWORD *)&SystemInformation_8 + 1) = 10LL;
        *((_QWORD *)&v100 + 1) = 32LL;
        *(_QWORD *)&SystemInformation_8 = 0x6B7568430000002DLL;
        LODWORD(v107[1]) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 4)) & 0xFFFFFFFE;
        *(_QWORD *)&v107[0] = 0x100000004LL;
        DWORD2(v107[0]) = 4;
        ZwSetSystemInformation(SystemSuperfetchInformation, &SystemInformation_8, 0x20uLL);
      }
      EtwTraceWinlogonSleepEndEvent(1LL);
      AddPowerStateLogEntry(3LL, 262LL);
      v103 = 0LL;
      v102[0] = 0;
      LOBYTE(v33) = 1;
      v102[1] = 1;
      v34 = xxxSendWinlogonPowerMessage(v33, 262LL, v102);
      AddPowerStateLogEntry(4LL, v34);
      EtwTraceWinlogonSleepEndEvent(0LL);
      if ( SystemInformation_4 == 5 )
      {
        v35 = v100;
        *(_DWORD *)(v100 + 16) |= 1u;
        *(_DWORD *)(v35 + 8) = 4;
        ZwSetSystemInformation(SystemSuperfetchInformation, &SystemInformation_8, 0x20uLL);
      }
    }
    if ( (int)IsPowerOnGdiSupported(v32) >= 0 )
      PowerOnGdi(v8, 1LL, 5LL);
    *(_DWORD *)(v3 + 2392) = 0;
    _InterlockedOr(v91, 0);
    if ( *(_DWORD *)(W32GetUserSessionState(v37, v36) + 2692) )
    {
      *(_DWORD *)(W32GetUserSessionState(v39, v38) + 2700) = 1;
      v42 = *(_DWORD *)(W32GetUserSessionState(v41, v40) + 2696);
      *(_DWORD *)(W32GetUserSessionState(v44, v43) + 2704) = v42;
      EnterPowerCrit(v46, v45);
      *(_DWORD *)(W32GetUserSessionState(v48, v47) + 2692) = 0;
      *(_DWORD *)(W32GetUserSessionState(v50, v49) + 2696) = 0;
      LeavePowerCrit(v52, v51);
      PoSetUserPresent(v42);
    }
    else
    {
      *(_DWORD *)(v3 + 2396) = 1;
    }
    *(_QWORD *)&v107[0] = 0x100000004LL;
    memset((char *)v107 + 12, 0, 20);
    *(_QWORD *)&v100 = v107;
    *((_QWORD *)&SystemInformation_8 + 1) = 10LL;
    *((_QWORD *)&v100 + 1) = 32LL;
    LODWORD(v107[1]) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 4)) & 0xFFFFFFFE;
    *(_QWORD *)&SystemInformation_8 = 0x6B7568430000002DLL;
    DWORD2(v107[0]) = 6;
    ZwSetSystemInformation(SystemSuperfetchInformation, &SystemInformation_8, 0x20uLL);
    LOBYTE(v53) = 1;
    if ( !(unsigned int)PowerResumeSuspendEvent(0LL, v53, 0LL) && (int)IsxxxSendMessageBSMSupported() >= 0 )
    {
      *(_QWORD *)&v108[0] = 0x2000000000000010LL;
      if ( !(unsigned int)xxxSendMessageBSM(v54, 536, 18, v55, (__int64)v108) )
        AddPowerStateLogEntry(7LL, 18LL);
    }
    v13 = v17;
    if ( (unsigned int)Feature_KeyboardLEDImprovements__private_IsEnabledDeviceUsageNoInline() )
    {
      IoControl(2LL);
    }
    else
    {
      v58 = W32GetUserSessionState(v57, v56);
      *(_DWORD *)(v58 + 12872) |= 2u;
    }
    v59 = v100;
    *(_DWORD *)(v100 + 16) |= 1u;
    *(_DWORD *)(v59 + 8) = 6;
    ZwSetSystemInformation(SystemSuperfetchInformation, &SystemInformation_8, 0x20uLL);
  }
LABEL_112:
  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
  {
    LODWORD(OutputBufferLength) = v13;
    McTemplateK0dq_EtwWriteTransfer(v19, &StopPowerStateCalloutWorker, v20, v101, OutputBufferLength);
  }
  CDisplayScenarioContextScope::~CDisplayScenarioContextScope((CDisplayScenarioContextScope *)v104);
  return (unsigned int)v13;
}
