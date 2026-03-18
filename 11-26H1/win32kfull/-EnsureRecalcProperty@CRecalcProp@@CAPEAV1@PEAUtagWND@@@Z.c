/*
 * XREFs of ?EnsureRecalcProperty@CRecalcProp@@CAPEAV1@PEAUtagWND@@@Z @ 0x14015F394
 * Callers:
 *     ?CreateForTopologyChange@CRecalcProp@@SA_NPEAUHWND__@@PEAVCMonitorTopology@@W4StartRecalcReason@@@Z @ 0x14015E97C (-CreateForTopologyChange@CRecalcProp@@SA_NPEAUHWND__@@PEAVCMonitorTopology@@W4StartRecalcReason@.c)
 * Callees:
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x14000FD08 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     ?GetRecalcProperty@CRecalcProp@@SAPEAV1@PEBUtagWND@@@Z @ 0x14015F568 (-GetRecalcProperty@CRecalcProp@@SAPEAV1@PEBUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ??_GCRecalcProp@@AEAAPEAXI@Z @ 0x1402102BC (--_GCRecalcProp@@AEAAPEAXI@Z.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

struct CRecalcProp *__fastcall CRecalcProp::EnsureRecalcProperty(struct tagWND *a1)
{
  struct CRecalcProp *result; // rax
  CWindowProp *v3; // rax
  __int64 v4; // rdx
  CWindowProp *v5; // rsi
  __int64 v6; // rdx
  bool v7; // di
  bool v8; // bp
  __int64 v9; // rbx
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  bool v13; // di
  bool v14; // si
  __int64 v15; // rbx
  __int64 v16; // rax
  int v17; // r8d
  int v18; // edx

  result = CRecalcProp::GetRecalcProperty(a1);
  if ( !result )
  {
    v3 = (CWindowProp *)Win32AllocPoolZInit(104LL, 1920168789LL);
    v5 = v3;
    if ( v3 )
    {
      memset_0(v3, 0, 0x68uLL);
      *(_QWORD *)v5 = &CRecalcProp::`vftable';
      if ( (unsigned int)CWindowProp::SetProp(v5, (unsigned __int64)a1) )
      {
        *((_DWORD *)a1 + 95) |= 0x80u;
        return v5;
      }
      v7 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
      v8 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v9 = *(_QWORD *)a1;
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v6);
        LOBYTE(v11) = v8;
        LOBYTE(v12) = v7;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v12,
          v11,
          *(_QWORD *)(UserSessionState + 69152),
          2,
          7,
          62,
          (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
          v9);
      }
      CRecalcProp::`scalar deleting destructor'(v5, v6);
    }
    else
    {
      v13 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
      v14 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v13 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v15 = *(_QWORD *)a1;
        v16 = W32GetUserSessionState(WPP_GLOBAL_Control, v4);
        LOBYTE(v17) = v14;
        LOBYTE(v18) = v13;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v18,
          v17,
          *(_QWORD *)(v16 + 69152),
          2,
          7,
          61,
          (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
          v15);
      }
    }
    return 0LL;
  }
  return result;
}
