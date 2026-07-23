/*
 * XREFs of SmHpChunkHeapInitialize @ 0x140492670
 * Callers:
 *     ?StDmCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1403E9ED4 (-StDmCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StDmStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@K@Z @ 0x1403EDA98 (-StDmStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@K@Z.c)
 *     ?StDmInitialize@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z @ 0x140492400 (-StDmInitialize@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

unsigned int __fastcall SmHpChunkHeapInitialize(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  int v7; // eax
  int v8; // r9d
  unsigned int v9; // eax
  int v10; // edx
  int v11; // ecx
  unsigned int v12; // r8d
  unsigned int v13; // ecx
  unsigned int result; // eax

  memset_0((void *)a1, 0, 0x238uLL);
  *(_QWORD *)(a1 + 272) = *(_QWORD *)a2;
  v4 = (_QWORD *)(a1 + 288);
  v5 = a1 + 288;
  *(_DWORD *)(a1 + 256) = 1;
  v6 = 16LL;
  do
  {
    v4[1] = v5;
    *v4 = v5;
    v5 += 16LL;
    v4 += 2;
    --v6;
  }
  while ( v6 );
  v7 = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a1 + 544) = -1;
  v8 = -v7 & (v7 + 23);
  v9 = (unsigned int)(4096 - v8) / *(_DWORD *)a2;
  *(_DWORD *)(a1 + 548) = v9;
  _BitScanReverse(&v9, v9);
  *(_DWORD *)(a1 + 264) = v9;
  v10 = *(_DWORD *)(a1 + 548);
  if ( !v10 || ((v10 - 1) & v10) != 0 )
    ++*(_DWORD *)(a1 + 264);
  v11 = *(_DWORD *)(a1 + 264);
  v12 = 0xFFFFFFFF >> v11;
  *(_DWORD *)(a1 + 268) = (1 << v11) - 1;
  v13 = (unsigned int)(v10 + 15) >> 4;
  _BitScanReverse(&result, v13);
  *(_DWORD *)(a1 + 260) = v12;
  *(_DWORD *)(a1 + 280) = v8;
  *(_DWORD *)(a1 + 556) = v10;
  *(_DWORD *)(a1 + 552) = result;
  if ( !v13 || (result = v13 - 1, ((v13 - 1) & v13) != 0) )
    ++*(_DWORD *)(a1 + 552);
  return result;
}
