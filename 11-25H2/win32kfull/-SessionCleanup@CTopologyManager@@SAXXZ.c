/*
 * XREFs of ?SessionCleanup@CTopologyManager@@SAXXZ @ 0x1401F925C
 * Callers:
 *     EditionDriverUninitialize @ 0x1401F90E0 (EditionDriverUninitialize.c)
 * Callees:
 *     ?Release@CMonitorTopology@@QEAAXXZ @ 0x1400229F8 (-Release@CMonitorTopology@@QEAAXXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

void __fastcall CTopologyManager::SessionCleanup(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 UserSessionState; // rbx
  unsigned int *v4; // rcx
  bool v5; // di
  bool v6; // si
  __int64 v7; // rax
  int v8; // r8d
  int v9; // edx

  UserSessionState = W32GetUserSessionState(a1, a2);
  if ( *(_QWORD *)(UserSessionState + 71224) )
  {
    v4 = &WPP_GLOBAL_Control;
    v5 = 0;
    if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control )
    {
      v4 = (unsigned int *)*(unsigned int *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL);
      if ( ((unsigned __int8)v4 & 0x40) != 0 && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u )
        v5 = 1;
    }
    v6 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v5 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v7 = W32GetUserSessionState(v4, v2);
      LOBYTE(v8) = v6;
      LOBYTE(v9) = v5;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v9,
        v8,
        *(_QWORD *)(v7 + 69160),
        4,
        7,
        30,
        (__int64)&WPP_f02a4a4a8b293b2feea165eb98bca231_Traceguids);
    }
    CMonitorTopology::Release(*(CMonitorTopology **)(UserSessionState + 71224));
    *(_QWORD *)(UserSessionState + 71224) = 0LL;
  }
}
