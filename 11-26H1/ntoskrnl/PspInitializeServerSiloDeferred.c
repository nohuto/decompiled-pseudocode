/*
 * XREFs of PspInitializeServerSiloDeferred @ 0x1407F4BD0
 * Callers:
 *     PspQueueDeferredWorkAndWait @ 0x1407F4E38 (PspQueueDeferredWorkAndWait.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     PsGetServerSiloGlobals @ 0x140216EA0 (PsGetServerSiloGlobals.c)
 *     PsAttachSiloToCurrentThread @ 0x140466600 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x14046FB80 (PsDetachSiloFromCurrentThread.c)
 *     EtwpGetCurrentSiloMaxLoggers @ 0x1406C759C (EtwpGetCurrentSiloMaxLoggers.c)
 *     sub_1406D1320 @ 0x1406D1320 (sub_1406D1320.c)
 *     DbgkpInitializePhase1SiloState @ 0x14078D0F8 (DbgkpInitializePhase1SiloState.c)
 *     ObInitServerSilo @ 0x1407C5350 (ObInitServerSilo.c)
 *     PspInitializeProtectedProcessParameters @ 0x1407F3CA8 (PspInitializeProtectedProcessParameters.c)
 *     PsTerminateServerSilo @ 0x1407F4380 (PsTerminateServerSilo.c)
 *     PspDeleteExternalServerSiloState @ 0x1407F48B8 (PspDeleteExternalServerSiloState.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1407F5270 (PspSiloInitializeSystemRootSymlink.c)
 *     PspSiloInitializeUserSharedData @ 0x1407F539C (PspSiloInitializeUserSharedData.c)
 *     PspSiloLoadApiSets @ 0x1407F557C (PspSiloLoadApiSets.c)
 *     PspNotifyServerSiloCreation @ 0x140801B0C (PspNotifyServerSiloCreation.c)
 *     RtlInitFunctionalityCache @ 0x140805E18 (RtlInitFunctionalityCache.c)
 *     RtlNlsInitState @ 0x1408078C8 (RtlNlsInitState.c)
 *     SeInitServerSilo @ 0x140815B6C (SeInitServerSilo.c)
 *     EtwpCleanupSiloState @ 0x14082B430 (EtwpCleanupSiloState.c)
 *     EtwpInitializeSiloState @ 0x14082C390 (EtwpInitializeSiloState.c)
 *     EtwpPreInitializeSiloState @ 0x14082D040 (EtwpPreInitializeSiloState.c)
 *     ExpTimeZoneInitSiloState @ 0x14083C738 (ExpTimeZoneInitSiloState.c)
 *     ExIsMultiSessionSku @ 0x14083D87C (ExIsMultiSessionSku.c)
 *     ExIsStateSeparationEnabled @ 0x14083D924 (ExIsStateSeparationEnabled.c)
 *     CmInitServerSiloState @ 0x14085AEF4 (CmInitServerSiloState.c)
 *     ExInitializeNls @ 0x140B700B4 (ExInitializeNls.c)
 */

__int64 __fastcall PspInitializeServerSiloDeferred(struct _LIST_ENTRY *Object)
{
  _DWORD *ServerSiloGlobals; // rbp
  int ApiSets; // edi
  struct _LIST_ENTRY *Flink; // r14
  struct _LIST_ENTRY *v5; // rbx
  struct _LIST_ENTRY *Blink; // rcx
  char v7; // al
  struct _LIST_ENTRY *v8; // r14
  struct _LIST_ENTRY *v9; // rbx
  struct _LIST_ENTRY *v10; // rbx
  struct _LIST_ENTRY *v11; // rbx
  unsigned int CurrentSiloMaxLoggers; // eax
  struct _LIST_ENTRY *v13; // rbx
  _QWORD *v14; // rax
  int v15; // eax
  int v16; // ebx
  PVOID *v18; // rax
  char v19; // [rsp+40h] [rbp+8h] BYREF

  ServerSiloGlobals = PsGetServerSiloGlobals((__int64)Object);
  RtlNlsInitState(ServerSiloGlobals);
  ApiSets = sub_1406D1320((__int64)Object);
  if ( ApiSets < 0 )
    goto LABEL_25;
  ApiSets = PspSiloInitializeUserSharedData(Object);
  if ( ApiSets < 0 )
    goto LABEL_25;
  ApiSets = PspSiloInitializeSystemRootSymlink(Object);
  if ( ApiSets < 0 )
    goto LABEL_25;
  ApiSets = PspInitializeProtectedProcessParameters((__int64)ServerSiloGlobals);
  if ( ApiSets < 0 )
    goto LABEL_25;
  ApiSets = PspSiloLoadApiSets(Object);
  if ( ApiSets < 0 )
    goto LABEL_25;
  Flink = Object[94].Flink;
  v19 = 0;
  v5 = PsAttachSiloToCurrentThread(Object);
  ApiSets = ExIsMultiSessionSku(&v19);
  PsDetachSiloFromCurrentThread(v5);
  if ( ApiSets < 0 )
    goto LABEL_25;
  Blink = Flink[80].Blink;
  v7 = v19;
  v19 = 0;
  BYTE4(Blink[1].Blink) = v7;
  v8 = Object[94].Flink;
  v9 = PsAttachSiloToCurrentThread(Object);
  ApiSets = ExIsStateSeparationEnabled(&v19);
  PsDetachSiloFromCurrentThread(v9);
  if ( ApiSets < 0 )
    goto LABEL_25;
  BYTE5(v8[80].Blink[1].Blink) = v19;
  v10 = PsAttachSiloToCurrentThread(Object);
  ApiSets = RtlInitFunctionalityCache();
  PsDetachSiloFromCurrentThread(v10);
  if ( ApiSets < 0 )
    goto LABEL_25;
  ApiSets = ObInitServerSilo(Object);
  if ( ApiSets < 0 )
    goto LABEL_25;
  ApiSets = ExpTimeZoneInitSiloState(Object);
  if ( ApiSets < 0 )
    goto LABEL_25;
  v11 = PsAttachSiloToCurrentThread(Object);
  ApiSets = ExInitializeNls();
  if ( ApiSets >= 0 )
    PsGetCurrentServerSiloGlobals()[64].Flink->Blink = (struct _LIST_ENTRY *)1;
  PsDetachSiloFromCurrentThread(v11);
  if ( ApiSets < 0 )
    goto LABEL_25;
  ApiSets = SeInitServerSilo(Object);
  if ( ApiSets < 0 )
    goto LABEL_25;
  ApiSets = CmInitServerSiloState(Object);
  if ( ApiSets < 0 )
    goto LABEL_25;
  CurrentSiloMaxLoggers = EtwpGetCurrentSiloMaxLoggers();
  ApiSets = EtwpPreInitializeSiloState(Object, CurrentSiloMaxLoggers);
  if ( ApiSets < 0 || (ApiSets = EtwpInitializeSiloState(Object, 0LL), ApiSets < 0) )
  {
    v18 = (PVOID *)PsGetServerSiloGlobals((__int64)Object);
    EtwpCleanupSiloState(v18[104]);
LABEL_25:
    ServerSiloGlobals[318] = 4;
    PspDeleteExternalServerSiloState((__int64)Object);
    return (unsigned int)ApiSets;
  }
  v13 = PsAttachSiloToCurrentThread(Object);
  v14 = PsGetServerSiloGlobals((__int64)Object);
  v14[117] = 0LL;
  v15 = DbgkpInitializePhase1SiloState((__int64)(v14 + 117));
  ApiSets = 0;
  if ( v15 < 0 )
    ApiSets = v15;
  PsDetachSiloFromCurrentThread(v13);
  if ( ApiSets < 0 )
    goto LABEL_25;
  v16 = PspNotifyServerSiloCreation(Object);
  if ( v16 >= 0 )
    return 0LL;
  PsTerminateServerSilo((__int64)Object);
  return (unsigned int)v16;
}
