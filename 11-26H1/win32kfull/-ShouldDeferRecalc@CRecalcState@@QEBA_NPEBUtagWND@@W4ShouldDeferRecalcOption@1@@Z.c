/*
 * XREFs of ?ShouldDeferRecalc@CRecalcState@@QEBA_NPEBUtagWND@@W4ShouldDeferRecalcOption@1@@Z @ 0x14015F738
 * Callers:
 *     ?s_OnWindowUncloak@CRecalcProp@@SAXPEAUtagWND@@@Z @ 0x14015D558 (-s_OnWindowUncloak@CRecalcProp@@SAXPEAUtagWND@@@Z.c)
 *     ?CreateRecalcState@CRecalcState@@SAPEAV1@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcReason@@PEAW4ProcessingDecision@1@@Z @ 0x14015DA7C (-CreateRecalcState@CRecalcState@@SAPEAV1@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcReason@@.c)
 *     ?HasRestorableState@CRecalcProp@@AEAA_NXZ @ 0x14015F654 (-HasRestorableState@CRecalcProp@@AEAA_NXZ.c)
 *     ?s_xxxOnWindowBecomingVisible@CRecalcProp@@SAXPEAUtagWND@@PEAUtagWINDOWPOS@@@Z @ 0x1401F3684 (-s_xxxOnWindowBecomingVisible@CRecalcProp@@SAXPEAUtagWND@@PEAUtagWINDOWPOS@@@Z.c)
 *     ?s_xxxProcessTopologyChange@CRecalcProp@@SAXPEAUHWND__@@PEAVCRecalcContext@@@Z @ 0x14028E8F0 (-s_xxxProcessTopologyChange@CRecalcProp@@SAXPEAUHWND__@@PEAVCRecalcContext@@@Z.c)
 *     ?s_OnRecalcReenabled@CRecalcProp@@SAXPEAUtagWND@@@Z @ 0x1402DECA0 (-s_OnRecalcReenabled@CRecalcProp@@SAXPEAUtagWND@@@Z.c)
 * Callees:
 *     ?IsWindowCloaked@@YA_NPEBUtagWND@@@Z @ 0x140047DD0 (-IsWindowCloaked@@YA_NPEBUtagWND@@@Z.c)
 *     ?MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@PEBUtagWND@@UtagRECT@@@Z @ 0x14015FB64 (-MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@PEBUtagWND@@UtagRECT@@@Z.c)
 *     ?GetCurrent@CTopologyManager@@SAPEAVCMonitorTopology@@XZ @ 0x14015FD84 (-GetCurrent@CTopologyManager@@SAPEAVCMonitorTopology@@XZ.c)
 *     ?Release@CMonitorTopology@@QEAAXXZ @ 0x14015FDB4 (-Release@CMonitorTopology@@QEAAXXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x140162868 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 */

char __fastcall CRecalcState::ShouldDeferRecalc(__int64 a1, __int64 a2, int a3)
{
  int v3; // r10d
  __int64 v5; // r11
  char v6; // bp
  char v7; // di
  int v9; // eax
  CMonitorTopology *Current; // rbx
  char v11; // di
  char v12; // r14
  char v13; // bp
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // edx
  int v17; // r8d
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  char v23; // di
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 UserSessionState; // rax
  int v27; // r8d
  int v28; // edx
  __int16 v29; // [rsp+30h] [rbp-48h]
  char v30; // [rsp+40h] [rbp-38h]
  char ThreadId; // [rsp+48h] [rbp-30h]
  struct tagRECT v32; // [rsp+50h] [rbp-28h] BYREF

  v3 = *(_DWORD *)(a2 + 384) & 0x10;
  v5 = a1;
  if ( a3 == 1 )
    goto LABEL_68;
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 40) + 31LL) & 0x20) != 0 && !v3 )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
      || (v6 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v6 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v7 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      v7 = 0;
    }
    if ( !v6 && !v7 )
      return 1;
    ThreadId = (unsigned __int8)PsGetThreadId(**(PETHREAD **)(a2 + 16));
    v30 = a2;
    v18 = *(_QWORD *)(W32GetUserSessionState(v15, v14) + 69152);
    v29 = 13;
    goto LABEL_52;
  }
  if ( a3 != 2 )
  {
LABEL_68:
    if ( IsWindowCloaked((const struct tagWND *)a2) )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
        || (v6 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        v6 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v7 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
      {
        v7 = 0;
      }
      if ( !v6 && !v7 )
        return 1;
      ThreadId = (unsigned __int8)PsGetThreadId(**(PETHREAD **)(a2 + 16));
      v30 = a2;
      v18 = *(_QWORD *)(W32GetUserSessionState(v22, v21) + 69152);
      v29 = 14;
LABEL_52:
      LOBYTE(v17) = v7;
      LOBYTE(v16) = v6;
      WPP_RECORDER_AND_TRACE_SF_qd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v16,
        v17,
        v18,
        5,
        7,
        v29,
        (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
        v30,
        ThreadId);
      return 1;
    }
  }
  if ( (*(_DWORD *)(a2 + 380) & 0x10) != 0 )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
      || (v6 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v6 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v7 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      v7 = 0;
    }
    if ( !v6 && !v7 )
      return 1;
    ThreadId = (unsigned __int8)PsGetThreadId(**(PETHREAD **)(a2 + 16));
    v30 = a2;
    v18 = *(_QWORD *)(W32GetUserSessionState(v20, v19) + 69152);
    v29 = 15;
    goto LABEL_52;
  }
  if ( a3 == 3 )
    return 0;
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 40) + 31LL) & 0x10) != 0 )
    return 0;
  v9 = *(_DWORD *)(v5 + 24);
  if ( v9 == 3 || v9 == 1 || v3 )
    return 0;
  Current = CTopologyManager::GetCurrent();
  v11 = 0;
  v32 = *(struct tagRECT *)(*(_QWORD *)(a2 + 40) + 88LL);
  if ( CMonitorTopology::MonitorDataFromRect(Current, (const struct tagWND *)a2, &v32) )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
      || (v12 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v12 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v13 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      v13 = 0;
    }
    if ( v12 || v13 )
    {
      v23 = (unsigned __int8)PsGetThreadId(**(PETHREAD **)(a2 + 16));
      UserSessionState = W32GetUserSessionState(v25, v24);
      LOBYTE(v27) = v13;
      LOBYTE(v28) = v12;
      WPP_RECORDER_AND_TRACE_SF_qd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v28,
        v27,
        *(_QWORD *)(UserSessionState + 69152),
        5,
        7,
        16,
        (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
        a2,
        v23);
    }
    v11 = 1;
  }
  if ( Current )
    CMonitorTopology::Release(Current);
  return v11;
}
