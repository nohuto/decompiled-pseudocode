/*
 * XREFs of ?ShouldDeferRecalc@CRecalcState@@QEBA_NPEBUtagWND@@W4ShouldDeferRecalcOption@1@@Z @ 0x14002237C
 * Callers:
 *     ?HasRestorableState@CRecalcProp@@AEAA_NXZ @ 0x140022298 (-HasRestorableState@CRecalcProp@@AEAA_NXZ.c)
 *     ?CreateRecalcState@CRecalcState@@SAPEAV1@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcReason@@PEAW4ProcessingDecision@1@@Z @ 0x14002538C (-CreateRecalcState@CRecalcState@@SAPEAV1@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcReason@@.c)
 *     ?s_OnWindowUncloak@CRecalcProp@@SAXPEAUtagWND@@@Z @ 0x1401CAADC (-s_OnWindowUncloak@CRecalcProp@@SAXPEAUtagWND@@@Z.c)
 *     ?s_xxxOnWindowBecomingVisible@CRecalcProp@@SAXPEAUtagWND@@PEAUtagWINDOWPOS@@@Z @ 0x1401CB264 (-s_xxxOnWindowBecomingVisible@CRecalcProp@@SAXPEAUtagWND@@PEAUtagWINDOWPOS@@@Z.c)
 *     ?s_OnRecalcReenabled@CRecalcProp@@SAXPEAUtagWND@@@Z @ 0x1402C68FC (-s_OnRecalcReenabled@CRecalcProp@@SAXPEAUtagWND@@@Z.c)
 *     ?s_xxxProcessTopologyChange@CRecalcProp@@SAXPEAUHWND__@@PEAVCRecalcContext@@@Z @ 0x1402C6EFC (-s_xxxProcessTopologyChange@CRecalcProp@@SAXPEAUHWND__@@PEAVCRecalcContext@@@Z.c)
 * Callees:
 *     ?IsWindowCloaked@@YA_NPEBUtagWND@@@Z @ 0x140022220 (-IsWindowCloaked@@YA_NPEBUtagWND@@@Z.c)
 *     ?MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@PEBUtagWND@@UtagRECT@@@Z @ 0x1400227A8 (-MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@PEBUtagWND@@UtagRECT@@@Z.c)
 *     ?GetCurrent@CTopologyManager@@SAPEAVCMonitorTopology@@XZ @ 0x1400229C8 (-GetCurrent@CTopologyManager@@SAPEAVCMonitorTopology@@XZ.c)
 *     ?Release@CMonitorTopology@@QEAAXXZ @ 0x1400229F8 (-Release@CMonitorTopology@@QEAAXXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x140127EFC (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     ?IsInterceptWindow@WindowActions@@YA_NPEBUtagWND@@@Z @ 0x14026EA44 (-IsInterceptWindow@WindowActions@@YA_NPEBUtagWND@@@Z.c)
 */

char __fastcall CRecalcState::ShouldDeferRecalc(__int64 a1, __int64 a2)
{
  bool IsInterceptWindow; // al
  __int64 v5; // rdx
  const struct tagWND *v6; // rcx
  int v7; // r8d
  bool v8; // r11
  CMonitorTopology *Current; // rbx
  char v10; // di
  char v11; // r14
  char v12; // bp
  char v14; // bp
  char v15; // di
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // edx
  int v19; // r8d
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  char v25; // di
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 UserSessionState; // rax
  int v29; // r8d
  int v30; // edx
  __int16 v31; // [rsp+30h] [rbp-48h]
  char v32; // [rsp+40h] [rbp-38h]
  char ThreadId; // [rsp+48h] [rbp-30h]
  struct tagRECT v34; // [rsp+50h] [rbp-28h] BYREF

  IsInterceptWindow = WindowActions::IsInterceptWindow((WindowActions *)a2, (const struct tagWND *)a2);
  v8 = IsInterceptWindow;
  if ( v7 == 1 )
    goto LABEL_68;
  if ( (*(_BYTE *)(*(_QWORD *)(v5 + 40) + 31LL) & 0x20) != 0 && !IsInterceptWindow )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
      || (v14 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v14 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v15 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v15 = 0;
    }
    if ( !v14 && !v15 )
      return 1;
    ThreadId = (unsigned __int8)PsGetThreadId(**(PETHREAD **)(v5 + 16));
    v32 = a2;
    v20 = *(_QWORD *)(W32GetUserSessionState(v17, v16) + 69160);
    v31 = 13;
    goto LABEL_52;
  }
  if ( v7 != 2 )
  {
LABEL_68:
    if ( IsWindowCloaked(v6) )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
        || (v14 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v14 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v15 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v15 = 0;
      }
      if ( !v14 && !v15 )
        return 1;
      ThreadId = (unsigned __int8)PsGetThreadId(**(PETHREAD **)(a2 + 16));
      v32 = a2;
      v20 = *(_QWORD *)(W32GetUserSessionState(v24, v23) + 69160);
      v31 = 14;
      goto LABEL_52;
    }
  }
  if ( (*(_DWORD *)(a2 + 380) & 0x10) != 0 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
      || (v14 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v14 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v15 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v15 = 0;
    }
    if ( !v14 && !v15 )
      return 1;
    ThreadId = (unsigned __int8)PsGetThreadId(**(PETHREAD **)(a2 + 16));
    v32 = a2;
    v20 = *(_QWORD *)(W32GetUserSessionState(v22, v21) + 69160);
    v31 = 15;
LABEL_52:
    LOBYTE(v19) = v15;
    LOBYTE(v18) = v14;
    WPP_RECORDER_AND_TRACE_SF_qd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v18,
      v19,
      v20,
      5,
      7,
      v31,
      (__int64)&WPP_5203336677413a97442e065d09735669_Traceguids,
      v32,
      ThreadId);
    return 1;
  }
  if ( v7 == 3
    || (*(_BYTE *)(*(_QWORD *)(a2 + 40) + 31LL) & 0x10) != 0
    || ((*(_DWORD *)(a1 + 24) - 1) & 0xFFFFFFFD) == 0
    || v8 )
  {
    return 0;
  }
  Current = CTopologyManager::GetCurrent();
  v10 = 0;
  v34 = *(struct tagRECT *)(*(_QWORD *)(a2 + 40) + 88LL);
  if ( CMonitorTopology::MonitorDataFromRect(Current, (const struct tagWND *)a2, &v34) )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
      || (v11 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v11 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v12 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v12 = 0;
    }
    if ( v11 || v12 )
    {
      v25 = (unsigned __int8)PsGetThreadId(**(PETHREAD **)(a2 + 16));
      UserSessionState = W32GetUserSessionState(v27, v26);
      LOBYTE(v29) = v12;
      LOBYTE(v30) = v11;
      WPP_RECORDER_AND_TRACE_SF_qd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v30,
        v29,
        *(_QWORD *)(UserSessionState + 69160),
        5,
        7,
        16,
        (__int64)&WPP_5203336677413a97442e065d09735669_Traceguids,
        a2,
        v25);
    }
    v10 = 1;
  }
  if ( Current )
    CMonitorTopology::Release(Current);
  return v10;
}
