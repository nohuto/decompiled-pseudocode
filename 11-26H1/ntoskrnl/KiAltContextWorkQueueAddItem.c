/*
 * XREFs of KiAltContextWorkQueueAddItem @ 0x1405FF658
 * Callers:
 *     KiMcheckAlternateReturn @ 0x1405FF7C0 (KiMcheckAlternateReturn.c)
 * Callees:
 *     KeGetProcessorNumberFromIndex @ 0x140202CC0 (KeGetProcessorNumberFromIndex.c)
 *     KeSetTargetProcessorDpcEx @ 0x14021AC20 (KeSetTargetProcessorDpcEx.c)
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     ExInterlockedInsertTailList @ 0x1403E1640 (ExInterlockedInsertTailList.c)
 *     KeEnumerateNextProcessor @ 0x14042E520 (KeEnumerateNextProcessor.c)
 *     KeGetCurrentProcessorNumberEx @ 0x140440C90 (KeGetCurrentProcessorNumberEx.c)
 */

void __fastcall KiAltContextWorkQueueAddItem(PLIST_ENTRY ListEntry)
{
  int Number; // ebx
  unsigned __int16 *v2[2]; // [rsp+30h] [rbp-20h] BYREF
  __int16 v3; // [rsp+40h] [rbp-10h]
  int v4; // [rsp+42h] [rbp-Eh]
  __int16 v5; // [rsp+46h] [rbp-Ah]
  _PROCESSOR_NUMBER ProcNumber; // [rsp+68h] [rbp+18h] BYREF
  ULONG ProcIndex; // [rsp+70h] [rbp+20h] BYREF

  ProcNumber = 0;
  if ( !ExInterlockedInsertTailList((PLIST_ENTRY)&KsepShimDbLock.Queue, ListEntry, &KsepShimDbLock.RelativeTimerBias) )
  {
    if ( KeGetCurrentIrql() < 2u )
    {
      ExQueueWorkItem((PWORK_QUEUE_ITEM)&KsepShimDbLock.320, CriticalWorkQueue);
    }
    else
    {
      v4 = 0;
      v5 = 0;
      ProcIndex = 0;
      KeGetCurrentProcessorNumberEx(&ProcNumber);
      Number = ProcNumber.Number;
      v2[1] = *(unsigned __int16 **)((char *)&stru_140FC11F0.116 + 4);
      v2[0] = (unsigned __int16 *)&stru_140FC11F0.WaitRegister.Flags;
      v3 = 0;
      while ( !(unsigned int)KeEnumerateNextProcessor(&ProcIndex, v2) )
      {
        if ( ProcIndex != Number )
        {
          KeGetProcessorNumberFromIndex(ProcIndex, &ProcNumber);
          break;
        }
      }
      KeSetTargetProcessorDpcEx((PKDPC)&KsepShimDbLock.Timer, &ProcNumber);
      KsepShimDbLock.Timer.Header.Signalling = 2;
      KiInsertQueueDpc((ULONG_PTR)&KsepShimDbLock.Timer, 0LL, 0LL, 0LL, 0);
    }
  }
}
