/*
 * XREFs of MiBuildNewCloneDescriptor @ 0x140B58184
 * Callers:
 *     MiSetCloneParentForkInProgress @ 0x140511B1C (MiSetCloneParentForkInProgress.c)
 *     MiCreateCloneZeroDescriptor @ 0x140B580FC (MiCreateCloneZeroDescriptor.c)
 * Callees:
 *     MiAllocateProtoPool @ 0x1403988A0 (MiAllocateProtoPool.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x1403C6CB0 (PsChargeProcessNonPagedPoolQuota.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1403C6FA0 (PsReturnProcessNonPagedPoolQuota.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     MiGetVmPartition @ 0x140447EB0 (MiGetVmPartition.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall MiBuildNewCloneDescriptor(ULONG_PTR BugCheckParameter1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // r14
  unsigned __int64 v7; // rbp
  int CurrentProcessorColor; // eax
  _QWORD *PoolMm; // rbx
  int v11; // eax
  _QWORD *v12; // rdi
  void *v13; // rcx
  __int64 VmPartition; // rax
  __int64 v15; // r8

  v4 = 32 * a2;
  v7 = 32 * a2 + 32;
  if ( (int)PsChargeProcessNonPagedPoolQuota(BugCheckParameter1, v7) < 0 )
    return 0LL;
  CurrentProcessorColor = MmGetCurrentProcessorColor();
  PoolMm = (_QWORD *)ExAllocatePoolMm(64LL, 0x70uLL, 1682140493, CurrentProcessorColor | 0x80000000);
  if ( !PoolMm )
  {
    PsReturnProcessNonPagedPoolQuota(BugCheckParameter1, v7);
    return 0LL;
  }
  v11 = MmGetCurrentProcessorColor();
  v12 = (_QWORD *)ExAllocatePoolMm(64LL, 0x20uLL, 1749249357, v11 | 0x80000000);
  if ( !v12 )
  {
    PsReturnProcessNonPagedPoolQuota(BugCheckParameter1, v7);
    v13 = PoolMm;
LABEL_7:
    ExFreePoolWithTag(v13, 0);
    return 0LL;
  }
  if ( !MiAllocateProtoPool(64LL, v4, 1816358221LL) )
  {
    PsReturnProcessNonPagedPoolQuota(BugCheckParameter1, v7);
    ExFreePoolWithTag(PoolMm, 0);
    v13 = v12;
    goto LABEL_7;
  }
  VmPartition = MiGetVmPartition(BugCheckParameter1 + 1024);
  *v12 = a2;
  v12[2] = v15;
  v12[1] = 1LL;
  PoolMm[4] = v15 + v4 - 32;
  PoolMm[3] = v15;
  PoolMm[6] = 0LL;
  PoolMm[5] = a2;
  PoolMm[7] = v12;
  PoolMm[8] = v7;
  PoolMm[12] = a3;
  if ( _InterlockedIncrement64((volatile signed __int64 *)(VmPartition + 2136)) <= 1 )
    __fastfail(0xEu);
  v12[3] = VmPartition;
  return PoolMm;
}
