/*
 * XREFs of NvmeDumpCreateDumpDiskData @ 0x1401A1D20
 * Callers:
 *     NvmeDumpCreateDumpDiskInfo @ 0x1401A1DEC (NvmeDumpCreateDumpDiskInfo.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 */

__int64 __fastcall NvmeDumpCreateDumpDiskData(__int64 a1, _QWORD *a2, _DWORD *a3)
{
  unsigned int v3; // ebx
  bool v5; // cc
  _DWORD *Pool; // rax
  _DWORD *v9; // rdi
  void *v10; // rcx
  char v11; // cl

  v3 = 0;
  v5 = *(_DWORD *)(a1 + 56) <= 0xFFu;
  *a2 = 0LL;
  *a3 = 0;
  if ( v5 )
  {
    Pool = (_DWORD *)RaidAllocatePool(64LL, 96LL, 1145266514LL, *(_QWORD *)(a1 + 8));
    v9 = Pool;
    if ( Pool )
    {
      *Pool = 1145917490;
      Pool[1] = 4098;
      Pool[2] = 72;
      v10 = *(void **)(a1 + 8);
      *a3 = 96;
      ObfReferenceObject(v10);
      *((_QWORD *)v9 + 2) = a1;
      *((_WORD *)v9 + 24) = 0;
      v11 = *(_BYTE *)(a1 + 56) - 1;
      *a2 = v9;
      *((_BYTE *)v9 + 50) = v11;
      *a3 = 96;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741808;
  }
  return v3;
}
