/*
 * XREFs of StorpShutdownRegistryWatch @ 0x1400774A0
 * Callers:
 *     RaidUnitFreeResources @ 0x140011CBC (RaidUnitFreeResources.c)
 *     DllUnload @ 0x1400ADF30 (DllUnload.c)
 *     RaidAdapterReleaseResources @ 0x140185C48 (RaidAdapterReleaseResources.c)
 *     NvmeAdapterReleaseResources @ 0x14019DE88 (NvmeAdapterReleaseResources.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall StorpShutdownRegistryWatch(__int64 a1)
{
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 24), 1u);
  ZwClose(*(HANDLE *)(a1 + 16));
  *(_QWORD *)(a1 + 16) = 0LL;
  ExReleaseResourceLite((PERESOURCE)(a1 + 24));
  KeLeaveCriticalRegion();
  KeWaitForSingleObject((PVOID)(a1 + 160), Executive, 0, 0, 0LL);
  return ExDeleteResourceLite((PERESOURCE)(a1 + 24));
}
