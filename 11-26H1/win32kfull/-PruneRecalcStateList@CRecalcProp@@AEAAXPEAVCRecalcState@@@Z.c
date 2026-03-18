/*
 * XREFs of ?PruneRecalcStateList@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z @ 0x14011D2A8
 * Callers:
 *     ?CreateForTopologyChange@CRecalcProp@@SA_NPEAUHWND__@@PEAVCMonitorTopology@@W4StartRecalcReason@@@Z @ 0x14015E97C (-CreateForTopologyChange@CRecalcProp@@SA_NPEAUHWND__@@PEAVCMonitorTopology@@W4StartRecalcReason@.c)
 *     ?s_xxxProcessTopologyChange@CRecalcProp@@SAXPEAUHWND__@@PEAVCRecalcContext@@@Z @ 0x14028E8F0 (-s_xxxProcessTopologyChange@CRecalcProp@@SAXPEAUHWND__@@PEAVCRecalcContext@@@Z.c)
 *     ?EndApplyWindowAction@CRecalcProp@@QEAAXPEAUtagWND@@PEBVCMonitorTopology@@_N@Z @ 0x1402DD64C (-EndApplyWindowAction@CRecalcProp@@QEAAXPEAUtagWND@@PEBVCMonitorTopology@@_N@Z.c)
 *     ?SetPendingStateToProcessed@CRecalcProp@@AEAAXXZ @ 0x1402DE5F0 (-SetPendingStateToProcessed@CRecalcProp@@AEAAXXZ.c)
 *     ?xxxEndApplyWindowActionOld@CRecalcProp@@QEAAXPEAUtagWND@@PEAVCMonitorTopology@@@Z @ 0x1402DF288 (-xxxEndApplyWindowActionOld@CRecalcProp@@QEAAXPEAUtagWND@@PEAVCMonitorTopology@@@Z.c)
 * Callees:
 *     ?ShouldStoreAfterProcessing@CRecalcState@@QEBA_NPEBUtagWND@@@Z @ 0x14011D60C (-ShouldStoreAfterProcessing@CRecalcState@@QEBA_NPEBUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1401A4EE4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

void __fastcall CRecalcProp::PruneRecalcStateList(const struct tagWND **this, struct CRecalcState *a2)
{
  CRecalcState **v2; // rdi
  unsigned int v3; // r14d
  unsigned int *v6; // r8
  char v7; // bp
  char v8; // si
  CRecalcState *v9; // rcx
  CRecalcState *v10; // rdx
  __int64 v11; // rcx
  int v12; // ebx
  __int64 UserSessionState; // rax
  int v14; // r8d
  int v15; // edx
  char v16; // bp
  char v17; // si
  int v18; // ebx
  __int64 v19; // rax
  int v20; // r8d
  int v21; // edx

  v2 = this + 5;
  v3 = 0;
  while ( 1 )
  {
    v6 = &WPP_RECORDER_INITIALIZED;
    if ( !*v2 || v3 >= 3 )
      break;
    if ( *v2 == a2 )
    {
LABEL_7:
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
        || (v7 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        v7 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v8 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
      {
        v8 = 0;
      }
      if ( v7 || v8 )
      {
        v11 = *((_QWORD *)*v2 + 2);
        v12 = *(_DWORD *)(v11 + 12);
        UserSessionState = W32GetUserSessionState(v11, a2);
        LOBYTE(v14) = v8;
        LOBYTE(v15) = v7;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v15,
          v14,
          *(_QWORD *)(UserSessionState + 69152),
          5,
          7,
          126,
          (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
          v12);
      }
      v9 = *v2;
      *v2 = (CRecalcState *)*((_QWORD *)*v2 + 1);
      *((_QWORD *)v9 + 1) = 0LL;
      if ( v9 )
        (**(void (__fastcall ***)(CRecalcState *, __int64, unsigned int *))v9)(v9, 1LL, v6);
    }
    else
    {
      if ( !CRecalcState::ShouldStoreAfterProcessing(*v2, this[2]) )
      {
        v6 = &WPP_RECORDER_INITIALIZED;
        goto LABEL_7;
      }
      ++v3;
      v2 = (CRecalcState **)((char *)*v2 + 8);
    }
  }
  v10 = *v2;
  if ( *v2 )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
      || (v16 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v16 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v17 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      v17 = 0;
    }
    if ( v16 || v17 )
    {
      v18 = *(_DWORD *)(*((_QWORD *)v10 + 2) + 12LL);
      v19 = W32GetUserSessionState(WPP_GLOBAL_Control, v10);
      LOBYTE(v20) = v17;
      LOBYTE(v21) = v16;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v21,
        v20,
        *(_QWORD *)(v19 + 69152),
        5,
        7,
        127,
        (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
        v18);
    }
    if ( *v2 )
      (**(void (__fastcall ***)(CRecalcState *, __int64, unsigned int *))*v2)(*v2, 1LL, v6);
    *v2 = 0LL;
  }
}
