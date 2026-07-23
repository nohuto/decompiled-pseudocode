/*
 * XREFs of ObCreateObjectType @ 0x14077E5D0
 * Callers:
 *     HalpDmaInitializeObjectType @ 0x14058D440 (HalpDmaInitializeObjectType.c)
 *     DbgkpInitializePhase0 @ 0x140CBBC48 (DbgkpInitializePhase0.c)
 *     IoCreateObjectTypes @ 0x140CC0930 (IoCreateObjectTypes.c)
 *     IopCreateIoRingObjectType @ 0x140CC4F58 (IopCreateIoRingObjectType.c)
 *     PopPowerRequestInitialize @ 0x140CD69F8 (PopPowerRequestInitialize.c)
 *     PopEtInit @ 0x140CDBE50 (PopEtInit.c)
 *     PspInitializeSiloStructures @ 0x140CDF024 (PspInitializeSiloStructures.c)
 *     SepTokenInitialization @ 0x140CE40F8 (SepTokenInitialization.c)
 *     WmipInitializeSecurity @ 0x140CE6910 (WmipInitializeSecurity.c)
 *     EtwpInitializeRegistration @ 0x140CE7DAC (EtwpInitializeRegistration.c)
 *     EtwpInitializeRealTimeConnection @ 0x140CE85B4 (EtwpInitializeRealTimeConnection.c)
 *     EtwpInitializeCoverageSampler @ 0x140CE8670 (EtwpInitializeCoverageSampler.c)
 *     ExpInitializeCallbacks @ 0x140CEC404 (ExpInitializeCallbacks.c)
 *     ExpWin32Initialization @ 0x140CEC674 (ExpWin32Initialization.c)
 *     ExpTimerInitialization @ 0x140CEC8C4 (ExpTimerInitialization.c)
 *     ExpEventInitialization @ 0x140CECA64 (ExpEventInitialization.c)
 *     ExpSemaphoreInitialization @ 0x140CECF40 (ExpSemaphoreInitialization.c)
 *     ExpWorkerFactoryInitialization @ 0x140CED3E0 (ExpWorkerFactoryInitialization.c)
 *     ExpMutantInitialization @ 0x140CED5C4 (ExpMutantInitialization.c)
 *     ExpProfileInitialization @ 0x140CED694 (ExpProfileInitialization.c)
 *     ExpKeyedEventInitialization @ 0x140CED750 (ExpKeyedEventInitialization.c)
 *     CmpCreateObjectTypes @ 0x140CF09C0 (CmpCreateObjectTypes.c)
 *     MiSectionInitialization @ 0x140CFEA3C (MiSectionInitialization.c)
 *     PspInitPhase0 @ 0x140D0D27C (PspInitPhase0.c)
 *     ObInitSystem @ 0x140D0F63C (ObInitSystem.c)
 * Callees:
 *     ObCreateObjectTypeEx @ 0x140A67030 (ObCreateObjectTypeEx.c)
 */

__int64 __fastcall ObCreateObjectType(const UNICODE_STRING *a1, void *a2, __int64 a3, __int64 a4)
{
  return ObCreateObjectTypeEx(a1, a2, a4);
}
