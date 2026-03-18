/*
 * XREFs of PspBeginServerSiloShutdown @ 0x140B51B14
 * Callers:
 *     PspTerminateProcessesJobCallback @ 0x140959A60 (PspTerminateProcessesJobCallback.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140216B70 (PsGetServerSiloGlobals.c)
 *     PspAcquirePushLockShared @ 0x140503F58 (PspAcquirePushLockShared.c)
 *     PspReleasePushLockShared @ 0x14050B944 (PspReleasePushLockShared.c)
 *     PspGetServerSiloStatePointer @ 0x140529524 (PspGetServerSiloStatePointer.c)
 *     EtwTraceJobServerSiloStateChange @ 0x1408277F8 (EtwTraceJobServerSiloStateChange.c)
 */

char __fastcall PspBeginServerSiloShutdown(__int64 a1, int a2)
{
  _DWORD *ServerSiloGlobals; // rbp
  __int64 v5; // rcx
  volatile signed __int32 *ServerSiloStatePointer; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct _KLOCK_ENTRIES *v10; // r9
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  char v13; // bl

  ServerSiloGlobals = PsGetServerSiloGlobals(a1);
  ServerSiloStatePointer = (volatile signed __int32 *)PspGetServerSiloStatePointer(v5);
  PspAcquirePushLockShared(v8, v7, v9, v10);
  v11 = *ServerSiloStatePointer;
  while ( v11 < 3 )
  {
    v12 = v11;
    v11 = _InterlockedCompareExchange(ServerSiloStatePointer, 3, v11);
    if ( v12 == v11 )
    {
      EtwTraceJobServerSiloStateChange(a1, 3);
      v13 = 1;
      goto LABEL_6;
    }
  }
  v13 = 0;
LABEL_6:
  PspReleasePushLockShared();
  if ( v13 )
    ServerSiloGlobals[319] = a2;
  return v13;
}
