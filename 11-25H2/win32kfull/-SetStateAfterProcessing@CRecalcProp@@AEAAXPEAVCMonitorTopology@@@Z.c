/*
 * XREFs of ?SetStateAfterProcessing@CRecalcProp@@AEAAXPEAVCMonitorTopology@@@Z @ 0x1402C5BD0
 * Callers:
 *     ?xxxProcessPendingRecalcStateOld@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@_NPEAVCRecalcContext@@@Z @ 0x1402C8868 (-xxxProcessPendingRecalcStateOld@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@_NPEAVCRecalcCo.c)
 * Callees:
 *     ?CompareToCurrent@CMonitorTopology@@QEBA?AW4CompareResult@1@W4CompareType@1@@Z @ 0x14002233C (-CompareToCurrent@CMonitorTopology@@QEBA-AW4CompareResult@1@W4CompareType@1@@Z.c)
 *     ?CreateForTopologyChange@CRecalcProp@@SA_NPEAUHWND__@@PEAVCMonitorTopology@@W4StartRecalcReason@@@Z @ 0x140029818 (-CreateForTopologyChange@CRecalcProp@@SA_NPEAUHWND__@@PEAVCMonitorTopology@@W4StartRecalcReason@.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14018EC58 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_qs @ 0x1401A48DC (WPP_RECORDER_AND_TRACE_SF_qs.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?SetLastMoveRect@CRecalcProp@@AEAAXXZ @ 0x1402C59A4 (-SetLastMoveRect@CRecalcProp@@AEAAXXZ.c)
 *     ?SignalRecalcWork@CRecalcProp@@QEAAXW4SignalReason@DesktopRecalc@@@Z @ 0x1402C6140 (-SignalRecalcWork@CRecalcProp@@QEAAXW4SignalReason@DesktopRecalc@@@Z.c)
 */

void __fastcall CRecalcProp::SetStateAfterProcessing(CRecalcProp *this, struct CMonitorTopology *a2)
{
  char v2; // si
  int v5; // eax
  char v6; // r15
  unsigned int *v7; // rdx
  char v8; // bl
  bool v9; // bp
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  char v13; // bp
  __int64 v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rax
  int v17; // r8d
  int v18; // edx
  __int64 v19; // r9
  const char *v20; // rax

  v2 = 1;
  if ( (unsigned int)(*((_DWORD *)this + 6) - 1) > 1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4388);
  *((_DWORD *)this + 6) = *((_QWORD *)this + 4) != 0LL;
  v5 = CMonitorTopology::CompareToCurrent((__int64)a2, 0LL);
  v6 = v5;
  v7 = &WPP_RECORDER_INITIALIZED;
  if ( v5 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
      || (v8 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v8 = 0;
    }
    v9 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      LOBYTE(v11) = v9;
      LOBYTE(v12) = v8;
      WPP_RECORDER_AND_TRACE_SF_d(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v12,
        v11,
        *(_QWORD *)(UserSessionState + 69160),
        4,
        7,
        123,
        (__int64)&WPP_5203336677413a97442e065d09735669_Traceguids,
        v6);
    }
    if ( CRecalcProp::CreateForTopologyChange(**((_QWORD **)this + 2), (__int64)a2, 3u) )
      CRecalcProp::SignalRecalcWork(this, 0LL);
  }
  if ( !*((_DWORD *)this + 6) )
    CRecalcProp::SetLastMoveRect(this);
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
    || (v13 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v13 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
  {
    v2 = 0;
  }
  if ( v13 || v2 )
  {
    v14 = *((_QWORD *)this + 4);
    v15 = **((_QWORD **)this + 2);
    v16 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v7);
    LOBYTE(v17) = v2;
    LOBYTE(v18) = v13;
    v19 = *(_QWORD *)(v16 + 69160);
    v20 = "has pending recalc state";
    if ( !v14 )
      v20 = "in free state";
    WPP_RECORDER_AND_TRACE_SF_qs(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v18,
      v17,
      v19,
      5,
      7,
      124,
      (__int64)&WPP_5203336677413a97442e065d09735669_Traceguids,
      v15,
      (__int64)v20);
  }
}
