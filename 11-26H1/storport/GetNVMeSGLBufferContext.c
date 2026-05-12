/*
 * XREFs of GetNVMeSGLBufferContext @ 0x140119E00
 * Callers:
 *     NvmeSplitIoParallel @ 0x14001EFF0 (NvmeSplitIoParallel.c)
 *     NvmeProcessIoIrp @ 0x140020090 (NvmeProcessIoIrp.c)
 *     NvmeProcessPendingIo @ 0x14003A190 (NvmeProcessPendingIo.c)
 *     NvmeNamespaceProcessIoForDeviceIdle @ 0x14011A640 (NvmeNamespaceProcessIoForDeviceIdle.c)
 *     NvmeProcessPendingIoInCompletionDpc @ 0x14011B430 (NvmeProcessPendingIoInCompletionDpc.c)
 *     NvmeProcessPendingIoInSpecifiedGroup @ 0x14011D160 (NvmeProcessPendingIoInSpecifiedGroup.c)
 * Callees:
 *     AllocateNVMeSGLBufferContext @ 0x140119170 (AllocateNVMeSGLBufferContext.c)
 */

__int64 __fastcall GetNVMeSGLBufferContext(__int64 a1, unsigned int a2)
{
  __int64 v3; // rsi
  __int64 v4; // rdi
  PSLIST_ENTRY v5; // r8
  unsigned __int16 *v6; // rax
  int v7; // r8d
  __int64 result; // rax

  v3 = a2;
  v4 = a2;
  v5 = ExpInterlockedPopEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(a1 + 896) + 8LL * a2));
  if ( v5 )
    return (__int64)v5;
  v6 = *(unsigned __int16 **)(56 * v4 + *((_QWORD *)g_CpuInfo + 4) + 48);
  if ( v6 )
    v7 = *v6;
  else
    v7 = 0x80000000;
  result = AllocateNVMeSGLBufferContext(a1, v3, v7);
  v5 = (PSLIST_ENTRY)result;
  if ( result )
  {
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(a1 + 896) + 8 * v3) + 16LL));
    return (__int64)v5;
  }
  return result;
}
