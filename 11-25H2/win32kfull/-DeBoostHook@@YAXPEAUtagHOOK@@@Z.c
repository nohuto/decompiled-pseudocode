/*
 * XREFs of ?DeBoostHook@@YAXPEAUtagHOOK@@@Z @ 0x1402865C0
 * Callers:
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z @ 0x1400C6220 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z.c)
 *     FreeHook @ 0x1400C8710 (FreeHook.c)
 *     ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x14016A55C (-xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     PhkNextValid @ 0x1400C5F24 (PhkNextValid.c)
 *     PhkFirstGlobalValid @ 0x1400C8280 (PhkFirstGlobalValid.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_DDd @ 0x140182058 (WPP_RECORDER_AND_TRACE_SF_DDd.c)
 *     WPP_RECORDER_AND_TRACE_SF_dDDd @ 0x14018A1B4 (WPP_RECORDER_AND_TRACE_SF_dDDd.c)
 *     ?GetHookPriorityFloor@@YA?AW4tagThreadPriorityFloor@@PEBUtagHOOK@@@Z @ 0x1401A3E04 (-GetHookPriorityFloor@@YA-AW4tagThreadPriorityFloor@@PEBUtagHOOK@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall DeBoostHook(struct tagHOOK *a1)
{
  int v1; // eax
  __int64 v3; // r13
  char v4; // r12
  char v5; // al
  __int64 v6; // rdx
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx
  char v10; // bp
  __int64 v11; // rdx
  __int64 v12; // rax
  int v13; // edx
  int v14; // r8d
  __int64 i; // rax
  __int64 v16; // rdx
  bool v17; // bl
  __int64 v18; // rax
  int v19; // r8d
  int v20; // edx
  unsigned int HookPriorityFloor; // eax
  bool v22; // bp
  __int64 v23; // rdx
  __int64 v24; // rax
  int v25; // r8d
  int v26; // edx
  char v27; // [rsp+A0h] [rbp+8h]
  bool v28; // [rsp+A0h] [rbp+8h]
  bool v29; // [rsp+A8h] [rbp+10h]

  v1 = *((_DWORD *)a1 + 16);
  if ( (v1 & 0x1080) != 0 )
  {
    if ( (v1 & 0x2000) != 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1270);
  }
  else
  {
    if ( (v1 & 0x2000) == 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1274);
    v3 = *((_QWORD *)a1 + 2);
    v4 = 1;
    --*((_BYTE *)a1 + 96);
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x10) == 0
      || (v5 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v5 = 0;
    }
    v27 = v5;
    v29 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v5 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      PsGetThreadId(*(PETHREAD *)v3);
      UserSessionState = W32GetUserSessionState(*(_QWORD *)(v3 + 464), v6);
      LOBYTE(v8) = v29;
      LOBYTE(v9) = v27;
      WPP_RECORDER_AND_TRACE_SF_dDDd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v9,
        v8,
        *(_QWORD *)(UserSessionState + 69160));
    }
    if ( !*((_BYTE *)a1 + 96) )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x10) == 0
        || (v10 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
      {
        v10 = 0;
      }
      v28 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v10 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        PsGetThreadId(*(PETHREAD *)v3);
        v12 = W32GetUserSessionState(*(_QWORD *)(v3 + 464), v11);
        LOBYTE(v13) = v10;
        LOBYTE(v14) = v28;
        WPP_RECORDER_AND_TRACE_SF_DDd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v13,
          v14,
          *(_QWORD *)(v12 + 69160));
      }
      *((_DWORD *)a1 + 16) &= ~0x2000u;
      for ( i = PhkFirstGlobalValid(v3, *((unsigned int *)a1 + 12)); ; i = PhkNextValid(i, v16) )
      {
        if ( !i )
        {
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x10) == 0
            || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
          {
            v4 = 0;
          }
          v17 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v18 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v16);
            LOBYTE(v19) = v17;
            LOBYTE(v20) = v4;
            WPP_RECORDER_AND_TRACE_SF_(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v20,
              v19,
              *(_QWORD *)(v18 + 69160),
              4,
              5,
              34,
              (__int64)&WPP_ee71345fc15630358c6b50546088a96d_Traceguids);
          }
          HookPriorityFloor = GetHookPriorityFloor((__int64)a1);
          tagTHREADINFO::ClearPriorityFloor(v3, HookPriorityFloor);
          return;
        }
        if ( (struct tagHOOK *)i != a1 && *(_QWORD *)(i + 16) == v3 && (*(_DWORD *)(i + 64) & 0x2000) != 0 )
          break;
      }
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x10) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
      {
        v4 = 0;
      }
      v22 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        PsGetThreadId(*(PETHREAD *)v3);
        v24 = W32GetUserSessionState(*(_QWORD *)(v3 + 464), v23);
        LOBYTE(v25) = v22;
        LOBYTE(v26) = v4;
        WPP_RECORDER_AND_TRACE_SF_DDd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v26,
          v25,
          *(_QWORD *)(v24 + 69160));
      }
    }
  }
}
