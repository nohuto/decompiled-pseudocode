/*
 * XREFs of ?UpdateActionForShowCmd@@YAXIPEAU_WINDOW_ACTION@@@Z @ 0x1402CCEF0
 * Callers:
 *     ?xxxInterceptMinMaximize@WindowActions@@YAXPEAUtagWND@@IW4MinMaxOptions@@AEBVCMinMaxParams@@@Z @ 0x1402D0B40 (-xxxInterceptMinMaximize@WindowActions@@YAXPEAUtagWND@@IW4MinMaxOptions@@AEBVCMinMaxParams@@@Z.c)
 *     ?xxxInterceptSetWindowPlacement@WindowActions@@YAXPEAUtagWND@@_NIAEBUtagRECT@@@Z @ 0x1402D1C6C (-xxxInterceptSetWindowPlacement@WindowActions@@YAXPEAUtagWND@@_NIAEBUtagRECT@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall UpdateActionForShowCmd(unsigned int a1, struct _WINDOW_ACTION *a2)
{
  bool v4; // r14
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
  __int64 v20; // rax
  int v21; // r8d
  int v22; // edx
  char v23; // al
  char v24; // r15
  char v25; // bp
  __int64 UserSessionState; // rax
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
      {
LABEL_60:
        *(_DWORD *)a2 |= 1u;
        *((_DWORD *)a2 + 2) = 1;
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
          || (v24 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
        {
          v24 = 0;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (v25 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
        {
          v25 = 0;
        }
        if ( v24 || v25 )
        {
          UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
          LOBYTE(v27) = v25;
          LOBYTE(v28) = v24;
          WPP_RECORDER_AND_TRACE_SF_(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v28,
            v27,
            *(_QWORD *)(UserSessionState + 69160),
            5,
            4,
            49,
            (__int64)&WPP_fade6bfb655b3fa6b02839cd02f2d6ee_Traceguids);
        }
LABEL_70:
        if ( v4 )
        {
          *(_DWORD *)a2 |= 0x10u;
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
            || (v29 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
          {
            v29 = 0;
          }
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
            || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
          {
            v5 = 0;
          }
          if ( v29 || v5 )
          {
            v30 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
            LOBYTE(v31) = v5;
            LOBYTE(v32) = v29;
            WPP_RECORDER_AND_TRACE_SF_(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v32,
              v31,
              *(_QWORD *)(v30 + 69160),
              5,
              4,
              50,
              (__int64)&WPP_fade6bfb655b3fa6b02839cd02f2d6ee_Traceguids);
          }
        }
        return;
      }
      if ( a1 == 9 || a1 == 10 )
        goto LABEL_35;
      if ( a1 != 11 )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1580);
        return;
      }
    }
LABEL_46:
    *(_DWORD *)a2 |= 0x20u;
    *((_DWORD *)a2 + 10) = 2;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v18 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v18 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v19 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v19 = 0;
    }
    if ( v18 || v19 )
    {
      v20 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
      LOBYTE(v21) = v19;
      LOBYTE(v22) = v18;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v22,
        v21,
        *(_QWORD *)(v20 + 69160),
        5,
        4,
        47,
        (__int64)&WPP_fade6bfb655b3fa6b02839cd02f2d6ee_Traceguids);
    }
    if ( a1 == 2 || (v23 = 0, a1 == 7) )
      v23 = 1;
    v4 = a1 == 2;
    if ( !v23 )
      goto LABEL_70;
    goto LABEL_60;
  }
  if ( a1 == 6 )
    goto LABEL_46;
  if ( a1 )
  {
    if ( a1 == 1 )
      goto LABEL_35;
    if ( a1 != 2 )
    {
      if ( a1 == 3 )
      {
        *(_DWORD *)a2 |= 0x20u;
        *((_DWORD *)a2 + 10) = 1;
        if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
          && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0 )
        {
          v4 = *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (v6 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
        {
          v6 = 0;
        }
        if ( v4 || v6 )
        {
          v7 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
          LOBYTE(v8) = v6;
          LOBYTE(v9) = v4;
          WPP_RECORDER_AND_TRACE_SF_(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v9,
            v8,
            *(_QWORD *)(v7 + 69160),
            5,
            4,
            48,
            (__int64)&WPP_fade6bfb655b3fa6b02839cd02f2d6ee_Traceguids);
        }
        goto LABEL_18;
      }
      if ( a1 != 4 )
      {
LABEL_18:
        v4 = 1;
        goto LABEL_60;
      }
LABEL_35:
      *(_DWORD *)a2 |= 0x20u;
      *((_DWORD *)a2 + 10) = 0;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || (v14 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v14 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
        && *(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
      {
        v4 = 1;
      }
      if ( v14 || v4 )
      {
        v15 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
        LOBYTE(v16) = v4;
        LOBYTE(v17) = v14;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v17,
          v16,
          *(_QWORD *)(v15 + 69160),
          5,
          4,
          46,
          (__int64)&WPP_fade6bfb655b3fa6b02839cd02f2d6ee_Traceguids);
      }
      v4 = a1 != 4;
      goto LABEL_60;
    }
    goto LABEL_46;
  }
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0 )
  {
    v4 = *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v10 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v10 = 0;
  }
  if ( v4 || v10 )
  {
    v11 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
    LOBYTE(v12) = v10;
    LOBYTE(v13) = v4;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v13,
      v12,
      *(_QWORD *)(v11 + 69160),
      5,
      4,
      45,
      (__int64)&WPP_fade6bfb655b3fa6b02839cd02f2d6ee_Traceguids);
  }
  *(_DWORD *)a2 |= 1u;
}
