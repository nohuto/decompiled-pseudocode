/*
 * XREFs of WheaFlushETWEventsAddWorkRtn @ 0x1406D6F0C
 * Callers:
 *     WheaProcessWaitingETWEvents @ 0x1406D71B0 (WheaProcessWaitingETWEvents.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1402BD330 (KiInsertQueueDpc.c)
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 *     KeSetTargetProcessorDpcEx @ 0x140428940 (KeSetTargetProcessorDpcEx.c)
 *     KeGetProcessorNumberFromIndex @ 0x1404289E0 (KeGetProcessorNumberFromIndex.c)
 *     KeEnumerateNextProcessor @ 0x14043BC70 (KeEnumerateNextProcessor.c)
 *     KeGetCurrentProcessorNumberEx @ 0x1404481A0 (KeGetCurrentProcessorNumberEx.c)
 */

void WheaFlushETWEventsAddWorkRtn()
{
  int Number; // ebx
  unsigned __int16 *v1[2]; // [rsp+30h] [rbp-20h] BYREF
  __int16 v2; // [rsp+40h] [rbp-10h]
  int v3; // [rsp+42h] [rbp-Eh]
  __int16 v4; // [rsp+46h] [rbp-Ah]
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+60h] [rbp+10h] BYREF
  ULONG ProcIndex; // [rsp+68h] [rbp+18h] BYREF

  ProcNumber = 0;
  _InterlockedAdd((volatile signed __int32 *)&CmpCallbackListLock.MutantListHead, 1u);
  if ( SLODWORD(CmpCallbackListLock.MutantListHead.Flink) <= 1 )
  {
    if ( KeGetCurrentIrql() <= 2u )
    {
      ExQueueWorkItem((PWORK_QUEUE_ITEM)&CmpCallbackListLock.SuspendEvent.Header.WaitListHead, DelayedWorkQueue);
    }
    else
    {
      v3 = 0;
      v4 = 0;
      ProcIndex = 0;
      KeGetCurrentProcessorNumberEx(&ProcNumber);
      Number = ProcNumber.Number;
      v1[1] = *(unsigned __int16 **)((char *)&stru_140FC01F0.116 + 4);
      v1[0] = (unsigned __int16 *)&stru_140FC01F0.WaitRegister.Flags;
      v2 = 0;
      while ( !(unsigned int)KeEnumerateNextProcessor(&ProcIndex, v1) )
      {
        if ( ProcIndex != Number )
        {
          KeGetProcessorNumberFromIndex(ProcIndex, &ProcNumber);
          break;
        }
      }
      KeSetTargetProcessorDpcEx((PKDPC)&CmpCallbackListLock.SchedulerApcFill5[32], &ProcNumber);
      KiInsertQueueDpc((ULONG_PTR)CmpCallbackListLock.SchedulerApc.Reserved, 0LL, 0LL, 0LL, 0);
    }
  }
}
