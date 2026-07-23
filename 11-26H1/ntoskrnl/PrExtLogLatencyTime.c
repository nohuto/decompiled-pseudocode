/*
 * XREFs of PrExtLogLatencyTime @ 0x1406E0FE4
 * Callers:
 *     HalpLoadMicrocode @ 0x140787970 (HalpLoadMicrocode.c)
 * Callees:
 *     <none>
 */

void __fastcall PrExtLogLatencyTime(struct _LIST_ENTRY *a1)
{
  CmpContextListLock.WaitBlock[0].WaitListEntry.Blink = a1;
}
