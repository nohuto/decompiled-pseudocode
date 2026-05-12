/*
 * XREFs of NvmeNativeDumpCreateNvmeDumpDiskData @ 0x1401A349C
 * Callers:
 *     NvmeNativeDumpCreateDumpDiskInfo @ 0x1401A3180 (NvmeNativeDumpCreateDumpDiskInfo.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 */

__int64 __fastcall NvmeNativeDumpCreateNvmeDumpDiskData(__int64 a1, _QWORD *a2, _DWORD *a3)
{
  __int64 v3; // r9
  unsigned int v4; // edi
  _DWORD *Pool; // rax
  _DWORD *v9; // rbx

  v3 = *(_QWORD *)(a1 + 8);
  v4 = 0;
  *a2 = 0LL;
  *a3 = 0;
  Pool = (_DWORD *)RaidAllocatePool(64LL, 80LL, 1145266514LL, v3);
  v9 = Pool;
  if ( Pool )
  {
    *Pool = 1145917490;
    Pool[1] = 8194;
    Pool[2] = 80;
    Pool[16] = *(_DWORD *)(a1 + 56);
    ObfReferenceObject(*(PVOID *)(a1 + 8));
    *((_QWORD *)v9 + 2) = a1;
    *a2 = v9;
    *a3 = 80;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v4;
}
