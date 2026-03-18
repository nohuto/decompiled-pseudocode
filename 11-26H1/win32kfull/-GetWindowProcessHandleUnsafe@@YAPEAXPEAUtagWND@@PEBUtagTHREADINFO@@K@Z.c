/*
 * XREFs of ?GetWindowProcessHandleUnsafe@@YAPEAXPEAUtagWND@@PEBUtagTHREADINFO@@K@Z @ 0x1402AD928
 * Callers:
 *     NtUserGetWindowProcessHandle @ 0x1402B58B0 (NtUserGetWindowProcessHandle.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     IsShellProcess @ 0x1401A1AF8 (IsShellProcess.c)
 *     ??1CLockProcessByPid@@QEAA@XZ @ 0x1401A37F4 (--1CLockProcessByPid@@QEAA@XZ.c)
 *     ??0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z @ 0x1401A4CB8 (--0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1401A4EE4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline @ 0x14029D1AC (Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline.c)
 *     WPP_RECORDER_AND_TRACE_SF_DDD @ 0x1402C215C (WPP_RECORDER_AND_TRACE_SF_DDD.c)
 */

void *__fastcall GetWindowProcessHandleUnsafe(struct tagWND *a1, const struct tagTHREADINFO *a2, ACCESS_MASK a3)
{
  __int64 v3; // r15
  char v4; // si
  KPROCESSOR_MODE AccessMode; // di
  struct tagWND *v8; // rbx
  bool v9; // bp
  bool v10; // r12
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  bool v14; // bl
  __int64 v15; // rax
  int v16; // edx
  int v17; // r8d
  __int64 v18; // rdx
  __int64 v19; // r9
  __int64 v20; // rcx
  int v21; // ebx
  __int64 v22; // rdx
  UIPrivilegeIsolation *v23; // rcx
  const struct tagUIPI_INFO *v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rdx
  char v27; // bl
  bool v28; // di
  __int64 v29; // rax
  int v30; // r8d
  int v31; // edx
  __int64 v33; // rdx
  int v34; // ebx
  void *v35; // rbx
  bool v36; // di
  __int64 v37; // rax
  int v38; // r8d
  int v39; // edx
  ULONG v40; // eax
  __int16 Handle; // [rsp+30h] [rbp-B8h]
  _BYTE v42[8]; // [rsp+60h] [rbp-88h] BYREF
  NTSTATUS Status; // [rsp+68h] [rbp-80h]
  PVOID Object; // [rsp+78h] [rbp-70h]
  void *v45; // [rsp+F0h] [rbp+8h] BYREF

  v45 = a1;
  v3 = *((_QWORD *)a1 + 2);
  v4 = 1;
  AccessMode = 1;
  v8 = a1;
  v9 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v10 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1, &WPP_GLOBAL_Control);
    LOBYTE(v12) = v10;
    LOBYTE(v13) = v9;
    WPP_RECORDER_AND_TRACE_SF_DDD(*((_QWORD *)WPP_GLOBAL_Control + 3), v13, v12, *(_QWORD *)(UserSessionState + 69152));
    v8 = (struct tagWND *)v45;
    AccessMode = 1;
  }
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v3 + 520), 0, 0) & 0xC) != 0 )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 4) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
    {
      v4 = 0;
    }
    v14 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v4 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_73;
    v15 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
    Handle = 52;
LABEL_72:
    LOBYTE(v17) = v14;
    LOBYTE(v16) = v4;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v16,
      v17,
      *(_QWORD *)(v15 + 69152),
      3,
      3,
      Handle,
      (__int64)&WPP_64b62aa5576434412957a1580be92aa2_Traceguids);
LABEL_73:
    UserSetLastError(5);
    return 0LL;
  }
  if ( (unsigned int)IsProcessDwm(**((_QWORD **)a2 + 57)) )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 4) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
    {
      v4 = 0;
    }
    v14 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v4 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_73;
    v15 = W32GetUserSessionState(WPP_GLOBAL_Control, v18);
    Handle = 53;
    goto LABEL_72;
  }
  v20 = *((_QWORD *)a2 + 57);
  if ( *(_QWORD *)(*((_QWORD *)v8 + 2) + 456LL) != v20 )
  {
    v21 = *(_DWORD *)(v20 + 12) >> 31;
    if ( (unsigned int)IsShellProcess(v20) )
    {
      if ( a3 != 4096 )
      {
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 4) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
        {
          v4 = 0;
        }
        v14 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v4 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_73;
        v15 = W32GetUserSessionState(WPP_GLOBAL_Control, v22);
        Handle = 54;
        goto LABEL_72;
      }
    }
    else
    {
      if ( !(_BYTE)v21 )
      {
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 4) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
        {
          v4 = 0;
        }
        v14 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v4 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_73;
        v15 = W32GetUserSessionState(WPP_GLOBAL_Control, v22);
        Handle = 56;
        goto LABEL_72;
      }
      if ( a3 != 120 )
      {
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 4) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
        {
          v4 = 0;
        }
        v14 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v4 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_73;
        v15 = W32GetUserSessionState(WPP_GLOBAL_Control, v22);
        Handle = 55;
        goto LABEL_72;
      }
    }
    if ( !(unsigned int)Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline()
      && !UIPrivilegeIsolation::Enforced(v23) )
    {
      if ( (_BYTE)v21 )
      {
        LODWORD(v45) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, 28371);
      }
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 4) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
      {
        v4 = 0;
      }
      v14 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v4 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_73;
      v15 = W32GetUserSessionState(WPP_GLOBAL_Control, v25);
      Handle = 57;
      goto LABEL_72;
    }
    if ( (_BYTE)v21
      && UIPrivilegeIsolation::CheckAccess(
           (UIPrivilegeIsolation *)(*((_QWORD *)a2 + 57) + 864LL),
           (const struct tagUIPI_INFO *)(*(_QWORD *)(v3 + 456) + 864LL),
           v24) )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 4) == 0
        || (v27 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v27 = 0;
      }
      v28 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v27 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v29 = W32GetUserSessionState(WPP_GLOBAL_Control, v26);
        LOBYTE(v30) = v28;
        LOBYTE(v31) = v27;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v31,
          v30,
          *(_QWORD *)(v29 + 69152),
          3,
          3,
          58,
          (__int64)&WPP_64b62aa5576434412957a1580be92aa2_Traceguids);
      }
      AccessMode = 0;
    }
  }
  CLockProcessByPid::CLockProcessByPid((__int64)v42, *(int *)(*(_QWORD *)(v3 + 456) + 56LL), 0, v19, 1);
  v34 = Status;
  if ( Status < 0
    || (v45 = 0LL,
        v34 = ObOpenObjectByPointer(Object, 0, 0LL, a3, (POBJECT_TYPE)PsProcessType, AccessMode, &v45),
        v34 < 0) )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 4) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
    {
      v4 = 0;
    }
    v36 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v37 = W32GetUserSessionState(WPP_GLOBAL_Control, v33);
      LOBYTE(v38) = v36;
      LOBYTE(v39) = v4;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v39,
        v38,
        *(_QWORD *)(v37 + 69152),
        3,
        3,
        59,
        (__int64)&WPP_64b62aa5576434412957a1580be92aa2_Traceguids,
        v34);
    }
    v40 = RtlNtStatusToDosError(v34);
    UserSetLastError(v40);
    v35 = 0LL;
  }
  else
  {
    v35 = v45;
  }
  CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)v42);
  return v35;
}
