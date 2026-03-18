/*
 * XREFs of ?GetCurrentMonitorDataFromId@CMonitorTopology@@SAPEBUMonitorData@1@AEBUMonitorId@1@_N@Z @ 0x14022A6FC
 * Callers:
 *     ?xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4State@1@UtagRECT@@3W4ApplyOption@1@PEAK@Z @ 0x140229DF0 (-xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4.c)
 *     ?GetMigrateMonitor@CRecalcState@@QEAAPEAUtagMONITOR@@PEAUtagWND@@PEAVCRecalcContext@@PEBUMonitorData@CMonitorTopology@@@Z @ 0x1402876C4 (-GetMigrateMonitor@CRecalcState@@QEAAPEAUtagMONITOR@@PEAUtagWND@@PEAVCRecalcContext@@PEBUMonitor.c)
 *     ?xxxFullscreenRestore@CRecalcState@@QEAAXPEAUtagWND@@AEBVCMonitorTopology@@PEAVCRecalcContext@@@Z @ 0x1402DF660 (-xxxFullscreenRestore@CRecalcState@@QEAAXPEAUtagWND@@AEBVCMonitorTopology@@PEAVCRecalcContext@@@.c)
 *     ?xxxProcessPendingRecalcState@CRecalcProp@@AEAAXPEAVCRecalcState@@_NPEAVCRecalcContext@@@Z @ 0x1402DFB54 (-xxxProcessPendingRecalcState@CRecalcProp@@AEAAXPEAVCRecalcState@@_NPEAVCRecalcContext@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?ContainsHash@MonitorId@CMonitorTopology@@QEBA_NAEBUD3DKMT_HASH@@PEAI@Z @ 0x140260044 (-ContainsHash@MonitorId@CMonitorTopology@@QEBA_NAEBUD3DKMT_HASH@@PEAI@Z.c)
 */

const struct CMonitorTopology::MonitorData *__fastcall CMonitorTopology::GetCurrentMonitorDataFromId(
        const struct CMonitorTopology::MonitorId *a1,
        __int64 a2)
{
  char v2; // r12
  __int64 UserSessionState; // r15
  __int64 v5; // r13
  __int64 i; // rdi
  __int64 v7; // rax
  __int64 v9; // rsi
  __int64 j; // rdi
  __int64 v11; // rdx
  __int64 v12; // rbp
  __int64 v13; // rax
  bool v14; // bl
  bool v15; // di
  __int64 v16; // rax
  int v17; // r8d
  int v18; // edx
  unsigned int v19; // [rsp+70h] [rbp+8h] BYREF

  v2 = a2;
  if ( *((_DWORD *)a1 + 2) )
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    v5 = *(_QWORD *)(UserSessionState + 71208)
       + 8
       * (*(unsigned int *)(*(_QWORD *)(UserSessionState + 71208) + 8LL)
        + 8LL * *(unsigned int *)(*(_QWORD *)(UserSessionState + 71208) + 8LL)
        + 2);
    if ( *(_DWORD *)(v5 + 56) )
    {
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)a1 + 2); i = (unsigned int)(i + 1) )
      {
        v7 = *(_QWORD *)a1;
        v19 = 0;
        if ( CMonitorTopology::MonitorId::ContainsHash(
               (CMonitorTopology::MonitorId *)(v5 + 48),
               (const struct D3DKMT_HASH *)(v7 + 20 * i),
               &v19) )
        {
          if ( !v2 || !v19 )
            return (const struct CMonitorTopology::MonitorData *)v5;
          return 0LL;
        }
      }
    }
    if ( *(_DWORD *)(*(_QWORD *)(UserSessionState + 71208) + 4LL) > 1u )
    {
      v9 = 0LL;
LABEL_12:
      if ( (unsigned int)v9 < *((_DWORD *)a1 + 2) )
      {
        for ( j = 0LL; ; j = (unsigned int)(j + 1) )
        {
          v11 = *(_QWORD *)(UserSessionState + 71208);
          if ( (unsigned int)j >= *(_DWORD *)(v11 + 4) )
          {
            v9 = (unsigned int)(v9 + 1);
            goto LABEL_12;
          }
          v12 = v11 + 8 * ((unsigned int)j + 8 * j + 2);
          if ( *(_DWORD *)(v12 + 56) )
          {
            if ( v12 != v5 )
            {
              v13 = *(_QWORD *)a1;
              v19 = 0;
              if ( CMonitorTopology::MonitorId::ContainsHash(
                     (CMonitorTopology::MonitorId *)(v12 + 48),
                     (const struct D3DKMT_HASH *)(v13 + 20 * v9),
                     &v19) )
              {
                break;
              }
            }
          }
        }
        if ( !v2 || !v19 )
          return (const struct CMonitorTopology::MonitorData *)v12;
      }
    }
  }
  else
  {
    v14 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
    v15 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v14 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v16 = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
      LOBYTE(v17) = v15;
      LOBYTE(v18) = v14;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v18,
        v17,
        *(_QWORD *)(v16 + 69152),
        3,
        7,
        10,
        (__int64)&WPP_f02a4a4a8b293b2feea165eb98bca231_Traceguids);
    }
  }
  return 0LL;
}
