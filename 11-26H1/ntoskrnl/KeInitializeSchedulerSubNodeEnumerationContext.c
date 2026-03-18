/*
 * XREFs of KeInitializeSchedulerSubNodeEnumerationContext @ 0x14048EFC0
 * Callers:
 *     KiSynchNumaCounterSetCallback @ 0x140A67EF0 (KiSynchNumaCounterSetCallback.c)
 *     ExpQuerySystemInformation @ 0x140B145DC (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

void __fastcall KeInitializeSchedulerSubNodeEnumerationContext(_QWORD *a1, __int64 a2)
{
  a1[1] = 0LL;
  *a1 = a2;
}
