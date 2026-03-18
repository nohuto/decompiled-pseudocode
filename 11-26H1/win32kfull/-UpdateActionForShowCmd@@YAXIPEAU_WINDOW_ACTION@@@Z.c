/*
 * XREFs of ?UpdateActionForShowCmd@@YAXIPEAU_WINDOW_ACTION@@@Z @ 0x1401FCA20
 * Callers:
 *     ?xxxInterceptSetWindowPlacement@WindowActions@@YAXPEAUtagWND@@_NIAEBUtagRECT@@@Z @ 0x1401FC6E0 (-xxxInterceptSetWindowPlacement@WindowActions@@YAXPEAUtagWND@@_NIAEBUtagRECT@@@Z.c)
 *     ?xxxInterceptMinMaximize@WindowActions@@YAXPEAUtagWND@@IW4MinMaxOptions@@AEBVCMinMaxParams@@@Z @ 0x1402E596C (-xxxInterceptMinMaximize@WindowActions@@YAXPEAUtagWND@@IW4MinMaxOptions@@AEBVCMinMaxParams@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall UpdateActionForShowCmd(unsigned int a1, struct _WINDOW_ACTION *a2)
{
  bool v4; // si
  char v5; // bl
  char v6; // bp
  __int64 v7; // rax
  int v8; // r8d
  int v9; // edx
  char v10; // bp
  __int64 v11; // rax
  int v12; // r8d
  int v13; // edx
  char v14; // r15
  __int64 v15; // rax
  int v16; // r8d
  int v17; // edx
  char v18; // r12
  char v19; // r15
  __int64 UserSessionState; // rax
  int v21; // r8d
  int v22; // edx
  char v23; // al
  char v24; // r15
  char v25; // bp
  __int64 v26; // rax
  int v27; // r8d
  int v28; // edx
  char v29; // di
  __int64 v30; // rax
  int v31; // r8d
  int v32; // edx

  *((_DWORD *)a2 + 2) = 0;
  v4 = 0;
  v5 = 1;
  if ( a1 > 6 )
  {
    if ( a1 != 7 )
    {
      if ( a1 == 8 )
        goto LABEL_62;
      if ( a1 == 9 || a1 == 10 )
        goto LABEL_37;
      if ( a1 != 11 )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1571LL);
        return;
      }
    }
LABEL_48:
    *(_DWORD *)a2 |= 0x20u;
    *((_DWORD *)a2 + 10) = 2;
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v18 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v18 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v19 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      v19 = 0;
    }
    if ( v18 || v19 )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
      LOBYTE(v21) = v19;
      LOBYTE(v22) = v18;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v22,
        v21,
        *(_QWORD *)(UserSessionState + 69152),
        5,
        4,
        47,
        (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids);
    }
    if ( a1 == 2 || a1 == 7 )
    {
      v23 = 1;
      if ( a1 == 2 )
      {
        v4 = 1;
        goto LABEL_62;
      }
    }
    else
    {
      v23 = 0;
    }
    v4 = 0;
    if ( !v23 )
    {
LABEL_72:
      if ( v4 )
      {
        *(_DWORD *)a2 |= 0x10u;
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
          || (v29 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
        {
          v29 = 0;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || !*((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          v5 = 0;
        }
        if ( v29 || v5 )
        {
          v30 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
          LOBYTE(v31) = v5;
          LOBYTE(v32) = v29;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v32,
            v31,
            *(_QWORD *)(v30 + 69152),
            5,
            4,
            50,
            (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids);
        }
      }
      return;
    }
LABEL_62:
    *(_DWORD *)a2 |= 1u;
    *((_DWORD *)a2 + 2) = 1;
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v24 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v24 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v25 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      v25 = 0;
    }
    if ( v24 || v25 )
    {
      v26 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
      LOBYTE(v27) = v25;
      LOBYTE(v28) = v24;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v28,
        v27,
        *(_QWORD *)(v26 + 69152),
        5,
        4,
        49,
        (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids);
    }
    goto LABEL_72;
  }
  if ( a1 == 6 )
    goto LABEL_48;
  if ( a1 )
  {
    if ( a1 == 1 )
      goto LABEL_37;
    if ( a1 != 2 )
    {
      if ( a1 == 3 )
      {
        *(_DWORD *)a2 |= 0x20u;
        *((_DWORD *)a2 + 10) = 1;
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
          || (v6 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
        {
          v6 = 0;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
          && *((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          v4 = 1;
        }
        if ( v6 || v4 )
        {
          v7 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
          LOBYTE(v8) = v4;
          LOBYTE(v9) = v6;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v9,
            v8,
            *(_QWORD *)(v7 + 69152),
            5,
            4,
            48,
            (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids);
        }
        goto LABEL_19;
      }
      if ( a1 != 4 )
      {
LABEL_19:
        v4 = 1;
        goto LABEL_62;
      }
LABEL_37:
      *(_DWORD *)a2 |= 0x20u;
      *((_DWORD *)a2 + 10) = 0;
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (v14 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        v14 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
        && *((_WORD *)WPP_GLOBAL_Control + 36) )
      {
        v4 = 1;
      }
      if ( v14 || v4 )
      {
        v15 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
        LOBYTE(v16) = v4;
        LOBYTE(v17) = v14;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v17,
          v16,
          *(_QWORD *)(v15 + 69152),
          5,
          4,
          46,
          (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids);
      }
      v4 = a1 != 4;
      goto LABEL_62;
    }
    goto LABEL_48;
  }
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (v10 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    v10 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
    v4 = 1;
  if ( v10 || v4 )
  {
    v11 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
    LOBYTE(v12) = v4;
    LOBYTE(v13) = v10;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v13,
      v12,
      *(_QWORD *)(v11 + 69152),
      5,
      4,
      45,
      (__int64)&WPP_915619942c3b30d864344f6052e6503f_Traceguids);
  }
  *(_DWORD *)a2 |= 1u;
}
