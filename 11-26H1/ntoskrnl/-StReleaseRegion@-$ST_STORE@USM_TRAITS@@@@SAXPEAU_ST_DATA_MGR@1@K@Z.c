/*
 * XREFs of ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x140395AF4
 * Callers:
 *     ?StDmPageRecordRemove@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEAUSEARCH_RESULT@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@@Z @ 0x14020F6E0 (-StDmPageRecordRemove@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEAUS.c)
 *     ?StMapAndLockRegion@?$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z @ 0x140393630 (-StMapAndLockRegion@-$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z.c)
 *     ?StCompactionPerformInMem@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x140393B98 (-StCompactionPerformInMem@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StCompactRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z @ 0x140393F68 (-StCompactRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z.c)
 *     ?StDmCurrentRegionSet@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x14039547C (-StDmCurrentRegionSet@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     ?StDmpUpdateRegionState@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KJK@Z @ 0x140464990 (-StDmpUpdateRegionState@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KJK@Z.c)
 * Callees:
 *     MiFreePagesFromMdl @ 0x140347540 (MiFreePagesFromMdl.c)
 *     ?SmStReleaseVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z @ 0x140396AB0 (-SmStReleaseVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z.c)
 *     ?StDmUpdateRegionLazyCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KK@Z @ 0x1404EAAB4 (-StDmUpdateRegionLazyCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KK@Z.c)
 *     SmEtwLogRegionOp @ 0x140642F34 (SmEtwLogRegionOp.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StReleaseRegion(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbp
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rcx
  __int64 result; // rax
  __int64 v8; // rdi
  void *v9; // rbx

  v2 = *(_QWORD *)(a1 + 792);
  v3 = a2;
  if ( (*(_BYTE *)(v2 + 2469) & 4) != 0 )
  {
    if ( (unsigned int)SMKM_STORE<SM_TRAITS>::SmStReleaseVirtualRegion(v2, a2, 0LL) == -1073741650 )
      ST_STORE<SM_TRAITS>::StDmUpdateRegionLazyCleanup(a1, (unsigned int)v3, 1LL);
  }
  else
  {
    v8 = *(_QWORD *)(v2 + 2648);
    v9 = (void *)(*(_QWORD *)(v8 + 8LL * a2) & 0xFFFFFFFFFFFFFFF8uLL);
    MiFreePagesFromMdl((ULONG_PTR)v9, 0, 0, 0);
    ExFreePoolWithTag(v9, 0);
    *(_QWORD *)(v8 + 8 * v3) = 0LL;
  }
  v5 = (unsigned __int64)&stru_140E27C48.QuantumTarget & -(__int64)((BYTE4(stru_140E27C48.InitialStack) & 0x10) != 0);
  if ( v5 )
    SmEtwLogRegionOp(v5, 5, a1, v3);
  if ( (unsigned int)v3 < *(_DWORD *)(a1 + 1412) )
    *(_DWORD *)(a1 + 1412) = v3;
  v6 = (unsigned __int64)*(unsigned __int16 *)(*(_QWORD *)(a1 + 1368) + 2 * v3) >> 13;
  --*(_DWORD *)(a1 + 8 * v6 + 1992);
  result = *(_QWORD *)(a1 + 1368);
  *(_WORD *)(result + 2 * v3) &= 0x1FFFu;
  return result;
}
