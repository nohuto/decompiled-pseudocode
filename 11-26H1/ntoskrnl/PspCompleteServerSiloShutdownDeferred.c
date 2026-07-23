/*
 * XREFs of PspCompleteServerSiloShutdownDeferred @ 0x1407F45D0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140216EA0 (PsGetServerSiloGlobals.c)
 *     PsGetServerSiloState @ 0x140216EC0 (PsGetServerSiloState.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     PspAcquirePushLockShared @ 0x1404FD828 (PspAcquirePushLockShared.c)
 *     PspReleasePushLockShared @ 0x1405053B4 (PspReleasePushLockShared.c)
 *     PspGetServerSiloStatePointer @ 0x14052B9B8 (PspGetServerSiloStatePointer.c)
 *     PspDeleteExternalServerSiloState @ 0x1407F48B8 (PspDeleteExternalServerSiloState.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x1407F5658 (PspTerminateSiloSubsystemProcesses.c)
 *     PspSendSiloTerminationNotification @ 0x1407FECF8 (PspSendSiloTerminationNotification.c)
 *     PspGetNextMonitor @ 0x140801A20 (PspGetNextMonitor.c)
 *     PspInvokeTerminateCallback @ 0x140801AAC (PspInvokeTerminateCallback.c)
 *     EtwTraceJobServerSiloStateChange @ 0x14082DA38 (EtwTraceJobServerSiloStateChange.c)
 */

LONG_PTR __fastcall PspCompleteServerSiloShutdownDeferred(PVOID Object)
{
  _QWORD *ServerSiloGlobals; // rsi
  __int64 v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  _DWORD *ServerSiloStatePointer; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct _KLOCK_ENTRIES *v10; // r9
  __int64 i; // rcx
  __int64 NextMonitor; // rax
  __int64 v13; // rdi
  void *v14; // rcx

  ServerSiloGlobals = PsGetServerSiloGlobals((__int64)Object);
  if ( (unsigned int)PsGetServerSiloState(v3) != 3 )
    NT_ASSERT("PsGetServerSiloState(Silo) == SERVERSILO_TERMINATING");
  PspTerminateSiloSubsystemProcesses();
  v4 = (void *)ServerSiloGlobals[106];
  if ( v4 )
  {
    ObfDereferenceObject(v4);
    ServerSiloGlobals[106] = 0LL;
  }
  v5 = (void *)ServerSiloGlobals[107];
  if ( v5 )
  {
    ObfDereferenceObject(v5);
    ServerSiloGlobals[107] = 0LL;
  }
  ServerSiloStatePointer = (_DWORD *)PspGetServerSiloStatePointer((__int64)Object);
  PspAcquirePushLockShared(v8, v7, v9, v10);
  if ( *ServerSiloStatePointer != 3 )
    __fastfail(5u);
  for ( i = 0LL; ; i = v13 )
  {
    NextMonitor = PspGetNextMonitor(i);
    v13 = NextMonitor;
    if ( !NextMonitor )
      break;
    if ( *(_QWORD *)(NextMonitor + 32) )
      PspInvokeTerminateCallback(Object, NextMonitor);
  }
  *ServerSiloStatePointer = 4;
  EtwTraceJobServerSiloStateChange(Object);
  PspReleasePushLockShared();
  PspDeleteExternalServerSiloState(Object);
  v14 = (void *)ServerSiloGlobals[105];
  if ( v14 )
  {
    ObfDereferenceObject(v14);
    ServerSiloGlobals[105] = 0LL;
  }
  PspSendSiloTerminationNotification(Object, *((unsigned int *)ServerSiloGlobals + 319));
  return ObfDereferenceObject(Object);
}
