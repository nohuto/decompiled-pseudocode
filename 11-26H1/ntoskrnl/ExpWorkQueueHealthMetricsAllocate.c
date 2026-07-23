/*
 * XREFs of ExpWorkQueueHealthMetricsAllocate @ 0x1408461B8
 * Callers:
 *     ExpPartitionCreatePoolInternal @ 0x140B6F508 (ExpPartitionCreatePoolInternal.c)
 * Callees:
 *     ExpWorkQueueHealthMetricsFree @ 0x1408462A8 (ExpWorkQueueHealthMetricsFree.c)
 *     ExAllocatePool3 @ 0x140C16010 (ExAllocatePool3.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall ExpWorkQueueHealthMetricsAllocate(__int64 **a1, unsigned __int16 a2)
{
  unsigned int v3; // ebx
  __int64 *v4; // rdi
  __int64 v5; // rax
  __int64 Pool2; // rax
  __int128 v8; // [rsp+30h] [rbp-18h] BYREF

  v8 = 0LL;
  LOBYTE(v8) = 3;
  *(_QWORD *)&v8 = v8 | 0x100;
  DWORD2(v8) = a2 | 0x80000000;
  v3 = 0;
  v4 = (__int64 *)ExAllocatePool3(64LL, 272LL, 1817671749LL, &v8, 1);
  if ( v4 )
  {
    v5 = ExAllocatePool3(64LL, (unsigned int)(ExpWorkQueueDelayHistogramBucketCount << 8), 1817671749LL, &v8, 1);
    *v4 = v5;
    if ( v5 && (Pool2 = ExAllocatePool2(0x40uLL), (v4[1] = Pool2) != 0) )
    {
      *a1 = v4;
    }
    else
    {
      v3 = -1073741670;
      ExpWorkQueueHealthMetricsFree(v4);
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v3;
}
