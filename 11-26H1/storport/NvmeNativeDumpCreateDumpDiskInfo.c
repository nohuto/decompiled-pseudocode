/*
 * XREFs of NvmeNativeDumpCreateDumpDiskInfo @ 0x1401A3180
 * Callers:
 *     NvmeNativeDumpStorageGetDumpInfoIoctl @ 0x1401A3730 (NvmeNativeDumpStorageGetDumpInfoIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     RaidUnitFreeDumpInfo @ 0x1400A7134 (RaidUnitFreeDumpInfo.c)
 *     NvmeNativeDumpFreeNvmeDumpDiskData @ 0x1401A220C (NvmeNativeDumpFreeNvmeDumpDiskData.c)
 *     NvmeNativeDumpCreateNvmeDumpDiskData @ 0x1401A349C (NvmeNativeDumpCreateNvmeDumpDiskData.c)
 */

__int64 __fastcall NvmeNativeDumpCreateDumpDiskInfo(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r9
  _QWORD *Pool; // rax
  _QWORD *v6; // rbx
  int v7; // edi
  _QWORD *v8; // rax
  PVOID v9; // rcx
  int v11; // [rsp+40h] [rbp+20h] BYREF
  PVOID v12; // [rsp+48h] [rbp+28h] BYREF
  PVOID v13; // [rsp+50h] [rbp+30h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  *a2 = 0LL;
  v12 = 0LL;
  v11 = 0;
  Pool = (_QWORD *)RaidAllocatePool(64LL, 72LL, 1145266514LL, v2);
  v13 = Pool;
  v6 = Pool;
  if ( Pool )
  {
    v8 = Pool + 1;
    v8[1] = v8;
    *v8 = v8;
    *(_DWORD *)v6 = 72;
    *(_OWORD *)(v6 + 3) = *(_OWORD *)(a1 + 160);
    *((_DWORD *)v6 + 10) = 0;
    v7 = NvmeNativeDumpCreateNvmeDumpDiskData(a1, &v12, &v11);
    if ( v7 < 0 )
    {
      v9 = v12;
    }
    else
    {
      *((_DWORD *)v6 + 11) = v11;
      v6[6] = v12;
      v9 = 0LL;
      *a2 = v6;
      v6 = 0LL;
      v12 = 0LL;
      v13 = 0LL;
    }
    if ( v9 )
      NvmeNativeDumpFreeNvmeDumpDiskData(&v12);
    if ( v6 )
      RaidUnitFreeDumpInfo(&v13);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v7;
}
