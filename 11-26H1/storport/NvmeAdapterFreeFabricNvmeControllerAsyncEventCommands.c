/*
 * XREFs of NvmeAdapterFreeFabricNvmeControllerAsyncEventCommands @ 0x1400E8F00
 * Callers:
 *     NvmeAdapterAllocateFabricNvmeControllerAsyncEventCommands @ 0x1400E4910 (NvmeAdapterAllocateFabricNvmeControllerAsyncEventCommands.c)
 *     NvmeAdapterCleanupFabricNvmeController @ 0x1400E5018 (NvmeAdapterCleanupFabricNvmeController.c)
 * Callees:
 *     <none>
 */

void __fastcall NvmeAdapterFreeFabricNvmeControllerAsyncEventCommands(__int64 a1)
{
  unsigned __int16 i; // di
  __int64 v3; // r14
  void *v4; // rcx

  if ( *(_QWORD *)(a1 + 544) )
  {
    for ( i = 0; i < *(unsigned __int8 *)(a1 + 742); ++i )
    {
      v3 = *(_QWORD *)(a1 + 544);
      v4 = *(void **)(v3 + 8LL * i);
      if ( v4 )
      {
        ExFreePoolWithTag(v4, 0x72536152u);
        *(_QWORD *)(v3 + 8LL * i) = 0LL;
      }
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 544), 0x52436152u);
    *(_QWORD *)(a1 + 544) = 0LL;
  }
}
