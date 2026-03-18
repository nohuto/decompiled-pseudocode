/*
 * XREFs of NtUserSetProcessLaunchForegroundPolicy @ 0x1401E8E40
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     EnterSharedCrit @ 0x14003D800 (EnterSharedCrit.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x140070478 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400F7C80 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     Feature_NotifyProcessCreateAlways__private_IsEnabledDeviceUsageNoInline @ 0x14018A5D8 (Feature_NotifyProcessCreateAlways__private_IsEnabledDeviceUsageNoInline.c)
 *     ?GetProcessInfo@CLockProcessByPid@@QEBAPEAUtagPROCESSINFO@@XZ @ 0x14019C1D0 (-GetProcessInfo@CLockProcessByPid@@QEBAPEAUtagPROCESSINFO@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z @ 0x1401B6974 (--0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z.c)
 *     ??1CLockProcessByPid@@QEAA@XZ @ 0x1401C5030 (--1CLockProcessByPid@@QEAA@XZ.c)
 *     Feature_AgenticSessionNoBoostPolicy__private_IsEnabledDeviceUsageNoInline @ 0x1401C93F0 (Feature_AgenticSessionNoBoostPolicy__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall NtUserSetProcessLaunchForegroundPolicy(int a1, int a2, __int64 a3, __int64 a4)
{
  bool v5; // di
  bool v6; // si
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx
  char v10; // di
  char v11; // si
  __int64 v12; // rax
  int v13; // edx
  int v14; // r8d
  unsigned int v15; // r12d
  unsigned int v16; // r12d
  bool v17; // r14
  __int64 v18; // rax
  int v19; // r8d
  int v20; // edx
  __int64 v21; // r9
  int v22; // edx
  int v23; // r8d
  unsigned __int64 ProcessInfo; // r12
  int v25; // edx
  int v26; // r8d
  bool v27; // r14
  int v28; // edx
  int v29; // r8d
  __int64 v30; // r9
  int v31; // edx
  int v32; // r8d
  char v33; // r12
  __int64 v34; // rax
  int v35; // edx
  int v36; // r8d
  CTouchProcessor *v37; // rcx
  char v38; // r12
  __int64 v39; // rax
  int v40; // edx
  int v41; // r8d
  __int64 v42; // r12
  __int64 v43; // rdx
  int v44; // r8d
  __int64 (__fastcall *v45)(__int64); // rax
  int v46; // eax
  int v47; // r12d
  bool v48; // r14
  __int64 v49; // rax
  int v50; // r8d
  int v51; // edx
  NTSTATUS v52; // ecx
  ULONG v53; // ecx
  __int64 v54; // rcx
  int v55; // edx
  int v56; // r8d
  int v57; // edx
  int v58; // r8d
  int v59; // edx
  int v60; // r8d
  __int64 v61; // r12
  unsigned int (__fastcall *v62)(_QWORD); // rax
  int v63; // edx
  int v64; // r8d
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v66; // rdx
  __int64 v67; // rcx
  int v68; // r14d
  int v69; // r13d
  void (__fastcall *v70)(__int64, __int64); // rax
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rcx
  void (__fastcall *v76)(__int64, __int64, __int64); // rax
  bool v78; // r14
  __int64 v79; // rax
  int v80; // r8d
  int v81; // edx
  bool v82; // r14
  __int64 v83; // rax
  int v84; // r8d
  int v85; // edx
  __int64 v86; // rdx
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  __int16 v91; // [rsp+30h] [rbp-D0h]
  char v92; // [rsp+40h] [rbp-C0h]
  __int64 v93; // [rsp+50h] [rbp-B0h]
  HANDLE ThreadHandle; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v95; // [rsp+60h] [rbp-A0h] BYREF
  NTSTATUS Status; // [rsp+68h] [rbp-98h]
  __int64 v97; // [rsp+78h] [rbp-88h]
  HANDLE ProcessHandle; // [rsp+80h] [rbp-80h]
  _BYTE ProcessInformation[64]; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD v100[32]; // [rsp+F0h] [rbp-10h] BYREF
  int ThreadInformation; // [rsp+188h] [rbp+88h] BYREF
  __int64 v103; // [rsp+190h] [rbp+90h]
  int v104; // [rsp+198h] [rbp+98h]

  LODWORD(v103) = 3;
  if ( (a2 & 3) == 3 )
  {
    v5 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
      && _bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xCu)
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v6 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, a2, a3);
      LOBYTE(v8) = v6;
      LOBYTE(v9) = v5;
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v9,
        v8,
        *(_QWORD *)(UserSessionState + 69136),
        4,
        13,
        123,
        (__int64)&WPP_b29c3b0d214a316c45eaf1317fd8c983_Traceguids,
        a2);
    }
LABEL_27:
    UserSetLastError(87);
    return 0LL;
  }
  v10 = 1;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xCu)
    || (v11 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v11 = 0;
  }
  LOBYTE(ThreadInformation) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v12 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, a2, a3);
    LOBYTE(v13) = v11;
    LOBYTE(v14) = ThreadInformation;
    WPP_RECORDER_AND_TRACE_SF_Dd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v13,
      v14,
      *(_QWORD *)(v12 + 69136),
      4,
      13,
      124,
      (__int64)&WPP_b29c3b0d214a316c45eaf1317fd8c983_Traceguids,
      a2,
      a1);
  }
  v104 = a2 & 4;
  v15 = a2 & 0xFFFFFFFB;
  if ( v15 )
  {
    v16 = v15 - 1;
    if ( v16 )
    {
      if ( v16 != 1 )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || !_bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xCu)
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
        {
          v10 = 0;
        }
        v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v18 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, a2, a3);
          LOBYTE(v19) = v17;
          LOBYTE(v20) = v10;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v20,
            v19,
            *(_QWORD *)(v18 + 69136),
            2,
            13,
            125,
            (__int64)&WPP_b29c3b0d214a316c45eaf1317fd8c983_Traceguids);
        }
        goto LABEL_27;
      }
    }
    else
    {
      LODWORD(v103) = 2;
    }
  }
  else
  {
    LODWORD(v103) = 1;
  }
  EnterSharedCrit(0LL, 0LL, a3, a4);
  CLockProcessByPid::CLockProcessByPid((__int64)&v95, a1, 512, v21, 1, 0LL);
  if ( !v97 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xCu)
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v10 = 0;
    }
    v82 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v83 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v22, v23);
      LOBYTE(v84) = v82;
      LOBYTE(v85) = v10;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v85,
        v84,
        *(_QWORD *)(v83 + 69136),
        2,
        13,
        135,
        (__int64)&WPP_b29c3b0d214a316c45eaf1317fd8c983_Traceguids,
        a1);
    }
    v52 = Status;
    goto LABEL_141;
  }
  v93 = v95;
  ProcessInfo = CLockProcessByPid::GetProcessInfo((CLockProcessByPid *)&v95);
  if ( !(unsigned int)Feature_NotifyProcessCreateAlways__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( ProcessInfo )
      goto LABEL_64;
    memset(ProcessInformation, 0, sizeof(ProcessInformation));
    if ( ZwQueryInformationProcess(ProcessHandle, ProcessBasicInformation, ProcessInformation, 0x40u, 0LL) < 0
      || (ProcessInformation[56] & 8) == 0 )
    {
      goto LABEL_83;
    }
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xCu)
      || (v33 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v33 = 0;
    }
    LOBYTE(ThreadInformation) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v33 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v34 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v31, v32);
      LOBYTE(v35) = v33;
      LOBYTE(v36) = ThreadInformation;
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v35,
        v36,
        *(_QWORD *)(v34 + 69136),
        4,
        13,
        127,
        (__int64)&WPP_b29c3b0d214a316c45eaf1317fd8c983_Traceguids,
        v93);
    }
    memset(v100, 0, 0x40uLL);
    if ( ZwQueryInformationProcess(ProcessHandle, ProcessImageInformation, v100, 0x40u, 0LL) < 0 || v100[8] != 2 )
    {
LABEL_83:
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xCu)
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v10 = 0;
      }
      v27 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_89;
      v30 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v31, v32) + 69136);
      v92 = v93;
      v91 = 130;
      goto LABEL_88;
    }
    v37 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xCu)
      || (v38 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v38 = 0;
    }
    LOBYTE(ThreadInformation) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v38 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v39 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v31, v32);
      LOBYTE(v40) = v38;
      LOBYTE(v41) = ThreadInformation;
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v40,
        v41,
        *(_QWORD *)(v39 + 69136),
        4,
        13,
        128,
        (__int64)&WPP_b29c3b0d214a316c45eaf1317fd8c983_Traceguids,
        v93);
    }
    v42 = v97;
    v43 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v37) + 48);
    v45 = *(__int64 (__fastcall **)(__int64))(v43 + 856);
    if ( v45 )
    {
      v46 = v45(v42);
      v47 = v46;
      if ( v46 >= 0 )
      {
        if ( v46 == 1073741851 )
        {
          ThreadInformation = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTellMeIf", 0x20000, 9429);
        }
        ProcessInfo = CLockProcessByPid::GetProcessInfo((CLockProcessByPid *)&v95);
        *(_QWORD *)(ProcessInfo + 808) |= 0x10000000uLL;
        goto LABEL_64;
      }
    }
    else
    {
      v47 = -1073741637;
    }
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xCu)
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v10 = 0;
    }
    v48 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v49 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v43, v44);
      LOBYTE(v50) = v48;
      LOBYTE(v51) = v10;
      WPP_RECORDER_AND_TRACE_SF_Dd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v51,
        v50,
        *(_QWORD *)(v49 + 69136),
        2,
        13,
        129,
        (__int64)&WPP_b29c3b0d214a316c45eaf1317fd8c983_Traceguids,
        v93,
        v47);
    }
    v52 = v47;
LABEL_141:
    v53 = RtlNtStatusToDosError(v52);
    goto LABEL_142;
  }
  if ( !ProcessInfo )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xCu)
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v10 = 0;
    }
    v27 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_89;
    v30 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v25, v26) + 69136);
    v92 = v93;
    v91 = 126;
LABEL_88:
    LOBYTE(v29) = v27;
    LOBYTE(v28) = v10;
    WPP_RECORDER_AND_TRACE_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v28,
      v29,
      v30,
      2,
      13,
      v91,
      (__int64)&WPP_b29c3b0d214a316c45eaf1317fd8c983_Traceguids,
      v92);
LABEL_89:
    v53 = 5;
LABEL_142:
    UserSetLastError(v53);
    CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)&v95, v86);
    UserSessionSwitchLeaveCritWithNonPaged(v88, v87, v89, v90);
    return 0LL;
  }
LABEL_64:
  if ( *(_BYTE *)(ProcessInfo + 1200) == 1 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xCu)
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v10 = 0;
    }
    v27 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_89;
    v30 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v25, v26) + 69136);
    v92 = v93;
    v91 = 131;
    goto LABEL_88;
  }
  if ( !(unsigned int)Feature_NotifyProcessCreateAlways__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( (unsigned int)PsGetProcessActiveThreadCount(v97) != 1 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xCu)
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v10 = 0;
      }
      v27 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_89;
      v30 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v55, v56) + 69136);
      v92 = v93;
      v91 = 132;
      goto LABEL_88;
    }
    ThreadHandle = 0LL;
    if ( (int)ZwGetNextThread(ProcessHandle, 0LL, 64LL, 512LL, 0, &ThreadHandle) < 0 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xCu)
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v10 = 0;
      }
      v27 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_89;
      v30 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v57, v58) + 69136);
      v92 = v93;
      v91 = 134;
      goto LABEL_88;
    }
    ThreadInformation = 0;
    ZwQueryInformationThread(ThreadHandle, ThreadBasePriority|0x20, &ThreadInformation, 4u, 0LL);
    ZwClose(ThreadHandle);
    if ( !ThreadInformation )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xCu)
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v10 = 0;
      }
      v27 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_89;
      v30 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v59, v60) + 69136);
      v92 = v93;
      v91 = 133;
      goto LABEL_88;
    }
  }
  v61 = v97;
  v62 = *(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v54) + 48) + 4768LL);
  if ( !v62 || !v62((unsigned int)v103) )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xCu)
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v10 = 0;
    }
    v78 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v79 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v63, v64);
      LOBYTE(v80) = v78;
      LOBYTE(v81) = v10;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v81,
        v80,
        *(_QWORD *)(v79 + 69136),
        2,
        13,
        136,
        (__int64)&WPP_b29c3b0d214a316c45eaf1317fd8c983_Traceguids);
    }
    goto LABEL_89;
  }
  IsEnabledDeviceUsageNoInline = Feature_AgenticSessionNoBoostPolicy__private_IsEnabledDeviceUsageNoInline();
  v68 = v103;
  v69 = v104;
  if ( IsEnabledDeviceUsageNoInline )
  {
    HIDWORD(v103) = v104 != 0;
    v70 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v67) + 48) + 4752LL);
    if ( v70 )
      v70(v61, v103);
  }
  CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)&v95, v66);
  UserSessionSwitchLeaveCritWithNonPaged(v72, v71, v73, v74);
  if ( !(unsigned int)Feature_AgenticSessionNoBoostPolicy__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !v93 )
    {
      ThreadInformation = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 9539);
    }
    LODWORD(v103) = v68;
    HIDWORD(v103) = v69 != 0;
    v76 = *(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v75) + 48) + 4744LL);
    if ( v76 )
      v76(v93, v61, v103);
  }
  return 1LL;
}
