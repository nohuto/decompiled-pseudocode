/*
 * XREFs of ExpWorkQueueUpdateHealthMetricsOnRemove @ 0x1406D0E94
 * Callers:
 *     ExpTryQueueWorkItem @ 0x1402020DC (ExpTryQueueWorkItem.c)
 *     ExpWorkerThread @ 0x1403F5680 (ExpWorkerThread.c)
 * Callees:
 *     ExpTypeToPriority @ 0x1403831D0 (ExpTypeToPriority.c)
 */

__int64 __fastcall ExpWorkQueueUpdateHealthMetricsOnRemove(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  _QWORD *v4; // r11
  unsigned int v5; // r9d
  char v6; // r8
  unsigned __int64 v7; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  __int64 v9; // r10

  result = ExpTypeToPriority(*(_DWORD *)(a2 + 84));
  v5 = 0;
  _InterlockedDecrement64(&v4[(int)result + 2]);
  if ( !v6 )
  {
    v7 = (MEMORY[0xFFFFF78000000008] - *(_QWORD *)(v3 + 88)) / 0x2710uLL;
    if ( !ExpWorkQueueDelayHistogramBucketCount )
      goto LABEL_7;
    Blink = ExSaPageGroupDescriptorArrayLock.SavedApcState.ApcListHead[1].Blink;
    do
    {
      if ( (struct _LIST_ENTRY *)v7 < Blink->Flink )
        break;
      ++v5;
      Blink = (struct _LIST_ENTRY *)((char *)Blink + 8);
    }
    while ( v5 < ExpWorkQueueDelayHistogramBucketCount );
    if ( v5 >= ExpWorkQueueDelayHistogramBucketCount )
LABEL_7:
      v5 = ExpWorkQueueDelayHistogramBucketCount - 1;
    v9 = v5 + ExpWorkQueueDelayHistogramBucketCount * (_DWORD)result;
    result = *(_QWORD *)(*v4 + 8 * v9) + 1LL;
    *(_QWORD *)(*v4 + 8 * v9) = result;
  }
  return result;
}
