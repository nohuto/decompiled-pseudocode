/*
 * XREFs of rimFindOrCreateActiveContact @ 0x14004A128
 * Callers:
 *     rimProcessPointerDeviceContact @ 0x1400498A4 (rimProcessPointerDeviceContact.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x140070478 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMCmActivateContact @ 0x14015C7F8 (RIMCmActivateContact.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall rimFindOrCreateActiveContact(
        __int64 a1,
        struct _HIDP_PREPARSED_DATA *a2,
        CHAR *a3,
        ULONG ReportLength,
        USHORT a5,
        _DWORD *a6)
{
  _DWORD *v6; // r14
  int v8; // edx
  int v9; // r8d
  unsigned int v10; // r8d
  _QWORD **v11; // rdx
  _QWORD *i; // rcx
  __int64 v13; // rbx
  int v15; // edx
  unsigned int v16; // r9d
  int v17; // ecx
  unsigned int v18; // ebp
  unsigned int v19; // r14d
  int v20; // edx
  int v21; // ecx
  int v22; // r8d
  char v23; // si
  bool v24; // bp
  __int64 v25; // rax
  void *v26; // rdx
  int v27; // r8d
  char v28; // bl
  bool v29; // di
  __int64 UserSessionState; // rax
  int v31; // r8d
  int v32; // edx
  char v33; // si
  bool v34; // r15
  __int64 v35; // rax
  void *v36; // rdx
  int v37; // r8d

  v6 = a6;
  LODWORD(a6) = 0;
  if ( HidP_GetUsageValue(HidP_Input, 0xDu, a5, 0x51u, (PULONG)&a6, a2, a3, ReportLength) < 0 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v28 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v28 = 0;
    }
    v29 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v28 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v8, v9);
      LOBYTE(v31) = v29;
      LOBYTE(v32) = v28;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v32,
        v31,
        *(_QWORD *)(UserSessionState + 19368),
        3,
        1,
        37,
        (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids);
    }
  }
  v10 = (unsigned int)a6;
  v11 = (_QWORD **)(*(_QWORD *)(a1 + 1000) + 16LL * ((unsigned int)a6 % *(_DWORD *)(a1 + 1008)));
  for ( i = *v11; ; i = (_QWORD *)*i )
  {
    if ( i == v11 )
    {
      v13 = 0LL;
      goto LABEL_11;
    }
    v13 = (__int64)(i - 2);
    if ( *((_DWORD *)i - 4) == (_DWORD)a6 && (*(_DWORD *)(v13 + 32) & 4) == 0 )
      break;
  }
  if ( i != (_QWORD *)16 )
  {
    *v6 = 0;
    return v13;
  }
LABEL_11:
  v15 = *(_DWORD *)(a1 + 24);
  v16 = *(_DWORD *)(a1 + 1016);
  *v6 = 1;
  if ( v15 == 7 )
    v17 = -__CFSHR__(*(_DWORD *)(*(_QWORD *)(a1 + 976) + 32LL), 2);
  else
    v17 = 0;
  v18 = v16 - 1;
  if ( !v17 )
    v18 = v16;
  v19 = *(_DWORD *)(a1 + 776) - 1;
  if ( v15 != 7 )
    v19 = *(_DWORD *)(a1 + 776);
  if ( v18 > v19 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 926LL);
LABEL_38:
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 935LL);
    v10 = (unsigned int)a6;
LABEL_20:
    v13 = RIMCmActivateContact(a1, v10);
    if ( !v13 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (v21 = *((_DWORD *)WPP_GLOBAL_Control + 11), (v21 & 1) == 0)
        || (v23 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v23 = 0;
      }
      v24 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v25 = W32GetUserSessionState(v21, v20, v22);
        v26 = &WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids;
        LOBYTE(v27) = v24;
        LOBYTE(v26) = v23;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          (_DWORD)v26,
          v27,
          *(_QWORD *)(v25 + 19368),
          2,
          1,
          39,
          (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids);
      }
    }
    return v13;
  }
  if ( v18 != v19 )
  {
    if ( v18 < v19 )
      goto LABEL_20;
    goto LABEL_38;
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v33 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
  {
    v33 = 0;
  }
  v34 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v33 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v35 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v15, v10);
    v36 = &WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids;
    LOBYTE(v37) = v34;
    LOBYTE(v36) = v33;
    WPP_RECORDER_AND_TRACE_SF_Dd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      (_DWORD)v36,
      v37,
      *(_QWORD *)(v35 + 19368),
      2,
      1,
      38,
      (__int64)&WPP_1b05fcd7ec9e345bbcd9423b008e3ef9_Traceguids,
      v18 + 1,
      v19);
  }
  return v13;
}
