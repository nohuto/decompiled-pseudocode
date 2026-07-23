/*
 * XREFs of SmStoreHashCompressedData @ 0x1405269F8
 * Callers:
 *     ?StDmSinglePageCopy@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD2PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x140391FE0 (-StDmSinglePageCopy@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD2PEAU_ST_PAGE_LOCATIO.c)
 *     ?StDmpHashBytes@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADKPEAK@Z @ 0x1405269BC (-StDmpHashBytes@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADKPEAK@Z.c)
 * Callees:
 *     rapidhash_internal @ 0x14024D090 (rapidhash_internal.c)
 */

__int64 __fastcall SmStoreHashCompressedData(__int64 a1, unsigned __int8 *a2, unsigned int a3, __int64 *a4)
{
  unsigned int v4; // edi
  int v8; // edx
  __int64 v9; // rax
  unsigned int v10; // r13d
  unsigned int v11; // ecx
  __int64 v12; // rbx
  unsigned __int8 *v13; // r9
  unsigned int v14; // esi
  unsigned int i; // ebp
  unsigned int v16; // r14d
  unsigned __int8 *v18; // [rsp+50h] [rbp+8h]

  v4 = 0;
  v8 = *(_DWORD *)(a1 + 2176);
  v9 = 0LL;
  if ( !v8 || a3 == 4096 )
  {
    v9 = rapidhash_internal(a2, a3, 0LL);
  }
  else
  {
    v10 = (v8 == 2) + 1;
    v11 = v8 == 2;
    v12 = 2 * v11;
    v13 = &a2[v12];
    v18 = &a2[v12];
    if ( (_DWORD)v12 )
    {
      v9 = rapidhash_internal(a2, 2 * v11, 0LL);
      v13 = &a2[v12];
      v11 = v10 - 1;
    }
    v14 = a3 - v12;
    for ( i = 0; i < v10; ++i )
    {
      if ( i == v11 )
        v16 = v14;
      else
        v16 = *(unsigned __int16 *)&a2[2 * i];
      if ( !v14 || v16 > v14 )
        return (unsigned int)-1073741566;
      v9 = rapidhash_internal(v13, v16, v9);
      v11 = v10 - 1;
      v13 = &v18[v16];
      v14 -= v16;
      v18 = v13;
    }
  }
  *a4 = v9;
  return v4;
}
