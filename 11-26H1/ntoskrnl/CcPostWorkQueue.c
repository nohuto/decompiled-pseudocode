/*
 * XREFs of CcPostWorkQueue @ 0x1403863F0
 * Callers:
 *     CcScheduleReadAheadNuma @ 0x14021D0F8 (CcScheduleReadAheadNuma.c)
 *     CcRepostToSynchronousLazywriter @ 0x140385EEC (CcRepostToSynchronousLazywriter.c)
 *     CcQueueLazyWriteScanThreadForVolume @ 0x140387470 (CcQueueLazyWriteScanThreadForVolume.c)
 *     CcLazyWriteScanVolume @ 0x140388CAC (CcLazyWriteScanVolume.c)
 *     CcNotifyOfMappedWrite @ 0x14038984C (CcNotifyOfMappedWrite.c)
 *     CcLazyWriteScan @ 0x1404FB788 (CcLazyWriteScan.c)
 *     CcQueueLazyWriteScanThread @ 0x1405B0D70 (CcQueueLazyWriteScanThread.c)
 * Callees:
 *     CcPostWorkQueueCachemapUninit @ 0x1403831F0 (CcPostWorkQueueCachemapUninit.c)
 *     CcPostWorkQueueRegular @ 0x14038641C (CcPostWorkQueueRegular.c)
 */

void __fastcall CcPostWorkQueue(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( a1[19] + 120LL == a2 )
    CcPostWorkQueueCachemapUninit(a1, a2, a3, a4);
  else
    CcPostWorkQueueRegular();
}
