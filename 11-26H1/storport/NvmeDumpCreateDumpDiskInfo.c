/*
 * XREFs of NvmeDumpCreateDumpDiskInfo @ 0x1401A1DEC
 * Callers:
 *     NvmeDumpStorageGetDumpInfoIoctl @ 0x1401A2794 (NvmeDumpStorageGetDumpInfoIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     NvmeDumpCreateDumpDiskData @ 0x1401A1D20 (NvmeDumpCreateDumpDiskData.c)
 *     NvmeNativeDumpFreeNvmeDumpDiskData @ 0x1401A220C (NvmeNativeDumpFreeNvmeDumpDiskData.c)
 *     NvmeNativeDumpFreeDumpDiskInfo @ 0x1401A225C (NvmeNativeDumpFreeDumpDiskInfo.c)
 */

__int64 __fastcall NvmeDumpCreateDumpDiskInfo(__int64 a1, __int64 *a2)
{
  __int64 v2; // r9
  __int64 Pool; // rax
  __int64 v6; // rbx
  int v7; // edi
  _QWORD *v8; // rax
  __int64 v9; // rcx
  int v11; // [rsp+40h] [rbp+20h] BYREF
  __int64 v12; // [rsp+48h] [rbp+28h] BYREF
  __int64 v13; // [rsp+50h] [rbp+30h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  *a2 = 0LL;
  v12 = 0LL;
  v11 = 0;
  Pool = RaidAllocatePool(64LL, 72LL, 1145266514LL, v2);
  v13 = Pool;
  v6 = Pool;
  if ( Pool )
  {
    v8 = (_QWORD *)(Pool + 8);
    v8[1] = v8;
    *v8 = v8;
    *(_DWORD *)v6 = 72;
    *(_OWORD *)(v6 + 24) = *(_OWORD *)(a1 + 160);
    *(_DWORD *)(v6 + 40) = 0;
    v7 = NvmeDumpCreateDumpDiskData(a1, &v12, &v11);
    if ( v7 < 0 )
    {
      v9 = v12;
    }
    else
    {
      *(_DWORD *)(v6 + 44) = v11;
      *(_QWORD *)(v6 + 48) = v12;
      v9 = 0LL;
      *a2 = v6;
      v6 = 0LL;
      v12 = 0LL;
      v13 = 0LL;
    }
    if ( v9 )
      NvmeNativeDumpFreeNvmeDumpDiskData(&v12);
    if ( v6 )
      NvmeNativeDumpFreeDumpDiskInfo(&v13);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v7;
}
