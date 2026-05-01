/*
 * XREFs of ?RmpCpuSetManagerPopulateCpuSetIdsFromAllocation@@YAXPEAU_RM_CPU_SET_ALLOCATION@@PEAK1@Z @ 0x180085C8C
 * Callers:
 *     ?RmpCpuSetManagerPublishAllocationState@@YAJPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x180086080 (-RmpCpuSetManagerPublishAllocationState@@YAJPEAU_RM_CPU_SET_ALLOCATION@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpCpuSetManagerPopulateCpuSetIdsFromAllocation(
        struct _RM_CPU_SET_ALLOCATION *a1,
        unsigned int *a2,
        unsigned int *a3)
{
  _OWORD *v3; // rax
  _OWORD *v5; // r9
  __int64 v7; // r10
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int64 v15; // rbx
  unsigned __int64 *v16; // r8
  unsigned int i; // r9d
  unsigned __int64 v18; // r10
  unsigned __int64 v19; // rdx
  unsigned int v20; // eax
  _BYTE v21[280]; // [rsp+10h] [rbp-118h] BYREF

  v3 = (_OWORD *)((char *)a1 + 104);
  v5 = v21;
  v7 = 2LL;
  do
  {
    v8 = v3[1];
    *v5 = *v3;
    v9 = v3[2];
    v5[1] = v8;
    v10 = v3[3];
    v5[2] = v9;
    v11 = v3[4];
    v5[3] = v10;
    v12 = v3[5];
    v5[4] = v11;
    v13 = v3[6];
    v5[5] = v12;
    v14 = v3[7];
    v3 += 8;
    v5[6] = v13;
    v5 += 8;
    *(v5 - 1) = v14;
    --v7;
  }
  while ( v7 );
  v15 = 0LL;
  v16 = (unsigned __int64 *)v21;
  for ( i = 0; i < 0x20; ++i )
  {
    v18 = *v16;
    if ( *v16 )
    {
      do
      {
        _BitScanForward64(&v19, v18);
        v18 &= ~(1LL << v19);
        a3[v15] = v19 | (i << 16) | 0x100;
        v15 = (unsigned int)(v15 + 1);
      }
      while ( v18 );
      *v16 = 0LL;
    }
    v20 = *((_DWORD *)a1 + 90);
    if ( (_DWORD)v15 == v20 )
      break;
    ++v16;
  }
  *a2 = v20;
}
