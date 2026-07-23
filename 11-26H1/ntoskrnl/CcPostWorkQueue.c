/*
 * XREFs of CcPostWorkQueue @ 0x1403881A0
 * Callers:
 *     CcScheduleReadAheadNuma @ 0x14021EA88 (CcScheduleReadAheadNuma.c)
 *     CcRepostToSynchronousLazywriter @ 0x140387C9C (CcRepostToSynchronousLazywriter.c)
 *     CcQueueLazyWriteScanThreadForVolume @ 0x140389220 (CcQueueLazyWriteScanThreadForVolume.c)
 *     CcLazyWriteScanVolume @ 0x14038AA5C (CcLazyWriteScanVolume.c)
 *     CcNotifyOfMappedWrite @ 0x14038B5FC (CcNotifyOfMappedWrite.c)
 *     CcLazyWriteScan @ 0x1404F4BD4 (CcLazyWriteScan.c)
 *     CcQueueLazyWriteScanThread @ 0x1405B3580 (CcQueueLazyWriteScanThread.c)
 * Callees:
 *     CcPostWorkQueueCachemapUninit @ 0x140384FA0 (CcPostWorkQueueCachemapUninit.c)
 *     CcPostWorkQueueRegular @ 0x1403881CC (CcPostWorkQueueRegular.c)
 */

void __fastcall CcPostWorkQueue(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( a1[19] + 120LL == a2 )
    CcPostWorkQueueCachemapUninit(a1, a2, a3, a4);
  else
    CcPostWorkQueueRegular();
}
