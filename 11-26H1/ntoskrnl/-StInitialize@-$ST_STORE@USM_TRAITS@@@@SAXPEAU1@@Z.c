/*
 * XREFs of ?StInitialize@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140492348
 * Callers:
 *     ?SmStInitialize@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140492234 (-SmStInitialize@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 * Callees:
 *     ?StDmInitialize@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z @ 0x140492400 (-StDmInitialize@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z.c)
 *     InitializeSListHead @ 0x140492D50 (InitializeSListHead.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StInitialize(__int64 a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rax
  unsigned int v4; // eax
  unsigned int v5; // eax
  __int64 result; // rax

  memset_0((void *)(a1 + 1), 0, 0x99FuLL);
  *(_BYTE *)a1 = 2;
  ST_STORE<SM_TRAITS>::StDmInitialize(a1 + 64);
  v2 = (_QWORD *)(a1 + 2216);
  memset_0((void *)(a1 + 2216), 0, 0xB8uLL);
  v3 = (_QWORD *)(a1 + 2336);
  while ( v2 < v3 )
  {
    *v2 = -1LL;
    v2[1] = -1LL;
    v2 += 3;
  }
  *v3 = -1LL;
  v4 = *(_DWORD *)(a1 + 2360) & 0xFFFFFFFE;
  *(_DWORD *)(a1 + 2368) = 3;
  *(_DWORD *)(a1 + 2360) = v4 | 6;
  InitializeSListHead((PSLIST_HEADER)(a1 + 2192));
  v5 = *(_DWORD *)(a1 + 2400) & 0xFFFFFFFE;
  *(_DWORD *)(a1 + 2408) = 4;
  result = v5 | 6;
  *(_DWORD *)(a1 + 2400) = result;
  return result;
}
