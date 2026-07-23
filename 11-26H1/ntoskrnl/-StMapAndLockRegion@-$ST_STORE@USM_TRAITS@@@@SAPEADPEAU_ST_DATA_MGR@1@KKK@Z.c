/*
 * XREFs of ?StMapAndLockRegion@?$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z @ 0x140393630
 * Callers:
 *     ?StCompactionPerformInMem@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x140393B98 (-StCompactionPerformInMem@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StDmCurrentRegionSet@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x14039547C (-StDmCurrentRegionSet@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StCompactionPerformEmergency@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x1406411CC (-StCompactionPerformEmergency@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 * Callees:
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x140391910 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x140391D40 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x140395AF4 (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?SmStAllocateVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x140395F94 (-SmStAllocateVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z.c)
 *     ?SmStIsRegionBusy@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z @ 0x140396C10 (-SmStIsRegionBusy@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z.c)
 *     ?SmStUnmapPhysicalRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x1403CAC08 (-SmStUnmapPhysicalRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14043F380 (KiQueryUnbiasedInterruptTime.c)
 *     ?StDmUpdateRegionLazyCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KK@Z @ 0x1404EAAB4 (-StDmUpdateRegionLazyCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?SmStMapPhysicalRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x14050BB44 (-SmStMapPhysicalRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     ?SmStAllocatePhysicalRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x14050D37C (-SmStAllocatePhysicalRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StMapAndLockRegion(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  __int64 *v4; // rbx
  __int64 v5; // rdi
  int v6; // r15d
  __int64 v7; // r14
  int v8; // r12d
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  struct _KLOCK_ENTRIES *v14; // r9
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v20; // rcx
  int VirtualRegion; // eax
  unsigned int v22; // [rsp+20h] [rbp-38h]
  int v23; // [rsp+20h] [rbp-38h]

  v4 = (__int64 *)(a1 + 792);
  v5 = a2;
  v6 = 0;
  v7 = a3;
  v8 = a4;
  if ( (*(_WORD *)(*(_QWORD *)(a1 + 1368) + 2LL * a2) & 0x1FFF) == 0 )
  {
    v20 = *v4;
    if ( (*(_BYTE *)(*v4 + 2469) & 4) != 0 )
      VirtualRegion = SMKM_STORE<SM_TRAITS>::SmStAllocateVirtualRegion(v20, a2);
    else
      VirtualRegion = SMKM_STORE<SM_TRAITS>::SmStAllocatePhysicalRegion(v20, a2);
    if ( VirtualRegion < 0 )
      return 0LL;
    v6 = 1;
    ++*(_DWORD *)(a1 + 8 * v7 + 1992);
    *(_WORD *)(*(_QWORD *)(a1 + 1368) + 2 * v5) = ((_WORD)v7 << 13) | *(_WORD *)(*(_QWORD *)(a1 + 1368) + 2 * v5) & 0x1FFF;
  }
  v10 = *v4;
  v22 = v8 | ((*(_WORD *)(*(_QWORD *)(a1 + 1368) + 2 * v5) & 0xE01F | 0x200u) >> 5);
  if ( (*(_BYTE *)(*v4 + 2469) & 4) != 0 )
    v11 = SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(v10, v5, 0, a4, v22);
  else
    v11 = SMKM_STORE<SM_TRAITS>::SmStMapPhysicalRegion(v10, v5, 0, a4, v22);
  v15 = v11;
  if ( !v11 )
    goto LABEL_12;
  if ( ((v11 - 1) & 0xFFFFFFFFFFFFFFFDuLL) == 0 )
  {
LABEL_20:
    ST_STORE<SM_TRAITS>::StDmUpdateRegionLazyCleanup(a1, (unsigned int)v5, 1LL);
    if ( v15 == 1 || v15 == 4 )
    {
      v15 = -1LL;
      goto LABEL_13;
    }
LABEL_12:
    v15 = 0LL;
    goto LABEL_13;
  }
  if ( v11 == 4 )
  {
    LOBYTE(v12) = 1;
    *(_QWORD *)(a1 + 2376) = KiQueryUnbiasedInterruptTime(v12);
    goto LABEL_20;
  }
  if ( (*(_DWORD *)(a1 + 776) & 0x20000) == 0
    || !(unsigned int)SMKM_STORE<SM_TRAITS>::SmStIsRegionBusy(*(_QWORD *)(a1 + 792), (unsigned int)v5) )
  {
    v18 = *(_QWORD *)(a1 + 792);
    if ( (*(_BYTE *)(v18 + 2469) & 4) != 0 )
      SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(v18, v5, 0, (__int64)v14, 2);
    else
      SMKM_STORE<SM_TRAITS>::SmStMapPhysicalRegion(v18, v5, 0, (_DWORD)v14, 2);
    return v15;
  }
  v15 = -1LL;
  if ( (*(_BYTE *)(v16 + 2469) & 4) != 0 )
    SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(
      v16,
      v5,
      v17,
      v14,
      v23,
      (*(_WORD *)(*(_QWORD *)(a1 + 1368) + 2 * v5) & 0xE1FF | 0x800u) >> 9);
  else
    SMKM_STORE<SM_TRAITS>::SmStUnmapPhysicalRegion(v16, v5, v17, (_DWORD)v14);
LABEL_13:
  if ( v6 )
    ST_STORE<SM_TRAITS>::StReleaseRegion(a1, (unsigned int)v5, v13);
  return v15;
}
