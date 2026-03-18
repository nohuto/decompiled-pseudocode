/*
 * XREFs of ?IsWindowEligibleForRecalc@CRecalcProp@@CA_NPEBUtagWND@@@Z @ 0x14015EFB0
 * Callers:
 *     ?CreateForTopologyChange@CRecalcProp@@SA_NPEAUHWND__@@PEAVCMonitorTopology@@W4StartRecalcReason@@@Z @ 0x14015E97C (-CreateForTopologyChange@CRecalcProp@@SA_NPEAUHWND__@@PEAVCMonitorTopology@@W4StartRecalcReason@.c)
 *     ?ShouldSkipRecalcForWindow@CRecalcProp@@CA_NPEBUtagWND@@PEAVCRecalcState@@@Z @ 0x14015EE84 (-ShouldSkipRecalcForWindow@CRecalcProp@@CA_NPEBUtagWND@@PEAVCRecalcState@@@Z.c)
 *     ?s_xxxProcessTopologyChange@CRecalcProp@@SAXPEAUHWND__@@PEAVCRecalcContext@@@Z @ 0x14028E8F0 (-s_xxxProcessTopologyChange@CRecalcProp@@SAXPEAUHWND__@@PEAVCRecalcContext@@@Z.c)
 *     ?WindowHasPendingRecalc@DesktopRecalc@@YA_NPEBUtagWND@@@Z @ 0x1402DEC28 (-WindowHasPendingRecalc@DesktopRecalc@@YA_NPEBUtagWND@@@Z.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x14004DFC0 (_IsTopLevelWindow.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 */

char __fastcall CRecalcProp::IsWindowEligibleForRecalc(const struct tagWND *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int16 *v4; // rcx
  __int16 v5; // bx
  __int64 v6; // rdx
  char v7; // di
  char v9; // bp
  int v10; // edx
  int v11; // r8d
  __int64 v12; // r9
  __int16 v13; // [rsp+30h] [rbp-28h]
  __int64 v14; // [rsp+40h] [rbp-18h]

  if ( !IsTopLevelWindow((__int64)a1) )
  {
    v7 = 1;
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
      || (v9 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v9 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    {
      v7 = 0;
    }
    if ( !v9 && !v7 )
      return 0;
    v14 = *(_QWORD *)a1;
    v12 = *(_QWORD *)(W32GetUserSessionState(v3, WPP_GLOBAL_Control) + 69152);
    v13 = 73;
    goto LABEL_24;
  }
  if ( *(char *)(*((_QWORD *)a1 + 5) + 24LL) < 0 )
  {
    v7 = 1;
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
      || (v9 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v9 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    {
      v7 = 0;
    }
    if ( !v9 && !v7 )
      return 0;
    v14 = *(_QWORD *)a1;
    v12 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v2) + 69152);
    v13 = 74;
    goto LABEL_24;
  }
  v4 = *(__int16 **)(*((_QWORD *)a1 + 17) + 8LL);
  v5 = *v4;
  v7 = 1;
  if ( v5 != *(_WORD *)(*(_QWORD *)(W32GetUserSessionState(v4, v2) + 19904) + 898LL)
    && (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 17) + 8LL) + 10LL) & 1) == 0 )
  {
    return 1;
  }
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
    || (v9 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    v9 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v7 = 0;
  if ( v9 || v7 )
  {
    v14 = *(_QWORD *)a1;
    v12 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v6) + 69152);
    v13 = 75;
LABEL_24:
    LOBYTE(v11) = v7;
    LOBYTE(v10) = v9;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v10,
      v11,
      v12,
      5,
      7,
      v13,
      (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
      v14);
  }
  return 0;
}
