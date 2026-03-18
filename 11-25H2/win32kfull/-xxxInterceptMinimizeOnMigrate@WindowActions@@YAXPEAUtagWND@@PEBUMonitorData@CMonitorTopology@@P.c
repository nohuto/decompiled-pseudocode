/*
 * XREFs of ?xxxInterceptMinimizeOnMigrate@WindowActions@@YAXPEAUtagWND@@PEBUMonitorData@CMonitorTopology@@PEAK@Z @ 0x1402D0E60
 * Callers:
 *     ?GetMigrateMonitor@CRecalcState@@QEAAPEAUtagMONITOR@@PEAUtagWND@@PEAVCRecalcContext@@PEBUMonitorData@CMonitorTopology@@@Z @ 0x1402C4458 (-GetMigrateMonitor@CRecalcState@@QEAAPEAUtagMONITOR@@PEAUtagWND@@PEAVCRecalcContext@@PEBUMonitor.c)
 * Callees:
 *     ?IsArranged@@YA_NPEBUtagWND@@@Z @ 0x1400262EC (-IsArranged@@YA_NPEBUtagWND@@@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x140030264 (xxxSendTransformableMessageTimeout.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ @ 0x14003D91C (--1-$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004CAC0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400D99FC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     _anonymous_namespace_::TestFeature @ 0x14014C74C (_anonymous_namespace_--TestFeature.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x14018C8D4 (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     ?LogicalWorkArea@MonitorData@CMonitorTopology@@QEBA?AUtagRECT@@PEBUtagWND@@@Z @ 0x14026BFEC (-LogicalWorkArea@MonitorData@CMonitorTopology@@QEBA-AUtagRECT@@PEBUtagWND@@@Z.c)
 *     ?SetDisplayChange@@YAXPEAU_WINDOW_ACTION@@@Z @ 0x1402CCA9C (-SetDisplayChange@@YAXPEAU_WINDOW_ACTION@@@Z.c)
 *     ?SetMonitorMovePoint@@YAXPEAU_WINDOW_ACTION@@PEBUtagMONITOR@@@Z @ 0x1402CCBD0 (-SetMonitorMovePoint@@YAXPEAU_WINDOW_ACTION@@PEBUtagMONITOR@@@Z.c)
 *     ?xxxUpdateActionForArrangeMigrate@@YA_NPEAUtagWND@@PEAUtagMONITOR@@AEBUtagRECT@@2GW4_SHELL_MIGRATE_WINDOW_REASON@@U3@PEAKPEAU_WINDOW_ACTION@@@Z @ 0x1402D2F90 (-xxxUpdateActionForArrangeMigrate@@YA_NPEAUtagWND@@PEAUtagMONITOR@@AEBUtagRECT@@2GW4_SHELL_MIGRA.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

void __fastcall WindowActions::xxxInterceptMinimizeOnMigrate(
        WindowActions *this,
        struct tagWND *a2,
        const struct CMonitorTopology::MonitorData *a3,
        unsigned int *a4)
{
  char v7; // si
  char v8; // di
  __int64 v9; // rbx
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  __int64 v13; // rdx
  __int64 v14; // rcx
  char v15; // di
  char v16; // bl
  __int64 v17; // rax
  int v18; // r8d
  int v19; // edx
  const struct tagMONITOR *v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  struct tagTHREADINFO *v24; // rax
  __int16 v25; // bx
  __int128 v26; // xmm6
  struct tagRECT *v27; // rax
  __int64 v28; // rdx
  int v29; // eax
  __int128 v30; // xmm0
  char v31; // r14
  char v32; // si
  __int64 v33; // rax
  int v34; // r8d
  int v35; // edx
  int v36; // [rsp+28h] [rbp-E0h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+78h] [rbp-90h] BYREF
  __int128 v38; // [rsp+88h] [rbp-80h] BYREF
  int v39; // [rsp+98h] [rbp-70h] BYREF
  int v40; // [rsp+9Ch] [rbp-6Ch]
  int v41; // [rsp+C0h] [rbp-48h]
  __int128 v42; // [rsp+D4h] [rbp-34h]
  struct tagRECT v43; // [rsp+F8h] [rbp-10h] BYREF

  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
    || (v7 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v7 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v8 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v8 = 0;
  }
  if ( v7 || v8 )
  {
    v9 = *(_QWORD *)this;
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
    LOBYTE(v11) = v8;
    LOBYTE(v12) = v7;
    WPP_RECORDER_AND_TRACE_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v12,
      v11,
      *(_QWORD *)(UserSessionState + 69160),
      5,
      4,
      86,
      (__int64)&WPP_fade6bfb655b3fa6b02839cd02f2d6ee_Traceguids,
      v9);
  }
  memset_0(&v39, 0, 0x60uLL);
  SetDisplayChange((struct _WINDOW_ACTION *)&v39);
  v39 |= 0x20u;
  v41 = 2;
  v14 = *(_QWORD *)&WPP_GLOBAL_Control;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
    || (v15 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v15 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v16 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v16 = 0;
  }
  if ( v15 || v16 )
  {
    v17 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v13);
    LOBYTE(v18) = v16;
    LOBYTE(v19) = v15;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v19,
      v18,
      *(_QWORD *)(v17 + 69160),
      5,
      4,
      87,
      (__int64)&WPP_fade6bfb655b3fa6b02839cd02f2d6ee_Traceguids);
  }
  v20 = *(const struct tagMONITOR **)(GetDispInfo(v14) + 104);
  if ( anonymous_namespace_::TestFeature(1LL, v21) && IsArranged(this) )
  {
    v24 = PtiCurrent(v23, v22);
    Win32HM_LockIntoThread<0>((__int64)v24, (__int64)v20, BugCheckParameter3);
    v25 = *((_WORD *)a2 + 20);
    v26 = *(_OWORD *)(*((_QWORD *)this + 5) + 88LL);
    v27 = CMonitorTopology::MonitorData::LogicalWorkArea(a2, &v43, this);
    LOWORD(v36) = v25;
    v38 = v26;
    if ( !(unsigned __int8)xxxUpdateActionForArrangeMigrate(this, v20, v27, (char *)a2 + 24, v36, 2, &v38, a3, &v39) )
    {
      Win32HMThreadLockBase<tagKL,0,0>::~Win32HMThreadLockBase<tagKL,0,0>(BugCheckParameter3, v28);
      return;
    }
    Win32HMThreadLockBase<tagKL,0,0>::~Win32HMThreadLockBase<tagKL,0,0>(BugCheckParameter3, v28);
  }
  v29 = v39;
  if ( (v39 & 6) == 0 )
  {
    SetMonitorMovePoint((struct _WINDOW_ACTION *)&v39, v20);
    v29 = v39;
  }
  v30 = *(_OWORD *)((char *)a2 + 24);
  v40 |= 0x100u;
  v39 = v29 | 0x100;
  v42 = v30;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
    || (v31 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v31 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v32 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v32 = 0;
  }
  if ( v31 || v32 )
  {
    v33 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v22);
    LOBYTE(v34) = v32;
    LOBYTE(v35) = v31;
    WPP_RECORDER_AND_TRACE_SF_dddddd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v35,
      v34,
      *(_QWORD *)(v33 + 69160),
      5,
      4,
      88,
      (__int64)&WPP_fade6bfb655b3fa6b02839cd02f2d6ee_Traceguids,
      v42,
      SBYTE4(v42),
      SBYTE8(v42),
      SBYTE12(v42),
      BYTE8(v42) - v42,
      HIDWORD(v42) - DWORD1(v42));
  }
  xxxSendTransformableMessageTimeout(
    (struct tagTHREADINFO **)this,
    838LL,
    0LL,
    (struct tagDRAWITEMSTRUCT *)&v39,
    0,
    0,
    0LL,
    1,
    1);
}
