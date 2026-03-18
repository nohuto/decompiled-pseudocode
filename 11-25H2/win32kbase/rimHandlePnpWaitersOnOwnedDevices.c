/*
 * XREFs of rimHandlePnpWaitersOnOwnedDevices @ 0x140181408
 * Callers:
 *     rimApcIoUnregisterPlugPlayNotificationExWorker @ 0x140153C6C (rimApcIoUnregisterPlugPlayNotificationExWorker.c)
 * Callees:
 *     RIMLockExclusive @ 0x140033CB0 (RIMLockExclusive.c)
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqq @ 0x14019ED70 (WPP_RECORDER_AND_TRACE_SF_qqq.c)
 */

void __fastcall rimHandlePnpWaitersOnOwnedDevices(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 v3; // rdi
  __int64 UserSessionState; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD **v9; // r14
  _QWORD *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r15
  __int64 v14; // rdi
  char v15; // r12
  bool v16; // r13
  __int64 v17; // rax
  int v18; // r8d
  int v19; // edx
  __int64 v20; // rcx
  __int64 v21; // rax
  int v23; // [rsp+A8h] [rbp+10h]

  v23 = a2;
  v2 = a2;
  v3 = a1;
  UserSessionState = W32GetUserSessionState(a1, a2);
  RIMLockExclusive(UserSessionState + 56);
  v9 = (_QWORD **)(W32GetUserSessionState(v6, v5) + 136);
  v10 = *v9;
  if ( *v9 != v9 )
  {
    v7 = 0LL;
    do
    {
      v11 = (__int64)(v10 + 13);
      if ( v10 == (_QWORD *)16 )
        v11 = 48LL;
      v8 = *(unsigned int *)v11;
      if ( (_DWORD)v8 == v2 || v2 == 2 && (_DWORD)v8 == 3 )
      {
        v12 = (__int64)(v10 + 47);
        v8 = 320LL;
        if ( v10 == (_QWORD *)16 )
          v12 = 320LL;
        if ( *(_QWORD *)v12 == v3 )
        {
          v13 = (__int64)(v10 + 28);
          if ( v10 == (_QWORD *)16 )
            v13 = 168LL;
          if ( (*(_DWORD *)v13 & 0x10) != 0 )
          {
            v14 = (__int64)(v10 + 44);
            if ( v10 == (_QWORD *)16 )
              v14 = 296LL;
            if ( !*(_QWORD *)v14 )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1625LL);
            if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
              || (v15 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
            {
              v15 = 0;
            }
            v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( !v15 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v3 = a1;
            }
            else
            {
              v17 = W32GetUserSessionState(32LL, 0LL);
              LOBYTE(v18) = v16;
              LOBYTE(v19) = v15;
              v3 = a1;
              WPP_RECORDER_AND_TRACE_SF_qqq(*((_QWORD *)WPP_GLOBAL_Control + 3), v19, v18, *(_QWORD *)(v17 + 19336));
              v2 = v23;
            }
            *(_DWORD *)v13 &= ~0x10u;
            v20 = (__int64)(v10 + 49);
            if ( v10 == (_QWORD *)16 )
              v20 = 336LL;
            KeSetEvent(*(PRKEVENT *)v20, 1, 0);
            v7 = 0LL;
          }
        }
      }
      v10 = (_QWORD *)*v10;
    }
    while ( v10 != v9 );
  }
  v21 = W32GetUserSessionState(v8, v7);
  RIMUnlockExclusive(v21 + 56);
}
