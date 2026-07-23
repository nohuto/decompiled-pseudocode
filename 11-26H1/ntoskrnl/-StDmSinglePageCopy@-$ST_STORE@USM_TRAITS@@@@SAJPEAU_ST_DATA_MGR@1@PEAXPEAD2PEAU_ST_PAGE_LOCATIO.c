/*
 * XREFs of ?StDmSinglePageCopy@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD2PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x140391FE0
 * Callers:
 *     ?StDmpSinglePageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAXPEAU_ST_PAGE_LOCATION@1@@Z @ 0x140391408 (-StDmpSinglePageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1.c)
 *     ?StDmFinishPageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_WORK_ITEM@1@J@Z @ 0x1403917A0 (-StDmFinishPageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@P.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x14027D080 (KeLeaveGuardedRegion.c)
 *     ?StLockAcquireShared@@YAKPEAUVLOCK@@@Z @ 0x140392300 (-StLockAcquireShared@@YAKPEAUVLOCK@@@Z.c)
 *     SmStoreDecompressBuffer @ 0x140392390 (SmStoreDecompressBuffer.c)
 *     SmStoreCompletePendingDecompress @ 0x14043C438 (SmStoreCompletePendingDecompress.c)
 *     SmStoreHashCompressedData @ 0x1405269F8 (SmStoreHashCompressedData.c)
 *     ?StRegionAccessExceptionFilter@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_EXCEPTION_POINTERS@@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@PEAJ@Z @ 0x140642260 (-StRegionAccessExceptionFilter@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_EXCEPTION_POINTERS@@PEAU_ST_DATA.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmSinglePageCopy(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6)
{
  void *v6; // rsi
  _DWORD *v7; // r10
  __int64 v9; // r8
  int v10; // ebx
  void *v11; // r15
  signed __int64 *v12; // rbx
  size_t v13; // r12
  unsigned int v14; // ecx
  int *v15; // rdx
  int v16; // r8d
  size_t v17; // r8
  const void *v18; // rdx
  __int64 v19; // r9
  int v20; // eax
  unsigned int *v21; // rcx
  int v22; // edx
  int v24; // [rsp+40h] [rbp-58h]
  _DWORD *v25; // [rsp+48h] [rbp-50h]
  __int64 v26; // [rsp+50h] [rbp-48h] BYREF
  unsigned int *v27; // [rsp+58h] [rbp-40h]

  v6 = (void *)a4;
  v7 = a3;
  v25 = a3;
  v9 = 0LL;
  v10 = 0;
  v11 = (void *)a4;
  if ( (a4 & 1) != 0 )
  {
    v6 = (void *)(a4 & 0xFFFFFFFFFFFFFFFEuLL);
    v11 = *(void **)(a6 + 408);
  }
  if ( (*(_DWORD *)(a1 + 776) & 0x20000) != 0 )
  {
    v12 = (signed __int64 *)(*(_QWORD *)(a1 + 792) + 2472LL);
    if ( a6 == -448 )
    {
      StLockAcquireShared((struct VLOCK *)(*(_QWORD *)(a1 + 792) + 2472LL));
    }
    else
    {
      if ( _InterlockedCompareExchange64(v12, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v12);
      KeAbPostRelease((unsigned __int64)v12);
      KeLeaveGuardedRegion();
    }
    v10 = 1;
    v7 = v25;
    v9 = 0LL;
  }
  v13 = *(unsigned __int16 *)(a5 + 4);
  v14 = 0;
  if ( (_DWORD)v13 != 4096 )
    v14 = *(_DWORD *)(a1 + 816);
  v15 = (int *)(a5 + 20);
  if ( v14 )
  {
    v16 = *v15;
    if ( (*v15 & 4) == 0 )
    {
      *(_DWORD *)(a5 + 16) = *v7;
      *v15 = v16 | 4;
    }
    v7 = (_DWORD *)((char *)v7 + v14);
    v25 = v7;
    v9 = 0LL;
  }
  if ( (*(_DWORD *)(a1 + 776) & 0x800000) != 0 && (*v15 & 4) != 0 )
  {
    v27 = (unsigned int *)(a5 + 20);
    if ( (unsigned int)v13 >= 0x1000 )
    {
      if ( (*(_DWORD *)(a1 + 824) & 3) != 0 )
        goto LABEL_14;
      v27 = (unsigned int *)(a5 + 20);
    }
    v26 = 0LL;
    v20 = SmStoreHashCompressedData(*(_QWORD *)(a1 + 792), v7, (unsigned int)v13, &v26);
    if ( v20 >= 0 )
    {
      v22 = v26;
      v21 = v27;
    }
    else
    {
      v21 = (unsigned int *)(a5 + 20);
      v22 = 0;
    }
    if ( v20 < 0 || *(_DWORD *)(a5 + 16) != v22 )
    {
      v24 = -1073740576;
      *v21 = *v21 & 0xFFFFFFE7 | 8;
      goto LABEL_41;
    }
  }
LABEL_14:
  if ( (unsigned int)v13 >= 0x1000 )
  {
    v17 = v13;
    v18 = v25;
    goto LABEL_21;
  }
  v24 = SmStoreDecompressBuffer(*(_QWORD *)(a1 + 792), v11, v9, v25, v13, a2, a5 + 8);
  if ( v24 == -1073741420 )
  {
    v24 = -1073741552;
    goto LABEL_41;
  }
  if ( v24 != 259 )
  {
LABEL_18:
    if ( v24 < 0 )
    {
      v24 = -1073740576;
      *(_DWORD *)(a5 + 20) = *(_DWORD *)(a5 + 20) & 0xFFFFFFE7 | 8;
      goto LABEL_41;
    }
    if ( v11 == v6 )
      goto LABEL_40;
    v17 = 4096LL;
    v18 = v11;
LABEL_21:
    memmove(v6, v18, v17);
LABEL_40:
    v24 = 0;
    goto LABEL_41;
  }
  if ( v11 != v6 )
  {
    v19 = 0xFFFFFFFFLL;
    if ( (*(_DWORD *)(a1 + 776) & 0x200000) == 0 )
      v19 = *(unsigned int *)(a5 + 16);
    v24 = SmStoreCompletePendingDecompress(*(_QWORD *)(a1 + 792), *(_QWORD *)(a5 + 8), 0LL, v19);
    *(_QWORD *)(a5 + 8) = 0LL;
    if ( v24 == -1073741248 )
    {
      *(_QWORD *)(a5 + 8) = 2LL;
      goto LABEL_41;
    }
    goto LABEL_18;
  }
LABEL_41:
  if ( v10 )
    *(_DWORD *)(a6 + 448) = StLockAcquireShared((struct VLOCK *)(*(_QWORD *)(a1 + 792) + 2472LL));
  return (unsigned int)v24;
}
