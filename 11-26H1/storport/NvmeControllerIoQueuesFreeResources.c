/*
 * XREFs of NvmeControllerIoQueuesFreeResources @ 0x1400F6F30
 * Callers:
 *     NvmeControllerIoQueuesInitialize @ 0x1400F71AC (NvmeControllerIoQueuesInitialize.c)
 *     NvmeControllerReinitialize @ 0x1400F9990 (NvmeControllerReinitialize.c)
 *     NvmeControllerRemove @ 0x1400F9AE8 (NvmeControllerRemove.c)
 *     NvmeControllerStop @ 0x1400FADAC (NvmeControllerStop.c)
 * Callees:
 *     NvmeControllerUninitializeCQIoPolling @ 0x1400FB7A4 (NvmeControllerUninitializeCQIoPolling.c)
 *     NvmeFreeDmaBuffer @ 0x1400FE7B4 (NvmeFreeDmaBuffer.c)
 *     DeleteNVMePrpListBufferPool @ 0x140119960 (DeleteNVMePrpListBufferPool.c)
 *     DeleteNVMeScatterGatherListBufferPool @ 0x140119A8C (DeleteNVMeScatterGatherListBufferPool.c)
 *     DeleteNVMeSplitIoContextPool @ 0x140119B78 (DeleteNVMeSplitIoContextPool.c)
 *     StorDeleteOutstandingRequestBitmap @ 0x14011E364 (StorDeleteOutstandingRequestBitmap.c)
 */

__int64 __fastcall NvmeControllerIoQueuesFreeResources(__int64 a1, __int64 a2, int a3)
{
  int v4; // r14d
  int v5; // ebp
  unsigned __int16 i; // si
  __int64 v7; // rdi
  int v8; // r8d
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r9
  unsigned __int16 j; // si
  unsigned __int64 v15; // rdi
  void *v16; // rcx
  __int64 result; // rax

  v4 = 16 * *(_DWORD *)(a1 + 8);
  v5 = *(_DWORD *)(a1 + 8) << 6;
  if ( *(_QWORD *)(a1 + 728) )
  {
    for ( i = 0; i < *(_WORD *)(a1 + 22); ++i )
    {
      v7 = 192LL * i;
      NvmeFreeDmaBuffer(
        a1,
        v5,
        a3,
        *(_QWORD *)(v7 + *(_QWORD *)(a1 + 728)),
        *(_QWORD *)(v7 + *(_QWORD *)(a1 + 728) + 8));
      v9 = *(void **)(*(_QWORD *)(a1 + 728) + 24LL);
      if ( v9 )
      {
        ExFreePoolWithTag(v9, 0x52436152u);
        *(_QWORD *)(*(_QWORD *)(a1 + 728) + 24LL) = 0LL;
      }
      v10 = *(void **)(*(_QWORD *)(a1 + 728) + 32LL);
      if ( v10 )
      {
        ExFreePoolWithTag(v10, 0x52436152u);
        *(_QWORD *)(*(_QWORD *)(a1 + 728) + 32LL) = 0LL;
      }
      if ( *(_BYTE *)(a1 + 1728) == 1 )
      {
        v11 = *(void **)(v7 + *(_QWORD *)(a1 + 728) + 56);
        if ( v11 )
        {
          ExFreePoolWithTag(v11, 0x51496152u);
          *(_QWORD *)(v7 + *(_QWORD *)(a1 + 728) + 56) = 0LL;
        }
        v12 = *(_QWORD *)(a1 + 728);
        v13 = *(_QWORD *)(v7 + v12 + 40);
        if ( v13 )
        {
          NvmeFreeDmaBuffer(
            a1,
            *(_DWORD *)(a1 + 8) * *(_DWORD *)(*(_QWORD *)(a1 + 1648) + 12LL),
            v8,
            v13,
            *(_QWORD *)(v7 + v12 + 48));
          *(_QWORD *)(v7 + *(_QWORD *)(a1 + 728) + 40) = 0LL;
          *(_QWORD *)(v7 + *(_QWORD *)(a1 + 728) + 48) = 0LL;
        }
      }
      StorDeleteOutstandingRequestBitmap(v7 + *(_QWORD *)(a1 + 728));
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 728), 0x52436152u);
    *(_QWORD *)(a1 + 728) = 0LL;
  }
  if ( *(_QWORD *)(a1 + 864) )
  {
    for ( j = 0; j < *(_WORD *)(a1 + 26); ++j )
    {
      v15 = (unsigned __int64)j << 7;
      NvmeFreeDmaBuffer(
        a1,
        v4,
        a3,
        *(_QWORD *)(*(_QWORD *)(a1 + 864) + v15),
        *(_QWORD *)(*(_QWORD *)(a1 + 864) + v15 + 8));
      v16 = *(void **)(*(_QWORD *)(a1 + 864) + v15 + 64);
      if ( v16 )
      {
        ExFreePoolWithTag(v16, 0x72446152u);
        *(_QWORD *)(*(_QWORD *)(a1 + 864) + v15 + 64) = 0LL;
        *(_QWORD *)(*(_QWORD *)(a1 + 864) + v15 + 72) = 0LL;
      }
      NvmeControllerUninitializeCQIoPolling(a1, v15 + *(_QWORD *)(a1 + 864));
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 864), 0x52436152u);
    *(_QWORD *)(a1 + 864) = 0LL;
  }
  DeleteNVMePrpListBufferPool(a1);
  DeleteNVMeSplitIoContextPool(a1);
  result = DeleteNVMeScatterGatherListBufferPool(a1);
  *(_WORD *)(a1 + 22) = 0;
  *(_WORD *)(a1 + 26) = 0;
  return result;
}
