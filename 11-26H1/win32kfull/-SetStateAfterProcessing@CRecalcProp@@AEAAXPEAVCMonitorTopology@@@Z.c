/*
 * XREFs of ?SetStateAfterProcessing@CRecalcProp@@AEAAXPEAVCMonitorTopology@@@Z @ 0x140261090
 * Callers:
 *     ?xxxProcessPendingRecalcStateOld@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@_NPEAVCRecalcContext@@@Z @ 0x1402E01BC (-xxxProcessPendingRecalcStateOld@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@_NPEAVCRecalcCo.c)
 * Callees:
 *     ?CreateForTopologyChange@CRecalcProp@@SA_NPEAUHWND__@@PEAVCMonitorTopology@@W4StartRecalcReason@@@Z @ 0x14015E97C (-CreateForTopologyChange@CRecalcProp@@SA_NPEAUHWND__@@PEAVCMonitorTopology@@W4StartRecalcReason@.c)
 *     ?CompareToCurrent@CMonitorTopology@@QEBA?AW4CompareResult@1@W4CompareType@1@@Z @ 0x14015F6F8 (-CompareToCurrent@CMonitorTopology@@QEBA-AW4CompareResult@1@W4CompareType@1@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qs @ 0x140191A34 (WPP_RECORDER_AND_TRACE_SF_qs.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1401A4EE4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?SignalRecalcWork@CRecalcProp@@QEAAXW4SignalReason@DesktopRecalc@@@Z @ 0x14023DE70 (-SignalRecalcWork@CRecalcProp@@QEAAXW4SignalReason@DesktopRecalc@@@Z.c)
 *     ?SetLastMoveRect@CRecalcProp@@AEAAXXZ @ 0x140263754 (-SetLastMoveRect@CRecalcProp@@AEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CRecalcProp::SetStateAfterProcessing(CRecalcProp *this, struct CMonitorTopology *a2)
{
  int v2; // eax
  char v3; // si
  int v6; // eax
  char v7; // r15
  unsigned int *v8; // rdx
  char v9; // di
  bool v10; // bp
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  char v14; // bp
  const char *v15; // rdi
  __int64 v16; // rbx
  __int64 v17; // rax
  int v18; // r8d
  int v19; // edx

  v2 = *((_DWORD *)this + 6);
  v3 = 1;
  if ( v2 != 2 && v2 != 1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4445LL);
  *((_DWORD *)this + 6) = *((_QWORD *)this + 4) != 0LL;
  v6 = CMonitorTopology::CompareToCurrent((__int64)a2, 0LL);
  v7 = v6;
  v8 = &WPP_RECORDER_INITIALIZED;
  if ( v6 )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
      || (v9 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v9 = 0;
    }
    v10 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      LOBYTE(v12) = v10;
      LOBYTE(v13) = v9;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v13,
        v12,
        *(_QWORD *)(UserSessionState + 69152),
        4,
        7,
        123,
        (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
        v7);
    }
    if ( CRecalcProp::CreateForTopologyChange(**((_QWORD **)this + 2), (__int64)a2, 3u) )
      CRecalcProp::SignalRecalcWork((__int64)this, 0);
  }
  if ( !*((_DWORD *)this + 6) )
    CRecalcProp::SetLastMoveRect(this);
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
    || (v14 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    v14 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v3 = 0;
  if ( v14 || v3 )
  {
    v15 = "has pending recalc state";
    if ( !*((_QWORD *)this + 4) )
      v15 = "in free state";
    v16 = **((_QWORD **)this + 2);
    v17 = W32GetUserSessionState("in free state", v8);
    LOBYTE(v18) = v3;
    LOBYTE(v19) = v14;
    WPP_RECORDER_AND_TRACE_SF_qs(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v19,
      v18,
      *(_QWORD *)(v17 + 69152),
      5,
      7,
      124,
      (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
      v16,
      (__int64)v15);
  }
}
