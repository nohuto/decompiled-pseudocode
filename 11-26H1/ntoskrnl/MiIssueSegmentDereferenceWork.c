/*
 * XREFs of MiIssueSegmentDereferenceWork @ 0x1404A9E70
 * Callers:
 *     MiDereferenceSegmentThread @ 0x1404A62C0 (MiDereferenceSegmentThread.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     KeWaitForMultipleObjects @ 0x1403981C0 (KeWaitForMultipleObjects.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MiSegmentDereferenceWorker @ 0x14049CE30 (MiSegmentDereferenceWorker.c)
 *     MiSaveUnusedSegmentCalibration @ 0x1404ACE64 (MiSaveUnusedSegmentCalibration.c)
 *     MiComputeUnusedSegmentReduction @ 0x1404BE03C (MiComputeUnusedSegmentReduction.c)
 *     MiPrepareDeleteOnClose @ 0x1406EC534 (MiPrepareDeleteOnClose.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiIssueSegmentDereferenceWork(__int64 a1, unsigned int a2)
{
  unsigned int v4; // edi
  ULONG *PoolMm; // rsi
  LARGE_INTEGER v6; // rbx
  __int64 v7; // rbp
  struct _WORK_QUEUE_ITEM *v8; // r14
  __int64 QuadPart; // rcx
  char *v10; // rdx
  char **v11; // r8
  ULONG *v12; // r9
  char *v13; // rcx
  _QWORD *v14; // rax
  KIRQL v15; // al
  KIRQL v16; // r12
  volatile LONG *v17; // rcx
  __int64 v18; // rdi
  KIRQL v19; // al
  volatile LONG *v20; // rcx
  LARGE_INTEGER PerformanceFrequency; // [rsp+40h] [rbp-698h] BYREF
  PKWAIT_BLOCK WaitBlockArray; // [rsp+48h] [rbp-690h]
  _BYTE v23[4]; // [rsp+50h] [rbp-688h] BYREF
  int v24; // [rsp+54h] [rbp-684h]

  v24 = 0;
  memset_0(v23, 0, 0x644uLL);
  v4 = (unsigned int)KeNumberProcessors_0 >> 2;
  if ( (unsigned int)KeNumberProcessors_0 >> 2 )
  {
    if ( v4 > 0x10 )
      v4 = 16;
  }
  else
  {
    v4 = 1;
  }
  if ( a2 == 7
    || v4 == 1
    || (PoolMm = (ULONG *)ExAllocatePoolMm(
                            64LL,
                            1568 * v4 + 24,
                            1917086029,
                            KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000)) == 0LL )
  {
    memset_0(v23, 0, 0x648uLL);
    PoolMm = (ULONG *)v23;
    v4 = 1;
  }
  PerformanceFrequency.QuadPart = 0LL;
  v6 = KeQueryPerformanceCounter(&PerformanceFrequency);
  if ( PerformanceFrequency.QuadPart != 10000000 )
    v6.QuadPart = 10000000 * v6.QuadPart / PerformanceFrequency.QuadPart;
  v7 = v4;
  v8 = (struct _WORK_QUEUE_ITEM *)(PoolMm + 6);
  *PoolMm = v4;
  QuadPart = (__int64)&PoolMm[378 * v4 + 6];
  PerformanceFrequency.QuadPart = QuadPart;
  WaitBlockArray = (PKWAIT_BLOCK)(QuadPart + 8LL * v4);
  if ( a2 - 2 <= 1 )
  {
    MiComputeUnusedSegmentReduction(a1, a2, PoolMm + 2);
    QuadPart = PerformanceFrequency.QuadPart;
  }
  v10 = (char *)PoolMm + 57;
  v11 = (char **)QuadPart;
  v12 = PoolMm + 16;
  do
  {
    v13 = v10 - 1;
    *(_QWORD *)(v10 + 15) = v12;
    *(_DWORD *)(v10 + 23) = a2;
    v14 = v10 + 7;
    *(_WORD *)v10 = 1536;
    v12 += 378;
    *(_DWORD *)(v10 + 3) = 0;
    *(_QWORD *)(v10 + 31) = a1;
    v10 += 1512;
    *v13 = 0;
    *v14 = v14;
    *v11++ = v13;
    --v7;
  }
  while ( v7 );
  v15 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 2112));
  *(_QWORD *)(a1 + 2432) = PoolMm;
  v16 = v15;
  if ( a2 == 4 )
    MiPrepareDeleteOnClose(a1);
  v17 = (volatile LONG *)(a1 + 2112);
  if ( v16 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v17);
  else
    ExReleaseSpinLockExclusive(v17, v16);
  v18 = v4 - 1;
  if ( (_DWORD)v18 )
  {
    do
    {
      v8->Parameter = v8;
      v8->WorkerRoutine = (void (__fastcall *)(void *))MiSegmentDereferenceWorker;
      v8->List.Flink = 0LL;
      ExQueueWorkItem(v8, CriticalWorkQueue);
      v8 = (struct _WORK_QUEUE_ITEM *)((char *)v8 + 1512);
      --v18;
    }
    while ( v18 );
  }
  v8->WorkerRoutine = (void (__fastcall *)(void *))1;
  MiSegmentDereferenceWorker((__int64)v8);
  if ( PoolMm != (ULONG *)v23 )
    KeWaitForMultipleObjects(
      *PoolMm,
      (PVOID *__attribute__((__org_arrdim(0,0))))PerformanceFrequency.QuadPart,
      WaitAll,
      Executive,
      0,
      0,
      0LL,
      WaitBlockArray);
  if ( a2 - 2 <= 1 )
    ((void (__fastcall *)(_QWORD, _QWORD))MiSaveUnusedSegmentCalibration)(PoolMm, (LARGE_INTEGER)v6.QuadPart);
  v19 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 2112));
  *(_QWORD *)(a1 + 2432) = 0LL;
  v20 = (volatile LONG *)(a1 + 2112);
  if ( v19 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v20);
  else
    ExReleaseSpinLockExclusive(v20, v19);
  if ( PoolMm != (ULONG *)v23 )
    ExFreePoolWithTag(PoolMm, 0);
}
