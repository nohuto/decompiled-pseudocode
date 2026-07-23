/*
 * XREFs of WheaFlushETWEventsAddWorkRtn @ 0x1406DB0A4
 * Callers:
 *     WheaProcessWaitingETWEvents @ 0x1406DB340 (WheaProcessWaitingETWEvents.c)
 * Callees:
 *     KeGetProcessorNumberFromIndex @ 0x140202CC0 (KeGetProcessorNumberFromIndex.c)
 *     KeSetTargetProcessorDpcEx @ 0x14021AC20 (KeSetTargetProcessorDpcEx.c)
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     KeEnumerateNextProcessor @ 0x14042E520 (KeEnumerateNextProcessor.c)
 *     KeGetCurrentProcessorNumberEx @ 0x140440C90 (KeGetCurrentProcessorNumberEx.c)
 */

void WheaFlushETWEventsAddWorkRtn()
{
  int Number; // ebx
  unsigned __int16 *v1[2]; // [rsp+30h] [rbp-20h] BYREF
  __int16 v2; // [rsp+40h] [rbp-10h]
  int v3; // [rsp+42h] [rbp-Eh]
  __int16 v4; // [rsp+46h] [rbp-Ah]
  _PROCESSOR_NUMBER ProcNumber; // [rsp+60h] [rbp+10h] BYREF
  ULONG ProcIndex; // [rsp+68h] [rbp+18h] BYREF

  ProcNumber = 0;
  _InterlockedAdd(&dword_140EFE520, 1u);
  if ( dword_140EFE520 <= 1 )
  {
    if ( KeGetCurrentIrql() <= 2u )
    {
      ExQueueWorkItem(&stru_140EFE500, DelayedWorkQueue);
    }
    else
    {
      v3 = 0;
      v4 = 0;
      ProcIndex = 0;
      KeGetCurrentProcessorNumberEx(&ProcNumber);
      Number = ProcNumber.Number;
      v1[1] = *(unsigned __int16 **)((char *)&stru_140FC11F0.116 + 4);
      v1[0] = (unsigned __int16 *)&stru_140FC11F0.WaitRegister.Flags;
      v2 = 0;
      while ( !(unsigned int)KeEnumerateNextProcessor(&ProcIndex, v1) )
      {
        if ( ProcIndex != Number )
        {
          KeGetProcessorNumberFromIndex(ProcIndex, &ProcNumber);
          break;
        }
      }
      KeSetTargetProcessorDpcEx((PKDPC)&WheaFlushETWEventsDpcWorker, &ProcNumber);
      KiInsertQueueDpc((ULONG_PTR)&WheaFlushETWEventsDpcWorker, 0LL, 0LL, 0LL, 0);
    }
  }
}
