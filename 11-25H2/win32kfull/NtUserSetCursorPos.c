/*
 * XREFs of NtUserSetCursorPos @ 0x14005EFD0
 * Callers:
 *     <none>
 * Callees:
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x14003874C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ?zzzSetCursorPos@@YA_NHH@Z @ 0x14005F190 (-zzzSetCursorPos@@YA_NHH@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x14005F618 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x14005F670 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     UserGetLastError @ 0x1400C90C4 (UserGetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14018EC58 (WPP_RECORDER_AND_TRACE_SF_d.c)
 */

_BOOL8 __fastcall NtUserSetCursorPos(__int64 a1, __int64 a2)
{
  int v2; // ebp
  int v3; // r14d
  char v4; // di
  bool v5; // bl
  bool v6; // si
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx
  bool v10; // al
  __int64 v11; // rcx
  _BOOL8 v12; // rbp
  bool v14; // si
  char LastError; // bl
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // r8d
  int v20; // edx
  __int64 *v21; // [rsp+90h] [rbp+18h] BYREF

  v2 = a2;
  v3 = a1;
  v4 = 1;
  v5 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
  v6 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v5 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    LOBYTE(v8) = v6;
    LOBYTE(v9) = v5;
    WPP_RECORDER_AND_TRACE_SF_Dd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v9,
      v8,
      *(_QWORD *)(UserSessionState + 69160),
      4,
      20,
      48,
      (__int64)&WPP_212fca24ed3e3073058b582086d1855d_Traceguids,
      v3,
      v2);
  }
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v21, "SetCursorPos", 0LL);
  EnterCrit(0LL, 0LL);
  v10 = zzzSetCursorPos(v3, v2);
  v12 = v10;
  if ( !v10 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
    {
      v4 = 0;
    }
    v14 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LastError = UserGetLastError();
      v18 = W32GetUserSessionState(v17, v16);
      LOBYTE(v19) = v14;
      LOBYTE(v20) = v4;
      WPP_RECORDER_AND_TRACE_SF_d(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v20,
        v19,
        *(_QWORD *)(v18 + 69160),
        2,
        20,
        49,
        (__int64)&WPP_212fca24ed3e3073058b582086d1855d_Traceguids,
        LastError);
    }
  }
  UserSessionSwitchLeaveCrit(v11);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v21);
  return v12;
}
