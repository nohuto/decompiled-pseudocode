/*
 * XREFs of ObpPushStackInfoDpc @ 0x1405FFB50
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 */

void ObpPushStackInfoDpc()
{
  ExQueueWorkItem(&qword_140F13240, DelayedWorkQueue);
}
