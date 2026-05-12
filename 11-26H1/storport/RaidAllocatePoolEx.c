/*
 * XREFs of RaidAllocatePoolEx @ 0x1400929F4
 * Callers:
 *     NvmeControllerCreateCommandQueue @ 0x1400F1E78 (NvmeControllerCreateCommandQueue.c)
 *     NvmeControllerCreatePendingIoQueueContext @ 0x1400F2460 (NvmeControllerCreatePendingIoQueueContext.c)
 *     NvmeControllerInitializeCQIoPolling @ 0x1400F6160 (NvmeControllerInitializeCQIoPolling.c)
 *     NvmeControllerInitializeInternalDbgLog @ 0x1400F65B0 (NvmeControllerInitializeInternalDbgLog.c)
 *     NvmeControllerSubmissionQueueInit @ 0x1400FB3FC (NvmeControllerSubmissionQueueInit.c)
 *     NvmeNamespaceCreateIoQueue @ 0x1401029C8 (NvmeNamespaceCreateIoQueue.c)
 *     AllocateNVMeSGLBufferContext @ 0x140119170 (AllocateNVMeSGLBufferContext.c)
 *     AllocateNewNVMeIoSplitContext @ 0x1401191E0 (AllocateNewNVMeIoSplitContext.c)
 *     CreateNVMeSplitIoContextPool @ 0x14011979C (CreateNVMeSplitIoContextPool.c)
 *     NvmeAdapterPowerInitialize @ 0x140124528 (NvmeAdapterPowerInitialize.c)
 *     NvmeNamespacePowerInitialize @ 0x140128254 (NvmeNamespacePowerInitialize.c)
 * Callees:
 *     RaidLogAllocationFailure @ 0x140095610 (RaidLogAllocationFailure.c)
 */

__int64 __fastcall RaidAllocatePoolEx(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  int v6; // esi
  int v7; // ebp
  int v8; // r14d
  __int64 v9; // rdi
  __int64 v11; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v12; // [rsp+38h] [rbp-20h]
  int v13; // [rsp+3Ch] [rbp-1Ch]

  v13 = 0;
  v11 = 3LL;
  v6 = a3;
  v7 = a2;
  v12 = a5 | 0x80000000;
  v8 = a1;
  v9 = ExAllocatePool3(a1, a2, a3, &v11, 1);
  if ( !v9 && a4 )
    RaidLogAllocationFailure(a4, v8, v7, v6, a5);
  return v9;
}
