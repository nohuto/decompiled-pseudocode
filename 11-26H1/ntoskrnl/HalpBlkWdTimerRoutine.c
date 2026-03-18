/*
 * XREFs of HalpBlkWdTimerRoutine @ 0x1405A5800
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 */

void HalpBlkWdTimerRoutine()
{
  if ( (_DWORD)HalpBlkNumberProcessors )
  {
    if ( !_InterlockedExchange(dword_140F87580, 1) )
      ExQueueWorkItem(&qword_140F87560, DelayedWorkQueue);
  }
}
