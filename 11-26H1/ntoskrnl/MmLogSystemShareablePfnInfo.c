/*
 * XREFs of MmLogSystemShareablePfnInfo @ 0x14087D834
 * Callers:
 *     EtwpKernelTraceRundown @ 0x140A99DCC (EtwpKernelTraceRundown.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MiGetWorkingSetInfoEx @ 0x14040EB0C (MiGetWorkingSetInfoEx.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     MiGetAnyMultiplexedVm @ 0x14044F0E0 (MiGetAnyMultiplexedVm.c)
 *     MiGetAggregateWorkingSetSize @ 0x140712B28 (MiGetAggregateWorkingSetSize.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     EtwLogPfnInfoRundown @ 0x14083559C (EtwLogPfnInfoRundown.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall MmLogSystemShareablePfnInfo(__int64 a1, unsigned int a2)
{
  _QWORD *PoolMm; // rdi
  unsigned __int64 v5; // r14
  size_t v6; // rbp
  char *AnyMultiplexedVm; // rax
  unsigned __int64 AggregateWorkingSetSize; // rax
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // rbx
  int i; // esi
  char *v12; // r15
  int CurrentProcessorColor; // eax
  int WorkingSetInfo; // eax
  __int64 v15; // rcx

  PoolMm = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(0);
  AggregateWorkingSetSize = MiGetAggregateWorkingSetSize((__int64)AnyMultiplexedVm);
  if ( AggregateWorkingSetSize <= v9 )
    v10 = 64LL;
  else
    v10 = AggregateWorkingSetSize - v9 + 64;
  for ( i = 1; i <= 4; ++i )
  {
    v12 = MiGetAnyMultiplexedVm(i);
    if ( v5 >= v10 )
    {
      memset_0(PoolMm, 0, v6);
    }
    else
    {
      if ( PoolMm )
        ExFreePoolWithTag(PoolMm, 0);
      v6 = 32 * v10 + 16;
      CurrentProcessorColor = MmGetCurrentProcessorColor();
      PoolMm = (_QWORD *)ExAllocatePoolMm(64LL, v6, 1299674181, CurrentProcessorColor | 0x80000000);
      if ( !PoolMm )
        return;
      v5 = v10;
    }
    WorkingSetInfo = MiGetWorkingSetInfoEx((__int64)v12, 0, PoolMm, v6);
    v15 = PoolMm[1];
    if ( WorkingSetInfo >= 0 )
    {
      if ( v15 )
        EtwLogPfnInfoRundown(0LL, a1, a2, PoolMm);
    }
    else
    {
      v10 = v15 + 64;
    }
  }
  if ( PoolMm )
    ExFreePoolWithTag(PoolMm, 0);
}
