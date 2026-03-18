/*
 * XREFs of ExpPartitionCreatePoolInternal @ 0x140B6C40C
 * Callers:
 *     ExpPartitionCreatePool @ 0x14077211C (ExpPartitionCreatePool.c)
 *     ExpPartitionCreatePoolDelayed @ 0x140772290 (ExpPartitionCreatePoolDelayed.c)
 *     ExpPartitionInitialize @ 0x14083FCA4 (ExpPartitionInitialize.c)
 * Callees:
 *     ExpWorkQueueHealthMetricsEnabled @ 0x14051FCC8 (ExpWorkQueueHealthMetricsEnabled.c)
 *     ExpWorkQueueDestroy @ 0x14083FEE0 (ExpWorkQueueDestroy.c)
 *     ExpWorkQueueHealthMetricsAllocate @ 0x14083FF78 (ExpWorkQueueHealthMetricsAllocate.c)
 *     ExpWorkQueueHealthMetricsFree @ 0x140840068 (ExpWorkQueueHealthMetricsFree.c)
 *     ExpWorkQueueInitializeWithMinimumThreads @ 0x140840240 (ExpWorkQueueInitializeWithMinimumThreads.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpPartitionCreatePoolInternal(
        __int64 a1,
        int a2,
        int a3,
        unsigned __int16 *a4,
        int a5,
        unsigned int a6)
{
  void **v6; // rbx
  void *Pool2; // rdi
  int v11; // esi
  int v12; // eax
  PVOID P; // [rsp+50h] [rbp-38h] BYREF

  v6 = 0LL;
  P = 0LL;
  Pool2 = (void *)ExAllocatePool2(0x40uLL);
  if ( Pool2 )
  {
    if ( !ExpWorkQueueHealthMetricsEnabled((PVOID *)a1, a5)
      || (v12 = ExpWorkQueueHealthMetricsAllocate((__int64 **)&P, *a4), v6 = (void **)P, v11 = v12, v12 >= 0) )
    {
      v11 = ExpWorkQueueInitializeWithMinimumThreads(
              (__int64)Pool2,
              a2,
              a3,
              a1,
              a4,
              a5,
              a6,
              (__int64)v6,
              *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *a4) + 276LL);
      if ( v11 >= 0 )
      {
        v6 = 0LL;
        *(_QWORD *)(*(_QWORD *)(a1 + 8)
                  + 8LL * (a6 + *(_DWORD *)&ExSaPageGroupDescriptorArrayLock.SavedApcStateFill[32] * (a5 + 8 * *a4))) = Pool2;
        Pool2 = 0LL;
        v11 = 0;
      }
    }
    if ( v6 )
      ExpWorkQueueHealthMetricsFree(v6);
    if ( Pool2 )
    {
      ExpWorkQueueDestroy((unsigned __int64)Pool2);
      ExFreePoolWithTag(Pool2, 0);
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v11;
}
