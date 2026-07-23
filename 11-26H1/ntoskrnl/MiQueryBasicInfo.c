/*
 * XREFs of MiQueryBasicInfo @ 0x140923490
 * Callers:
 *     MmQueryVirtualMemory @ 0x1409243E0 (MmQueryVirtualMemory.c)
 * Callees:
 *     MiSetBasicInfoPartitionId @ 0x1404B1A3C (MiSetBasicInfoPartitionId.c)
 *     MiMemoryClassBasicInfo @ 0x140923530 (MiMemoryClassBasicInfo.c)
 *     MiQueryReturnResults @ 0x140923994 (MiQueryReturnResults.c)
 */

__int64 __fastcall MiQueryBasicInfo(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  unsigned __int64 v4; // rax
  unsigned int v5; // edx
  __int128 v7; // [rsp+20h] [rbp-38h] BYREF
  __int128 v8; // [rsp+30h] [rbp-28h]
  __int128 v9; // [rsp+40h] [rbp-18h]

  v2 = *(unsigned int *)a1;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  if ( (unsigned int)MiMemoryClassBasicInfo(v2) )
  {
    v4 = a1[5] & 0xFFFFFFFFFFFFF000uLL;
    LODWORD(v9) = 0x10000;
    *(_QWORD *)&v7 = v4;
    *((_QWORD *)&v8 + 1) = v3 - v4;
    *(_QWORD *)((char *)&v9 + 4) = 1LL;
    MiSetBasicInfoPartitionId((__int64)&v7, 0);
    a1[7] = 48LL;
    a1[8] = &v7;
  }
  else
  {
    a1[3] = 0LL;
  }
  MiQueryReturnResults(a1);
  if ( !(unsigned int)MiMemoryClassBasicInfo(*(unsigned int *)a1) )
    return (unsigned int)-1073741503;
  return v5;
}
