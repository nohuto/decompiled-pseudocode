/*
 * XREFs of HalpBlkWdTimerRoutine @ 0x1405A8010
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 */

void HalpBlkWdTimerRoutine()
{
  if ( (_DWORD)HalpBlkNumberProcessors )
  {
    if ( !_InterlockedExchange(dword_140F87928, 1) )
      ExQueueWorkItem(&qword_140F87940, DelayedWorkQueue);
  }
}
