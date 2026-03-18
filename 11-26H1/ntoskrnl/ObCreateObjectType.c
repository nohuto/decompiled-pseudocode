/*
 * XREFs of ObCreateObjectType @ 0x14077B990
 * Callers:
 *     HalpDmaInitializeObjectType @ 0x14058ACB8 (HalpDmaInitializeObjectType.c)
 *     DbgkpInitializePhase0 @ 0x140CB5C08 (DbgkpInitializePhase0.c)
 *     IoCreateObjectTypes @ 0x140CBA8B8 (IoCreateObjectTypes.c)
 *     IopCreateIoRingObjectType @ 0x140CBEE88 (IopCreateIoRingObjectType.c)
 *     PopPowerRequestInitialize @ 0x140CD0850 (PopPowerRequestInitialize.c)
 *     PopEtInit @ 0x140CD5AFC (PopEtInit.c)
 *     PspInitializeSiloStructures @ 0x140CD8CA4 (PspInitializeSiloStructures.c)
 *     SepTokenInitialization @ 0x140CDDD60 (SepTokenInitialization.c)
 *     WmipInitializeSecurity @ 0x140CE0570 (WmipInitializeSecurity.c)
 *     EtwpInitializeRegistration @ 0x140CE1A0C (EtwpInitializeRegistration.c)
 *     EtwpInitializeRealTimeConnection @ 0x140CE2214 (EtwpInitializeRealTimeConnection.c)
 *     EtwpInitializeCoverageSampler @ 0x140CE22D0 (EtwpInitializeCoverageSampler.c)
 *     ExpInitializeCallbacks @ 0x140CE6064 (ExpInitializeCallbacks.c)
 *     ExpWin32Initialization @ 0x140CE62D4 (ExpWin32Initialization.c)
 *     ExpTimerInitialization @ 0x140CE6524 (ExpTimerInitialization.c)
 *     ExpEventInitialization @ 0x140CE66C4 (ExpEventInitialization.c)
 *     ExpSemaphoreInitialization @ 0x140CE6BA0 (ExpSemaphoreInitialization.c)
 *     ExpKeyedEventInitialization @ 0x140CE7040 (ExpKeyedEventInitialization.c)
 *     ExpMutantInitialization @ 0x140CE737C (ExpMutantInitialization.c)
 *     ExpProfileInitialization @ 0x140CE744C (ExpProfileInitialization.c)
 *     ExpWorkerFactoryInitialization @ 0x140CE7508 (ExpWorkerFactoryInitialization.c)
 *     CmpCreateObjectTypes @ 0x140CEA620 (CmpCreateObjectTypes.c)
 *     MiSectionInitialization @ 0x140CF86BC (MiSectionInitialization.c)
 *     PspInitPhase0 @ 0x140D06FAC (PspInitPhase0.c)
 *     ObInitSystem @ 0x140D0936C (ObInitSystem.c)
 * Callees:
 *     ObCreateObjectTypeEx @ 0x140A5A0C0 (ObCreateObjectTypeEx.c)
 */

__int64 __fastcall ObCreateObjectType(const UNICODE_STRING *a1, void *a2, __int64 a3, __int64 a4)
{
  return ObCreateObjectTypeEx(a1, a2, a4);
}
