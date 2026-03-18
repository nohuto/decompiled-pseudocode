/*
 * XREFs of ?xxxProcessAsyncWindowAction@AdvancedWindowPos@@YAXPEAUHWND__@@_J@Z @ 0x1402D94B8
 * Callers:
 *     xxxProcessEventMessage @ 0x14024572C (xxxProcessEventMessage.c)
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _IsTopLevelWindow @ 0x140037CA0 (_IsTopLevelWindow.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004CAC0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1400653B0 (HMValidateHandleNoSecure.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400D99FC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_qS @ 0x1401D31A0 (WPP_RECORDER_AND_TRACE_SF_qS.c)
 *     ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402D775C (-xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z.c)
 */

void __fastcall AdvancedWindowPos::xxxProcessAsyncWindowAction(AdvancedWindowPos *this, __int64 a2)
{
  HWND v2; // rbx
  char v3; // di
  char v4; // bp
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rcx
  struct tagTHREADINFO *v9; // rax
  __int64 v10; // rdx
  bool v11; // bl
  __int64 UserSessionState; // rax
  int v13; // r8d
  int v14; // edx
  bool v15; // bl
  __int64 v16; // rax
  int v17; // r8d
  int v18; // edx
  __int64 v19; // r9
  const wchar_t *v20; // rax
  ULONG_PTR BugCheckParameter3[2]; // [rsp+50h] [rbp-18h] BYREF

  v2 = (HWND)a2;
  v3 = 1;
  LOBYTE(a2) = 1;
  v4 = (char)this;
  v5 = HMValidateHandleNoSecure((__int64)this, a2);
  v7 = v5;
  if ( v5 && IsTopLevelWindow(v5) )
  {
    v9 = PtiCurrent(v8, v6);
    Win32HM_LockIntoThread<0>((__int64)v9, v7, BugCheckParameter3);
    if ( (*(_DWORD *)v2 & 0x200) != 0 && ((_DWORD)v2[1] & 0x10000) != 0 && (*(_DWORD *)(v7 + 380) & 0x10) == 0 )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
      {
        v3 = 0;
      }
      v11 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v3 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v10);
        LOBYTE(v13) = v11;
        LOBYTE(v14) = v3;
        WPP_RECORDER_AND_TRACE_SF_q(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v14,
          v13,
          *(_QWORD *)(UserSessionState + 69160),
          3,
          4,
          120,
          (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids,
          v4);
      }
    }
    else
    {
      *((_DWORD *)v2 + 1) &= ~0x800u;
      *((_QWORD *)v2 + 18) = 0LL;
      *((_BYTE *)v2 + 160) = 0;
      AdvancedWindowPos::xxxApplyWindowAction(v7, (__int64)v2, 3);
    }
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v10);
  }
  else
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
    {
      v3 = 0;
    }
    v15 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v3 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v16 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v6);
      LOBYTE(v17) = v15;
      LOBYTE(v18) = v3;
      v19 = *(_QWORD *)(v16 + 69160);
      v20 = L"valid";
      if ( !v7 )
        v20 = L"top level";
      WPP_RECORDER_AND_TRACE_SF_qS(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v18,
        v17,
        v19,
        3,
        4,
        119,
        (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids,
        v4,
        (__int64)v20);
    }
  }
}
