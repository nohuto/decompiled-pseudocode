/*
 * XREFs of NvmeAdapterDisableNonPoFxMiniportInterface @ 0x140123824
 * Callers:
 *     NvmeAdapterRemoveDeviceIrp @ 0x14019E4E8 (NvmeAdapterRemoveDeviceIrp.c)
 *     NvmeAdapterSurpriseRemovalIrp @ 0x1401A0664 (NvmeAdapterSurpriseRemovalIrp.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall NvmeAdapterDisableNonPoFxMiniportInterface(__int64 a1)
{
  struct _UNICODE_STRING *v1; // rcx
  NTSTATUS result; // eax

  v1 = *(struct _UNICODE_STRING **)(a1 + 160);
  if ( v1[21].Buffer )
    return IoSetDeviceInterfaceState(v1 + 21, 0);
  return result;
}
