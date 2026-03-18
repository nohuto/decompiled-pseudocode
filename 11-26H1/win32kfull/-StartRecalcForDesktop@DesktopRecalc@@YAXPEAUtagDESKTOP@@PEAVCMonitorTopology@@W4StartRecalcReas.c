/*
 * XREFs of ?StartRecalcForDesktop@DesktopRecalc@@YAXPEAUtagDESKTOP@@PEAVCMonitorTopology@@W4StartRecalcReason@@@Z @ 0x14015E754
 * Callers:
 *     ?StartRecalc@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEBU_GUID@@@Z @ 0x14015CCB0 (-StartRecalc@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEBU_GUID@@@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     BuildHwndList @ 0x1400510F0 (BuildHwndList.c)
 *     FreeHwndList @ 0x140051630 (FreeHwndList.c)
 *     DesktopWindowFromDesktop @ 0x14015D53C (DesktopWindowFromDesktop.c)
 *     ?CreateForTopologyChange@CRecalcProp@@SA_NPEAUHWND__@@PEAVCMonitorTopology@@W4StartRecalcReason@@@Z @ 0x14015E97C (-CreateForTopologyChange@CRecalcProp@@SA_NPEAUHWND__@@PEAVCMonitorTopology@@W4StartRecalcReason@.c)
 *     ?GetRecalcProperty@CRecalcProp@@SAPEAV1@PEBUtagWND@@@Z @ 0x14015F568 (-GetRecalcProperty@CRecalcProp@@SAPEAV1@PEBUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?SignalRecalcWork@CRecalcProp@@QEAAXW4SignalReason@DesktopRecalc@@@Z @ 0x14023DE70 (-SignalRecalcWork@CRecalcProp@@QEAAXW4SignalReason@DesktopRecalc@@@Z.c)
 */

void __fastcall DesktopRecalc::StartRecalcForDesktop(__int64 a1, __int64 a2, unsigned int a3)
{
  char v6; // bl
  bool v7; // di
  bool v8; // si
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx
  __int64 v12; // rax
  struct tagBWL *v13; // rax
  __int64 v14; // rdx
  struct tagBWL *v15; // rbp
  __int64 *v16; // r14
  __int64 v17; // rdi
  __int64 v18; // rsi
  _QWORD *v19; // r15
  const struct tagWND *v20; // rax
  struct CRecalcProp *RecalcProperty; // rax
  bool v22; // di
  __int64 v23; // rax
  int v24; // r8d
  int v25; // edx

  v6 = 1;
  v7 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v8 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    LOBYTE(v10) = v8;
    LOBYTE(v11) = v7;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v11,
      v10,
      *(_QWORD *)(UserSessionState + 69152),
      4,
      7,
      142,
      (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
      a1);
  }
  v12 = DesktopWindowFromDesktop(a1);
  v13 = BuildHwndList(*(struct tagWND **)(v12 + 112), *(_DWORD *)(a1 + 336) & 0x20 | 2u, 0LL, 1);
  v15 = v13;
  if ( v13 )
  {
    v16 = (__int64 *)((char *)v13 + 32);
    v17 = 0LL;
    v18 = *((_QWORD *)v13 + 4);
    v19 = (_QWORD *)((char *)v13 + 32);
    if ( v18 != 1 )
    {
      do
      {
        if ( (unsigned __int8)CRecalcProp::CreateForTopologyChange(v18, a2, a3) )
        {
          *((_QWORD *)v15 + v17 + 4) = v18;
          v17 = (unsigned int)(v17 + 1);
        }
        v18 = *++v19;
      }
      while ( *v19 != 1LL );
      if ( (_DWORD)v17 )
      {
        do
        {
          if ( *v16 )
          {
            v20 = (const struct tagWND *)HMValidateHandleNoSecure(*v16, 1);
            RecalcProperty = CRecalcProp::GetRecalcProperty(v20);
            CRecalcProp::SignalRecalcWork(RecalcProperty, 1LL);
          }
          ++v16;
          --v17;
        }
        while ( v17 );
      }
    }
    FreeHwndList(v15, v14);
  }
  else
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v6 = 0;
    }
    v22 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v23 = W32GetUserSessionState(WPP_GLOBAL_Control, v14);
      LOBYTE(v24) = v22;
      LOBYTE(v25) = v6;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v25,
        v24,
        *(_QWORD *)(v23 + 69152),
        2,
        7,
        143,
        (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids);
    }
  }
}
