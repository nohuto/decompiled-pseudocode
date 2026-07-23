/*
 * XREFs of MiBuildMappedCluster @ 0x14042A81C
 * Callers:
 *     MiGatherMappedPages @ 0x140490828 (MiGatherMappedPages.c)
 * Callees:
 *     MiMapPageInHyperSpaceWorker @ 0x140287440 (MiMapPageInHyperSpaceWorker.c)
 *     MiBuildMappedClusterComputeBounds @ 0x14042A8EC (MiBuildMappedClusterComputeBounds.c)
 *     MiBuildMappedClusterFillMdl @ 0x14042AA84 (MiBuildMappedClusterFillMdl.c)
 *     MiBuildMappedClusterInitialize @ 0x14042ADAC (MiBuildMappedClusterInitialize.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiBuildMappedCluster(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 result; // rax
  _BYTE v9[8]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v10; // [rsp+28h] [rbp-58h]
  unsigned __int64 v11; // [rsp+30h] [rbp-50h]
  unsigned __int8 v12[8]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v13; // [rsp+40h] [rbp-40h]
  __int64 v14; // [rsp+50h] [rbp-30h]
  __int64 v15; // [rsp+68h] [rbp-18h]
  unsigned __int64 v16; // [rsp+70h] [rbp-10h]

  memset_0(v9, 0, 0x60uLL);
  MiBuildMappedClusterInitialize(v9, a1, a2, a3);
  MiBuildMappedClusterComputeBounds(v9);
  v6 = v10;
  MiBuildMappedClusterFillMdl(v9);
  if ( !*(_DWORD *)(v6 + 40) )
  {
    v15 = v14;
    if ( v16 > v14 + 120 )
      v16 = v14 + 120;
    v11 = MiMapPageInHyperSpaceWorker(v13, v12, 0x80000000);
    MiBuildMappedClusterFillMdl(v9);
  }
  v7 = *(unsigned int *)(v6 + 40);
  result = v6;
  *(_QWORD *)v6 = 0LL;
  *(_QWORD *)(v6 + 32) = 0LL;
  *(_QWORD *)(v6 + 40) = (unsigned int)v7;
  *(_WORD *)(v6 + 8) = 8 * (((unsigned __int64)(v7 + 4095) >> 12) + 6);
  *(_WORD *)(v6 + 10) = 2;
  return result;
}
