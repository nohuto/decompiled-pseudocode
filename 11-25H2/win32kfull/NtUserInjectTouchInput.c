/*
 * XREFs of NtUserInjectTouchInput @ 0x14024A8D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x14003874C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x14005F618 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     UserGetLastError @ 0x1400C90C4 (UserGetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     ??1?$Win32RawLockedItemNoCleanup@UtagINTDDEINFO@@$0A@@@QEAA@XZ @ 0x1401668B0 (--1-$Win32RawLockedItemNoCleanup@UtagINTDDEINFO@@$0A@@@QEAA@XZ.c)
 *     ??0?$Win32RawLockedItemNoCleanup@U_ACCESS_ALLOWED_ACE@@$0A@@@QEAA@PEAU_ACCESS_ALLOWED_ACE@@P6AXPEAX@Z@Z @ 0x1401668DC (--0-$Win32RawLockedItemNoCleanup@U_ACCESS_ALLOWED_ACE@@$0A@@@QEAA@PEAU_ACCESS_ALLOWED_ACE@@P6AXP.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14018EC58 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_dq @ 0x1401D11CC (WPP_RECORDER_AND_TRACE_SF_dq.c)
 *     xxxInjectTouchInput @ 0x14023D0FC (xxxInjectTouchInput.c)
 *     RtlCopyVolatileMemory @ 0x1403423E0 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtUserInjectTouchInput(__int64 a1, volatile void *a2)
{
  __int64 v2; // r12
  char v3; // di
  char v4; // bl
  bool v5; // si
  __int64 UserSessionState; // rax
  int v7; // r8d
  int v8; // edx
  __int64 v9; // rdx
  bool v10; // bl
  __int64 v11; // rax
  int v12; // r8d
  int v13; // edx
  int v14; // esi
  struct tagPOINTER_TOUCH_INFO *v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 CurrentProcessWow64Process; // rax
  struct tagPOINTER_TOUCH_INFO *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  bool v22; // r12
  __int64 v23; // rax
  int v24; // r8d
  int v25; // edx
  bool v26; // si
  bool v27; // r12
  __int64 v28; // rax
  int v29; // r8d
  int v30; // edx
  bool v31; // r14
  char LastError; // bl
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  int v36; // r8d
  int v37; // edx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 *v41[2]; // [rsp+68h] [rbp-60h] BYREF
  _QWORD v42[10]; // [rsp+78h] [rbp-50h] BYREF
  char v43; // [rsp+D0h] [rbp+8h]
  char v45; // [rsp+E0h] [rbp+18h] BYREF
  bool v46; // [rsp+E8h] [rbp+20h]

  v43 = a1;
  v2 = (unsigned int)a1;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
    || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
  {
    v4 = 0;
    v3 = 1;
  }
  else
  {
    v3 = 1;
    v4 = 1;
  }
  v5 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    LOBYTE(v7) = v5;
    LOBYTE(v8) = v4;
    WPP_RECORDER_AND_TRACE_SF_dq(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v8,
      v7,
      *(_QWORD *)(UserSessionState + 69160));
  }
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v41, "InjectTouchInput", 0LL);
  EnterCrit(1LL, 0LL);
  v45 = 0;
  EnterLeaveCritMitRitHandOffHazard::Enter((EnterLeaveCritMitRitHandOffHazard *)&v45);
  InputExtensibilityCalloutGuard();
  if ( v45 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
    {
      v3 = 0;
    }
    v10 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v3 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v11 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v9);
      LOBYTE(v12) = v10;
      LOBYTE(v13) = v3;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v13,
        v12,
        *(_QWORD *)(v11 + 69160),
        2,
        20,
        31,
        (__int64)&WPP_212fca24ed3e3073058b582086d1855d_Traceguids);
    }
    v14 = 0;
    UserSetLastError(5);
  }
  else
  {
    v15 = 0LL;
    if ( (unsigned int)(v2 - 1) > 0xFF )
    {
      v26 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
         && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) != 0
         && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 2u;
      v27 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v26 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v28 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v9);
        LOBYTE(v29) = v27;
        LOBYTE(v30) = v26;
        WPP_RECORDER_AND_TRACE_SF_d(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v30,
          v29,
          *(_QWORD *)(v28 + 69160),
          2,
          20,
          32,
          (__int64)&WPP_212fca24ed3e3073058b582086d1855d_Traceguids,
          v43);
      }
      v14 = 0;
      UserSetLastError(87);
    }
    else
    {
      EtwTraceTouchInjectionStart();
      CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v17, v16);
      ProbeForRead(a2, 144 * v2, CurrentProcessWow64Process != 0 ? 1 : 4);
      v19 = (struct tagPOINTER_TOUCH_INFO *)Win32AllocPoolWithQuotaZInit(144 * v2, 1953067861LL);
      v15 = v19;
      if ( !v19 )
        ExRaiseStatus(-1073741801);
      RtlCopyVolatileMemory(v19, (const void *)a2, 144 * v2);
      Win32RawLockedItemNoCleanup<_ACCESS_ALLOWED_ACE,0>::Win32RawLockedItemNoCleanup<_ACCESS_ALLOWED_ACE,0>(
        v42,
        (__int64)v15,
        (__int64)Win32FreePool);
      v14 = xxxInjectTouchInput((unsigned int)v2, v15);
      if ( !v14 )
      {
        v22 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
           && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) != 0
           && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 2u;
        v46 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v22 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v23 = W32GetUserSessionState(v21, v20);
          LOBYTE(v24) = v46;
          LOBYTE(v25) = v22;
          WPP_RECORDER_AND_TRACE_SF_(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v25,
            v24,
            *(_QWORD *)(v23 + 69160),
            2,
            20,
            34,
            (__int64)&WPP_212fca24ed3e3073058b582086d1855d_Traceguids);
        }
      }
      Win32RawLockedItemNoCleanup<tagINTDDEINFO,0>::~Win32RawLockedItemNoCleanup<tagINTDDEINFO,0>(v42, v20);
    }
    if ( v15 )
      Win32FreePool(v15);
    EtwTraceTouchInjectionStop();
    if ( !v14 )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
      {
        v3 = 0;
      }
      v31 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v3 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LastError = UserGetLastError();
        v35 = W32GetUserSessionState(v34, v33);
        LOBYTE(v36) = v31;
        LOBYTE(v37) = v3;
        WPP_RECORDER_AND_TRACE_SF_d(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v37,
          v36,
          *(_QWORD *)(v35 + 69160),
          2,
          20,
          35,
          (__int64)&WPP_212fca24ed3e3073058b582086d1855d_Traceguids,
          LastError);
      }
    }
  }
  LeaveMitRitHazardCrit();
  UserSessionSwitchLeaveCrit(v38);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion(
    (InputTraceLogging::ThreadLockedPerfRegion *)v41,
    v39);
  return v14;
}
