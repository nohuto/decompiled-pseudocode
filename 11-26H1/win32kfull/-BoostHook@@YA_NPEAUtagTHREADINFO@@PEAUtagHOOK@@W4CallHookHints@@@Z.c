/*
 * XREFs of ?BoostHook@@YA_NPEAUtagTHREADINFO@@PEAUtagHOOK@@W4CallHookHints@@@Z @ 0x140190F44
 * Callers:
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z @ 0x14003BDE8 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dDDd @ 0x140190E0C (WPP_RECORDER_AND_TRACE_SF_dDDd.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_DDd @ 0x14019145C (WPP_RECORDER_AND_TRACE_SF_DDd.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

char __fastcall BoostHook(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rbx
  __int64 v5; // rdx
  char v6; // r15
  unsigned int v7; // ebp
  char v8; // al
  __int64 v9; // rdx
  __int64 v10; // rax
  int v11; // r8d
  int v12; // edx
  __int64 v13; // rdx
  char v14; // di
  bool v15; // si
  __int64 v16; // rax
  int v17; // r8d
  int v18; // edx
  bool v20; // bp
  __int64 v21; // rdx
  __int64 UserSessionState; // rax
  int v23; // r8d
  int v24; // edx
  char v25; // r12
  bool v26; // r13
  __int64 v27; // rdx
  __int64 v28; // rax
  int v29; // r8d
  int v30; // edx
  char v31; // [rsp+B8h] [rbp+10h]
  bool v32; // [rsp+C8h] [rbp+20h]

  v3 = *(_QWORD *)(a2 + 16);
  v5 = *(int *)(a2 + 48);
  if ( (dword_140362794[v5] & 0x20) == 0 )
    return 0;
  v6 = 1;
  if ( (_DWORD)v5 == 13 )
  {
    v7 = 0;
  }
  else
  {
    v7 = -1;
    if ( (_DWORD)v5 == 14 )
      v7 = 1;
  }
  if ( (a3 & 1) == 0 && !(unsigned __int8)tagTHREADINFO::IsPriorityFloorSet(a1, v7) )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x10) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    {
      v6 = 0;
    }
    v20 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      PsGetThreadId(*(PETHREAD *)v3);
      UserSessionState = W32GetUserSessionState(*(_QWORD *)(v3 + 456), v21);
      LOBYTE(v23) = v20;
      LOBYTE(v24) = v6;
      WPP_RECORDER_AND_TRACE_SF_DDd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v24,
        v23,
        *(_QWORD *)(UserSessionState + 69152));
    }
    return 0;
  }
  if ( (*(_DWORD *)(a2 + 64) & 0x2000) != 0 )
  {
    if ( !(unsigned __int8)tagTHREADINFO::IsPriorityFloorSet(v3, v7) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1534LL);
    if ( *(_BYTE *)(a2 + 96) == 0xFF )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1535LL);
    ++*(_BYTE *)(a2 + 96);
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x10) == 0
      || (v25 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v25 = 0;
    }
    v26 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v25 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      PsGetThreadId(*(PETHREAD *)v3);
      v28 = W32GetUserSessionState(*(_QWORD *)(v3 + 456), v27);
      LOBYTE(v29) = v26;
      LOBYTE(v30) = v25;
      WPP_RECORDER_AND_TRACE_SF_dDDd(*((_QWORD *)WPP_GLOBAL_Control + 3), v30, v29, *(_QWORD *)(v28 + 69152));
    }
  }
  else
  {
    if ( *(_BYTE *)(a2 + 96) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1481LL);
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x10) == 0
      || (v8 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v8 = 0;
    }
    v31 = v8;
    v32 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      PsGetThreadId(*(PETHREAD *)v3);
      v10 = W32GetUserSessionState(*(_QWORD *)(v3 + 456), v9);
      LOBYTE(v11) = v32;
      LOBYTE(v12) = v31;
      WPP_RECORDER_AND_TRACE_SF_DDd(*((_QWORD *)WPP_GLOBAL_Control + 3), v12, v11, *(_QWORD *)(v10 + 69152));
    }
    *(_DWORD *)(a2 + 64) |= 0x2000u;
    *(_BYTE *)(a2 + 96) = 1;
    if ( !(unsigned __int8)tagTHREADINFO::IsPriorityFloorSet(v3, v7) )
    {
      if ( (unsigned __int8)tagTHREADINFO::IsPriorityFloorSet(v3, v7) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1525LL);
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x10) == 0
        || (v14 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v14 = 0;
      }
      v15 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v14 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v16 = W32GetUserSessionState(WPP_GLOBAL_Control, v13);
        LOBYTE(v17) = v15;
        LOBYTE(v18) = v14;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v18,
          v17,
          *(_QWORD *)(v16 + 69152),
          4,
          5,
          41,
          (__int64)&WPP_55a9d3539d723e79cd67d5f5f09277a6_Traceguids);
      }
      tagTHREADINFO::SetPriorityFloor(v3, v7);
    }
  }
  return 1;
}
