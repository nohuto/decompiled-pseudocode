/*
 * XREFs of ?StCompactionPerformInMem@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x140393B98
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14020C690 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StCompactionWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x14042F938 (-StCompactionWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 * Callees:
 *     ?StUnlockAndUnmapRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAD@Z @ 0x140392AC8 (-StUnlockAndUnmapRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAD@Z.c)
 *     ?StMapAndLockRegion@?$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z @ 0x140393630 (-StMapAndLockRegion@-$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z.c)
 *     ?StCompactRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z @ 0x140393F68 (-StCompactRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z.c)
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x140395AF4 (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?SmStIsRegionBusy@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z @ 0x140396C10 (-SmStIsRegionBusy@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z.c)
 *     ?StCompactionFindEmptiest@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAPEAT_ST_REGION_STATE@1@KKK@Z @ 0x14042F020 (-StCompactionFindEmptiest@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAPEAT_ST_REGION_STATE.c)
 *     ?StCompactionPickPriority@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAPEAT_ST_REGION_STATE@1@K1K@Z @ 0x1404812D8 (-StCompactionPickPriority@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAPEAT_ST_REGION_STATE.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StCompactionPerformInMem(__int64 a1, int a2, int a3)
{
  __int64 v6; // r9
  __int64 v7; // rsi
  __int64 v8; // rbp
  __int64 v9; // r8
  unsigned int Emptiest; // eax
  unsigned int v11; // r13d
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // r15
  int v15; // ebx
  __int64 v16; // r8
  struct _KLOCK_ENTRIES *v17; // r9
  unsigned int i; // r12d
  _WORD *v19; // r13
  __int64 v20; // rax
  __int64 v21; // r8
  struct _KLOCK_ENTRIES *v22; // r9
  __int64 v23; // r8
  unsigned int v26; // [rsp+34h] [rbp-174h]
  _OWORD v27[2]; // [rsp+38h] [rbp-170h] BYREF
  _BYTE v28[256]; // [rsp+60h] [rbp-148h] BYREF

  memset_0(v28, 0, sizeof(v28));
  v6 = (unsigned int)(*(_DWORD *)(a1 + 808) - *(_DWORD *)(a1 + 812) + 1);
  v7 = 0LL;
  memset(v27, 0, sizeof(v27));
  LODWORD(v8) = -1;
  Emptiest = ST_STORE<SM_TRAITS>::StCompactionFindEmptiest(a1, v28, v9, v6, a3);
  v11 = ST_STORE<SM_TRAITS>::StCompactionPickPriority(a1, v28, Emptiest, v27);
  v12 = (__int64)(*(_QWORD *)&v27[0] - *(_QWORD *)(a1 + 1368)) >> 1;
  v26 = v11;
  if ( (*(_DWORD *)(a1 + 776) & 0x20000) != 0
    && (unsigned int)SMKM_STORE<SM_TRAITS>::SmStIsRegionBusy(*(_QWORD *)(a1 + 792), (unsigned int)v12) )
  {
    return (unsigned int)-1073740024;
  }
  v13 = ST_STORE<SM_TRAITS>::StMapAndLockRegion(a1, v12, 0, 32LL);
  v14 = v13;
  if ( !v13 )
    return (unsigned int)-1073741739;
  if ( v13 == -1 )
  {
    return (unsigned int)-1073740024;
  }
  else
  {
    v15 = ST_STORE<SM_TRAITS>::StCompactRegions(a1, v13, v12, v13, v12, a2);
    if ( v15 < 0 )
      goto LABEL_21;
    for ( i = 1; ; ++i )
    {
      if ( i >= v11 )
      {
        v15 = 0;
LABEL_19:
        v7 = 0LL;
        goto LABEL_20;
      }
      v19 = (_WORD *)*((_QWORD *)v27 + i);
      v8 = ((__int64)v19 - *(_QWORD *)(a1 + 1368)) >> 1;
      if ( _bittest((const signed __int32 *)(a1 + 776), 0x11u)
        && (unsigned int)SMKM_STORE<SM_TRAITS>::SmStIsRegionBusy(*(_QWORD *)(a1 + 792), (unsigned int)v8) )
      {
LABEL_29:
        v15 = -1073740024;
        goto LABEL_19;
      }
      v20 = ST_STORE<SM_TRAITS>::StMapAndLockRegion(a1, v8, 0, 32LL);
      v7 = v20;
      if ( !v20 )
        break;
      if ( v20 == -1 )
        goto LABEL_29;
      if ( _bittest((const signed __int32 *)(a1 + 776), 0x11u)
        && (unsigned int)SMKM_STORE<SM_TRAITS>::SmStIsRegionBusy(*(_QWORD *)(a1 + 792), (unsigned int)v12) )
      {
        v15 = -1073740024;
        goto LABEL_20;
      }
      v15 = ST_STORE<SM_TRAITS>::StCompactRegions(a1, v7, v8, v14, v12, a2);
      if ( (*v19 & 0x1FFF) != 0 )
      {
        ST_STORE<SM_TRAITS>::StUnlockAndUnmapRegion(a1, v12, v21, v22);
        v14 = v7;
        LODWORD(v12) = v8;
        v7 = 0LL;
      }
      else
      {
        ST_STORE<SM_TRAITS>::StUnlockAndUnmapRegion(a1, v8, v21, v22);
        v7 = 0LL;
        ST_STORE<SM_TRAITS>::StReleaseRegion(a1, (unsigned int)v8, v23);
      }
      if ( v15 < 0 )
        goto LABEL_20;
      v11 = v26;
    }
    v15 = -1073741739;
LABEL_20:
    if ( v14 )
LABEL_21:
      ST_STORE<SM_TRAITS>::StUnlockAndUnmapRegion(a1, v12, v16, v17);
    if ( v7 )
      ST_STORE<SM_TRAITS>::StUnlockAndUnmapRegion(a1, v8, v16, v17);
  }
  return (unsigned int)v15;
}
