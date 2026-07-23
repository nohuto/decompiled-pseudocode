/*
 * XREFs of MmReportParkedProcessors @ 0x1402F528C
 * Callers:
 *     PpmParkReportMask @ 0x1402F3DC0 (PpmParkReportMask.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiMoveBackgroundZeroThreads @ 0x1402F53B0 (MiMoveBackgroundZeroThreads.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     RtlCompareMemory @ 0x140735960 (RtlCompareMemory.c)
 */

void MmReportParkedProcessors()
{
  struct _KAFFINITY_EX *v0; // rbx
  _OWORD *v1; // rcx
  __int64 v2; // rax
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1

  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E2D980);
  v0 = &PpmPerfCoreParkingMask;
  if ( RtlCompareMemory(&unk_140E2D988, &PpmPerfCoreParkingMask, 0x108uLL) == 264 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2D980);
  }
  else
  {
    v1 = &unk_140E2D988;
    v2 = 2LL;
    do
    {
      v3 = *(_OWORD *)&v0->StaticBitmap[1];
      *v1 = *(_OWORD *)&v0->Count;
      v4 = *(_OWORD *)&v0->StaticBitmap[3];
      v1[1] = v3;
      v5 = *(_OWORD *)&v0->StaticBitmap[5];
      v1[2] = v4;
      v6 = *(_OWORD *)&v0->StaticBitmap[7];
      v1[3] = v5;
      v7 = *(_OWORD *)&v0->StaticBitmap[9];
      v1[4] = v6;
      v8 = *(_OWORD *)&v0->StaticBitmap[11];
      v1[5] = v7;
      v9 = *(_OWORD *)&v0->StaticBitmap[13];
      v0 = (struct _KAFFINITY_EX *)((char *)v0 + 128);
      v1[6] = v8;
      v1 += 8;
      *(v1 - 1) = v9;
      --v2;
    }
    while ( v2 );
    *(_QWORD *)v1 = *(_QWORD *)&v0->Count;
    if ( stru_140E2DA90.Parameter )
    {
      if ( stru_140E2DA90.Parameter == (void *)1 )
        stru_140E2DA90.Parameter = (void *)2;
    }
    else
    {
      stru_140E2DA90.Parameter = (void *)1;
      stru_140E2DA90.WorkerRoutine = (void (__fastcall *)(void *))MiSendParkedCoreUpdateToAllChildPartitions;
      stru_140E2DA90.List.Flink = 0LL;
      ExQueueWorkItem(&stru_140E2DA90, DelayedWorkQueue);
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2D980);
    MiMoveBackgroundZeroThreads(&MiSystemPartition, 1LL);
  }
}
