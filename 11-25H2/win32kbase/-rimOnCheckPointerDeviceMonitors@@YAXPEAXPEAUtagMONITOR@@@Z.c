/*
 * XREFs of ?rimOnCheckPointerDeviceMonitors@@YAXPEAXPEAUtagMONITOR@@@Z @ 0x1401D7834
 * Callers:
 *     RIMOnDestroyMonitor @ 0x1400F6568 (RIMOnDestroyMonitor.c)
 * Callees:
 *     RawInputManagerObjectResolveHandle @ 0x14002E4F0 (RawInputManagerObjectResolveHandle.c)
 *     RIMLockExclusive @ 0x140033CB0 (RIMLockExclusive.c)
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall rimOnCheckPointerDeviceMonitors(char *a1, struct tagMONITOR *a2)
{
  char v4; // bl
  bool v5; // di
  __int64 UserSessionState; // rax
  int v7; // r8d
  int v8; // edx
  int v9; // eax
  __int64 v10; // rdx
  char v11; // r15
  _QWORD *v12; // rdi
  __int64 v13; // rdx
  __int64 i; // rbx
  __int64 v15; // rax
  char v16; // bl
  bool v17; // si
  __int64 v18; // rax
  int v19; // r8d
  int v20; // edx
  char v21; // bl
  bool v22; // di
  __int64 v23; // rax
  int v24; // r8d
  int v25; // edx
  PVOID Object; // [rsp+90h] [rbp+18h] BYREF

  Object = 0LL;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v4 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v4 = 0;
  }
  v5 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    LOBYTE(v7) = v5;
    LOBYTE(v8) = v4;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v8,
      v7,
      *(_QWORD *)(UserSessionState + 19336),
      4,
      1,
      79,
      (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids);
  }
  v9 = RawInputManagerObjectResolveHandle(a1, 3u, 0, &Object);
  v11 = v9;
  if ( v9 >= 0 )
  {
    v12 = Object;
    RIMLockExclusive((__int64)Object + 104);
    if ( *((_BYTE *)v12 + 81) )
    {
      v11 = -69;
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v16 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v16 = 0;
      }
      v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v18 = W32GetUserSessionState(WPP_GLOBAL_Control, v13);
        LOBYTE(v19) = v17;
        LOBYTE(v20) = v16;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v20,
          v19,
          *(_QWORD *)(v18 + 19336),
          3,
          1,
          80,
          (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids);
      }
    }
    else
    {
      RIMLockExclusive((__int64)(v12 + 95));
      for ( i = v12[53]; i; i = *(_QWORD *)(i + 40) )
      {
        if ( *(_DWORD *)(i + 1336) )
        {
          v15 = 0LL;
          if ( a2 )
            v15 = *(_QWORD *)a2;
          if ( *(_QWORD *)(i + 1344) == v15 )
          {
            if ( (*(_DWORD *)(i + 184) & 0x80u) != 0 && *(_DWORD *)(*(_QWORD *)(i + 456) + 24LL) == 6 )
            {
              LODWORD(Object) = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2393);
            }
            *(_QWORD *)(i + 1344) = 0LL;
            *(_DWORD *)(i + 1352) = 0;
          }
        }
      }
      RIMUnlockExclusive((__int64)(v12 + 95));
    }
    RIMUnlockExclusive((__int64)(v12 + 13));
    ObfDereferenceObject(v12);
  }
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v21 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v21 = 0;
  }
  v22 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v23 = W32GetUserSessionState(WPP_GLOBAL_Control, v10);
    LOBYTE(v24) = v22;
    LOBYTE(v25) = v21;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v25,
      v24,
      *(_QWORD *)(v23 + 19336),
      4,
      1,
      81,
      (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids,
      v11);
  }
}
