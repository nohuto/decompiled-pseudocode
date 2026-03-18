/*
 * XREFs of RIMProcessAnyPointerDeviceInput @ 0x1400D6900
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x140125744 (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ApiSetEnsurePointerDeviceHasMonitor @ 0x1400D6C68 (ApiSetEnsurePointerDeviceHasMonitor.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1400D6CD8 (rimDoProcessAnyPointerDeviceInput.c)
 *     rimQueueApiSetHidRawInputAsyncWorkItem @ 0x1400D7374 (rimQueueApiSetHidRawInputAsyncWorkItem.c)
 *     IsPTPInputEnabled @ 0x1400D74A8 (IsPTPInputEnabled.c)
 *     ?DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z @ 0x1400D74EC (-DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z.c)
 *     ApiSetProcessHidRawInput @ 0x14013F2A0 (ApiSetProcessHidRawInput.c)
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x1401A5130 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 *     RIMAbConfigureDeviceArbitration @ 0x1401DD4A8 (RIMAbConfigureDeviceArbitration.c)
 */

__int64 __fastcall RIMProcessAnyPointerDeviceInput(struct RawInputManagerObject *a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 result; // rax
  bool v8; // si
  bool v9; // bp
  __int64 v10; // rax
  int v11; // r8d
  int v12; // edx
  __int64 v13; // rdx
  bool v14; // si
  bool v15; // bp
  __int64 v16; // rax
  int v17; // r8d
  int v18; // edx
  bool v19; // si
  bool v20; // bp
  __int64 UserSessionState; // rax
  int v22; // r8d
  int v23; // edx
  bool v24; // si
  bool v25; // bp
  __int64 v26; // rax
  int v27; // r8d
  int v28; // edx

  v2 = *(_QWORD *)(a2 + 456);
  if ( !(unsigned int)ApiSetEnsurePointerDeviceHasMonitor(v2) )
  {
    v19 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v5);
      LOBYTE(v22) = v20;
      LOBYTE(v23) = v19;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v23,
        v22,
        *(_QWORD *)(UserSessionState + 19336),
        4,
        1,
        10,
        (__int64)&WPP_9efea04d3dc2347d4aca0dea27eac2eb_Traceguids);
    }
    v13 = 0LL;
    goto LABEL_21;
  }
  if ( *(_DWORD *)(v2 + 24) == 7 && !(unsigned int)IsPTPInputEnabled() )
  {
    v8 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = W32GetUserSessionState(WPP_GLOBAL_Control, v5);
      LOBYTE(v11) = v9;
      LOBYTE(v12) = v8;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v12,
        v11,
        *(_QWORD *)(v10 + 19336),
        4,
        1,
        11,
        (__int64)&WPP_9efea04d3dc2347d4aca0dea27eac2eb_Traceguids);
    }
    v13 = 1LL;
    goto LABEL_21;
  }
  if ( (unsigned int)(*(_DWORD *)(v2 + 24) - 1) <= 3 && !*(_BYTE *)(W32GetUserSessionState(v6, v5) + 184) )
  {
    v14 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v15 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v16 = W32GetUserSessionState(WPP_GLOBAL_Control, v5);
      LOBYTE(v17) = v15;
      LOBYTE(v18) = v14;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v18,
        v17,
        *(_QWORD *)(v16 + 19336),
        4,
        1,
        12,
        (__int64)&WPP_9efea04d3dc2347d4aca0dea27eac2eb_Traceguids);
    }
    v13 = 2LL;
    goto LABEL_21;
  }
  if ( !*(_DWORD *)(v2 + 156) )
  {
    v24 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v25 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v26 = W32GetUserSessionState(WPP_GLOBAL_Control, v5);
      LOBYTE(v27) = v25;
      LOBYTE(v28) = v24;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v28,
        v27,
        *(_QWORD *)(v26 + 19336),
        4,
        1,
        13,
        (__int64)&WPP_9efea04d3dc2347d4aca0dea27eac2eb_Traceguids);
    }
    v13 = 3LL;
LABEL_21:
    result = InputTraceLogging::RIM::DropInput(a2, v13);
    goto LABEL_10;
  }
  if ( !*((_DWORD *)a1 + 116) )
    RIMAbConfigureDeviceArbitration();
  result = rimDoProcessAnyPointerDeviceInput(a1, a2);
LABEL_10:
  if ( (*(_DWORD *)(a2 + 168) & 0x20000) != 0 )
  {
    if ( (unsigned int)GET_USERCRIT_DISPOSITION() )
      return ApiSetProcessHidRawInput(a2, *(_QWORD *)(*(_QWORD *)(a2 + 440) + 24LL), *(unsigned int *)(a2 + 248));
    else
      return rimQueueApiSetHidRawInputAsyncWorkItem(a1);
  }
  return result;
}
