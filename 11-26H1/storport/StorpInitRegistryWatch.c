/*
 * XREFs of StorpInitRegistryWatch @ 0x140077434
 * Callers:
 *     RaidAdapterStartRegistryWatch @ 0x140069918 (RaidAdapterStartRegistryWatch.c)
 *     DllInitialize @ 0x1400ACAB0 (DllInitialize.c)
 *     NvmeAdapterStartRegistryWatch @ 0x1400DEAB0 (NvmeAdapterStartRegistryWatch.c)
 *     RaidUnitGetDeviceParameters @ 0x1401BB894 (RaidUnitGetDeviceParameters.c)
 * Callees:
 *     <none>
 */

void __fastcall StorpInitRegistryWatch(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 16) = a1;
  ExInitializeResourceLite((PERESOURCE)(a2 + 24));
  *(_QWORD *)(a2 + 152) = a2;
  *(_QWORD *)(a2 + 144) = StorpWatchForRegistryChanges;
  *(_QWORD *)(a2 + 128) = 0LL;
  KeInitializeEvent((PRKEVENT)(a2 + 160), NotificationEvent, 0);
  *(_WORD *)(a2 + 184) = 1;
}
