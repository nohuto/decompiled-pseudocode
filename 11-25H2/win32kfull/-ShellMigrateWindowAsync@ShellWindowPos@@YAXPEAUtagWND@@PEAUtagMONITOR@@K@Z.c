/*
 * XREFs of ?ShellMigrateWindowAsync@ShellWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@K@Z @ 0x1402C24A8
 * Callers:
 *     NtUserShellMigrateWindow @ 0x1402A14B0 (NtUserShellMigrateWindow.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x140127EFC (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     NextOwnedWindow @ 0x140142930 (NextOwnedWindow.c)
 *     ??1CThreadLockedCurrentMonitorTopologyPtr@@QEAA@XZ @ 0x140217238 (--1CThreadLockedCurrentMonitorTopologyPtr@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0CWindowAction@AdvancedWindowPos@@QEAA@W4ActionOptions@1@@Z @ 0x1402A67FC (--0CWindowAction@AdvancedWindowPos@@QEAA@W4ActionOptions@1@@Z.c)
 *     ?SetMonitor@CWindowAction@AdvancedWindowPos@@QEAAXPEAUtagMONITOR@@_NPEBUtagWND@@@Z @ 0x1402A8174 (-SetMonitor@CWindowAction@AdvancedWindowPos@@QEAAXPEAUtagMONITOR@@_NPEBUtagWND@@@Z.c)
 *     ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402D775C (-xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
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
  __int64 v18; // rdx
  _OWORD v20[8]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v21; // [rsp+E0h] [rbp-20h]
  __int128 v22; // [rsp+F0h] [rbp-10h]
  __int64 v23; // [rsp+100h] [rbp+0h]
  _BYTE v24[40]; // [rsp+108h] [rbp+8h] BYREF
  _OWORD v25[10]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v26; // [rsp+1D0h] [rbp+D0h]

  v3 = (struct tagTHREADINFO *)*((_QWORD *)this + 2);
  v4 = (int)a3;
  if ( v3 == PtiCurrent((__int64)this, (__int64)a2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1202);
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
    || (v6 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
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
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v15,
      v14,
      *(_QWORD *)(UserSessionState + 69160),
      4,
      4,
      16,
      (__int64)&WPP_e1166448f6f3316d3174cdc4436fb45b_Traceguids,
      v9,
      v10);
  }
  AdvancedWindowPos::CWindowAction::CWindowAction((__int64)v20, 0);
  AdvancedWindowPos::CWindowAction::SetMonitor((AdvancedWindowPos::CWindowAction *)v20, a2, 1, 0LL);
  v16 = *((_QWORD *)this + 13);
  *(_QWORD *)&v20[0] |= 0x80000000400uLL;
  *(_QWORD *)&v22 = v3;
  DWORD1(v21) = v4;
  for ( i = NextOwnedWindow(0LL, this, v16); i; i = NextOwnedWindow(i, this, *((_QWORD *)this + 13)) )
  {
    v25[0] = v20[0];
    v25[1] = v20[1];
    v25[2] = v20[2];
    v25[3] = v20[3];
    v25[4] = v20[4];
    v25[5] = v20[5];
    v25[6] = v20[6];
    v25[7] = v20[7];
    v25[8] = v21;
    v25[9] = v22;
    v26 = v23;
    AdvancedWindowPos::xxxApplyWindowAction(i, v25, 13LL);
  }
  AdvancedWindowPos::xxxApplyWindowAction(this, v20, 12LL);
  CThreadLockedCurrentMonitorTopologyPtr::~CThreadLockedCurrentMonitorTopologyPtr(
    (CThreadLockedCurrentMonitorTopologyPtr *)v24,
    v18);
}
