/*
 * XREFs of rimHandlePnpWaitersOnOwnedDevices @ 0x14017524C
 * Callers:
 *     rimApcIoUnregisterPlugPlayNotificationExWorker @ 0x14017516C (rimApcIoUnregisterPlugPlayNotificationExWorker.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005A6D0 (RIMLockExclusive.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqq @ 0x1401BE708 (WPP_RECORDER_AND_TRACE_SF_qqq.c)
 */

void __fastcall rimHandlePnpWaitersOnOwnedDevices(__int64 a1, int a2, int a3)
{
  int v3; // ebx
  __int64 v4; // rdi
  __int64 UserSessionState; // rax
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  _QWORD **v12; // r12
  _QWORD *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r14
  __int64 v17; // rax
  __int64 v18; // rdi
  char v19; // r15
  bool v20; // r13
  __int64 v21; // rax
  int v22; // r8d
  int v23; // edx
  __int64 v24; // rcx

  v3 = a2;
  v4 = a1;
  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  RIMLockExclusive(UserSessionState + 56);
  v12 = (_QWORD **)(W32GetUserSessionState(v7, v6, v8) + 136);
  v13 = *v12;
  if ( *v12 != v12 )
  {
    v9 = 0;
    v11 = 2;
    do
    {
      v14 = (__int64)(v13 + 13);
      if ( v13 == (_QWORD *)16 )
        v14 = 48LL;
      v10 = *(_DWORD *)v14;
      if ( *(_DWORD *)v14 == v3 || v10 == 3 && v3 == 2 )
      {
        v15 = (__int64)(v13 + 47);
        v10 = 320;
        if ( v13 == (_QWORD *)16 )
          v15 = 320LL;
        if ( *(_QWORD *)v15 == v4 )
        {
          v16 = (__int64)(v13 + 28);
          if ( v13 == (_QWORD *)16 )
            v16 = 168LL;
          if ( (*(_DWORD *)v16 & 0x10) != 0 )
          {
            v18 = (__int64)(v13 + 44);
            if ( v13 == (_QWORD *)16 )
              v18 = 296LL;
            if ( !*(_QWORD *)v18 )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1637LL);
            if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
              || (v19 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
            {
              v19 = 0;
            }
            v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v21 = W32GetUserSessionState(32, 0, v11);
              LOBYTE(v22) = v20;
              LOBYTE(v23) = v19;
              v4 = a1;
              WPP_RECORDER_AND_TRACE_SF_qqq(*((_QWORD *)WPP_GLOBAL_Control + 3), v23, v22, *(_QWORD *)(v21 + 19368));
              v3 = a2;
            }
            else
            {
              v4 = a1;
            }
            *(_DWORD *)v16 &= ~0x10u;
            v24 = (__int64)(v13 + 49);
            if ( v13 == (_QWORD *)16 )
              v24 = 336LL;
            KeSetEvent(*(PRKEVENT *)v24, 1, 0);
            v9 = 0;
            v11 = 2;
          }
        }
      }
      v13 = (_QWORD *)*v13;
    }
    while ( v13 != v12 );
  }
  v17 = W32GetUserSessionState(v10, v9, v11);
  RIMUnlockExclusive(v17 + 56);
}
