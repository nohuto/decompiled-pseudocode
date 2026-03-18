/*
 * XREFs of KiAltContextWorkQueueAddItem @ 0x1405FCC08
 * Callers:
 *     KiMcheckAlternateReturn @ 0x1405FCD70 (KiMcheckAlternateReturn.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1402BD330 (KiInsertQueueDpc.c)
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 *     ExInterlockedInsertTailList @ 0x1403DE450 (ExInterlockedInsertTailList.c)
 *     KeSetTargetProcessorDpcEx @ 0x140428940 (KeSetTargetProcessorDpcEx.c)
 *     KeGetProcessorNumberFromIndex @ 0x1404289E0 (KeGetProcessorNumberFromIndex.c)
 *     KeEnumerateNextProcessor @ 0x14043BC70 (KeEnumerateNextProcessor.c)
 *     KeGetCurrentProcessorNumberEx @ 0x1404481A0 (KeGetCurrentProcessorNumberEx.c)
 */

void __fastcall KiAltContextWorkQueueAddItem(PLIST_ENTRY ListEntry)
{
  int Number; // ebx
  unsigned __int16 *v2[2]; // [rsp+30h] [rbp-20h] BYREF
  __int16 v3; // [rsp+40h] [rbp-10h]
  int v4; // [rsp+42h] [rbp-Eh]
  __int16 v5; // [rsp+46h] [rbp-Ah]
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+68h] [rbp+18h] BYREF
  ULONG ProcIndex; // [rsp+70h] [rbp+20h] BYREF

  ProcNumber = 0;
  if ( !ExInterlockedInsertTailList(
          (PLIST_ENTRY)&KsepShimDbLock.ApcStateFill[32],
          ListEntry,
          (PKSPIN_LOCK)&KsepShimDbLock.WaitStatus) )
  {
    if ( KeGetCurrentIrql() < 2u )
    {
      ExQueueWorkItem((PWORK_QUEUE_ITEM)&KsepShimDbLock.Timer.Header.WaitListHead.Blink, CriticalWorkQueue);
    }
    else
    {
      v4 = 0;
      v5 = 0;
      ProcIndex = 0;
      KeGetCurrentProcessorNumberEx(&ProcNumber);
      Number = ProcNumber.Number;
      v2[1] = *(unsigned __int16 **)((char *)&stru_140FC01F0.116 + 4);
      v2[0] = (unsigned __int16 *)&stru_140FC01F0.WaitRegister.Flags;
      v3 = 0;
      while ( !(unsigned int)KeEnumerateNextProcessor(&ProcIndex, v2) )
      {
        if ( ProcIndex != Number )
        {
          KeGetProcessorNumberFromIndex(ProcIndex, &ProcNumber);
          break;
        }
      }
      KeSetTargetProcessorDpcEx((PKDPC)&KsepShimDbLock.WaitBlockList, &ProcNumber);
      BYTE1(KsepShimDbLock.WaitBlockList) = 2;
      KiInsertQueueDpc((ULONG_PTR)&KsepShimDbLock.WaitBlockList, 0LL, 0LL, 0LL, 0);
    }
  }
}
