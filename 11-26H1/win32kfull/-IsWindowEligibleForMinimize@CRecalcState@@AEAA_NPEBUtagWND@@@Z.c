/*
 * XREFs of ?IsWindowEligibleForMinimize@CRecalcState@@AEAA_NPEBUtagWND@@@Z @ 0x14015BDEC
 * Callers:
 *     ?ShouldMinimizeOnMonitorRemove@CRecalcState@@AEAA_NPEAUtagWND@@PEBUMonitorData@CMonitorTopology@@PEBVCRecalcContext@@@Z @ 0x14015BC24 (-ShouldMinimizeOnMonitorRemove@CRecalcState@@AEAA_NPEAUtagWND@@PEBUMonitorData@CMonitorTopology@.c)
 * Callees:
 *     ?IsForegroundWindow@@YA_NPEBUtagWND@@@Z @ 0x14015BB1C (-IsForegroundWindow@@YA_NPEBUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 */

char __fastcall CRecalcState::IsWindowEligibleForMinimize(CRecalcState *this, const struct tagWND *a2)
{
  __int64 v2; // rcx
  bool v4; // di
  bool v5; // si
  int v6; // edx
  int v7; // r8d
  __int64 v8; // r9
  char v9; // al
  __int64 v10; // rdx
  __int16 v12; // [rsp+30h] [rbp-28h]
  __int64 v13; // [rsp+40h] [rbp-18h]

  v2 = *((_QWORD *)a2 + 5);
  if ( (*(_BYTE *)(v2 + 30) & 2) == 0 )
  {
    v4 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v5 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v4 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0;
    v13 = *(_QWORD *)a2;
    v8 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, a2) + 69152);
    v12 = 42;
LABEL_37:
    LOBYTE(v7) = v5;
    LOBYTE(v6) = v4;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v6,
      v7,
      v8,
      4,
      7,
      v12,
      (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
      v13);
    return 0;
  }
  v9 = *(_BYTE *)(v2 + 31);
  if ( (v9 & 8) != 0 )
  {
    v4 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v5 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v4 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0;
    v13 = *(_QWORD *)a2;
    v8 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, a2) + 69152);
    v12 = 43;
    goto LABEL_37;
  }
  if ( (v9 & 0x10) == 0 )
  {
    v4 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v5 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v4 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0;
    v13 = *(_QWORD *)a2;
    v8 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, a2) + 69152);
    v12 = 44;
    goto LABEL_37;
  }
  if ( IsForegroundWindow(a2, (__int64)a2) )
  {
    v4 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v5 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v4 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0;
    v13 = *(_QWORD *)a2;
    v8 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v10) + 69152);
    v12 = 45;
    goto LABEL_37;
  }
  return 1;
}
