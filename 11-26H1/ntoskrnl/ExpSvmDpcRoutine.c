/*
 * XREFs of ExpSvmDpcRoutine @ 0x1406D2290
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 */

void __fastcall ExpSvmDpcRoutine(__int64 a1, unsigned int a2)
{
  ExQueueWorkItem(
    (PWORK_QUEUE_ITEM)((char *)ExSaPageGroupDescriptorArrayLock.ApcState.ApcListHead[1].Blink + 104 * a2),
    HyperCriticalWorkQueue);
}
