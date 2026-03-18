/*
 * XREFs of ?xxxMigrateWindow@AdvancedWindowPos@@YA?AW4MigrateWindowResult@@PEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@PEBUtagRECT@@PEBV5@W4MigrateWindowOptions@@PEAKPEAU6@@Z @ 0x1402D884C
 * Callers:
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1402A8DA8 (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 *     ?xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z @ 0x1402C2E94 (-xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z.c)
 *     ?xxxFullscreenRestore@CRecalcState@@QEAAXPEAUtagWND@@AEBVCMonitorTopology@@PEAVCRecalcContext@@@Z @ 0x1402C7654 (-xxxFullscreenRestore@CRecalcState@@QEAAXPEAUtagWND@@AEBVCMonitorTopology@@PEAVCRecalcContext@@@.c)
 *     ?xxxMigrate@CRecalcState@@QEAAXPEAUtagWND@@PEAUtagRECT@@PEAVCMonitorTopology@@PEAVCRecalcContext@@@Z @ 0x1402C7E98 (-xxxMigrate@CRecalcState@@QEAAXPEAUtagWND@@PEAUtagRECT@@PEAVCMonitorTopology@@PEAVCRecalcContext.c)
 * Callees:
 *     _GetProp @ 0x14001DE00 (_GetProp.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004B060 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?HasValidCheckpointPosition@@YA_NPEAUtagWND@@@Z @ 0x14014FD30 (-HasValidCheckpointPosition@@YA_NPEAUtagWND@@@Z.c)
 *     GetNormalRect @ 0x1401A86B0 (GetNormalRect.c)
 *     ??1?$Win32HMThreadLockBase@UtagKL@@$00$0A@@@QEAA@XZ @ 0x1401DCD80 (--1-$Win32HMThreadLockBase@UtagKL@@$00$0A@@@QEAA@XZ.c)
 *     _anonymous_namespace_::xxxMigrateWindowCheckpoint @ 0x140227550 (_anonymous_namespace_--xxxMigrateWindowCheckpoint.c)
 *     _anonymous_namespace_::xxxMigrateWindowPosition @ 0x14022B230 (_anonymous_namespace_--xxxMigrateWindowPosition.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??1CSaveRestoreCheckPoint@@QEAA@XZ @ 0x1402A6860 (--1CSaveRestoreCheckPoint@@QEAA@XZ.c)
 *     ?xxxInterceptMigrateWindow@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@PEBUtagRECT@@PEBV4@W4MigrateWindowOptions@@PEAK@Z @ 0x1402D042C (-xxxInterceptMigrateWindow@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@P.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall AdvancedWindowPos::xxxMigrateWindow(
        __int64 a1,
        const struct tagMONITOR *a2,
        CMonitorTopology *a3,
        struct tagRECT *a4,
        CMonitorTopology *a5,
        unsigned int a6,
        __int64 a7,
        __int64 a8)
{
  struct tagTHREADINFO *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int v15; // edi
  char v16; // r14
  __int64 v17; // rdx
  unsigned int v18; // r13d
  __int64 UserSessionState; // rax
  struct tagRECT *v20; // r9
  CHECKPOINT *v22[2]; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v23; // [rsp+50h] [rbp-98h]
  __int64 v24; // [rsp+58h] [rbp-90h]
  __int64 v25; // [rsp+60h] [rbp-88h]
  const struct tagMONITOR *v26; // [rsp+68h] [rbp-80h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+70h] [rbp-78h] BYREF
  __int64 v28; // [rsp+80h] [rbp-68h] BYREF
  __int128 v29; // [rsp+88h] [rbp-60h]

  v23 = a7;
  v25 = a8;
  v24 = (__int64)a4;
  v26 = a2;
  v12 = PtiCurrent(a1, (__int64)a2);
  Win32HM_LockIntoThread<1>((__int64)v12, (__int64)a2, (__int64 *)BugCheckParameter3);
  v15 = 0;
  v16 = 1;
  if ( (*(_DWORD *)(a1 + 384) & 0x10) != 0 && (a6 & 1) != 0 )
  {
    LODWORD(v22[0]) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1152);
  }
  if ( (*(_DWORD *)(a1 + 384) & 0x10) != 0 && v25 )
  {
    LODWORD(v22[0]) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1154);
  }
  if ( (*(_DWORD *)(a1 + 384) & 0x10) != 0 )
  {
    WindowActions::xxxInterceptMigrateWindow((struct tagWND *)a1, a2, a3, a4, a5, a6, v23);
  }
  else
  {
    if ( (a6 & 8) != 0 )
      *(_DWORD *)(a1 + 380) |= 0x200u;
    v18 = 0;
    UserSessionState = W32GetUserSessionState(v14, v13);
    v22[0] = (CHECKPOINT *)GetProp(a1, *(unsigned __int16 *)(UserSessionState + 41334), 1u);
    if ( v22[0] && HasValidCheckpointPosition((struct tagWND *)a1) )
      v18 = anonymous_namespace_::xxxMigrateWindowCheckpoint(
              (struct tagRECT *)a1,
              v22[0],
              (__int64)v26,
              a3,
              (struct tagRECT *)v24,
              (__int64)a5,
              a6,
              v23);
    else
      v16 = 0;
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x20) == 0 )
    {
      v28 = *(_QWORD *)a1;
      *(_OWORD *)v22 = 0LL;
      GetNormalRect((const struct tagWND *)a1, v22);
      v20 = 0LL;
      v29 = *(_OWORD *)v22;
      if ( a5 && !v16 )
      {
        v20 = (struct tagRECT *)v24;
        a3 = a5;
      }
      anonymous_namespace_::xxxMigrateWindowPosition(
        (AdvancedWindowPos *)a1,
        (__int64)v26,
        a3,
        v20,
        a6,
        *(_DWORD *)v23,
        (struct tagRECT *)v25);
      CSaveRestoreCheckPoint::~CSaveRestoreCheckPoint((CSaveRestoreCheckPoint *)&v28);
    }
    if ( (a6 & 8) != 0 )
      *(_DWORD *)(a1 + 380) &= ~0x200u;
    v15 = v18;
  }
  Win32HMThreadLockBase<tagKL,1,0>::~Win32HMThreadLockBase<tagKL,1,0>(BugCheckParameter3, v17);
  return v15;
}
