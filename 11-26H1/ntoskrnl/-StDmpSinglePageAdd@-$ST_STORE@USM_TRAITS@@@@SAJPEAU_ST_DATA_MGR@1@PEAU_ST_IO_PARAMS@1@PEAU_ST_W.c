/*
 * XREFs of ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x140210F70
 * Callers:
 *     ?StDmPageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14020BD14 (-StDmPageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14020C608 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?StDmPageRecordUnprotect@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x14020D1B8 (-StDmPageRecordUnprotect@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z.c)
 *     SmHpChunkFree @ 0x140211300 (SmHpChunkFree.c)
 *     ?StDmpSinglePageInsert@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x140211560 (-StDmpSinglePageInsert@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_S.c)
 *     ?StDmCombineRegion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x140211C90 (-StDmCombineRegion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 *     rapidhash_internal @ 0x14024D090 (rapidhash_internal.c)
 *     SmHpChunkAlloc @ 0x14024FF10 (SmHpChunkAlloc.c)
 *     ?SmStReleaseStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14027EAF0 (-SmStReleaseStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?StDmCurrentRegionSet@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x14039547C (-StDmCurrentRegionSet@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StRegionFindCompact@?$ST_STORE@USM_TRAITS@@@@SAPEAT_ST_REGION_STATE@1@PEAU_ST_DATA_MGR@1@K@Z @ 0x140395650 (-StRegionFindCompact@-$ST_STORE@USM_TRAITS@@@@SAPEAT_ST_REGION_STATE@1@PEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StDmReuseCurrentRegion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_CURRENT_REGION@1@@Z @ 0x1403968F8 (-StDmReuseCurrentRegion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_CURRENT_REGION@1@.c)
 *     RtlCompressBuffer @ 0x140463C00 (RtlCompressBuffer.c)
 *     ?StDmpDummyPageRecordAllocate@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x1404D28FC (-StDmpDummyPageRecordAllocate@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StDmpHashBytes@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADKPEAK@Z @ 0x1405269BC (-StDmpHashBytes@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADKPEAK@Z.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmpSinglePageAdd(__int64 a1, _DWORD *a2, __int64 a3, unsigned int *a4)
{
  unsigned int v4; // esi
  _DWORD *v5; // r12
  __int64 v6; // r13
  __int64 v8; // rdi
  UCHAR *v9; // rbx
  int v10; // r13d
  int v11; // ecx
  __int64 v12; // r15
  ULONG v13; // esi
  unsigned int v14; // edx
  unsigned int v15; // ecx
  UCHAR *v16; // r14
  int v17; // eax
  __int64 v18; // r9
  __int64 v19; // rax
  _DWORD *v20; // rsi
  __int64 v21; // r8
  int v22; // edx
  int v23; // ebx
  __int64 Compact; // rax
  __int64 v26; // rax
  int v27; // eax
  int v28; // eax
  UCHAR *v29; // r12
  int v30; // r8d
  __int64 v31; // r12
  unsigned int v32; // eax
  char *v33; // rdi
  char *v34; // r14
  int v35; // r13d
  ULONG v36; // r12d
  unsigned int v37; // ebx
  int v38; // r14d
  ULONG v39; // r12d
  USHORT v40; // cx
  __int64 v41; // rax
  int v42; // eax
  unsigned int v43; // eax
  ULONG FinalCompressedSize; // [rsp+48h] [rbp-29h] BYREF
  unsigned int v45; // [rsp+4Ch] [rbp-25h]
  unsigned int v46; // [rsp+50h] [rbp-21h]
  unsigned int v47; // [rsp+54h] [rbp-1Dh]
  int v48; // [rsp+5Ch] [rbp-15h] BYREF
  int *v49; // [rsp+60h] [rbp-11h]
  __int64 v50; // [rsp+68h] [rbp-9h]
  UCHAR *v51; // [rsp+70h] [rbp-1h]
  void *v52; // [rsp+78h] [rbp+7h]
  unsigned int v57; // [rsp+F0h] [rbp+7Fh]

  v4 = *a2 & 7;
  FinalCompressedSize = 0;
  v5 = a2;
  v48 = 0;
  v6 = a1 + 16 * (v4 + 89LL);
  v8 = a1;
  if ( *(_DWORD *)v6 != -1 && *a4 + *(_DWORD *)(v6 + 4) <= *(_DWORD *)(a1 + 808)
    || (*(_DWORD *)(a1 + 776) & 0x100000) != 0
    && *(_DWORD *)v6 != -1
    && (int)ST_STORE<SM_TRAITS>::StDmCombineRegion() >= 0
    && (int)ST_STORE<SM_TRAITS>::StDmReuseCurrentRegion(v8, v6) >= 0 )
  {
LABEL_3:
    v9 = (UCHAR *)(*(_QWORD *)(v6 + 8) + (unsigned int)(16 * *(_DWORD *)(v6 + 4)));
    v10 = *(_DWORD *)(v6 + 4) | (*(_DWORD *)v6 << *(_DWORD *)(v8 + 804));
    SMKM_STORE<SM_TRAITS>::SmStReleaseStoreLockExclusive(*(_QWORD *)(v8 + 792));
    v11 = *v5;
    v12 = *((_QWORD *)v5 + 1);
    v49 = 0LL;
    v45 = 0;
    if ( (v11 & 0x40000000) != 0 )
    {
      v13 = *(_DWORD *)(*(_QWORD *)(a3 + 16) + 40LL);
      FinalCompressedSize = v13;
    }
    else
    {
      v28 = *(_DWORD *)(v8 + 776);
      if ( (v28 & 0x400) != 0 )
      {
        v13 = 4096;
        FinalCompressedSize = 4096;
      }
      else
      {
        if ( (v28 & 0x8000) != 0 )
        {
          memmove((void *)(*(_QWORD *)(v8 + 1960) + 4096LL), (const void *)v12, 0x1000uLL);
          v11 = *v5;
          v12 = *(_QWORD *)(v8 + 1960) + 4096LL;
        }
        v13 = 0;
        FinalCompressedSize = 0;
      }
    }
    v14 = *(_DWORD *)(v8 + 808) - (v10 & *(_DWORD *)(v8 + 800));
    v46 = v14;
    if ( (v11 & 0x40000000) != 0 )
    {
      v51 = v9;
      v15 = 0;
      v16 = v9;
      if ( v13 != 4096 )
        v15 = *(_DWORD *)(v8 + 816);
      if ( v15 )
      {
        v16 = &v9[v15];
        v49 = (int *)v9;
        v51 = v16;
      }
      v17 = *(_DWORD *)(v8 + 1360);
      v18 = 0LL;
      v50 = 0LL;
      if ( !v17 || v13 == 4096 )
      {
        if ( v16 )
          memmove(v16, (const void *)v12, v13);
        else
          rapidhash_internal(v12, v13, 0LL);
LABEL_13:
        if ( *(_QWORD *)(v8 + 760) || (v23 = ST_STORE<SM_TRAITS>::StDmpDummyPageRecordAllocate(v8), v23 >= 0) )
        {
          SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(*(_QWORD *)(v8 + 792));
          v19 = SmHpChunkAlloc(v8 + 192);
          v20 = (_DWORD *)v19;
          if ( v19 )
          {
            ST_STORE<SM_TRAITS>::StDmPageRecordUnprotect(v8, v19);
            memset_0(v20, 0, *(unsigned int *)(v8 + 464));
            *v20 = v10;
            v21 = FinalCompressedSize;
            if ( FinalCompressedSize < 0x1000 )
            {
              *((_WORD *)v20 + 2) = v20[1] & 0xF000 | FinalCompressedSize & 0xFFF;
              v21 = FinalCompressedSize;
            }
            if ( (*v5 & 0x40000000) != 0 )
            {
              v22 = *(_DWORD *)(a3 + 96);
            }
            else if ( (*(_DWORD *)(v8 + 776) & 0x200000) != 0 )
            {
              ST_STORE<SM_TRAITS>::StDmpHashBytes(v8, v16, v21, &v48);
              v22 = v48;
            }
            else
            {
              v22 = -1;
            }
            if ( (*(_DWORD *)(v8 + 776) & 0x100000) != 0 )
            {
              v20[2] = v22;
            }
            else if ( *(_DWORD *)(v8 + 816) && v49 )
            {
              *v49 = v22;
            }
            v23 = ST_STORE<SM_TRAITS>::StDmpSinglePageInsert(v8, v5, v20);
            if ( v23 >= 0 )
              return 0;
            else
              SmHpChunkFree(v8 + 192, v20);
          }
          else
          {
            return (unsigned int)-1073741670;
          }
          return (unsigned int)v23;
        }
LABEL_25:
        SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(*(_QWORD *)(v8 + 792));
        return (unsigned int)v23;
      }
      v30 = (v17 == 2) + 1;
      v57 = v30;
      v31 = (unsigned int)(2 * v30 - 2);
      v45 = (unsigned __int64)(4096 - (v12 & 0xFFF) - (unsigned int)v31) / (unsigned int)v30;
      if ( 2 * v30 != 2 )
      {
        if ( v16 )
        {
          memmove(v16, (const void *)v12, (unsigned int)v31);
          v18 = v50;
        }
        else
        {
          v18 = rapidhash_internal(v12, v31, 0LL);
        }
        v30 = v57;
        v13 -= v31;
      }
      v32 = 0;
      v52 = &v16[v31];
      v47 = 0;
      v33 = (char *)(v31 + v12);
      if ( v16 )
      {
        v34 = (char *)v52;
        v46 = v10;
        v35 = v30 - 1;
        do
        {
          v36 = v13;
          if ( v32 != v35 )
            v36 = *(unsigned __int16 *)v12;
          memmove(v34, v33, v36);
          v34 += v36;
          v33 += v45;
          v13 -= v36;
          v12 += 2LL;
          v32 = v47 + 1;
          v47 = v32;
        }
        while ( v32 < v57 );
        v8 = a1;
        v16 = v51;
        v10 = v46;
      }
      else
      {
        v37 = 0;
        v38 = v30 - 1;
        do
        {
          v39 = v13;
          if ( v37 != v38 )
            v39 = *(unsigned __int16 *)v12;
          v18 = rapidhash_internal(v33, v39, v18);
          v13 -= v39;
          ++v37;
          v33 += v45;
          v12 += 2LL;
        }
        while ( v37 < v57 );
        v8 = a1;
        v16 = v51;
      }
    }
    else
    {
      if ( v14 >= *(_DWORD *)(v8 + 812) )
        v29 = v9;
      else
        v29 = *(UCHAR **)(v8 + 1960);
      v16 = v9;
      v40 = word_140017648[*(int *)(v8 + 1360)];
      if ( !v13 )
      {
        v41 = *(unsigned int *)(v8 + 816);
        v45 = v41;
        if ( (_DWORD)v41 )
        {
          v49 = (int *)v9;
          v16 = &v9[v41];
          v29 += v41;
        }
        if ( RtlCompressBuffer(
               v40,
               (PUCHAR)v12,
               0x1000u,
               v29,
               0xFF0u,
               0x1000u,
               &FinalCompressedSize,
               *(PVOID *)(v8 + 888)) >= 0 )
        {
          v13 = FinalCompressedSize;
        }
        else
        {
          v13 = 4096;
          FinalCompressedSize = 4096;
        }
        v14 = v46;
      }
      v42 = *(_DWORD *)(v8 + 816);
      if ( v13 == 4096 )
        v42 = 0;
      v43 = (v13 + v42 + 15) >> 4;
      *a4 = v43;
      if ( v43 > v14 )
      {
        v23 = -1073741267;
        goto LABEL_25;
      }
      if ( v13 > 0xFF0 )
      {
        if ( (*(_DWORD *)(v8 + 776) & 0x200) != 0 )
        {
          v23 = -1073740762;
          goto LABEL_25;
        }
        v13 = 4096;
        FinalCompressedSize = 4096;
        v16 -= v45;
        v29 = (UCHAR *)v12;
        v49 = 0LL;
      }
      if ( v29 != v16 )
        memmove(v16, v29, v13);
    }
    v5 = a2;
    goto LABEL_13;
  }
  if ( (int)ST_STORE<SM_TRAITS>::StDmCurrentRegionSet(v8, v4, 0xFFFFFFFFLL) < 0 )
    __int2c();
  while ( 1 )
  {
    Compact = ST_STORE<SM_TRAITS>::StRegionFindCompact(v8, v4);
    if ( !Compact )
      break;
    v26 = (Compact - *(_QWORD *)(v8 + 1368)) >> 1;
    if ( (_DWORD)v26 == -1 )
      break;
    v27 = ST_STORE<SM_TRAITS>::StDmCurrentRegionSet(v8, v4, (unsigned int)v26);
    v23 = v27;
    if ( v27 >= 0 )
      goto LABEL_3;
    if ( v27 != -1073741267 )
      return (unsigned int)v23;
  }
  return (unsigned int)-1073741697;
}
