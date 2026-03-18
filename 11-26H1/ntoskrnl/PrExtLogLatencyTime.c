/*
 * XREFs of PrExtLogLatencyTime @ 0x1406DCD44
 * Callers:
 *     HalpLoadMicrocode @ 0x140784E40 (HalpLoadMicrocode.c)
 * Callees:
 *     <none>
 */

void __fastcall PrExtLogLatencyTime(struct _KTHREAD *a1)
{
  CmpCallbackListLock.WaitBlock[0].Thread = a1;
}
