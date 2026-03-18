/*
 * XREFs of ?OnDaemonTimerRateChanged@CForegroundLaunch@@QEAAX_N@Z @ 0x1401CCD40
 * Callers:
 *     ?OnDaemonTimerRateChanged@ForegroundLaunch@@YAX_N@Z @ 0x1401CCD10 (-OnDaemonTimerRateChanged@ForegroundLaunch@@YAX_N@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140121A70 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140121C48 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14018EC58 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?GetProcessInfo@CProcessAsPid@@QEBAPEAUtagPROCESSINFO@@XZ @ 0x1402267F0 (-GetProcessInfo@CProcessAsPid@@QEBAPEAUtagPROCESSINFO@@XZ.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

void __fastcall CForegroundLaunch::OnDaemonTimerRateChanged(CForegroundLaunch *this, char a2)
{
  CForegroundLaunch *v3; // rsi
  __int64 v4; // rdx
  bool v5; // bl
  bool v6; // di
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx
  __int64 v10; // rdx
  char *v11; // rdi
  struct tagPROCESSINFO *ProcessInfo; // rax
  __int64 v13; // rcx
  struct tagPROCESSINFO *v14; // r15
  bool v15; // bp
  bool v16; // r14
  int v17; // ebx
  __int64 v18; // rax
  int v19; // r8d
  int v20; // edx
  _QWORD **v21; // rdi
  _QWORD *v22; // rax
  _QWORD *v23; // rcx
  _QWORD *v24; // r15
  bool v25; // bp
  bool v26; // r14
  int v27; // ebx
  __int64 v28; // rax
  int v29; // r8d
  int v30; // edx

  v3 = this;
  W32AcquirePushLockExclusiveEx(this, 0);
  *((_BYTE *)v3 + 416) = a2;
  if ( !a2 )
  {
    v5 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v6 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v5 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v4);
      LOBYTE(v8) = v6;
      LOBYTE(v9) = v5;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v9,
        v8,
        *(_QWORD *)(UserSessionState + 69160),
        4,
        2,
        38,
        (__int64)&WPP_07fed4fced1f34af39f96e586dcec445_Traceguids);
    }
    memset_0((char *)v3 + 8, 0, 0x50uLL);
    if ( (char *)v3 + 96 != (char *)v3 + 416 )
    {
      v11 = (char *)v3 + 116;
      do
      {
        ProcessInfo = CProcessAsPid::GetProcessInfo((CProcessAsPid *)(v11 - 20));
        v14 = ProcessInfo;
        if ( ProcessInfo )
        {
          if ( *(_DWORD *)v11 == 1 )
          {
            v15 = 0;
            if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control )
            {
              v13 = *(unsigned int *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL);
              if ( (v13 & 2) != 0 && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u )
                v15 = 1;
            }
            v16 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( v15 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              v17 = *((_DWORD *)ProcessInfo + 14);
              v18 = W32GetUserSessionState(v13, *(_QWORD *)&WPP_GLOBAL_Control);
              LOBYTE(v19) = v16;
              LOBYTE(v20) = v15;
              WPP_RECORDER_AND_TRACE_SF_d(
                *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                v20,
                v19,
                *(_QWORD *)(v18 + 69160),
                4,
                2,
                39,
                (__int64)&WPP_07fed4fced1f34af39f96e586dcec445_Traceguids,
                v17);
            }
            ForegroundBoost::SetForegroundPriority(v14, 0LL, 1LL);
          }
          *(_QWORD *)(v11 - 20) = 0LL;
          *(_QWORD *)(v11 - 12) = 0LL;
          *((_DWORD *)v11 - 1) = 0;
          *(_DWORD *)v11 = 0;
          *(_QWORD *)(v11 + 4) = 0LL;
        }
        v11 += 32;
      }
      while ( v11 - 20 != (char *)v3 + 416 );
      v3 = this;
    }
    v21 = (_QWORD **)((char *)v3 + 424);
    while ( 1 )
    {
      v22 = *v21;
      if ( *v21 == v21 )
        break;
      if ( (_QWORD **)v22[1] != v21 || (v23 = (_QWORD *)*v22, *(_QWORD **)(*v22 + 8LL) != v22) )
        __fastfail(3u);
      *v21 = v23;
      v24 = v22 - 2;
      v23[1] = v21;
      *(_DWORD *)(*(v22 - 2) + 12LL) &= 0xFFFFFEBF;
      v25 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
         && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) != 0
         && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
      v26 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v25 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v27 = *(_DWORD *)(*v24 + 56LL);
        v28 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v10);
        LOBYTE(v29) = v26;
        LOBYTE(v30) = v25;
        WPP_RECORDER_AND_TRACE_SF_d(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v30,
          v29,
          *(_QWORD *)(v28 + 69160),
          4,
          2,
          40,
          (__int64)&WPP_07fed4fced1f34af39f96e586dcec445_Traceguids,
          v27);
      }
      Win32FreePool(v24);
    }
  }
  W32ReleasePushLockExclusiveEx(v3, 0LL);
}
