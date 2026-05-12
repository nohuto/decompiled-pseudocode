/*
 * XREFs of RaidQueryPciMsixTableConfigurationInterface @ 0x140095BEC
 * Callers:
 *     RaidAdapterStartDevice @ 0x140068EBC (RaidAdapterStartDevice.c)
 *     NvmeAdapterStartDevice @ 0x1400DDCA8 (NvmeAdapterStartDevice.c)
 * Callees:
 *     RaQueryInterface @ 0x140049534 (RaQueryInterface.c)
 */

__int64 __fastcall RaidQueryPciMsixTableConfigurationInterface(__int64 a1)
{
  __int64 v1; // rax

  if ( *(_DWORD *)a1 == 1094997074 )
  {
    v1 = a1 + 5984;
    return RaQueryInterface(
             *(PDEVICE_OBJECT *)(a1 + 24),
             (unsigned __int64)&GUID_MSIX_TABLE_CONFIG_INTERFACE,
             0x48u,
             1u,
             v1);
  }
  if ( *(_DWORD *)a1 == 1314275652 )
  {
    v1 = *(_QWORD *)(a1 + 592) + 72LL;
    return RaQueryInterface(
             *(PDEVICE_OBJECT *)(a1 + 24),
             (unsigned __int64)&GUID_MSIX_TABLE_CONFIG_INTERFACE,
             0x48u,
             1u,
             v1);
  }
  return 3221225485LL;
}
