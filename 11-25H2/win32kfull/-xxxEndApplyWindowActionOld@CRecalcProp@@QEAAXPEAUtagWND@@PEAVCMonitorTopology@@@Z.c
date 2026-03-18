/*
 * XREFs of ?xxxEndApplyWindowActionOld@CRecalcProp@@QEAAXPEAUtagWND@@PEAVCMonitorTopology@@@Z @ 0x1402C7288
 * Callers:
 *     ?xxxEndApplyWindowActionOld@DesktopRecalc@@YAXPEAUtagWND@@PEAVCMonitorTopology@@@Z @ 0x1402C7618 (-xxxEndApplyWindowActionOld@DesktopRecalc@@YAXPEAUtagWND@@PEAVCMonitorTopology@@@Z.c)
 * Callees:
 *     ?CreateRecalcState@CRecalcState@@SAPEAV1@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcReason@@PEAW4ProcessingDecision@1@@Z @ 0x14002538C (-CreateRecalcState@CRecalcState@@SAPEAV1@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcReason@@.c)
 *     ?PruneRecalcStateList@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z @ 0x140027C50 (-PruneRecalcStateList@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400D99FC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?AddPendingRecalcWork@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z @ 0x1402C3994 (-AddPendingRecalcWork@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z.c)
 *     ?ClearLastInterceptedTopology@CRecalcProp@@QEAAXXZ @ 0x1402C4134 (-ClearLastInterceptedTopology@CRecalcProp@@QEAAXXZ.c)
 *     ?PostMessagesForRecalcDisabledWindows@CRecalcProp@@AEAAXPEAUtagWND@@PEBVCMonitorTopology@@@Z @ 0x1402C4D80 (-PostMessagesForRecalcDisabledWindows@CRecalcProp@@AEAAXPEAUtagWND@@PEBVCMonitorTopology@@@Z.c)
 *     ?SetLastMoveRect@CRecalcProp@@AEAAXXZ @ 0x1402C59A4 (-SetLastMoveRect@CRecalcProp@@AEAAXXZ.c)
 *     ?SignalRecalcWork@CRecalcProp@@QEAAXW4SignalReason@DesktopRecalc@@@Z @ 0x1402C6140 (-SignalRecalcWork@CRecalcProp@@QEAAXW4SignalReason@DesktopRecalc@@@Z.c)
 */

void __fastcall CRecalcProp::xxxEndApplyWindowActionOld(
        CRecalcProp *this,
        struct tagWND *a2,
        struct CMonitorTopology *a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 UserSessionState; // rax
  __int64 v10; // rdx
  int v11; // r8d
  struct CRecalcState *v12; // rax
  __int64 v13; // rdx
  bool v14; // di
  bool v15; // bl
  __int64 v16; // rax
  int v17; // r8d
  int v18; // edx
  __int64 v19; // rdx
  bool v20; // di
  bool v21; // bp
  __int64 v22; // rbx
  __int64 v23; // rax
  int v24; // r8d
  int v25; // edx
  struct CRecalcState *v26; // rax
  __int64 v27; // rdx
  bool v28; // di
  bool v29; // bp
  __int64 v30; // rbx
  __int64 v31; // rax
  int v32; // r8d
  int v33; // edx
  bool v34; // di
  bool v35; // bp
  __int64 v36; // rbx
  __int64 v37; // rax
  int v38; // r8d
  int v39; // edx
  int v40; // [rsp+60h] [rbp+8h] BYREF

  if ( (*((_DWORD *)a2 + 95) & 0x10) != 0 )
    CRecalcProp::PostMessagesForRecalcDisabledWindows(this, a2, a3);
  *(_QWORD *)(*((_QWORD *)this + 4) + 8LL) = *((_QWORD *)this + 5);
  v6 = *((_QWORD *)this + 4);
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = v6;
  CRecalcProp::SetLastMoveRect(this);
  UserSessionState = W32GetUserSessionState(v8, v7);
  v10 = *((_QWORD *)this + 6);
  v11 = *(_DWORD *)(*(_QWORD *)(UserSessionState + 19872) + 7500LL);
  if ( !v10 || *(_DWORD *)(v10 + 12) == v11 )
  {
    if ( (*((_DWORD *)a2 + 95) & 0x10) == 0 || *((_DWORD *)a3 + 3) == v11 )
    {
      v34 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
         && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0
         && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
      v35 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v34 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v36 = *(_QWORD *)a2;
        v37 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v10);
        LOBYTE(v38) = v35;
        LOBYTE(v39) = v34;
        WPP_RECORDER_AND_TRACE_SF_q(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v39,
          v38,
          *(_QWORD *)(v37 + 69160),
          4,
          7,
          105,
          (__int64)&WPP_5203336677413a97442e065d09735669_Traceguids,
          v36);
      }
      *((_DWORD *)this + 6) = 0;
    }
    else
    {
      v40 = 0;
      v26 = CRecalcState::CreateRecalcState((__int64)a2, (__int64)a3, 4u, &v40);
      if ( v26 )
        CRecalcProp::AddPendingRecalcWork(this, v26);
      v28 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
         && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0
         && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
      v29 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v28 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v30 = *(_QWORD *)a2;
        v31 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v27);
        LOBYTE(v32) = v29;
        LOBYTE(v33) = v28;
        WPP_RECORDER_AND_TRACE_SF_q(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v33,
          v32,
          *(_QWORD *)(v31 + 69160),
          4,
          7,
          104,
          (__int64)&WPP_5203336677413a97442e065d09735669_Traceguids,
          v30);
      }
    }
    goto LABEL_44;
  }
  v40 = 0;
  v12 = CRecalcState::CreateRecalcState((__int64)a2, v10, 4u, &v40);
  if ( v12 )
  {
    CRecalcProp::AddPendingRecalcWork(this, v12);
    v20 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v21 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v20 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v22 = *(_QWORD *)a2;
      v23 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v19);
      LOBYTE(v24) = v21;
      LOBYTE(v25) = v20;
      WPP_RECORDER_AND_TRACE_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v25,
        v24,
        *(_QWORD *)(v23 + 69160),
        4,
        7,
        103,
        (__int64)&WPP_5203336677413a97442e065d09735669_Traceguids,
        v22);
    }
    CRecalcProp::SignalRecalcWork((__int64)this, 0);
LABEL_44:
    CRecalcProp::ClearLastInterceptedTopology(this);
    CRecalcProp::PruneRecalcStateList((const struct tagWND **)this, 0LL);
    *((_BYTE *)this + 56) = 0;
    return;
  }
  v14 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
     && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0
     && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 2u;
  v15 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v14 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v16 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v13);
    LOBYTE(v17) = v15;
    LOBYTE(v18) = v14;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v18,
      v17,
      *(_QWORD *)(v16 + 69160),
      2,
      7,
      102,
      (__int64)&WPP_5203336677413a97442e065d09735669_Traceguids);
  }
}
