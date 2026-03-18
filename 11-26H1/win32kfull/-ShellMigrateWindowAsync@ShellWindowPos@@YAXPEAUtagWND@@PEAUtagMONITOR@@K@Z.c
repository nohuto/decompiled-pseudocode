/*
 * XREFs of ?ShellMigrateWindowAsync@ShellWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@K@Z @ 0x1402DBB00
 * Callers:
 *     NtUserShellMigrateWindow @ 0x1402BED70 (NtUserShellMigrateWindow.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     NextOwnedWindow @ 0x140141B10 (NextOwnedWindow.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x140162868 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     ??1CThreadLockedCurrentMonitorTopologyPtr@@QEAA@XZ @ 0x1402524A4 (--1CThreadLockedCurrentMonitorTopologyPtr@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0CWindowAction@AdvancedWindowPos@@QEAA@W4ActionOptions@1@@Z @ 0x1402C3B6C (--0CWindowAction@AdvancedWindowPos@@QEAA@W4ActionOptions@1@@Z.c)
 *     ?SetMonitor@CWindowAction@AdvancedWindowPos@@QEAAXPEAUtagMONITOR@@_NPEBUtagWND@@@Z @ 0x1402C4FD4 (-SetMonitor@CWindowAction@AdvancedWindowPos@@QEAAXPEAUtagMONITOR@@_NPEBUtagWND@@@Z.c)
 *     ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402EAA34 (-xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall ShellWindowPos::ShellMigrateWindowAsync(ShellWindowPos *this, struct tagWND *a2, struct tagMONITOR *a3)
{
  struct tagTHREADINFO *v3; // r12
  int v4; // r13d
  char v6; // r14
  bool v7; // r15
  unsigned __int8 ThreadId; // al
  __int64 v9; // rdi
  char v10; // bl
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 UserSessionState; // rax
  int v14; // r8d
  int v15; // edx
  __int64 v16; // r8
  _QWORD *i; // rbx
  _OWORD v19[8]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v20; // [rsp+E0h] [rbp-20h]
  __int128 v21; // [rsp+F0h] [rbp-10h]
  __int128 v22; // [rsp+100h] [rbp+0h]
  __int64 v23; // [rsp+110h] [rbp+10h]
  _BYTE v24[40]; // [rsp+118h] [rbp+18h] BYREF
  _OWORD v25[11]; // [rsp+140h] [rbp+40h] BYREF
  __int64 v26; // [rsp+1F0h] [rbp+F0h]

  v3 = (struct tagTHREADINFO *)*((_QWORD *)this + 2);
  v4 = (int)a3;
  if ( v3 == PtiCurrent((__int64)this) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1203);
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (v6 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v6 = 0;
  }
  v7 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    ThreadId = (unsigned __int8)PsGetThreadId(*(PETHREAD *)v3);
    v9 = *(_QWORD *)this;
    v10 = ThreadId;
    UserSessionState = W32GetUserSessionState(v12, v11);
    LOBYTE(v14) = v7;
    LOBYTE(v15) = v6;
    WPP_RECORDER_AND_TRACE_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v15,
      v14,
      *(_QWORD *)(UserSessionState + 69152),
      4,
      4,
      16,
      (__int64)&WPP_92f77d0ad927336281f8f045e6412d0f_Traceguids,
      v9,
      v10);
  }
  AdvancedWindowPos::CWindowAction::CWindowAction((__int64)v19, 0);
  AdvancedWindowPos::CWindowAction::SetMonitor((AdvancedWindowPos::CWindowAction *)v19, a2, 1, 0LL);
  v16 = *((_QWORD *)this + 13);
  *(_QWORD *)&v19[0] |= 0x80000000400uLL;
  *(_QWORD *)&v21 = v3;
  DWORD1(v20) = v4;
  for ( i = NextOwnedWindow(0LL, this, v16); i; i = NextOwnedWindow(i, this, *((_QWORD *)this + 13)) )
  {
    v25[0] = v19[0];
    v25[1] = v19[1];
    v25[2] = v19[2];
    v25[3] = v19[3];
    v25[4] = v19[4];
    v25[5] = v19[5];
    v25[6] = v19[6];
    v25[7] = v19[7];
    v25[8] = v20;
    v25[9] = v21;
    v25[10] = v22;
    v26 = v23;
    AdvancedWindowPos::xxxApplyWindowAction(i, v25, 13LL);
  }
  AdvancedWindowPos::xxxApplyWindowAction(this, v19, 12LL);
  CThreadLockedCurrentMonitorTopologyPtr::~CThreadLockedCurrentMonitorTopologyPtr((CThreadLockedCurrentMonitorTopologyPtr *)v24);
}
