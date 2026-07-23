/*
 * XREFs of ?SmCompressManagerUpdateTopology@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@@Z @ 0x140640690
 * Callers:
 *     ?SmCompressManagerRefreshTopology@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140640330 (-SmCompressManagerRefreshTopology@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmCompressManagerStart@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_MANAGER@1@W4_ST_COMPRESSION_FORMAT@@@Z @ 0x140640444 (-SmCompressManagerStart@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_MANAGER@1@W4_ST_COMPR.c)
 * Callees:
 *     ?RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140253210 (-RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     RtlCountSetBitsAffinityEx @ 0x140253280 (RtlCountSetBitsAffinityEx.c)
 *     RtlAndAffinityEx @ 0x140253CF4 (RtlAndAffinityEx.c)
 *     RtlOrAffinityEx @ 0x14025C158 (RtlOrAffinityEx.c)
 *     MmGetNextNode @ 0x140456D80 (MmGetNextNode.c)
 *     KeQueryNodeActiveAffinityEx @ 0x140470380 (KeQueryNodeActiveAffinityEx.c)
 *     PsQueryProcessAvailableCpus @ 0x140535050 (PsQueryProcessAvailableCpus.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

unsigned int __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmCompressManagerUpdateTopology(__int64 a1)
{
  unsigned __int16 *v1; // rbp
  unsigned int v3; // r12d
  unsigned int result; // eax
  unsigned int v5; // esi
  __int64 v6; // rdi
  __int64 v7; // rbx
  int v8; // eax
  __int64 v9; // r14
  unsigned int i; // ebx
  __int64 v11; // rbp
  __int64 v12; // rsi
  unsigned int NextNode; // eax
  __int64 v14; // rdi
  int v15; // [rsp+50h] [rbp+8h] BYREF

  v1 = (unsigned __int16 *)(a1 + 48);
  v3 = *(_DWORD *)(*(_QWORD *)a1 + 2124LL);
  memset_0((void *)(a1 + 56), 0, 8LL * *(unsigned __int16 *)(a1 + 48));
  *v1 = 1;
  PsQueryProcessAvailableCpus(*(_QWORD *)(*(_QWORD *)a1 + 2280LL), (__int64)v1, 0LL, a1 + 312);
  *(_DWORD *)(a1 + 592) = 0;
  result = (unsigned int)memset_0((void *)(a1 + 336), 0, 8LL * *(unsigned __int16 *)(a1 + 328));
  v5 = 0;
  *(_WORD *)(a1 + 328) = 1;
  if ( v3 )
  {
    v6 = 0LL;
    do
    {
      v7 = v6 + *(_QWORD *)(a1 + 24);
      KeQueryNodeActiveAffinityEx(v5, (unsigned __int16 *)v7, 0LL);
      RtlAndAffinityEx((unsigned __int16 *)v7, v1, v7);
      v8 = RtlCountSetBitsAffinityEx((unsigned __int16 *)v7);
      *(_DWORD *)(v7 + 264) = v8;
      *(_DWORD *)(a1 + 592) += v8;
      result = RtlOrAffinityEx((struct _KAFFINITY_EX *)(a1 + 328), (struct _KAFFINITY_EX *)v7, a1 + 328);
      ++v5;
      v6 += 272LL;
    }
    while ( v5 < v3 );
    v9 = 0LL;
    for ( i = 0; i < v3; ++i )
    {
      v11 = *(_QWORD *)(a1 + 24);
      v12 = v9 + v11;
      if ( !*(_DWORD *)(v9 + v11 + 264) )
      {
        v15 = 0;
        do
        {
          NextNode = MmGetNextNode(i, &v15);
          v14 = v11 + 272LL * NextNode;
        }
        while ( !*(_DWORD *)(v14 + 264) );
        RtlpCopyAffinityEx(
          (struct _KAFFINITY_EX *)(v9 + v11),
          *(_WORD *)(v12 + 2),
          (struct _KAFFINITY_EX *)(v11 + 272LL * NextNode));
        result = *(_DWORD *)(v14 + 264);
        *(_DWORD *)(v12 + 264) = result;
      }
      v9 += 272LL;
    }
  }
  return result;
}
