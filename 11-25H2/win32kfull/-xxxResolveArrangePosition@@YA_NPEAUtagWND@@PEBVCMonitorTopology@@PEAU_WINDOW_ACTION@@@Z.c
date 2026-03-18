/*
 * XREFs of ?xxxResolveArrangePosition@@YA_NPEAUtagWND@@PEBVCMonitorTopology@@PEAU_WINDOW_ACTION@@@Z @ 0x1402D2C50
 * Callers:
 *     ?xxxApplyActionAsyncImpl@@YA_NPEAUtagWND@@PEAVCMonitorTopology@@PEAU_WINDOW_ACTION@@@Z @ 0x1402CE4F4 (-xxxApplyActionAsyncImpl@@YA_NPEAUtagWND@@PEAVCMonitorTopology@@PEAU_WINDOW_ACTION@@@Z.c)
 *     ?xxxApplyActionOld@WindowActions@@YAKPEAUtagWND@@_NPEAU_WINDOW_ACTION@@@Z @ 0x1402CE998 (-xxxApplyActionOld@WindowActions@@YAKPEAUtagWND@@_NPEAU_WINDOW_ACTION@@@Z.c)
 * Callees:
 *     ?MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@UtagRECT@@KK@Z @ 0x140022A24 (-MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@UtagRECT@@KK@Z.c)
 *     CalculateLogicalMonitorRect @ 0x14002428C (CalculateLogicalMonitorRect.c)
 *     ?IsArranged@@YA_NPEBUtagWND@@@Z @ 0x1400262EC (-IsArranged@@YA_NPEBUtagWND@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ @ 0x14003D91C (--1-$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004CAC0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?Get@CHECKPOINT@@SAPEAU1@PEBUtagWND@@@Z @ 0x1401A86E0 (-Get@CHECKPOINT@@SAPEAU1@PEBUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_sq @ 0x140272638 (WPP_RECORDER_AND_TRACE_SF_sq.c)
 *     ?xxxUpdateActionForArrangeMigrate@@YA_NPEAUtagWND@@PEAUtagMONITOR@@AEBUtagRECT@@2GW4_SHELL_MIGRATE_WINDOW_REASON@@U3@PEAKPEAU_WINDOW_ACTION@@@Z @ 0x1402D2F90 (-xxxUpdateActionForArrangeMigrate@@YA_NPEAUtagWND@@PEAUtagMONITOR@@AEBUtagRECT@@2GW4_SHELL_MIGRA.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

char __fastcall xxxResolveArrangePosition(
        struct tagWND *a1,
        const struct CMonitorTopology *a2,
        struct _WINDOW_ACTION *a3)
{
  int v3; // eax
  struct CHECKPOINT *v6; // rdx
  char v7; // si
  bool v8; // r15
  bool v9; // al
  char v10; // r13
  char v11; // r12
  __int64 v12; // rbx
  __int64 UserSessionState; // rax
  int v14; // r8d
  int v15; // edx
  __int64 v16; // r9
  const char *v17; // rax
  int v18; // r13d
  LONG v19; // ecx
  const struct CMonitorTopology::MonitorData *v20; // r12
  __int64 v21; // rax
  char v22; // cl
  struct tagRECT *v23; // rax
  struct tagRECT v24; // xmm6
  const struct CMonitorTopology::MonitorData *v25; // rax
  int v26; // ecx
  __m128i v27; // xmm0
  unsigned __int16 v28; // r15
  __int64 v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  struct tagTHREADINFO *v32; // rax
  __int64 v33; // rdx
  int v35; // [rsp+28h] [rbp-89h]
  CMonitorTopology *v36; // [rsp+58h] [rbp-59h] BYREF
  ULONG_PTR BugCheckParameter3[3]; // [rsp+60h] [rbp-51h] BYREF
  struct tagRECT v38; // [rsp+78h] [rbp-39h] BYREF
  __m128i v39; // [rsp+88h] [rbp-29h] BYREF
  __int128 v40; // [rsp+98h] [rbp-19h] BYREF
  __m128i v41; // [rsp+A8h] [rbp-9h] BYREF

  v3 = *(_DWORD *)a3;
  v36 = a2;
  if ( (v3 & 0xC0) == 0 || (v3 & 0x20) != 0 && *((_DWORD *)a3 + 10) == 3 || (*((_DWORD *)a3 + 1) & 0xE0) != 0 )
    return 1;
  v8 = (v6 = CHECKPOINT::Get(a1, (__int64)a2),
        *(_QWORD *)&v40 = v6,
        v7 = 0,
        (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) != 0)
    && (*((_DWORD *)v6 + 4) & 8) != 0
    || IsArranged(a1) && (*(_DWORD *)a3 & 0x20) != 0 && *((_DWORD *)a3 + 10) == 2;
  v9 = (*(_DWORD *)a3 & 0x20) != 0 ? *((_DWORD *)a3 + 10) == 3 : IsArranged(a1);
  if ( !v9 && !v8 || (*(_DWORD *)a3 & 0x400) != 0 )
    return 1;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
    || (v10 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v10 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v11 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v11 = 0;
  }
  if ( v10 || v11 )
  {
    v12 = *(_QWORD *)a1;
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v6);
    LOBYTE(v14) = v11;
    LOBYTE(v15) = v10;
    v16 = *(_QWORD *)(UserSessionState + 69160);
    v17 = "minimized";
    if ( !v8 )
      v17 = (const char *)&unk_140351139;
    WPP_RECORDER_AND_TRACE_SF_sq(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v15,
      v14,
      v16,
      5,
      4,
      98,
      (__int64)&WPP_fade6bfb655b3fa6b02839cd02f2d6ee_Traceguids,
      (__int64)v17,
      v12);
  }
  v18 = v8 + 1;
  if ( (*(_DWORD *)a3 & 0x80u) == 0 )
  {
    v38 = *(struct tagRECT *)((char *)a3 + 44);
  }
  else
  {
    v19 = *((_DWORD *)a3 + 21);
    v38.left = *((_DWORD *)a3 + 20);
    v38.top = v19;
    v38.right = v38.left;
    v38.bottom = v19;
  }
  v20 = CMonitorTopology::MonitorDataFromRect(v36, &v38, 2, 0x12u);
  v21 = *((_QWORD *)a1 + 5);
  v22 = *(_BYTE *)(v21 + 31) & 0x20;
  if ( v22 )
    v40 = *(_OWORD *)(v40 + 36);
  else
    v38 = *(struct tagRECT *)(v21 + 88);
  v23 = &v38;
  if ( v22 )
    v23 = (struct tagRECT *)&v40;
  v24 = *v23;
  v38 = *v23;
  v25 = CMonitorTopology::MonitorDataFromRect(v36, &v38, 2, 0x12u);
  v26 = *((_DWORD *)a3 + 1);
  v39 = 0LL;
  if ( (v26 & 0x100) != 0 )
    v27 = *(__m128i *)((char *)a3 + 60);
  else
    v27 = *(__m128i *)((char *)v25 + 24);
  v39 = v27;
  if ( (v26 & 0x200) != 0 )
    v28 = *((_WORD *)a3 + 38);
  else
    v28 = *((_WORD *)v25 + 20);
  v41 = *CalculateLogicalMonitorRect(
           (__m128i *)&v38,
           &v39,
           v28,
           (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) >> 8) & 0x1FF,
           0);
  v29 = ValidateHmonitor(*(_QWORD *)v20);
  v32 = PtiCurrent(v31, v30);
  Win32HM_LockIntoThread<0>((__int64)v32, v29, BugCheckParameter3);
  LODWORD(v36) = 0;
  LOWORD(v35) = v28;
  v38 = v24;
  if ( (unsigned __int8)xxxUpdateActionForArrangeMigrate(a1, v29, &v41, &v39, v35, v18, &v38, &v36, a3) )
  {
    *(_DWORD *)a3 &= ~0x80u;
    *((_QWORD *)a3 + 10) = 0LL;
    v7 = 1;
  }
  Win32HMThreadLockBase<tagKL,0,0>::~Win32HMThreadLockBase<tagKL,0,0>(BugCheckParameter3, v33);
  return v7;
}
