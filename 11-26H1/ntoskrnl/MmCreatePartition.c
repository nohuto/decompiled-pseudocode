/*
 * XREFs of MmCreatePartition @ 0x14087015C
 * Callers:
 *     DifGetAvailableSystemPages @ 0x14065030C (DifGetAvailableSystemPages.c)
 *     PspAllocatePartition @ 0x140803608 (PspAllocatePartition.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     MiAllocatePartitionId @ 0x14086EF20 (MiAllocatePartitionId.c)
 *     MiCreatePartitionOffsets @ 0x14086F090 (MiCreatePartitionOffsets.c)
 *     MiDeletePartition @ 0x14086F1C4 (MiDeletePartition.c)
 *     MiInitializePartition @ 0x14086F740 (MiInitializePartition.c)
 *     MiInitializePartitionThreads @ 0x140870040 (MiInitializePartitionThreads.c)
 *     MiCreatePfnBitMaps @ 0x1408800DC (MiCreatePfnBitMaps.c)
 *     MiInitializeMemoryEvents @ 0x140885C60 (MiInitializeMemoryEvents.c)
 *     ExAllocateCacheAwareRundownProtection @ 0x14091B070 (ExAllocateCacheAwareRundownProtection.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmCreatePartition(__int64 *a1, char a2)
{
  __int64 result; // rax
  int CurrentProcessorColor; // eax
  __int64 v6; // rdx
  _QWORD *PoolMm; // rax
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  struct _KLOCK_ENTRIES *v11; // r9
  __int16 PartitionId; // ax
  int v13; // edi
  PEX_RUNDOWN_REF_CACHE_AWARE CacheAwareRundownProtection; // rax

  if ( (a2 & 1) != 0 )
  {
    *a1 = (__int64)&MiSystemPartition;
    result = 0LL;
    qword_140E37F40 = (__int64)a1;
    return result;
  }
  MiCreatePartitionOffsets(0LL, 0LL);
  CurrentProcessorColor = MmGetCurrentProcessorColor();
  PoolMm = (_QWORD *)ExAllocatePoolMm(64LL, v6 + 27712, 1632659789, CurrentProcessorColor | 0x80000000);
  v8 = (__int64)PoolMm;
  if ( !PoolMm )
    return 3221225626LL;
  MiCreatePartitionOffsets(PoolMm, ((unsigned __int64)PoolMm + 27775) & 0xFFFFFFFFFFFFFFC0uLL);
  *(_QWORD *)(v8 + 256) = a1;
  PartitionId = MiAllocatePartitionId(v8, v9, v10, v11);
  if ( !PartitionId )
  {
    ExFreePoolWithTag((PVOID)v8, 0);
    return 3221225495LL;
  }
  MiInitializePartition((ULONG *)v8, PartitionId);
  if ( (unsigned int)MiInitializeMemoryEvents(v8)
    && (unsigned int)MiCreatePfnBitMaps(v8, 0LL)
    && (CacheAwareRundownProtection = ExAllocateCacheAwareRundownProtection(NonPagedPoolNx, 0x7270694Du),
        (*(_QWORD *)(v8 + 3176) = CacheAwareRundownProtection) != 0LL) )
  {
    v13 = MiInitializePartitionThreads(v8);
    if ( v13 >= 0 )
    {
      *a1 = v8;
      if ( (a2 & 2) != 0 )
      {
        _InterlockedOr((volatile signed __int32 *)(v8 + 4), 0x20u);
        *(_OWORD *)(v8 + 21400) = 0LL;
        *(_OWORD *)(v8 + 21416) = 0LL;
        *(_OWORD *)(v8 + 21432) = 0LL;
        *(_QWORD *)(v8 + 21448) = 0LL;
      }
      return (unsigned int)v13;
    }
  }
  else
  {
    v13 = -1073741670;
  }
  MiDeletePartition((unsigned __int16 *)v8);
  return (unsigned int)v13;
}
