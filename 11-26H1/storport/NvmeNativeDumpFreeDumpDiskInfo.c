/*
 * XREFs of NvmeNativeDumpFreeDumpDiskInfo @ 0x1401A225C
 * Callers:
 *     NvmeDumpCreateDumpDiskInfo @ 0x1401A1DEC (NvmeDumpCreateDumpDiskInfo.c)
 *     NvmeDumpFreeStorageDumpInfo @ 0x1401A2374 (NvmeDumpFreeStorageDumpInfo.c)
 *     NvmeDumpStorageGetDumpInfoIoctl @ 0x1401A2794 (NvmeDumpStorageGetDumpInfoIoctl.c)
 *     NvmeNativeDumpFreeStorageDumpInfo @ 0x1401A35F0 (NvmeNativeDumpFreeStorageDumpInfo.c)
 *     NvmeNativeDumpStorageGetDumpInfoIoctl @ 0x1401A3730 (NvmeNativeDumpStorageGetDumpInfoIoctl.c)
 * Callees:
 *     NvmeNativeDumpFreeNvmeDumpDiskData @ 0x1401A220C (NvmeNativeDumpFreeNvmeDumpDiskData.c)
 */

void __fastcall NvmeNativeDumpFreeDumpDiskInfo(PVOID *a1)
{
  PVOID *v2; // rcx

  v2 = (PVOID *)((char *)*a1 + 48);
  if ( *v2 )
    NvmeNativeDumpFreeNvmeDumpDiskData(v2);
  ExFreePoolWithTag(*a1, 0x44436152u);
  *a1 = 0LL;
}
