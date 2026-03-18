/*
 * XREFs of NtUserSendInput @ 0x14024CC60
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x14003874C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x14005F618 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x14005F670 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     UserGetLastError @ 0x1400C90C4 (UserGetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     ??1?$Win32RawLockedItemNoCleanup@UtagINTDDEINFO@@$0A@@@QEAA@XZ @ 0x1401668B0 (--1-$Win32RawLockedItemNoCleanup@UtagINTDDEINFO@@$0A@@@QEAA@XZ.c)
 *     ??0?$Win32RawLockedItemNoCleanup@U_ACCESS_ALLOWED_ACE@@$0A@@@QEAA@PEAU_ACCESS_ALLOWED_ACE@@P6AXPEAX@Z@Z @ 0x1401668DC (--0-$Win32RawLockedItemNoCleanup@U_ACCESS_ALLOWED_ACE@@$0A@@@QEAA@PEAU_ACCESS_ALLOWED_ACE@@P6AXP.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14018EC58 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_dqd @ 0x1401D2D68 (WPP_RECORDER_AND_TRACE_SF_dqd.c)
 *     ?xxxSendInput@@YAIIPEAUtagINPUT@@@Z @ 0x140276408 (-xxxSendInput@@YAIIPEAUtagINPUT@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddD @ 0x1402A484C (WPP_RECORDER_AND_TRACE_SF_ddD.c)
 *     RtlCopyVolatileMemory @ 0x1403423E0 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtUserSendInput(unsigned int a1, volatile void *a2, int a3)
{
  __int64 v3; // r15
  char v4; // di
  char v5; // si
  bool v6; // r14
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx
  __int64 v10; // rdx
  __int64 v11; // rcx
  bool v12; // bl
  __int64 v13; // rax
  int v14; // r8d
  int v15; // edx
  unsigned int v16; // esi
  __int64 v17; // rcx
  bool v18; // bl
  __int64 v19; // rax
  int v20; // r8d
  int v21; // edx
  __int64 CurrentProcessWow64Process; // rax
  struct tagINPUT *v23; // rax
  struct tagINPUT *v24; // r14
  __int64 v25; // rdx
  bool v26; // r14
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  int v30; // r8d
  int v31; // edx
  __int64 v32; // rdx
  _QWORD v34[11]; // [rsp+80h] [rbp-58h] BYREF
  __int64 *v37; // [rsp+F8h] [rbp+20h] BYREF

  v3 = a1;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
    || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
  {
    v5 = 0;
    v4 = 1;
  }
  else
  {
    v4 = 1;
    v5 = 1;
  }
  v6 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v5 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
    LOBYTE(v8) = v6;
    LOBYTE(v9) = v5;
    WPP_RECORDER_AND_TRACE_SF_dqd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v9,
      v8,
      *(_QWORD *)(UserSessionState + 69160));
  }
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v37, "SendInput", 0LL);
  EnterCrit(0LL, 0LL);
  if ( a3 != 40 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
    {
      v4 = 0;
    }
    v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v13 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v10);
      LOBYTE(v14) = v12;
      LOBYTE(v15) = v4;
      WPP_RECORDER_AND_TRACE_SF_Dd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v15,
        v14,
        *(_QWORD *)(v13 + 69160),
        2,
        20,
        21,
        (__int64)&WPP_212fca24ed3e3073058b582086d1855d_Traceguids,
        a3,
        40);
    }
LABEL_17:
    v16 = 0;
    UserSetLastError(87);
    goto LABEL_36;
  }
  if ( !(_DWORD)v3 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
    {
      v4 = 0;
    }
    v18 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v19 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v10);
      LOBYTE(v20) = v18;
      LOBYTE(v21) = v4;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v21,
        v20,
        *(_QWORD *)(v19 + 69160),
        2,
        20,
        22,
        (__int64)&WPP_212fca24ed3e3073058b582086d1855d_Traceguids);
    }
    goto LABEL_17;
  }
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v11, v10);
  ProbeForRead(a2, 40 * v3, CurrentProcessWow64Process != 0 ? 1 : 4);
  v23 = (struct tagINPUT *)Win32AllocPoolWithQuotaZInit(40 * v3, 1769173845LL);
  v24 = v23;
  if ( !v23 )
    ExRaiseStatus(-1073741801);
  RtlCopyVolatileMemory(v23, (const void *)a2, 40 * v3);
  Win32RawLockedItemNoCleanup<_ACCESS_ALLOWED_ACE,0>::Win32RawLockedItemNoCleanup<_ACCESS_ALLOWED_ACE,0>(
    v34,
    (__int64)v24,
    (__int64)Win32FreePool);
  v16 = xxxSendInput(v3, v24);
  Win32RawLockedItemNoCleanup<tagINTDDEINFO,0>::~Win32RawLockedItemNoCleanup<tagINTDDEINFO,0>(v34, v25);
  Win32FreePool(v24);
  if ( v16 != (_DWORD)v3 )
  {
    v17 = *(_QWORD *)&WPP_GLOBAL_Control;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
    {
      v4 = 0;
    }
    v26 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserGetLastError();
      v29 = W32GetUserSessionState(v28, v27);
      LOBYTE(v30) = v26;
      LOBYTE(v31) = v4;
      WPP_RECORDER_AND_TRACE_SF_ddD(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v31,
        v30,
        *(_QWORD *)(v29 + 69160));
    }
  }
LABEL_36:
  UserSessionSwitchLeaveCrit(v17);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion(
    (InputTraceLogging::ThreadLockedPerfRegion *)&v37,
    v32);
  return v16;
}
