/*
 * XREFs of ?StDmPageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14020BD14
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14020C690 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x140210F70 (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_W.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14035F0D0 (MmMapLockedPagesSpecifyCache.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmPageAdd(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v5; // xmm0_8
  bool v6; // zf
  PVOID v7; // r8
  int v8; // edx
  unsigned int v9; // eax
  unsigned int v10; // ebx
  int v11; // esi
  int v12; // ecx
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // r8d
  __int128 v17; // [rsp+30h] [rbp-20h] BYREF
  __int64 v18; // [rsp+40h] [rbp-10h]
  unsigned int v19; // [rsp+78h] [rbp+28h] BYREF

  v2 = *(_QWORD *)(a2 + 16);
  v5 = *(_QWORD *)(a2 + 24);
  v6 = (*(_BYTE *)(v2 + 10) & 5) == 0;
  v17 = *(_OWORD *)(a2 + 8);
  v18 = v5;
  if ( v6 )
    v7 = MmMapLockedPagesSpecifyCache((PMDL)v2, 0, MmCached, 0LL, 0, 0x40000010u);
  else
    v7 = *(PVOID *)(v2 + 24);
  v8 = v17;
  if ( !v7 )
  {
    v15 = -1073741670;
    goto LABEL_18;
  }
  v9 = *(_DWORD *)(v2 + 40);
  if ( (((unsigned int)v17 >> 30) & 1) != 0 )
    v10 = 1;
  else
    v10 = v9 >> 12;
  v11 = (((unsigned int)v17 >> 30) & 1) != 0 ? v9 : 0;
  if ( (*(_BYTE *)(a1 + 2062) & 1) != 0 )
  {
    v8 = (8 * v10) | v17 & 0xC0000007;
LABEL_17:
    v15 = 0;
    goto LABEL_18;
  }
  for ( *((_QWORD *)&v17 + 1) = v7; ; *((_QWORD *)&v17 + 1) += 4096LL )
  {
    if ( (v8 & 0x40000000) != 0 )
    {
      v12 = 0;
      if ( v11 != 4096 )
        v12 = *(_DWORD *)(a1 + 816);
      v13 = (unsigned int)(v12 + v11 + 15) >> 4;
    }
    else
    {
      v13 = 1;
    }
    v19 = v13;
    do
    {
      v14 = ST_STORE<SM_TRAITS>::StDmpSinglePageAdd(a1, &v17, a2, &v19);
      v15 = v14;
    }
    while ( v14 == -1073741267 );
    if ( v14 )
      break;
    LODWORD(v17) = v17 & 0xC0000007 | ((v17 & 0xFFFFFFF8) + 8) & 0x3FFFFFF8;
    v8 = v17;
    if ( (((unsigned int)v17 >> 3) & 0x7FFFFFF) >= v10 )
      goto LABEL_16;
    LODWORD(v18) = v18 + 1;
  }
  v8 = v17;
LABEL_16:
  if ( (v8 & 0x3FFFFFF8) != 0 )
    goto LABEL_17;
LABEL_18:
  *(_DWORD *)(a2 + 8) = v8 & 0x3FFFFFF8 | *(_DWORD *)(a2 + 8) & 0xC0000007;
  return v15;
}
