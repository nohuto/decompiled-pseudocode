/*
 * XREFs of PopInitializeIrpWorkers @ 0x140CD3300
 * Callers:
 *     PoInitSystem @ 0x140CCE870 (PoInitSystem.c)
 * Callees:
 *     PopCreatePowerThread @ 0x1403B653C (PopCreatePowerThread.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x140498C60 (ExInitializeNPagedLookasideListInternal.c)
 */

NTSTATUS PopInitializeIrpWorkers()
{
  NTSTATUS result; // eax
  unsigned int i; // ebx

  *(_WORD *)&PopWeakChargerLock.WaitBlockFill11[72] = 1;
  PopWeakChargerLock.WaitBlock[0].SparePtr = &PopWeakChargerLock.WaitBlockFill11[32];
  PopWeakChargerLock.WaitBlock[0].Object = &PopWeakChargerLock.WaitBlockFill11[32];
  qword_140F0FB08 = (__int64)&qword_140F0FB00;
  qword_140F0FB00 = (__int64)&qword_140F0FB00;
  qword_140F0FB30 = (__int64)&qword_140F0FB28;
  qword_140F0FB28 = (__int64)&qword_140F0FB28;
  *(_QWORD *)&PopWeakChargerLock.WaitBlockFill11[64] = &PopWeakChargerLock.WaitBlock[1].WaitListEntry.Blink;
  PopWeakChargerLock.WaitBlock[1].WaitListEntry.Blink = (struct _LIST_ENTRY *)&PopWeakChargerLock.WaitBlockFill11[56];
  PopWeakChargerLock.WaitBlock[3].WaitListEntry.Blink = &PopWeakChargerLock.WaitBlock[3].WaitListEntry;
  PopWeakChargerLock.WaitBlock[3].WaitListEntry.Flink = &PopWeakChargerLock.WaitBlock[3].WaitListEntry;
  *(_QWORD *)&PopWeakChargerLock.WaitBlockFill11[76] = 0LL;
  *(_DWORD *)&PopWeakChargerLock.WaitBlockFill11[84] = 0;
  byte_140F0FB20.Header.Type = 5;
  byte_140F0FB22 = 8;
  dword_140F0FB24 = 0;
  dword_140F0FB38 = 0x7FFFFFFF;
  *(_WORD *)&PopWeakChargerLock.WaitBlockFill11[48] = 1;
  PopWeakChargerLock.WaitBlockFill5[50] = 6;
  *(_DWORD *)&PopWeakChargerLock.WaitBlockFill11[52] = 0;
  *(_DWORD *)&PopWeakChargerLock.WaitBlockFill11[112] = 1;
  PopWeakChargerLock.WaitBlock[2].Thread = 0LL;
  *(_DWORD *)&PopWeakChargerLock.WaitBlockFill11[128] = 0;
  *(_WORD *)&PopWeakChargerLock.WaitBlockFill11[136] = 1;
  PopWeakChargerLock.WaitBlockFill7[138] = 6;
  *(_DWORD *)&PopWeakChargerLock.WaitBlockFill11[140] = 0;
  ExInitializeNPagedLookasideListInternal((__int64)&PopDynamicIrpWorkerLookaside, 0LL, 0LL, 512, 8, 1917415248, 0, 0);
  result = PopCreatePowerThread((KSTART_ROUTINE *)PopIrpWorkerControl, 0LL);
  if ( result >= 0 )
  {
    *(_DWORD *)&PopWeakChargerLock.WaitBlockFill11[84] = 2;
    for ( i = 0; i < 2; ++i )
    {
      result = PopCreatePowerThread((KSTART_ROUTINE *)PopIrpWorker, 0LL);
      if ( result < 0 )
        return result;
    }
    return 0;
  }
  return result;
}
