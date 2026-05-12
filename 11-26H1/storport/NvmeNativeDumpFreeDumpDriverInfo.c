/*
 * XREFs of NvmeNativeDumpFreeDumpDriverInfo @ 0x1401A22A0
 * Callers:
 *     NvmeDumpCreateDumpAdapterInfo @ 0x1401A1A10 (NvmeDumpCreateDumpAdapterInfo.c)
 *     NvmeDumpCreateDumpDriverInfo @ 0x1401A1ED0 (NvmeDumpCreateDumpDriverInfo.c)
 *     NvmeDumpFreeStorageDumpInfo @ 0x1401A2374 (NvmeDumpFreeStorageDumpInfo.c)
 *     NvmeDumpStorageGetDumpInfoIoctl @ 0x1401A2794 (NvmeDumpStorageGetDumpInfoIoctl.c)
 *     NvmeNativeDumpCreateDumpAdapterInfo @ 0x1401A2C88 (NvmeNativeDumpCreateDumpAdapterInfo.c)
 *     NvmeNativeDumpCreateDumpDriverInfo @ 0x1401A3264 (NvmeNativeDumpCreateDumpDriverInfo.c)
 *     NvmeNativeDumpFreeStorageDumpInfo @ 0x1401A35F0 (NvmeNativeDumpFreeStorageDumpInfo.c)
 *     NvmeNativeDumpStorageGetDumpInfoIoctl @ 0x1401A3730 (NvmeNativeDumpStorageGetDumpInfoIoctl.c)
 * Callees:
 *     <none>
 */

void __fastcall NvmeNativeDumpFreeDumpDriverInfo(PVOID *a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx

  v2 = (void *)*((_QWORD *)*a1 + 4);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x44436152u);
  v3 = (void *)*((_QWORD *)*a1 + 5);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x44436152u);
  v4 = (void *)*((_QWORD *)*a1 + 6);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x44436152u);
  v5 = (void *)*((_QWORD *)*a1 + 7);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x44436152u);
  v6 = (void *)*((_QWORD *)*a1 + 9);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x44436152u);
  v7 = (void *)*((_QWORD *)*a1 + 17);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  ExFreePoolWithTag(*a1, 0x44436152u);
}
