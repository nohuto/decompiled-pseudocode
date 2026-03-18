/*
 * XREFs of ?OnDaemonTimerRateChanged@CForegroundLaunch@@QEAAX_N@Z @ 0x14028D714
 * Callers:
 *     ?OnDaemonTimerRateChanged@ForegroundLaunch@@YAX_N@Z @ 0x1401FF270 (-OnDaemonTimerRateChanged@ForegroundLaunch@@YAX_N@Z.c)
 * Callees:
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400FB58C (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400FB5CC (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?GetProcessInfo@CProcessAsPid@@QEBAPEAUtagPROCESSINFO@@XZ @ 0x1401A4B68 (-GetProcessInfo@CProcessAsPid@@QEBAPEAUtagPROCESSINFO@@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1401A4EE4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
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
  unsigned __int64 ProcessInfo; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // r15
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
    v5 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v6 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v5 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v4);
      LOBYTE(v8) = v6;
      LOBYTE(v9) = v5;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v9,
        v8,
        *(_QWORD *)(UserSessionState + 69152),
        4,
        2,
        43,
        (__int64)&WPP_b22b714c1b94308c01bf3b20d92a8bdb_Traceguids);
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
            if ( WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control )
            {
              v13 = *((unsigned int *)WPP_GLOBAL_Control + 11);
              if ( (v13 & 2) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
                v15 = 1;
            }
            v16 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( v15 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              v17 = *(_DWORD *)(ProcessInfo + 56);
              v18 = W32GetUserSessionState(v13, WPP_GLOBAL_Control);
              LOBYTE(v19) = v16;
              LOBYTE(v20) = v15;
              WPP_RECORDER_AND_TRACE_SF_d(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v20,
                v19,
                *(_QWORD *)(v18 + 69152),
                4,
                2,
                44,
                (__int64)&WPP_b22b714c1b94308c01bf3b20d92a8bdb_Traceguids,
                v17);
            }
            ForegroundBoost::SetForegroundPriority(v14, 0LL, 1LL);
          }
          *(_QWORD *)(v11 - 20) = 0LL;
          *(_QWORD *)(v11 - 12) = 0LL;
          *(_QWORD *)(v11 - 4) = 0LL;
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
      v25 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v26 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v25 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v27 = *(_DWORD *)(*v24 + 56LL);
        v28 = W32GetUserSessionState(WPP_GLOBAL_Control, v10);
        LOBYTE(v29) = v26;
        LOBYTE(v30) = v25;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v30,
          v29,
          *(_QWORD *)(v28 + 69152),
          4,
          2,
          45,
          (__int64)&WPP_b22b714c1b94308c01bf3b20d92a8bdb_Traceguids,
          v27);
      }
      Win32FreePool(v24);
    }
  }
  W32ReleasePushLockExclusiveEx(v3, 0LL);
}
