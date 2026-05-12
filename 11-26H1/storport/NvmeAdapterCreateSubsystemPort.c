/*
 * XREFs of NvmeAdapterCreateSubsystemPort @ 0x1400D4510
 * Callers:
 *     NvmeAdapterAddSubsystemPortMiniport @ 0x1400D2D7C (NvmeAdapterAddSubsystemPortMiniport.c)
 *     NvmeAdapterCreateAddSubsystemPort @ 0x1400D41C0 (NvmeAdapterCreateAddSubsystemPort.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall NvmeAdapterCreateSubsystemPort(
        __int64 a1,
        _OWORD *a2,
        _OWORD *a3,
        _OWORD *a4,
        __int16 a5,
        unsigned __int8 a6,
        unsigned __int8 a7,
        unsigned __int8 a8,
        unsigned __int8 a9,
        _QWORD *a10)
{
  unsigned int v14; // ebp
  _DWORD *Pool; // rax
  _DWORD *v16; // rbx
  PEX_RUNDOWN_REF_CACHE_AWARE CacheAwareRundownProtection; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  _OWORD *v20; // rax
  __int128 v21; // xmm1
  _OWORD *v22; // rax
  __int128 v23; // xmm1

  v14 = 0;
  Pool = (_DWORD *)RaidAllocatePool(64LL, 736LL, 1179541842LL, *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL));
  v16 = Pool;
  if ( !Pool )
    return (unsigned int)-1073741801;
  memset_0(Pool, 0, 0x2E0uLL);
  CacheAwareRundownProtection = ExAllocateCacheAwareRundownProtection(NonPagedPoolNx, 0x464E6152u);
  *((_QWORD *)v16 + 5) = CacheAwareRundownProtection;
  if ( !CacheAwareRundownProtection )
  {
    ExFreePoolWithTag(v16, 0x464E6152u);
    return (unsigned int)-1073741801;
  }
  *((_QWORD *)v16 + 2) = v16 + 2;
  *((_QWORD *)v16 + 1) = v16 + 2;
  *((_WORD *)v16 + 2) = a5;
  *v16 = 1314280272;
  *((_QWORD *)v16 + 3) = a1;
  *((_WORD *)v16 + 28) = -1;
  v18 = 2LL;
  v19 = 2LL;
  *((_QWORD *)v16 + 4) = (8LL * a9) ^ (*((_QWORD *)v16 + 4) ^ a6) & 0xFFFFFFFFFFFFFFF0uLL ^ (a6 ^ (2LL * a7)) & 0xFFFFFFFFFFFFFFF1uLL ^ ((2LL * a7) ^ (4LL * a8)) & 0xFFFFFFFFFFFFFFF3uLL ^ ((4LL * a8) ^ (8LL * a9)) & 0xFFFFFFFFFFFFFFF7uLL;
  v20 = v16 + 15;
  do
  {
    *v20 = *a2;
    v20[1] = a2[1];
    v20[2] = a2[2];
    v20[3] = a2[3];
    v20[4] = a2[4];
    v20[5] = a2[5];
    v20[6] = a2[6];
    v20 += 8;
    v21 = a2[7];
    a2 += 8;
    *(v20 - 1) = v21;
    --v19;
  }
  while ( v19 );
  v22 = v16 + 79;
  do
  {
    *v22 = *a3;
    v22[1] = a3[1];
    v22[2] = a3[2];
    v22[3] = a3[3];
    v22[4] = a3[4];
    v22[5] = a3[5];
    v22[6] = a3[6];
    v22 += 8;
    v23 = a3[7];
    a3 += 8;
    *(v22 - 1) = v23;
    --v18;
  }
  while ( v18 );
  *(_OWORD *)(v16 + 143) = *a4;
  *(_OWORD *)(v16 + 147) = a4[1];
  *((_QWORD *)v16 + 77) = v16 + 152;
  *((_QWORD *)v16 + 76) = v16 + 152;
  ExInitializeResourceLite((PERESOURCE)(v16 + 158));
  *a10 = v16;
  return v14;
}
