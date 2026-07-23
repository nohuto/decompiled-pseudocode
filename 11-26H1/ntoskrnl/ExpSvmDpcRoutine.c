/*
 * XREFs of ExpSvmDpcRoutine @ 0x1406D62C0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 */

void __fastcall ExpSvmDpcRoutine(__int64 a1, unsigned int a2)
{
  ExQueueWorkItem(
    (PWORK_QUEUE_ITEM)(*(_QWORD *)&ExSaPageGroupDescriptorArrayLock.WaitBlockFill11[16] + 104LL * a2),
    HyperCriticalWorkQueue);
}
