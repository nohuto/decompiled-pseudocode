/*
 * XREFs of ?xxxQueryShellForSizeCooperation@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1402AB0E8
 * Callers:
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1402524BC (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004CAC0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400D99FC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14018EC58 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?IsWindowSubjectToShellSizingPolicy@@YA_NPEAUtagWND@@@Z @ 0x1402A77A0 (-IsWindowSubjectToShellSizingPolicy@@YA_NPEAUtagWND@@@Z.c)
 *     ?xxxWindowSizeStartingHandler@CallShell@@YAXPEAUtagWND@@H@Z @ 0x1402C35B0 (-xxxWindowSizeStartingHandler@CallShell@@YAXPEAUtagWND@@H@Z.c)
 */

void __fastcall xxxQueryShellForSizeCooperation(struct MOVESIZEDATA *a1, __int64 a2)
{
  bool v3; // bl
  bool v4; // si
  __int64 UserSessionState; // rax
  int v6; // r8d
  int v7; // edx
  int v8; // r14d
  bool v9; // bl
  bool v10; // si
  __int64 v11; // rax
  int v12; // r8d
  int v13; // edx
  bool v14; // r12
  bool v15; // r13
  __int64 v16; // rax
  int v17; // r8d
  int v18; // edx
  __int64 v19; // rdx
  __int64 v20; // rcx
  bool v21; // r14
  bool v22; // si
  __int64 v23; // rbx
  __int64 v24; // rax
  int v25; // r8d
  int v26; // edx
  int v27; // edi
  __int64 v28; // rbx
  struct tagTHREADINFO *v29; // rax
  int v30; // r8d
  __int64 v31; // rdx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+50h] [rbp-38h] BYREF

  if ( (*((_DWORD *)a1 + 50) & 2) != 0 )
  {
    v3 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v4 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v3 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
      LOBYTE(v6) = v4;
      LOBYTE(v7) = v3;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v7,
        v6,
        *(_QWORD *)(UserSessionState + 69160),
        4,
        1,
        20,
        (__int64)&WPP_924099e52c3f3dd40e1f0060f4cc5e6a_Traceguids);
    }
  }
  else
  {
    v8 = *((_DWORD *)a1 + 44);
    if ( v8 == 1 || v8 == 2 || v8 == 3 || v8 == 6 )
    {
      v14 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
         && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) != 0
         && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
      v15 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v14 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v16 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
        LOBYTE(v17) = v15;
        LOBYTE(v18) = v14;
        WPP_RECORDER_AND_TRACE_SF_d(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v18,
          v17,
          *(_QWORD *)(v16 + 69160),
          4,
          1,
          21,
          (__int64)&WPP_924099e52c3f3dd40e1f0060f4cc5e6a_Traceguids,
          v8);
      }
      if ( IsWindowSubjectToShellSizingPolicy(*((struct tagWND **)a1 + 2), a2) )
      {
        v27 = *((_DWORD *)a1 + 44);
        v28 = *((_QWORD *)a1 + 2);
        v29 = PtiCurrent(v20, v19);
        Win32HM_LockIntoThread<0>((__int64)v29, v28, BugCheckParameter3);
        CallShell::xxxWindowSizeStartingHandler(*((CallShell **)a1 + 2), (struct tagWND *)(unsigned int)(v27 + 9), v30);
        Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v31);
      }
      else
      {
        v21 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
           && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) != 0
           && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
        v22 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v21 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v23 = *((_QWORD *)a1 + 2);
          v24 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v19);
          LOBYTE(v25) = v22;
          LOBYTE(v26) = v21;
          WPP_RECORDER_AND_TRACE_SF_q(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v26,
            v25,
            *(_QWORD *)(v24 + 69160),
            4,
            1,
            23,
            (__int64)&WPP_924099e52c3f3dd40e1f0060f4cc5e6a_Traceguids,
            v23);
        }
      }
    }
    else
    {
      v9 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
      v10 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v11 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
        LOBYTE(v12) = v10;
        LOBYTE(v13) = v9;
        WPP_RECORDER_AND_TRACE_SF_d(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v13,
          v12,
          *(_QWORD *)(v11 + 69160),
          4,
          1,
          22,
          (__int64)&WPP_924099e52c3f3dd40e1f0060f4cc5e6a_Traceguids,
          v8);
      }
    }
  }
}
