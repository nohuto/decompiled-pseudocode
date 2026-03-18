/*
 * XREFs of ?xxxVerticalMaximize@AdvancedWindowPos@@YAXPEAUtagWND@@@Z @ 0x1402DAD2C
 * Callers:
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1402A8DA8 (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 * Callees:
 *     ?MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@PEBUtagWND@@UtagRECT@@@Z @ 0x1400227A8 (-MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@PEBUtagWND@@UtagRECT@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004B060 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     GetMonitorWorkRectForWindow @ 0x14009047C (GetMonitorWorkRectForWindow.c)
 *     _MonitorFromRect @ 0x1400913B0 (_MonitorFromRect.c)
 *     _anonymous_namespace_::xxxNormalizeRect @ 0x14014DDEC (_anonymous_namespace_--xxxNormalizeRect.c)
 *     ?ReduceRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@I@Z @ 0x14014EE58 (-ReduceRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@I@Z.c)
 *     ??1?$Win32HMThreadLockBase@UtagKL@@$00$0A@@@QEAA@XZ @ 0x1401DCD80 (--1-$Win32HMThreadLockBase@UtagKL@@$00$0A@@@QEAA@XZ.c)
 *     ??1CThreadLockedCurrentMonitorTopologyPtr@@QEAA@XZ @ 0x140217238 (--1CThreadLockedCurrentMonitorTopologyPtr@@QEAA@XZ.c)
 *     ??0CThreadLockedCurrentMonitorTopologyPtr@@QEAA@XZ @ 0x140227B24 (--0CThreadLockedCurrentMonitorTopologyPtr@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddd @ 0x14026BB14 (WPP_RECORDER_AND_TRACE_SF_dddd.c)
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline @ 0x1402720AC (Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline.c)
 *     ??0CWindowAction@AdvancedWindowPos@@QEAA@W4ActionOptions@1@@Z @ 0x1402A67FC (--0CWindowAction@AdvancedWindowPos@@QEAA@W4ActionOptions@1@@Z.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1402AB3F4 (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 *     ?SetFrameBounds@CWindowAction@AdvancedWindowPos@@QEAAXPEBUtagRECT@@@Z @ 0x1402C23A0 (-SetFrameBounds@CWindowAction@AdvancedWindowPos@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402D775C (-xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

void __fastcall AdvancedWindowPos::xxxVerticalMaximize(struct tagRECT *retstr, struct tagWND *a2)
{
  __int64 v3; // r8
  struct tagRECT v4; // xmm0
  __int64 v5; // rax
  __int64 v6; // rax
  __m128i *MonitorWorkRectForWindow; // rax
  __m128i v8; // xmm0
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  bool v14; // bl
  bool v15; // di
  __int64 v16; // rax
  int v17; // r8d
  int v18; // edx
  struct tagTHREADINFO *v19; // rax
  __int64 v20; // rdx
  const struct CMonitorTopology::MonitorData *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rdx
  struct tagRECT *v24; // rax
  __int64 v25; // r8
  __int64 v26; // rdx
  bool v27; // bl
  bool v28; // si
  __int64 UserSessionState; // rax
  int v30; // r8d
  int v31; // edx
  struct tagRECT v32; // [rsp+68h] [rbp-A0h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+78h] [rbp-90h] BYREF
  CMonitorTopology *v34[4]; // [rsp+88h] [rbp-80h] BYREF
  struct tagRECT v35; // [rsp+A8h] [rbp-60h] BYREF
  _DWORD v36[42]; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v37[40]; // [rsp+160h] [rbp+58h] BYREF

  if ( (unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline() )
  {
    AdvancedWindowPos::CWindowAction::CWindowAction((__int64)v36, 1);
    v3 = *(_QWORD *)&retstr[2].right;
    v36[0] |= 0x30u;
    v36[10] = 3;
    v4 = *WindowMargins::ReduceRect((WindowMargins *)BugCheckParameter3, retstr, (const struct tagWND *)(v3 + 88), 0LL);
    v5 = *(_QWORD *)&retstr[2].right;
    v32 = v4;
    v6 = ValidateHmonitor(*(_QWORD *)(v5 + 256));
    MonitorWorkRectForWindow = (__m128i *)GetMonitorWorkRectForWindow(
                                            (__int64)BugCheckParameter3,
                                            v6,
                                            (const struct tagWND *)retstr);
    v8 = _mm_srli_si128(*MonitorWorkRectForWindow, 8);
    v32.top = HIDWORD(MonitorWorkRectForWindow->m128i_i64[0]);
    v32.bottom = v8.m128i_i32[1];
    AdvancedWindowPos::CWindowAction::SetFrameBounds((AdvancedWindowPos::CWindowAction *)v36, &v32);
    v36[0] |= 0x80u;
    AdvancedWindowPos::xxxApplyWindowAction((__int64)retstr, (__int64)v36, 5);
    CThreadLockedCurrentMonitorTopologyPtr::~CThreadLockedCurrentMonitorTopologyPtr(
      (CThreadLockedCurrentMonitorTopologyPtr *)v37,
      v9);
  }
  else
  {
    v10 = *(_QWORD *)&retstr[2].right;
    v35 = *(struct tagRECT *)(v10 + 88);
    v13 = MonitorFromRect(&v35.left, 0, *(_DWORD *)(v10 + 288));
    if ( v13 )
    {
      v19 = PtiCurrent(v12, v11);
      Win32HM_LockIntoThread<1>((__int64)v19, v13, (__int64 *)BugCheckParameter3);
      CThreadLockedCurrentMonitorTopologyPtr::CThreadLockedCurrentMonitorTopologyPtr(
        (CThreadLockedCurrentMonitorTopologyPtr *)v34,
        v20);
      v32 = v35;
      v21 = CMonitorTopology::MonitorDataFromRect(v34[0], (const struct tagWND *)retstr, &v32);
      v35 = *(struct tagRECT *)anonymous_namespace_::xxxNormalizeRect(
                                 (__int64)&v32,
                                 (const struct tagWND *)retstr,
                                 (__int64)&v35,
                                 v13,
                                 (__int64)v21,
                                 21);
      CThreadLockedCurrentMonitorTopologyPtr::~CThreadLockedCurrentMonitorTopologyPtr(
        (CThreadLockedCurrentMonitorTopologyPtr *)v34,
        v22);
      Win32HMThreadLockBase<tagKL,1,0>::~Win32HMThreadLockBase<tagKL,1,0>(BugCheckParameter3, v23);
      v24 = WindowMargins::ReduceRect((WindowMargins *)BugCheckParameter3, retstr, (const struct tagWND *)&v35, 0LL);
      v25 = *(_QWORD *)&retstr[2].right;
      v35 = *v24;
      LogicalToPhysicalDPIRect(&v35, &v35, *(unsigned int *)(v25 + 288), 0LL);
      v27 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
         && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
         && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
      v28 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v27 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v26);
        LOBYTE(v30) = v28;
        LOBYTE(v31) = v27;
        WPP_RECORDER_AND_TRACE_SF_dddd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v31,
          v30,
          *(_QWORD *)(UserSessionState + 69160),
          4,
          4,
          44,
          (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids,
          v35.left,
          v35.top,
          v35.right,
          v35.bottom);
      }
      WindowArrangement::xxxSetSnapArrangementPos((__int64)retstr, &v35.left, 0, 0);
    }
    else
    {
      v14 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
         && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
         && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
      v15 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v14 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v16 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v11);
        LOBYTE(v17) = v15;
        LOBYTE(v18) = v14;
        WPP_RECORDER_AND_TRACE_SF_dddd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v18,
          v17,
          *(_QWORD *)(v16 + 69160),
          3,
          4,
          43,
          (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids,
          v35.left,
          v35.top,
          v35.right,
          v35.bottom);
      }
    }
  }
}
