/*
 * XREFs of ?StGetStatsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z @ 0x140357EBC
 * Callers:
 *     ?SmStGetStoreStats@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z @ 0x140357EA4 (-SmStGetStoreStats@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z.c)
 *     ?StGetStats@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140642168 (-StGetStats@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x140358310 (RtlNumberOfSetBits.c)
 *     ?StDmGetStatsBitmap@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAEPEA_K@Z @ 0x140641974 (-StDmGetStatsBitmap@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAEPEA_K@Z.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StGetStatsWorker(__int64 a1, int a2, __int64 a3, unsigned int *a4)
{
  unsigned int v4; // r12d
  unsigned int v9; // esi
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  unsigned int v13; // edx
  int v14; // eax
  ULONG v15; // eax
  __int64 v16; // r8
  __int64 v17; // rdx
  _DWORD *v18; // rcx
  __int64 result; // rax
  _WORD *v20; // rcx
  _WORD *v21; // rdx
  _WORD *v22; // r9
  int v23; // edx
  unsigned int v24; // eax
  unsigned __int64 v25; // rdi
  unsigned int v26; // edx
  __int64 v27; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  v27 = 0LL;
  if ( a2 >= 4 )
    return 3221225485LL;
  if ( a2 )
  {
    switch ( a2 )
    {
      case 1:
        v9 = 1536;
        break;
      case 2:
        v9 = ((a3 + 1537) & 0xFFFFFFFE) + 4 * *(_DWORD *)(a1 + 12) - a3;
        break;
      case 3:
        v23 = *(_DWORD *)(a1 + 12);
        v24 = *(_DWORD *)(a1 + 864) + 1;
        if ( v24 > 0x200 )
          v24 = 512;
        v4 = v23 * ((v24 + 7) >> 3);
        v9 = v4 + ((((a3 + 1537) & 0xFFFFFFFE) + 4 * v23 + 7) & 0xFFFFFFF8) - a3 + 12;
        break;
      default:
        v9 = -1;
        break;
    }
  }
  else
  {
    v9 = 188;
  }
  if ( *a4 < v9 )
  {
    result = 3221225507LL;
    goto LABEL_9;
  }
  *(_BYTE *)a3 = 11;
  v10 = *(_DWORD *)a3 ^ ((unsigned __int16)*(_DWORD *)a3 ^ (unsigned __int16)((_WORD)a2 << 8)) & 0xF00;
  *(_DWORD *)a3 = v10;
  v11 = v10 ^ ((unsigned __int16)v10 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)a1 << 12)) & 0xF000;
  *(_DWORD *)a3 = v11;
  v12 = v11 ^ (v11 ^ (*(_DWORD *)a1 << 8)) & 0x10000;
  *(_DWORD *)a3 = v12;
  v13 = (v12 & 0xFFFDFFFF ^ ((*(_DWORD *)a1 & 0x400) << 7)) & 0xC003FFFF;
  *(_DWORD *)a3 = v13;
  v14 = v13 ^ (*(_DWORD *)(a1 + 840) << 13);
  *(_DWORD *)(a3 + 4) = v9;
  *(_DWORD *)a3 = v13 ^ v14 & 0x40000000;
  *(_WORD *)(a3 + 8) = *(_WORD *)(a1 + 2176);
  *(_DWORD *)(a3 + 12) = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a3 + 16) = *(_DWORD *)(a1 + 912);
  *(_DWORD *)(a3 + 20) = *(_DWORD *)(a1 + 12);
  *(_DWORD *)(a3 + 24) = 16;
  memset_0((void *)(a3 + 28), 0, 0x50uLL);
  *(_DWORD *)(a3 + 28) = *(_DWORD *)(a1 + 912);
  *(_DWORD *)(a3 + 32) = *(_QWORD *)(a1 + 72);
  *(_DWORD *)(a3 + 36) = *(_QWORD *)(a1 + 136);
  v15 = RtlNumberOfSetBits((PRTL_BITMAP)(a1 + 896));
  v16 = 8LL;
  *(_DWORD *)(a3 + 40) = *(_DWORD *)(a1 + 896) - v15;
  v17 = a1 + 64 - (a3 + 28);
  v18 = (_DWORD *)(a3 + 44);
  do
  {
    *v18 = *(_DWORD *)((char *)v18 + v17 + 1976);
    v18[1] = *(_DWORD *)((char *)v18 + v17 + 1980);
    v18 += 2;
    --v16;
  }
  while ( v16 );
  if ( (unsigned int)a2 <= 1 )
    goto LABEL_8;
  v20 = *(_WORD **)(a1 + 48);
  v21 = (_WORD *)((a3 + 1537) & 0xFFFFFFFFFFFFFFFEuLL);
  v22 = &v20[*(unsigned int *)(a1 + 12)];
  while ( v20 < v22 )
  {
    *v21 = *v20 & 0x1FFF;
    v21 += 2;
    *((_BYTE *)v21 - 2) = *v20++ >> 13;
  }
  if ( a2 == 2 )
  {
LABEL_8:
    result = 0LL;
LABEL_9:
    *a4 = v9;
    return result;
  }
  v25 = (((a3 + 1537) & 0xFFFFFFFFFFFFFFFEuLL) + 4LL * *(unsigned int *)(a3 + 20) + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  memset_0((void *)(v25 + 12), 0, v4);
  v26 = *(_DWORD *)(a1 + 8) >> 9;
  if ( v26 <= 0x10 )
    v26 = 16;
  *(_DWORD *)(v25 + 8) = v26;
  result = ST_STORE<SM_TRAITS>::StDmGetStatsBitmap(a1 + 64, v26 >> 4, v25 + 12, &v27);
  if ( (int)result >= 0 )
  {
    *(_QWORD *)v25 = v27;
    goto LABEL_8;
  }
  return result;
}
