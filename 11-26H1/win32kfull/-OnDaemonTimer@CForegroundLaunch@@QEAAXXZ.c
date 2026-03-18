/*
 * XREFs of ?OnDaemonTimer@CForegroundLaunch@@QEAAXXZ @ 0x1401F5678
 * Callers:
 *     ?OnDaemonTimer@ForegroundLaunch@@YAXXZ @ 0x1401F5650 (-OnDaemonTimer@ForegroundLaunch@@YAXXZ.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_Ddd @ 0x14009A2FC (WPP_RECORDER_AND_TRACE_SF_Ddd.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400FB58C (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400FB5CC (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?GetProcessInfo@CProcessAsPid@@QEBAPEAUtagPROCESSINFO@@XZ @ 0x1401A4B68 (-GetProcessInfo@CProcessAsPid@@QEBAPEAUtagPROCESSINFO@@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1401A4EE4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CForegroundLaunch::OnDaemonTimer(CForegroundLaunch *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r13
  __int64 v5; // rdx
  __int64 v6; // r13
  char *v7; // rax
  char *v8; // rdi
  char *v9; // rsi
  char *v10; // r14
  __int64 v11; // rdx
  char v12; // bp
  bool v13; // r12
  int v14; // ebx
  __int64 UserSessionState; // rax
  int v16; // r8d
  int v17; // edx
  __int64 v18; // rdx
  char **v19; // rax
  __int64 v20; // rbx
  char *v21; // rdi
  __int64 v22; // r14
  char v23; // si
  bool v24; // bp
  int v25; // ebx
  __int64 v26; // rax
  int v27; // r8d
  int v28; // edx
  struct W32_PUSH_LOCK *v29; // r15
  char *v30; // r14
  unsigned __int64 ProcessInfo; // rax
  __int64 v32; // rcx
  unsigned __int64 v33; // r13
  char v34; // bp
  bool v35; // r12
  int v36; // ebx
  int v37; // edi
  int v38; // esi
  __int64 v39; // rax
  int v40; // r8d
  int v41; // edx
  bool v42; // di
  bool v43; // si
  int v44; // ebx
  __int64 v45; // rax
  int v46; // r8d
  int v47; // edx
  __int64 v49; // [rsp+B8h] [rbp+10h]
  __int64 v50; // [rsp+C0h] [rbp+18h]

  W32AcquirePushLockExclusiveEx(this, 0);
  if ( *((_BYTE *)this + 440) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 680LL);
  v4 = MEMORY[0xFFFFF78000000014];
  v50 = MEMORY[0xFFFFF78000000014] - 50000000LL;
  v6 = v4 - (unsigned int)(*(_DWORD *)(W32GetUserSessionState(v3, v2) + 69104) + 300000000);
  v7 = (char *)this + 424;
  v8 = (char *)*((_QWORD *)this + 53);
  while ( 1 )
  {
    v9 = v8;
    if ( v8 == v7 )
      break;
    v10 = v8 - 16;
    if ( v6 <= *((_QWORD *)v8 - 1) )
      break;
    v11 = *(_QWORD *)v10;
    v8 = *(char **)v8;
    v49 = *(_QWORD *)v10;
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (v12 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v12 = 0;
    }
    v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v12 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v14 = *(_DWORD *)(v11 + 56);
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v11);
      LOBYTE(v16) = v13;
      LOBYTE(v17) = v12;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v17,
        v16,
        *(_QWORD *)(UserSessionState + 69152),
        4,
        2,
        39,
        (__int64)&WPP_b22b714c1b94308c01bf3b20d92a8bdb_Traceguids,
        v14);
      v11 = v49;
    }
    *(_DWORD *)(v11 + 12) &= 0xFFFFFEBF;
    v18 = *(_QWORD *)v9;
    if ( *(char **)(*(_QWORD *)v9 + 8LL) != v9 || (v19 = (char **)*((_QWORD *)v9 + 1), *v19 != v9) )
      __fastfail(3u);
    *v19 = (char *)v18;
    *(_QWORD *)(v18 + 8) = v19;
    Win32FreePool(v10);
    v7 = (char *)this + 424;
  }
  v20 = v50;
  v21 = (char *)this + 8;
  v22 = 5LL;
  do
  {
    if ( *(_QWORD *)v21 && v20 > *((_QWORD *)v21 + 1) )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || (v23 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v23 = 0;
      }
      v24 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v23 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v25 = *(_DWORD *)v21;
        v26 = W32GetUserSessionState(WPP_GLOBAL_Control, v5);
        LOBYTE(v27) = v24;
        LOBYTE(v28) = v23;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v28,
          v27,
          *(_QWORD *)(v26 + 69152),
          4,
          2,
          40,
          (__int64)&WPP_b22b714c1b94308c01bf3b20d92a8bdb_Traceguids,
          v25);
        v20 = v50;
      }
      *(_OWORD *)v21 = 0LL;
    }
    v21 += 16;
    --v22;
  }
  while ( v22 );
  v29 = this;
  if ( (char *)this + 96 != (char *)this + 416 )
  {
    v30 = (char *)this + 112;
    do
    {
      if ( *(_DWORD *)v30 == 4 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 739LL);
      ProcessInfo = CProcessAsPid::GetProcessInfo((CProcessAsPid *)(v30 - 16));
      v33 = ProcessInfo;
      if ( ProcessInfo && v20 > *((_QWORD *)v30 + 1) )
      {
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (v32 = *((unsigned int *)WPP_GLOBAL_Control + 11), (v32 & 2) == 0)
          || (v34 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
        {
          v34 = 0;
        }
        v35 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v34 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v36 = *((_DWORD *)v30 + 1);
          v37 = *(_DWORD *)v30;
          v38 = *(_DWORD *)(ProcessInfo + 56);
          v39 = W32GetUserSessionState(v32, &WPP_RECORDER_INITIALIZED);
          LOBYTE(v40) = v35;
          LOBYTE(v41) = v34;
          WPP_RECORDER_AND_TRACE_SF_Ddd(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v41,
            v40,
            *(_QWORD *)(v39 + 69152),
            4,
            2,
            41,
            (__int64)&WPP_b22b714c1b94308c01bf3b20d92a8bdb_Traceguids,
            v38,
            v37,
            v36);
        }
        if ( *((_DWORD *)v30 + 1) == 1 )
        {
          v42 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
             && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
          v43 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v42 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v44 = *(_DWORD *)(v33 + 56);
            v45 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
            LOBYTE(v46) = v43;
            LOBYTE(v47) = v42;
            WPP_RECORDER_AND_TRACE_SF_d(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v47,
              v46,
              *(_QWORD *)(v45 + 69152),
              4,
              2,
              42,
              (__int64)&WPP_b22b714c1b94308c01bf3b20d92a8bdb_Traceguids,
              v44);
          }
          ForegroundBoost::SetForegroundPriority(v33, 0LL, 1LL);
        }
        *((_QWORD *)v30 - 2) = 0LL;
        *((_QWORD *)v30 - 1) = 0LL;
        *(_QWORD *)v30 = 0LL;
        *((_QWORD *)v30 + 1) = 0LL;
      }
      v20 = v50;
      v30 += 32;
    }
    while ( v30 - 16 != (char *)this + 416 );
    v29 = this;
  }
  W32ReleasePushLockExclusiveEx(v29, 0LL);
}
