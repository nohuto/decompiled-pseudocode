/*
 * XREFs of ?SmStUnmapPhysicalRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x1403CAC08
 * Callers:
 *     ?StDmFinishPageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_WORK_ITEM@1@J@Z @ 0x1403917A0 (-StDmFinishPageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@P.c)
 *     ?StUnlockAndUnmapRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAD@Z @ 0x140392AC8 (-StUnlockAndUnmapRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAD@Z.c)
 *     ?SmStCompareRegionDataCallback@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z @ 0x140392FD0 (-SmStCompareRegionDataCallback@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z.c)
 *     ?StMapAndLockRegion@?$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z @ 0x140393630 (-StMapAndLockRegion@-$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x140280C00 (MmUnmapLockedPages.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     MmUnmapReservedMapping @ 0x1403CBB70 (MmUnmapReservedMapping.c)
 *     SmpFpReleaseResource @ 0x1403FEA14 (SmpFpReleaseResource.c)
 */

void __fastcall SMKM_STORE<SM_TRAITS>::SmStUnmapPhysicalRegion(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6)
{
  __int64 v6; // r9
  __int64 v7; // r10
  struct _MDL *v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rbx
  PVOID MappedSystemVa; // rsi

  v6 = *(_QWORD *)(a1 + 2648);
  v7 = a2;
  v8 = (struct _MDL *)(*(_QWORD *)(v6 + 8LL * a2) & 0xFFFFFFFFFFFFFFF8uLL);
  v9 = *(_QWORD *)(v6 + 8LL * a2) & (-(__int64)((a6 & 4) != 0) - 2);
  *(_QWORD *)(v6 + 8 * v7) = v9;
  if ( (v9 & 3) == 0 )
  {
    v10 = a1 + 3080;
    MappedSystemVa = v8->MappedSystemVa;
    if ( *(struct _KTHREAD **)(a1 + 3192) == KeGetCurrentThread()
      && (unsigned int)SmpFpReleaseResource((PEX_SPIN_LOCK)(a1 + 3080)) )
    {
      MmUnmapReservedMapping(MappedSystemVa, 0x6D526D73u, v8);
      if ( !*(_BYTE *)(v10 + 94) )
      {
        _InterlockedExchange64((volatile __int64 *)(v10 + 112), 0LL);
        KeSetEvent((PRKEVENT)(v10 + 8), 0, 0);
      }
    }
    else
    {
      MmUnmapLockedPages(MappedSystemVa, v8);
    }
  }
}
