/*
 * XREFs of ?BeginApplyWindowActionOld@CRecalcProp@@QEAA_NPEAUtagWND@@I@Z @ 0x1402DD234
 * Callers:
 *     ?BeginApplyWindowActionOld@DesktopRecalc@@YA_NPEAUtagWND@@I@Z @ 0x1402DD554 (-BeginApplyWindowActionOld@DesktopRecalc@@YA_NPEAUtagWND@@I@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?SignalRecalcWork@CRecalcProp@@QEAAXW4SignalReason@DesktopRecalc@@@Z @ 0x14023DE70 (-SignalRecalcWork@CRecalcProp@@QEAAXW4SignalReason@DesktopRecalc@@@Z.c)
 *     ?ClearLastInterceptedTopology@CRecalcProp@@QEAAXXZ @ 0x1402DD620 (-ClearLastInterceptedTopology@CRecalcProp@@QEAAXXZ.c)
 */

char __fastcall CRecalcProp::BeginApplyWindowActionOld(CRecalcProp *this, struct tagWND *a2, int a3)
{
  char v6; // di
  bool v7; // bp
  bool v8; // r14
  __int64 v9; // rbx
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  bool v13; // bl
  __int64 v14; // rax
  int v15; // edx
  int v16; // r8d
  bool v18; // bp
  bool v19; // r14
  __int64 v20; // rbx
  __int64 v21; // rax
  int v22; // r8d
  int v23; // edx
  bool v24; // si
  bool v25; // bp
  __int64 v26; // rbx
  __int64 v27; // rax
  int v28; // r8d
  int v29; // edx
  __int16 v30; // [rsp+30h] [rbp-38h]

  v6 = 1;
  v7 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v8 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v9 = *(_QWORD *)a2;
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
    LOBYTE(v11) = v8;
    LOBYTE(v12) = v7;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v12,
      v11,
      *(_QWORD *)(UserSessionState + 69152),
      4,
      7,
      95,
      (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
      v9);
  }
  if ( *((_DWORD *)this + 6) != 1 )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
    {
      v6 = 0;
    }
    v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v6 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0;
    v14 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
    v30 = 96;
LABEL_25:
    LOBYTE(v16) = v13;
    LOBYTE(v15) = v6;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v15,
      v16,
      *(_QWORD *)(v14 + 69152),
      3,
      7,
      v30,
      (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids);
    return 0;
  }
  if ( *((_BYTE *)this + 56) )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
    {
      v6 = 0;
    }
    v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v6 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0;
    v14 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
    v30 = 97;
    goto LABEL_25;
  }
  if ( (*((_DWORD *)a2 + 96) & 0x10) == 0 || a3 )
  {
    *((_DWORD *)this + 6) = 2;
    *((_BYTE *)this + 56) = 1;
    v24 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v25 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v24 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v26 = *(_QWORD *)a2;
      v27 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
      LOBYTE(v28) = v25;
      LOBYTE(v29) = v24;
      WPP_RECORDER_AND_TRACE_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v29,
        v28,
        *(_QWORD *)(v27 + 69152),
        4,
        7,
        99,
        (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
        v26);
    }
  }
  else
  {
    v18 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v19 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v18 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v20 = *(_QWORD *)a2;
      v21 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
      LOBYTE(v22) = v19;
      LOBYTE(v23) = v18;
      WPP_RECORDER_AND_TRACE_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v23,
        v22,
        *(_QWORD *)(v21 + 69152),
        4,
        7,
        98,
        (__int64)&WPP_78206adbc0fc3667085fdf33c34682f8_Traceguids,
        v20);
    }
    CRecalcProp::ClearLastInterceptedTopology(this);
    *((_DWORD *)this + 6) = 1;
    CRecalcProp::SignalRecalcWork((__int64)this, 0);
  }
  return 1;
}
