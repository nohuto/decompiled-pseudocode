/*
 * XREFs of MiExpandPartitionIds @ 0x140869008
 * Callers:
 *     MiAllocatePartitionId @ 0x140868B40 (MiAllocatePartitionId.c)
 *     MiInitializePartitions @ 0x140CF8CA4 (MiInitializePartitions.c)
 * Callees:
 *     MiReleasePtes @ 0x140281CE0 (MiReleasePtes.c)
 *     MiMakeZeroedPageTables @ 0x1402A50D4 (MiMakeZeroedPageTables.c)
 *     MiReservePtes @ 0x14035DE50 (MiReservePtes.c)
 *     ExAllocatePoolMm @ 0x1403985B0 (ExAllocatePoolMm.c)
 *     MiGetPteAddress @ 0x1404468C0 (MiGetPteAddress.c)
 *     MmGetCurrentProcessorColor @ 0x14044ADC0 (MmGetCurrentProcessorColor.c)
 *     RtlClearAllBits @ 0x14047EA90 (RtlClearAllBits.c)
 *     MiReplacePartitionIdBitmap @ 0x1406F0B4C (MiReplacePartitionIdBitmap.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 MiExpandPartitionIds()
{
  unsigned int v0; // ebx
  int CurrentProcessorColor; // eax
  __int64 PoolMm; // rax
  unsigned __int64 v3; // r9
  __int64 v4; // rsi
  RTL_BITMAP *v5; // rdi
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rbx
  unsigned __int64 *PteAddress; // rbp
  int v9; // r8d
  unsigned __int64 v11; // rax

  v0 = 512;
  if ( (void **)stru_140E2EB88.ThreadLock != &stru_140E2EB88.StackBase )
    v0 = *(_DWORD *)stru_140E2EB88.QuantumTarget + 512;
  if ( v0 <= *(_DWORD *)stru_140E2EB88.QuantumTarget )
    return 0LL;
  if ( v0 > 0x400 )
    return 0LL;
  CurrentProcessorColor = MmGetCurrentProcessorColor();
  PoolMm = ExAllocatePoolMm(
             64LL,
             8 * ((v0 >> 6) + ((v0 & 0x3F) != 0) + 2),
             1833068877,
             CurrentProcessorColor | 0x80000000);
  v4 = 0LL;
  v5 = (RTL_BITMAP *)PoolMm;
  if ( !PoolMm )
    return 0LL;
  *(_DWORD *)PoolMm = v0;
  *(_QWORD *)(PoolMm + 8) = PoolMm + 16;
  if ( (void **)stru_140E2EB88.ThreadLock == &stru_140E2EB88.StackBase )
  {
    v6 = MiReservePtes((__int64)&stru_140E36558.WaitBlockList, 2u, stru_140E2EB88.ThreadLock, v3);
    if ( !v6 )
      goto LABEL_14;
    v7 = (__int64)(v6 << 25) >> 16;
    if ( !v7 )
      goto LABEL_14;
  }
  else
  {
    v7 = stru_140E2EB88.ThreadLock + 8LL * *(unsigned int *)stru_140E2EB88.QuantumTarget;
  }
  PteAddress = (unsigned __int64 *)MiGetPteAddress(v7);
  if ( !(unsigned int)MiMakeZeroedPageTables((int)PteAddress, (int)PteAddress, v9, 8) )
  {
    if ( (void **)stru_140E2EB88.ThreadLock == &stru_140E2EB88.StackBase )
      MiReleasePtes((__int64)&stru_140E36558.WaitBlockList, PteAddress, 1u);
LABEL_14:
    ExFreePoolWithTag(v5, 0);
    return 0LL;
  }
  memset_0((void *)v7, 0, 0x1000uLL);
  if ( (void **)stru_140E2EB88.ThreadLock == &stru_140E2EB88.StackBase )
  {
    *(_QWORD *)v7 = *(_QWORD *)stru_140E2EB88.ThreadLock;
    stru_140E2EB88.ThreadLock = v7;
  }
  RtlClearAllBits(v5);
  v11 = *(unsigned int *)stru_140E2EB88.QuantumTarget;
  LOBYTE(v4) = (v11 & 0x3F) != 0;
  memmove(v5->Buffer, *(const void **)(stru_140E2EB88.QuantumTarget + 8), 8 * ((v11 >> 6) + v4));
  MiReplacePartitionIdBitmap((unsigned __int64)v5);
  return 1LL;
}
