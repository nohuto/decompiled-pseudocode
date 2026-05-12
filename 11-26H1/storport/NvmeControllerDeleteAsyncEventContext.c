/*
 * XREFs of NvmeControllerDeleteAsyncEventContext @ 0x1400F27CC
 * Callers:
 *     NvmeControllerCreateAsyncEventContext @ 0x1400F1D88 (NvmeControllerCreateAsyncEventContext.c)
 *     NvmeControllerRemove @ 0x1400F9AE8 (NvmeControllerRemove.c)
 *     NvmeControllerStop @ 0x1400FADAC (NvmeControllerStop.c)
 * Callees:
 *     NvmeControllerDeleteAERExtendedCommandPool @ 0x1400F2744 (NvmeControllerDeleteAERExtendedCommandPool.c)
 */

void __fastcall NvmeControllerDeleteAsyncEventContext(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 1416) )
  {
    NvmeControllerDeleteAERExtendedCommandPool(a1);
    ExFreePoolWithTag(*(PVOID *)(a1 + 1416), 0x53416152u);
    *(_QWORD *)(a1 + 1416) = 0LL;
  }
}
