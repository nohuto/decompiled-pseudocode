/*
 * XREFs of NvmeAdapterRemoveFabricControllerNamespaces @ 0x1400ED110
 * Callers:
 *     NvmeAdapterCleanupFabricNvmeController @ 0x1400E5018 (NvmeAdapterCleanupFabricNvmeController.c)
 * Callees:
 *     RaidCaptureLivedumpInternal @ 0x140093748 (RaidCaptureLivedumpInternal.c)
 */

void __fastcall NvmeAdapterRemoveFabricControllerNamespaces(__int64 a1)
{
  bool v1; // zf
  union _LARGE_INTEGER Timeout; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_DWORD *)(a1 + 656) == 0;
  Timeout.QuadPart = -100000000LL;
  if ( !v1 )
  {
    IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 128) + 32LL), BusRelations);
    if ( KeWaitForSingleObject((PVOID)(a1 + 256), Executive, 0, 0, &Timeout) == 258
      && (StorLivedumpCodesEnabled & 2) != 0 )
    {
      RaidCaptureLivedumpInternal(2, a1, 0LL);
    }
  }
}
