/*
 * XREFs of RaidUnitFreeDumpInfo @ 0x1400A7134
 * Callers:
 *     RaUnitStorageFreeDumpInfo @ 0x1400A3064 (RaUnitStorageFreeDumpInfo.c)
 *     RaUnitStorageGetDumpInfoIoctl @ 0x14018C2D8 (RaUnitStorageGetDumpInfoIoctl.c)
 *     NvmeNativeDumpCreateDumpDiskInfo @ 0x1401A3180 (NvmeNativeDumpCreateDumpDiskInfo.c)
 *     RaidUnitCreateDumpInfo @ 0x1401B9A8C (RaidUnitCreateDumpInfo.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidUnitFreeDumpInfo(PVOID *a1)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)*a1 + 6);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x44436152u);
  ExFreePoolWithTag(*a1, 0x44436152u);
  *a1 = 0LL;
}
