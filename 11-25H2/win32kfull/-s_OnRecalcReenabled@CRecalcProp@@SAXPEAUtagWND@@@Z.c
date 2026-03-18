/*
 * XREFs of ?s_OnRecalcReenabled@CRecalcProp@@SAXPEAUtagWND@@@Z @ 0x1402C68FC
 * Callers:
 *     ?SuppressWindowDisplayChangeWorker@DesktopRecalc@@YAXPEAUtagWND@@_N@Z @ 0x1402C64F0 (-SuppressWindowDisplayChangeWorker@DesktopRecalc@@YAXPEAUtagWND@@_N@Z.c)
 * Callees:
 *     ?ShouldDeferRecalc@CRecalcState@@QEBA_NPEBUtagWND@@W4ShouldDeferRecalcOption@1@@Z @ 0x14002237C (-ShouldDeferRecalc@CRecalcState@@QEBA_NPEBUtagWND@@W4ShouldDeferRecalcOption@1@@Z.c)
 *     ?GetCurrent@CTopologyManager@@SAPEAVCMonitorTopology@@XZ @ 0x1400229C8 (-GetCurrent@CTopologyManager@@SAPEAVCMonitorTopology@@XZ.c)
 *     ??1CCurrentMonitorTopologyPtr@@QEAA@XZ @ 0x1400232B8 (--1CCurrentMonitorTopologyPtr@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400D99FC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?GetRecalcProperty@CRecalcProp@@SAPEAV1@PEBUtagWND@@@Z @ 0x1401CAE4C (-GetRecalcProperty@CRecalcProp@@SAPEAV1@PEBUtagWND@@@Z.c)
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline @ 0x1402720AC (Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline.c)
 *     ?PostMessagesForRecalcDisabledWindows@CRecalcProp@@AEAAXPEAUtagWND@@PEBVCMonitorTopology@@@Z @ 0x1402C4D80 (-PostMessagesForRecalcDisabledWindows@CRecalcProp@@AEAAXPEAUtagWND@@PEBVCMonitorTopology@@@Z.c)
 *     ?PostRecalcMessages@CRecalcProp@@AEAAXPEAUtagWND@@PEBVCMonitorTopology@@1@Z @ 0x1402C5040 (-PostRecalcMessages@CRecalcProp@@AEAAXPEAUtagWND@@PEBVCMonitorTopology@@1@Z.c)
 *     ?SignalRecalcWork@CRecalcProp@@QEAAXW4SignalReason@DesktopRecalc@@@Z @ 0x1402C6140 (-SignalRecalcWork@CRecalcProp@@QEAAXW4SignalReason@DesktopRecalc@@@Z.c)
 */

void __fastcall CRecalcProp::s_OnRecalcReenabled(struct tagWND *a1, __int64 a2)
{
  __int64 v3; // rdx
  struct CRecalcProp *RecalcProperty; // rdi
  bool v5; // bp
  bool v6; // r14
  __int64 v7; // rbx
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx
  __int64 v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // rcx
  CMonitorTopology *Current; // rbx
  CRecalcProp *v15; // rcx
  CMonitorTopology *v16; // [rsp+78h] [rbp+10h] BYREF

  RecalcProperty = CRecalcProp::GetRecalcProperty(a1, a2);
  v5 = 0;
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control )
  {
    v3 = *(unsigned int *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL);
    if ( (v3 & 0x40) != 0 && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u )
      v5 = 1;
  }
  v6 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v5 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v7 = *(_QWORD *)a1;
    UserSessionState = W32GetUserSessionState(&WPP_GLOBAL_Control, v3);
    LOBYTE(v9) = v6;
    LOBYTE(v10) = v5;
    WPP_RECORDER_AND_TRACE_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v10,
      v9,
      *(_QWORD *)(UserSessionState + 69160),
      4,
      7,
      106,
      (__int64)&WPP_5203336677413a97442e065d09735669_Traceguids,
      v7);
  }
  if ( RecalcProperty )
  {
    if ( *((_DWORD *)RecalcProperty + 6) == 1 )
    {
      v11 = *((_QWORD *)RecalcProperty + 4);
      if ( !CRecalcState::ShouldDeferRecalc(v11, (__int64)a1) )
      {
        CRecalcProp::SignalRecalcWork((__int64)RecalcProperty, 0);
        Current = CTopologyManager::GetCurrent(v13, v12);
        v16 = Current;
        if ( (unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline() )
          CRecalcProp::PostRecalcMessages(
            v15,
            (LARGE_INTEGER *)a1,
            Current,
            *(const struct CMonitorTopology **)(v11 + 16));
        else
          CRecalcProp::PostMessagesForRecalcDisabledWindows(RecalcProperty, a1, Current);
        CCurrentMonitorTopologyPtr::~CCurrentMonitorTopologyPtr(&v16);
      }
    }
  }
}
