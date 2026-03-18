/*
 * XREFs of rimFindOrCreateActiveContact @ 0x140184CA8
 * Callers:
 *     rimProcessPointerDeviceContact @ 0x140184FF0 (rimProcessPointerDeviceContact.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1400A015C (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMCmActivateContact @ 0x1401F52B0 (RIMCmActivateContact.c)
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
  __int64 v8; // rdx
  char v9; // bl
  bool v10; // di
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  unsigned int v14; // r8d
  _QWORD **v15; // rcx
  _QWORD *i; // rdx
  __int64 v17; // rbx
  __int64 v18; // rdx
  unsigned int v19; // r9d
  int v20; // ecx
  unsigned int v21; // ebp
  unsigned int v22; // r14d
  char v23; // si
  bool v24; // r15
  __int64 v25; // rax
  void *v26; // rdx
  int v27; // r8d
  __int64 v28; // rdx
  __int64 v29; // rcx
  char v30; // si
  bool v31; // bp
  __int64 v32; // rax
  void *v33; // rdx
  int v34; // r8d

  v6 = a6;
  LODWORD(a6) = 0;
  if ( HidP_GetUsageValue(HidP_Input, 0xDu, a5, 0x51u, (PULONG)&a6, a2, a3, ReportLength) < 0 )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v9 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v9 = 0;
    }
    v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v8);
      LOBYTE(v12) = v10;
      LOBYTE(v13) = v9;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v13,
        v12,
        *(_QWORD *)(UserSessionState + 19336),
        3,
        1,
        37,
        (__int64)&WPP_9efea04d3dc2347d4aca0dea27eac2eb_Traceguids);
    }
  }
  v14 = (unsigned int)a6;
  v15 = (_QWORD **)(*(_QWORD *)(a1 + 1000) + 16LL * ((unsigned int)a6 % *(_DWORD *)(a1 + 1008)));
  for ( i = *v15; ; i = (_QWORD *)*i )
  {
    if ( i == v15 )
    {
      v17 = 0LL;
      goto LABEL_15;
    }
    v17 = (__int64)(i - 2);
    if ( *((_DWORD *)i - 4) == (_DWORD)a6 && (*(_DWORD *)(v17 + 32) & 4) == 0 )
      break;
  }
  if ( i != (_QWORD *)16 )
  {
    *v6 = 0;
    return v17;
  }
LABEL_15:
  v18 = *(unsigned int *)(a1 + 24);
  v19 = *(_DWORD *)(a1 + 1016);
  *v6 = 1;
  if ( (_DWORD)v18 == 7 )
    v20 = -__CFSHR__(*(_DWORD *)(*(_QWORD *)(a1 + 976) + 32LL), 2);
  else
    v20 = 0;
  v21 = v19 - 1;
  if ( !v20 )
    v21 = v19;
  v22 = *(_DWORD *)(a1 + 776) - 1;
  if ( (_DWORD)v18 != 7 )
    v22 = *(_DWORD *)(a1 + 776);
  if ( v21 > v22 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 926LL);
LABEL_35:
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 935LL);
    v14 = (unsigned int)a6;
LABEL_36:
    v17 = RIMCmActivateContact(a1, v14);
    if ( !v17 )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (v29 = *((unsigned int *)WPP_GLOBAL_Control + 11), (v29 & 1) == 0)
        || (v30 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v30 = 0;
      }
      v31 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v30 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v32 = W32GetUserSessionState(v29, v28);
        v33 = &WPP_9efea04d3dc2347d4aca0dea27eac2eb_Traceguids;
        LOBYTE(v34) = v31;
        LOBYTE(v33) = v30;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          (_DWORD)v33,
          v34,
          *(_QWORD *)(v32 + 19336),
          2,
          1,
          39,
          (__int64)&WPP_9efea04d3dc2347d4aca0dea27eac2eb_Traceguids);
      }
    }
    return v17;
  }
  if ( v21 != v22 )
  {
    if ( v21 < v22 )
      goto LABEL_36;
    goto LABEL_35;
  }
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v23 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
  {
    v23 = 0;
  }
  v24 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v25 = W32GetUserSessionState(WPP_GLOBAL_Control, v18);
    v26 = &WPP_9efea04d3dc2347d4aca0dea27eac2eb_Traceguids;
    LOBYTE(v27) = v24;
    LOBYTE(v26) = v23;
    WPP_RECORDER_AND_TRACE_SF_Dd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      (_DWORD)v26,
      v27,
      *(_QWORD *)(v25 + 19336),
      2,
      1,
      38,
      (__int64)&WPP_9efea04d3dc2347d4aca0dea27eac2eb_Traceguids,
      v21 + 1,
      v22);
  }
  return v17;
}
