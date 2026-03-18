/*
 * XREFs of RIMProcessAnyPointerDeviceInput @ 0x1400477E4
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x14009E9D0 (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     rimQueueApiSetHidRawInputAsyncWorkItem @ 0x140045CC8 (rimQueueApiSetHidRawInputAsyncWorkItem.c)
 *     ApiSetEnsurePointerDeviceHasMonitor @ 0x140047B58 (ApiSetEnsurePointerDeviceHasMonitor.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x140047BC8 (rimDoProcessAnyPointerDeviceInput.c)
 *     RIMAbConfigureDeviceArbitration @ 0x14004853C (RIMAbConfigureDeviceArbitration.c)
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x140048BE0 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 *     IsPTPInputEnabled @ 0x140048E30 (IsPTPInputEnabled.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ApiSetProcessHidRawInput @ 0x1400A1C74 (ApiSetProcessHidRawInput.c)
 *     ?DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z @ 0x1400A1E74 (-DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z.c)
 */

_UNKNOWN **__fastcall RIMProcessAnyPointerDeviceInput(_DWORD *a1, __int64 a2)
{
  __int64 v2; // rsi
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  int v8; // eax
  _UNKNOWN **result; // rax
  int v10; // r8d
  bool v11; // si
  bool v12; // bp
  __int64 v13; // rax
  int v14; // r8d
  int v15; // edx
  __int64 v16; // rdx
  bool v17; // si
  bool v18; // bp
  __int64 v19; // rax
  int v20; // r8d
  int v21; // edx
  bool v22; // si
  bool v23; // bp
  __int64 UserSessionState; // rax
  int v25; // r8d
  int v26; // edx
  bool v27; // si
  bool v28; // bp
  __int64 v29; // rax
  int v30; // r8d
  int v31; // edx

  v2 = *(_QWORD *)(a2 + 456);
  if ( !(unsigned int)ApiSetEnsurePointerDeviceHasMonitor(v2) )
  {
    v22 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v5, v7);
      LOBYTE(v25) = v23;
      LOBYTE(v26) = v22;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v26,
        v25,
        *(_QWORD *)(UserSessionState + 19368),
        4,
        1,
        10,
        (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids);
    }
    v16 = 0LL;
    goto LABEL_22;
  }
  if ( *(_DWORD *)(v2 + 24) == 7 && !(unsigned int)IsPTPInputEnabled() )
  {
    v11 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v5, v7);
      LOBYTE(v14) = v12;
      LOBYTE(v15) = v11;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v15,
        v14,
        *(_QWORD *)(v13 + 19368),
        4,
        1,
        11,
        (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids);
    }
    v16 = 1LL;
    goto LABEL_22;
  }
  v8 = *(_DWORD *)(v2 + 24);
  if ( (v8 == 1 || (unsigned int)(v8 - 2) <= 2) && !*(_BYTE *)(W32GetUserSessionState(v6, v5, v7) + 184) )
  {
    v17 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v19 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v5, v7);
      LOBYTE(v20) = v18;
      LOBYTE(v21) = v17;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v21,
        v20,
        *(_QWORD *)(v19 + 19368),
        4,
        1,
        12,
        (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids);
    }
    v16 = 2LL;
    goto LABEL_22;
  }
  if ( !*(_DWORD *)(v2 + 156) )
  {
    v27 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v28 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v27 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v29 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v5, v7);
      LOBYTE(v30) = v28;
      LOBYTE(v31) = v27;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v31,
        v30,
        *(_QWORD *)(v29 + 19368),
        4,
        1,
        13,
        (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids);
    }
    v16 = 3LL;
LABEL_22:
    result = (_UNKNOWN **)InputTraceLogging::RIM::DropInput(a2, v16);
    goto LABEL_10;
  }
  if ( !a1[116] )
    RIMAbConfigureDeviceArbitration();
  result = (_UNKNOWN **)rimDoProcessAnyPointerDeviceInput(a1, a2);
LABEL_10:
  if ( (*(_DWORD *)(a2 + 168) & 0x20000) != 0 )
  {
    if ( (unsigned int)GET_USERCRIT_DISPOSITION() )
      return (_UNKNOWN **)ApiSetProcessHidRawInput(
                            a2,
                            *(_QWORD *)(*(_QWORD *)(a2 + 440) + 24LL),
                            *(unsigned int *)(a2 + 248));
    else
      return rimQueueApiSetHidRawInputAsyncWorkItem(a1, a2, v10);
  }
  return result;
}
