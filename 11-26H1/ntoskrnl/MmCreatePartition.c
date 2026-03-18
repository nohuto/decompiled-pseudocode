/*
 * XREFs of MmCreatePartition @ 0x140869D7C
 * Callers:
 *     DifGetAvailableSystemPages @ 0x14064C72C (DifGetAvailableSystemPages.c)
 *     PspAllocatePartition @ 0x1407FDBD8 (PspAllocatePartition.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x1403985B0 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x14044ADC0 (MmGetCurrentProcessorColor.c)
 *     MiAllocatePartitionId @ 0x140868B40 (MiAllocatePartitionId.c)
 *     MiCreatePartitionOffsets @ 0x140868CB0 (MiCreatePartitionOffsets.c)
 *     MiDeletePartition @ 0x140868DE4 (MiDeletePartition.c)
 *     MiInitializePartition @ 0x140869360 (MiInitializePartition.c)
 *     MiInitializePartitionThreads @ 0x140869C60 (MiInitializePartitionThreads.c)
 *     MiCreatePfnBitMaps @ 0x140879CE0 (MiCreatePfnBitMaps.c)
 *     MiInitializeMemoryEvents @ 0x14087F860 (MiInitializeMemoryEvents.c)
 *     ExAllocateCacheAwareRundownProtection @ 0x140A362F0 (ExAllocateCacheAwareRundownProtection.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
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
    qword_140E37DC0 = (__int64)a1;
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
