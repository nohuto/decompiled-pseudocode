/*
 * XREFs of NvmeAdapterFabricControllerAddDiscoveryEntry @ 0x1400E83C4
 * Callers:
 *     NvmeAdapterPerformFabricControllerDiscovery @ 0x1400EBB5C (NvmeAdapterPerformFabricControllerDiscovery.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 */

__int64 __fastcall NvmeAdapterFabricControllerAddDiscoveryEntry(_QWORD *a1, _OWORD *a2)
{
  unsigned int v4; // esi
  _QWORD *Pool; // rax
  __int64 v6; // rdx
  _OWORD *v7; // rcx
  __int128 v8; // xmm1
  _QWORD *v9; // rdx

  v4 = 0;
  Pool = (_QWORD *)RaidAllocatePool(64LL, 1040LL, 1380147538LL, *(_QWORD *)(a1[16] + 8LL));
  if ( Pool )
  {
    v6 = 8LL;
    v7 = Pool + 2;
    do
    {
      *v7 = *a2;
      v7[1] = a2[1];
      v7[2] = a2[2];
      v7[3] = a2[3];
      v7[4] = a2[4];
      v7[5] = a2[5];
      v7[6] = a2[6];
      v7 += 8;
      v8 = a2[7];
      a2 += 8;
      *(v7 - 1) = v8;
      --v6;
    }
    while ( v6 );
    v9 = (_QWORD *)a1[202];
    if ( (_QWORD *)*v9 != a1 + 201 )
      __fastfail(3u);
    *Pool = a1 + 201;
    Pool[1] = v9;
    *v9 = Pool;
    a1[202] = Pool;
    ++a1[200];
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v4;
}
