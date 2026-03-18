/*
 * XREFs of ?GetWindowProcessHandleUnsafe@@YAPEAXPEAUtagWND@@PEBUtagTHREADINFO@@K@Z @ 0x140292A58
 * Callers:
 *     NtUserGetWindowProcessHandle @ 0x1402995F0 (NtUserGetWindowProcessHandle.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??1CLockProcessByPid@@QEAA@XZ @ 0x14018EA74 (--1CLockProcessByPid@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14018EC58 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     IsShellProcess @ 0x1401A7FD8 (IsShellProcess.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_UIPIAlwaysOn__private_IsEnabledDeviceUsageNoInline @ 0x1402771F4 (Feature_UIPIAlwaysOn__private_IsEnabledDeviceUsageNoInline.c)
 *     ??0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z @ 0x14027745C (--0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z.c)
 *     Feature_FHLfDwmThread__private_IsEnabledDeviceUsageNoInline @ 0x1402943A8 (Feature_FHLfDwmThread__private_IsEnabledDeviceUsageNoInline.c)
 *     WPP_RECORDER_AND_TRACE_SF_DDD @ 0x1402A466C (WPP_RECORDER_AND_TRACE_SF_DDD.c)
 */

void *__fastcall GetWindowProcessHandleUnsafe(struct tagWND *a1, const struct tagTHREADINFO *a2, ACCESS_MASK a3)
{
  __int64 v3; // rbp
  ACCESS_MASK v4; // edi
  char v7; // si
  bool v8; // r14
  bool v9; // r12
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  bool v13; // bl
  __int64 v14; // rax
  int v15; // edx
  int v16; // r8d
  __int64 v17; // rdx
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // ebx
  __int64 v22; // rdx
  UIPrivilegeIsolation *v23; // rcx
  const struct tagUIPI_INFO *v24; // r8
  __int64 v25; // rdx
  _DWORD *v26; // rdx
  char v27; // bl
  bool v28; // di
  __int64 v29; // rax
  int v30; // r8d
  int v31; // edx
  KPROCESSOR_MODE AccessMode; // di
  __int64 v34; // rdx
  int v35; // ebx
  void *v36; // rbx
  bool v37; // di
  __int64 v38; // rax
  int v39; // r8d
  int v40; // edx
  ULONG v41; // eax
  __int16 Handle; // [rsp+30h] [rbp-B8h]
  _BYTE v43[8]; // [rsp+60h] [rbp-88h] BYREF
  NTSTATUS Status; // [rsp+68h] [rbp-80h]
  PVOID Object; // [rsp+78h] [rbp-70h]
  void *v46; // [rsp+F0h] [rbp+8h] BYREF
  ACCESS_MASK DesiredAccess; // [rsp+100h] [rbp+18h]

  DesiredAccess = a3;
  v3 = *((_QWORD *)a1 + 2);
  v4 = a3;
  v7 = 1;
  v8 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 4) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
  v9 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1, &WPP_GLOBAL_Control);
    v4 = DesiredAccess;
    LOBYTE(v11) = v9;
    LOBYTE(v12) = v8;
    WPP_RECORDER_AND_TRACE_SF_DDD(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v12,
      v11,
      *(_QWORD *)(UserSessionState + 69160));
  }
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v3 + 528), 0, 0) & 0xC) != 0 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 4) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
    {
      v7 = 0;
    }
    v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v7 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_85;
    v14 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
    Handle = 51;
LABEL_84:
    LOBYTE(v16) = v13;
    LOBYTE(v15) = v7;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v15,
      v16,
      *(_QWORD *)(v14 + 69160),
      3,
      3,
      Handle,
      (__int64)&WPP_212fca24ed3e3073058b582086d1855d_Traceguids);
LABEL_85:
    UserSetLastError(5);
    return 0LL;
  }
  if ( (unsigned int)Feature_FHLfDwmThread__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( (unsigned int)IsProcessDwm(**((_QWORD **)a2 + 58)) )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 4) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
      {
        v7 = 0;
      }
      v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v7 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_85;
      v14 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v19);
      Handle = 52;
      goto LABEL_84;
    }
  }
  else if ( (*(_BYTE *)(v3 + 1360) & 4) != 0 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 4) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
    {
      v7 = 0;
    }
    v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v7 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_85;
    v14 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v17);
    Handle = 53;
    goto LABEL_84;
  }
  v20 = *((_QWORD *)a2 + 58);
  if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 464LL) == v20 )
    goto LABEL_86;
  v21 = *(_DWORD *)(v20 + 12) >> 31;
  if ( (unsigned int)IsShellProcess(v20) )
  {
    if ( v4 != 4096 )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 4) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
      {
        v7 = 0;
      }
      v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v7 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_85;
      v14 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v22);
      Handle = 54;
      goto LABEL_84;
    }
  }
  else
  {
    if ( !(_BYTE)v21 )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 4) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
      {
        v7 = 0;
      }
      v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v7 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_85;
      v14 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v22);
      Handle = 56;
      goto LABEL_84;
    }
    if ( v4 != 120 )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 4) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
      {
        v7 = 0;
      }
      v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v7 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_85;
      v14 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v22);
      Handle = 55;
      goto LABEL_84;
    }
  }
  if ( !(unsigned int)Feature_UIPIAlwaysOn__private_IsEnabledDeviceUsageNoInline()
    && !UIPrivilegeIsolation::Enforced(v23) )
  {
    if ( (_BYTE)v21 )
    {
      LODWORD(v46) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, 28568);
    }
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 4) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
    {
      v7 = 0;
    }
    v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v7 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_85;
    v14 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v25);
    Handle = 57;
    goto LABEL_84;
  }
  if ( !(_BYTE)v21
    || !UIPrivilegeIsolation::CheckAccess(
          (UIPrivilegeIsolation *)(*((_QWORD *)a2 + 58) + 864LL),
          (const struct tagUIPI_INFO *)(*(_QWORD *)(v3 + 464) + 864LL),
          v24)
    || (v26 = (_DWORD *)*((_QWORD *)a2 + 58), v26[218])
    || v26[217]
    || v26[216] != *(_DWORD *)(*(_QWORD *)(v3 + 464) + 864LL) )
  {
LABEL_86:
    AccessMode = 1;
  }
  else
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 4) == 0
      || (v27 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u) )
    {
      v27 = 0;
    }
    v28 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v27 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v29 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v26);
      LOBYTE(v30) = v28;
      LOBYTE(v31) = v27;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v31,
        v30,
        *(_QWORD *)(v29 + 69160),
        3,
        3,
        58,
        (__int64)&WPP_212fca24ed3e3073058b582086d1855d_Traceguids);
    }
    AccessMode = 0;
  }
  CLockProcessByPid::CLockProcessByPid((__int64)v43, *(int *)(*(_QWORD *)(v3 + 464) + 56LL), 0, v18, 1);
  v35 = Status;
  if ( Status < 0
    || (v46 = 0LL,
        v35 = ObOpenObjectByPointer(Object, 0, 0LL, DesiredAccess, (POBJECT_TYPE)PsProcessType, AccessMode, &v46),
        v35 < 0) )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 4) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
    {
      v7 = 0;
    }
    v37 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v38 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v34);
      LOBYTE(v39) = v37;
      LOBYTE(v40) = v7;
      WPP_RECORDER_AND_TRACE_SF_d(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v40,
        v39,
        *(_QWORD *)(v38 + 69160),
        3,
        3,
        59,
        (__int64)&WPP_212fca24ed3e3073058b582086d1855d_Traceguids,
        v35);
    }
    v41 = RtlNtStatusToDosError(v35);
    UserSetLastError(v41);
    v36 = 0LL;
  }
  else
  {
    v36 = v46;
  }
  CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)v43, v34);
  return v36;
}
