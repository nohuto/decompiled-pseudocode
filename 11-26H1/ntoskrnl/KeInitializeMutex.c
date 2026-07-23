/*
 * XREFs of KeInitializeMutex @ 0x1404ABC00
 * Callers:
 *     EtwpPreInitializeSiloState @ 0x14082D040 (EtwpPreInitializeSiloState.c)
 *     EtwpInitLoggerContext @ 0x140AB20E0 (EtwpInitLoggerContext.c)
 *     KeAllocateCalloutStackEx @ 0x140AB3C50 (KeAllocateCalloutStackEx.c)
 *     HalpInitGenericErrorSourcePollingRoutine @ 0x140BF2328 (HalpInitGenericErrorSourcePollingRoutine.c)
 * Callees:
 *     <none>
 */

void __stdcall KeInitializeMutex(PRKMUTEX Mutex, ULONG Level)
{
  *(_OWORD *)&Mutex->Header.Lock = 0LL;
  *(_OWORD *)&Mutex->Header.WaitListHead.Blink = 0LL;
  *(_OWORD *)&Mutex->MutantListEntry.Blink = 0LL;
  *(_QWORD *)&Mutex->MutantFlags = 0LL;
  Mutex->Header.Type = 2;
  Mutex->Header.SignalState = 1;
  Mutex->Header.WaitListHead.Blink = &Mutex->Header.WaitListHead;
  Mutex->Header.WaitListHead.Flink = &Mutex->Header.WaitListHead;
  Mutex->MutantFlags &= ~1u;
  Mutex->ApcDisable = 1;
}
