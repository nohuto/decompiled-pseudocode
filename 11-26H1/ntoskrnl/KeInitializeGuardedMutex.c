/*
 * XREFs of KeInitializeGuardedMutex @ 0x14048BDA0
 * Callers:
 *     PiDqObjectManagerInit @ 0x1407AB5A0 (PiDqObjectManagerInit.c)
 *     PfTInitialize @ 0x1407C9604 (PfTInitialize.c)
 *     EtwpInitializeProviderTraits @ 0x1408367C0 (EtwpInitializeProviderTraits.c)
 *     CmpInitSIDToHiveMapping @ 0x140860218 (CmpInitSIDToHiveMapping.c)
 *     CmpInitializeDelayedCloseTable @ 0x140861A50 (CmpInitializeDelayedCloseTable.c)
 *     PiUEventInitClientRegistrationContext @ 0x1409A8564 (PiUEventInitClientRegistrationContext.c)
 *     PiUEventNotifyUserMode @ 0x140A1AAC0 (PiUEventNotifyUserMode.c)
 * Callees:
 *     <none>
 */

void __stdcall KeInitializeGuardedMutex(PKGUARDED_MUTEX Mutex)
{
  Mutex->Count = 1;
  Mutex->Owner = 0LL;
  Mutex->Contention = 0;
  Mutex->Event.Header.SignalState = 0;
  LOWORD(Mutex->Event.Header.Lock) = 1;
  Mutex->Event.Header.Size = 6;
  Mutex->Event.Header.WaitListHead.Blink = &Mutex->Event.Header.WaitListHead;
  Mutex->Event.Header.WaitListHead.Flink = &Mutex->Event.Header.WaitListHead;
}
