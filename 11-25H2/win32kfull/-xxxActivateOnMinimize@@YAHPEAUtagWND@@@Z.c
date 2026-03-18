/*
 * XREFs of ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1401A77E4
 * Callers:
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1400268FC (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     xxxMinimizeHungWindow @ 0x14026BDFC (xxxMinimizeHungWindow.c)
 * Callees:
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14001BB04 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?IsWindowCloaked@@YA_NPEBUtagWND@@@Z @ 0x140022220 (-IsWindowCloaked@@YA_NPEBUtagWND@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004CAC0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     GetLastTopMostWindow @ 0x140065958 (GetLastTopMostWindow.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1400D897C (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     GetThreadDesktopWindow @ 0x1401785A0 (GetThreadDesktopWindow.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14018EC58 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     SkipWindowOnMonitor @ 0x1401A7B50 (SkipWindowOnMonitor.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundEffects@@@Z @ 0x140279134 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     ?ForceForegroundChangeOnMinimize@@YA_NPEAUtagWND@@0@Z @ 0x1402DEF64 (-ForceForegroundChangeOnMinimize@@YA_NPEAUtagWND@@0@Z.c)
 */

__int64 __fastcall xxxActivateOnMinimize(struct tagWND *a1, __int64 a2)
{
  int v3; // r14d
  struct tagTHREADINFO *v4; // r13
  __int64 v5; // rdx
  BOOL v6; // ebp
  int v7; // r15d
  __int64 ThreadDesktopWindow; // rax
  const struct tagWND *v9; // rbx
  const struct tagWND *v10; // rsi
  const struct tagWND *v11; // rdi
  __int64 v12; // r8
  unsigned int v13; // r15d
  bool v14; // bp
  bool v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct tagTHREADINFO *v18; // rax
  __int64 v20; // r8
  char v21; // r9
  __int64 v22; // rbx
  __int64 v23; // rdi
  __int64 v24; // rax
  int v25; // r8d
  int v26; // edx
  __int64 LastTopMostWindow; // rax
  bool v28; // di
  bool v29; // bp
  char ThreadId; // bl
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 UserSessionState; // rax
  int v34; // r8d
  int v35; // edx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+50h] [rbp-38h] BYREF

  v3 = 0;
  v4 = PtiCurrent((__int64)a1, a2);
  v5 = *((_QWORD *)a1 + 5);
  v6 = *(_QWORD *)(*((_QWORD *)v4 + 59) + 136LL) != 0LL;
  v7 = *(_DWORD *)(v5 + 236);
  if ( v7 != 1 || (LastTopMostWindow = GetLastTopMostWindow((__int64)a1, v5)) == 0 )
  {
    ThreadDesktopWindow = *((_QWORD *)a1 + 13);
    goto LABEL_3;
  }
  v9 = *(const struct tagWND **)(LastTopMostWindow + 88);
  while ( 1 )
  {
    v10 = v6 ? *(const struct tagWND **)(*((_QWORD *)v4 + 59) + 136LL) : v9;
    v11 = 0LL;
    if ( v10 )
    {
      do
      {
        if ( (*(_BYTE *)(_HMPheFromObject(v10) + 25) & 1) == 0 )
        {
          v12 = *((_QWORD *)v10 + 5);
          if ( (*(_BYTE *)(v12 + 27) & 8) == 0
            && (*(_BYTE *)(v12 + 31) & 0x18) == 0x10
            && !IsWindowCloaked(v10)
            && (v21 & 0x20) == 0
            && (v7 != 1 || *(_DWORD *)(v20 + 236) == 1)
            && !(unsigned int)SkipWindowOnMonitor(v10) )
          {
            if ( *(char *)(*((_QWORD *)v10 + 5) + 24LL) >= 0 )
              break;
            if ( !v11 )
              v11 = v10;
          }
        }
        if ( v6 )
        {
          v6 = 0;
          v10 = v9;
        }
        else
        {
          v10 = (const struct tagWND *)*((_QWORD *)v10 + 11);
        }
      }
      while ( v10 );
      if ( v10 )
        break;
    }
    if ( v3 )
    {
      v10 = v11;
      if ( !v11 )
        return 0LL;
      break;
    }
    v3 = 1;
    if ( v9 )
    {
      ThreadDesktopWindow = *((_QWORD *)v9 + 13);
      goto LABEL_3;
    }
    ThreadDesktopWindow = GetThreadDesktopWindow(0LL, v5);
    if ( ThreadDesktopWindow )
LABEL_3:
      v9 = *(const struct tagWND **)(ThreadDesktopWindow + 112);
    else
      v9 = 0LL;
  }
  v13 = 3;
  Win32HM_LockIntoThread<0>((__int64)v4, (__int64)v10, BugCheckParameter3);
  if ( ForceForegroundChangeOnMinimize(a1, v10) )
  {
    v13 = 7;
    v28 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v29 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v28 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      ThreadId = (unsigned __int8)PsGetThreadId(*(PETHREAD *)v4);
      UserSessionState = W32GetUserSessionState(v32, v31);
      LOBYTE(v34) = v29;
      LOBYTE(v35) = v28;
      WPP_RECORDER_AND_TRACE_SF_d(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v35,
        v34,
        *(_QWORD *)(UserSessionState + 69160),
        4,
        2,
        10,
        (__int64)&WPP_c2c1bc94dfb934c622fe5c54a621ad61_Traceguids,
        ThreadId);
    }
  }
  v14 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
     && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) != 0
     && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
  v15 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v14 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v22 = *(_QWORD *)a1;
    v23 = *(_QWORD *)v10;
    v24 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
    LOBYTE(v25) = v15;
    LOBYTE(v26) = v14;
    WPP_RECORDER_AND_TRACE_SF_qq(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v26,
      v25,
      *(_QWORD *)(v24 + 69160),
      4,
      2,
      11,
      (__int64)&WPP_c2c1bc94dfb934c622fe5c54a621ad61_Traceguids,
      v23,
      v22);
  }
  xxxSetForegroundWindowWithOptions(v10, v13, 0LL);
  v18 = PtiCurrent(v17, v16);
  Win32HM_UnlockFromThread<0>((ULONG_PTR)v18, BugCheckParameter3);
  return 1LL;
}
