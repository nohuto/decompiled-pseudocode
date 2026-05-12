/*
 * XREFs of RaidUnitCreateDumpInfo @ 0x1401B9A8C
 * Callers:
 *     RaUnitStorageGetDumpInfoIoctl @ 0x14018C2D8 (RaUnitStorageGetDumpInfoIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     RaidUnitFreeDumpInfo @ 0x1400A7134 (RaidUnitFreeDumpInfo.c)
 *     RaidUnitCreateDumpData @ 0x140183460 (RaidUnitCreateDumpData.c)
 */

__int64 __fastcall RaidUnitCreateDumpInfo(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // r9
  _QWORD *Pool; // rax
  _QWORD *v7; // rbx
  _QWORD *v8; // rax
  int v9; // edi
  PVOID v10; // rcx
  PVOID P; // [rsp+40h] [rbp+8h] BYREF
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF
  PVOID v14; // [rsp+50h] [rbp+18h] BYREF

  v13 = a2;
  v3 = *(_QWORD *)(a1 + 8);
  *a3 = 0LL;
  P = 0LL;
  LODWORD(v13) = 0;
  Pool = (_QWORD *)RaidAllocatePool(64LL, 72LL, 1145266514LL, v3);
  v14 = Pool;
  v7 = Pool;
  if ( Pool )
  {
    v8 = Pool + 1;
    v8[1] = v8;
    *v8 = v8;
    *(_DWORD *)v7 = 72;
    *(_OWORD *)(v7 + 3) = *(_OWORD *)(a1 + 2104);
    v9 = RaidUnitCreateDumpData(a1, &P, &v13);
    if ( v9 >= 0 )
    {
      *((_DWORD *)v7 + 11) = v13;
      v7[6] = P;
      v10 = 0LL;
      *a3 = v7;
      v7 = 0LL;
      v14 = 0LL;
    }
    else
    {
      v10 = P;
    }
    if ( v10 )
      ExFreePoolWithTag(v10, 0x44436152u);
    if ( v7 )
      RaidUnitFreeDumpInfo(&v14);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v9;
}
