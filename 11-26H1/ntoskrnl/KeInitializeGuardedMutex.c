/*
 * XREFs of KeInitializeGuardedMutex @ 0x140492250
 * Callers:
 *     PiDqObjectManagerInit @ 0x1407A89F0 (PiDqObjectManagerInit.c)
 *     PfTInitialize @ 0x1407C65A4 (PfTInitialize.c)
 *     EtwpInitializeProviderTraits @ 0x140830580 (EtwpInitializeProviderTraits.c)
 *     CmpInitSIDToHiveMapping @ 0x140859F24 (CmpInitSIDToHiveMapping.c)
 *     CmpInitializeDelayedCloseTable @ 0x14085B75C (CmpInitializeDelayedCloseTable.c)
 *     PiUEventInitClientRegistrationContext @ 0x1409D7674 (PiUEventInitClientRegistrationContext.c)
 *     PiUEventNotifyUserMode @ 0x1409DD808 (PiUEventNotifyUserMode.c)
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
