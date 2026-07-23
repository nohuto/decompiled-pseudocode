/*
 * XREFs of KeInitializeSchedulerSubNodeEnumerationContext @ 0x140488B00
 * Callers:
 *     KiSynchNumaCounterSetCallback @ 0x140A74EC0 (KiSynchNumaCounterSetCallback.c)
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

void __fastcall KeInitializeSchedulerSubNodeEnumerationContext(_QWORD *a1, __int64 a2)
{
  a1[1] = 0LL;
  *a1 = a2;
}
