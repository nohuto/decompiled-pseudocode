/*
 * XREFs of ExpWorkQueueUpdateHealthMetricsOnRemove @ 0x1406D4EC4
 * Callers:
 *     ExpTryQueueWorkItem @ 0x1402020DC (ExpTryQueueWorkItem.c)
 *     ExpWorkerThread @ 0x1403EF030 (ExpWorkerThread.c)
 * Callees:
 *     ExpTypeToPriority @ 0x140384F80 (ExpTypeToPriority.c)
 */

__int64 __fastcall ExpWorkQueueUpdateHealthMetricsOnRemove(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  _QWORD *v4; // r11
  unsigned int v5; // r9d
  char v6; // r8
  unsigned __int64 v7; // rdx
  unsigned __int64 *Object; // rcx
  __int64 v9; // r10

  result = ExpTypeToPriority(*(_DWORD *)(a2 + 84));
  v5 = 0;
  _InterlockedDecrement64(&v4[(int)result + 2]);
  if ( !v6 )
  {
    v7 = (MEMORY[0xFFFFF78000000008] - *(_QWORD *)(v3 + 88)) / 0x2710uLL;
    if ( !ExpWorkQueueDelayHistogramBucketCount )
      goto LABEL_7;
    Object = (unsigned __int64 *)ExSaPageGroupDescriptorArrayLock.WaitBlock[1].Object;
    do
    {
      if ( v7 < *Object )
        break;
      ++v5;
      ++Object;
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
