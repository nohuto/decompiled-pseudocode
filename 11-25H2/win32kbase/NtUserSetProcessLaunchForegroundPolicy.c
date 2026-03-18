/*
 * XREFs of NtUserSetProcessLaunchForegroundPolicy @ 0x1401C0060
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     EnterSharedCrit @ 0x14008A250 (EnterSharedCrit.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1400A015C (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C16E0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ??1CLockProcessByPid@@QEAA@XZ @ 0x140161A8C (--1CLockProcessByPid@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z @ 0x1401A5DE4 (--0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z.c)
 *     Feature_NotifyProcessCreateAlways__private_IsEnabledDeviceUsageNoInline @ 0x1401B64E0 (Feature_NotifyProcessCreateAlways__private_IsEnabledDeviceUsageNoInline.c)
 *     ?GetProcessInfo@CLockProcessByPid@@QEBAPEAUtagPROCESSINFO@@XZ @ 0x1401B6B20 (-GetProcessInfo@CLockProcessByPid@@QEBAPEAUtagPROCESSINFO@@XZ.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall NtUserSetProcessLaunchForegroundPolicy(int a1, __int64 a2)
{
  int v2; // r12d
  bool v3; // di
  bool v4; // si
  __int64 UserSessionState; // rax
  int v6; // r8d
  int v7; // edx
  char v8; // di
  char v9; // si
  __int64 v10; // rax
  int v11; // edx
  int v12; // r8d
  unsigned int v13; // r12d
  unsigned int v14; // r12d
  bool v15; // r14
  __int64 v16; // rax
  int v17; // r8d
  int v18; // edx
  __int64 v19; // r9
  __int64 v20; // rdx
  unsigned __int64 ProcessInfo; // r12
  __int64 v22; // rdx
  bool v23; // r14
  int v24; // edx
  int v25; // r8d
  __int64 v26; // r9
  __int64 v27; // rdx
  char v28; // r12
  __int64 v29; // rax
  int v30; // edx
  int v31; // r8d
  void *v32; // rcx
  char v33; // r12
  __int64 v34; // rax
  int v35; // edx
  int v36; // r8d
  __int64 v37; // r12
  __int64 v38; // rdx
  __int64 (__fastcall *v39)(__int64); // rax
  int v40; // eax
  int v41; // r12d
  bool v42; // r14
  __int64 v43; // rax
  int v44; // r8d
  int v45; // edx
  NTSTATUS v46; // ecx
  ULONG v47; // ecx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rdx
  __int64 v52; // r12
  unsigned int (__fastcall *v53)(_QWORD); // rax
  __int64 v54; // rdx
  __int64 v55; // rdx
  __int64 v56; // rdx
  __int64 v57; // rcx
  void (__fastcall *v58)(__int64, __int64, __int64); // rax
  bool v60; // r14
  __int64 v61; // rax
  int v62; // r8d
  int v63; // edx
  bool v64; // r14
  __int64 v65; // rax
  int v66; // r8d
  int v67; // edx
  __int64 v68; // rdx
  __int16 v69; // [rsp+30h] [rbp-D0h]
  char v70; // [rsp+40h] [rbp-C0h]
  __int64 v71; // [rsp+50h] [rbp-B0h]
  HANDLE ThreadHandle; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v73; // [rsp+60h] [rbp-A0h] BYREF
  NTSTATUS Status; // [rsp+68h] [rbp-98h]
  __int64 v75; // [rsp+78h] [rbp-88h]
  HANDLE ProcessHandle; // [rsp+80h] [rbp-80h]
  _BYTE ProcessInformation[64]; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD v78[32]; // [rsp+F0h] [rbp-10h] BYREF
  int ThreadInformation; // [rsp+188h] [rbp+88h] BYREF
  __int64 v81; // [rsp+190h] [rbp+90h]
  int v82; // [rsp+198h] [rbp+98h]

  LODWORD(v81) = 3;
  v2 = a2;
  if ( (a2 & 3) == 3 )
  {
    v3 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && _bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xCu)
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v4 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
      LOBYTE(v6) = v4;
      LOBYTE(v7) = v3;
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v7,
        v6,
        *(_QWORD *)(UserSessionState + 69144),
        4,
        13,
        123,
        (__int64)&WPP_201817f94ca5306655f7928efae29406_Traceguids,
        v2);
    }
LABEL_27:
    UserSetLastError(87);
    return 0LL;
  }
  v8 = 1;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xCu)
    || (v9 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v9 = 0;
  }
  LOBYTE(ThreadInformation) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v10 = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
    LOBYTE(v11) = v9;
    LOBYTE(v12) = ThreadInformation;
    WPP_RECORDER_AND_TRACE_SF_Dd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v11,
      v12,
      *(_QWORD *)(v10 + 69144),
      4,
      13,
      124,
      (__int64)&WPP_201817f94ca5306655f7928efae29406_Traceguids,
      v2,
      a1);
  }
  v82 = v2 & 4;
  v13 = v2 & 0xFFFFFFFB;
  if ( v13 )
  {
    v14 = v13 - 1;
    if ( v14 )
    {
      if ( v14 != 1 )
      {
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || !_bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xCu)
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
        {
          v8 = 0;
        }
        v15 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v16 = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
          LOBYTE(v17) = v15;
          LOBYTE(v18) = v8;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v18,
            v17,
            *(_QWORD *)(v16 + 69144),
            2,
            13,
            125,
            (__int64)&WPP_201817f94ca5306655f7928efae29406_Traceguids);
        }
        goto LABEL_27;
      }
    }
    else
    {
      LODWORD(v81) = 2;
    }
  }
  else
  {
    LODWORD(v81) = 1;
  }
  EnterSharedCrit(0, 0);
  CLockProcessByPid::CLockProcessByPid((__int64)&v73, a1, 512, v19, 1, 0LL);
  if ( !v75 )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xCu)
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v8 = 0;
    }
    v64 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v65 = W32GetUserSessionState(WPP_GLOBAL_Control, v20);
      LOBYTE(v66) = v64;
      LOBYTE(v67) = v8;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v67,
        v66,
        *(_QWORD *)(v65 + 69144),
        2,
        13,
        135,
        (__int64)&WPP_201817f94ca5306655f7928efae29406_Traceguids,
        a1);
    }
    v46 = Status;
    goto LABEL_137;
  }
  v71 = v73;
  ProcessInfo = CLockProcessByPid::GetProcessInfo((CLockProcessByPid *)&v73);
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
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xCu)
      || (v28 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v28 = 0;
    }
    LOBYTE(ThreadInformation) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v28 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v29 = W32GetUserSessionState(WPP_GLOBAL_Control, v27);
      LOBYTE(v30) = v28;
      LOBYTE(v31) = ThreadInformation;
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v30,
        v31,
        *(_QWORD *)(v29 + 69144),
        4,
        13,
        127,
        (__int64)&WPP_201817f94ca5306655f7928efae29406_Traceguids,
        v71);
    }
    memset(v78, 0, 0x40uLL);
    if ( ZwQueryInformationProcess(ProcessHandle, ProcessImageInformation, v78, 0x40u, 0LL) < 0 || v78[8] != 2 )
    {
LABEL_83:
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xCu)
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v8 = 0;
      }
      v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_89;
      v26 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v27) + 69144);
      v70 = v71;
      v69 = 130;
      goto LABEL_88;
    }
    v32 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xCu)
      || (v33 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v33 = 0;
    }
    LOBYTE(ThreadInformation) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v33 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v34 = W32GetUserSessionState(WPP_GLOBAL_Control, v27);
      LOBYTE(v35) = v33;
      LOBYTE(v36) = ThreadInformation;
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v35,
        v36,
        *(_QWORD *)(v34 + 69144),
        4,
        13,
        128,
        (__int64)&WPP_201817f94ca5306655f7928efae29406_Traceguids,
        v71);
    }
    v37 = v75;
    v38 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v32, v27) + 48);
    v39 = *(__int64 (__fastcall **)(__int64))(v38 + 1064);
    if ( v39 )
    {
      v40 = v39(v37);
      v41 = v40;
      if ( v40 >= 0 )
      {
        if ( v40 == 1073741851 )
        {
          ThreadInformation = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, 9510);
        }
        ProcessInfo = CLockProcessByPid::GetProcessInfo((CLockProcessByPid *)&v73);
        *(_QWORD *)(ProcessInfo + 808) |= 0x10000000uLL;
        goto LABEL_64;
      }
    }
    else
    {
      v41 = -1073741637;
    }
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xCu)
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v8 = 0;
    }
    v42 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v43 = W32GetUserSessionState(WPP_GLOBAL_Control, v38);
      LOBYTE(v44) = v42;
      LOBYTE(v45) = v8;
      WPP_RECORDER_AND_TRACE_SF_Dd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v45,
        v44,
        *(_QWORD *)(v43 + 69144),
        2,
        13,
        129,
        (__int64)&WPP_201817f94ca5306655f7928efae29406_Traceguids,
        v71,
        v41);
    }
    v46 = v41;
LABEL_137:
    v47 = RtlNtStatusToDosError(v46);
    goto LABEL_138;
  }
  if ( !ProcessInfo )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xCu)
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v8 = 0;
    }
    v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_89;
    v26 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v22) + 69144);
    v70 = v71;
    v69 = 126;
LABEL_88:
    LOBYTE(v25) = v23;
    LOBYTE(v24) = v8;
    WPP_RECORDER_AND_TRACE_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v24,
      v25,
      v26,
      2,
      13,
      v69,
      (__int64)&WPP_201817f94ca5306655f7928efae29406_Traceguids,
      v70);
LABEL_89:
    v47 = 5;
LABEL_138:
    UserSetLastError(v47);
    CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)&v73);
    UserSessionSwitchLeaveCritWithNonPaged(0LL, v68);
    return 0LL;
  }
LABEL_64:
  if ( *(_BYTE *)(ProcessInfo + 1176) == 1 )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xCu)
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v8 = 0;
    }
    v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_89;
    v26 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v22) + 69144);
    v70 = v71;
    v69 = 131;
    goto LABEL_88;
  }
  if ( !(unsigned int)Feature_NotifyProcessCreateAlways__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( (unsigned int)PsGetProcessActiveThreadCount(v75) != 1 )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xCu)
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v8 = 0;
      }
      v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_89;
      v26 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v50) + 69144);
      v70 = v71;
      v69 = 132;
      goto LABEL_88;
    }
    ThreadHandle = 0LL;
    if ( (int)ZwGetNextThread(ProcessHandle, 0LL, 64LL, 512LL, 0, &ThreadHandle) < 0 )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xCu)
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v8 = 0;
      }
      v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_89;
      v26 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v51) + 69144);
      v70 = v71;
      v69 = 134;
      goto LABEL_88;
    }
    ThreadInformation = 0;
    ZwQueryInformationThread(ThreadHandle, ThreadBasePriority|0x20, &ThreadInformation, 4u, 0LL);
    ZwClose(ThreadHandle);
    if ( !ThreadInformation )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xCu)
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v8 = 0;
      }
      v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_89;
      v26 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v48) + 69144);
      v70 = v71;
      v69 = 133;
      goto LABEL_88;
    }
  }
  v52 = v75;
  v53 = *(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v49, v48) + 48) + 5208LL);
  if ( !v53 || !v53((unsigned int)v81) )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 0xCu)
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v8 = 0;
    }
    v60 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v61 = W32GetUserSessionState(WPP_GLOBAL_Control, v54);
      LOBYTE(v62) = v60;
      LOBYTE(v63) = v8;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v63,
        v62,
        *(_QWORD *)(v61 + 69144),
        2,
        13,
        136,
        (__int64)&WPP_201817f94ca5306655f7928efae29406_Traceguids);
    }
    goto LABEL_89;
  }
  CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)&v73);
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v55);
  if ( !v71 )
  {
    ThreadInformation = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9611);
  }
  HIDWORD(v81) = v82 != 0;
  v58 = *(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v57, v56) + 48)
                                                         + 5192LL);
  if ( v58 )
    v58(v71, v52, v81);
  return 1LL;
}
