/*
 * XREFs of PspCompleteServerSiloShutdown @ 0x1407F4578
 * Callers:
 *     PspTerminateProcessesJobCallback @ 0x1409FF320 (PspTerminateProcessesJobCallback.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140216EA0 (PsGetServerSiloGlobals.c)
 *     PsGetServerSiloState @ 0x140216EC0 (PsGetServerSiloState.c)
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 */

void __fastcall PspCompleteServerSiloShutdown(__int64 a1)
{
  void *v2; // rcx
  char *ServerSiloGlobals; // rax

  if ( (unsigned int)PsGetServerSiloState(a1) != 3 )
    NT_ASSERT("PsGetServerSiloState(ServerSilo) == SERVERSILO_TERMINATING");
  PsReferenceSiloContext(v2);
  ServerSiloGlobals = (char *)PsGetServerSiloGlobals(a1);
  *((_QWORD *)ServerSiloGlobals + 166) = a1;
  *((_QWORD *)ServerSiloGlobals + 165) = PspCompleteServerSiloShutdownDeferred;
  *((_QWORD *)ServerSiloGlobals + 163) = 0LL;
  ExQueueWorkItem((PWORK_QUEUE_ITEM)(ServerSiloGlobals + 1304), DelayedWorkQueue);
}
