/*
 * XREFs of ?SmReadPickStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEAPEAU?$SMKM_STORE@USM_TRAITS@@@@2@Z @ 0x140391040
 * Callers:
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x140390CC0 (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x14027D080 (KeLeaveGuardedRegion.c)
 *     SmKmStoreReferenceEx @ 0x1402D2430 (SmKmStoreReferenceEx.c)
 *     ?SmFeCheckPresent@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z @ 0x140391140 (-SmFeCheckPresent@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z.c)
 *     ?StLockAcquireShared@@YAKPEAUVLOCK@@@Z @ 0x140392300 (-StLockAcquireShared@@YAKPEAUVLOCK@@@Z.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmReadPickStore(__int64 a1, __int64 a2, int *a3, __int64 *a4, _DWORD *a5)
{
  int v5; // ebp
  signed __int64 *v6; // rsi
  unsigned int v8; // edi
  unsigned int v12; // ebx
  __int64 v13; // rcx
  _DWORD *v14; // rax
  int v16; // [rsp+50h] [rbp+8h] BYREF
  int v17; // [rsp+60h] [rbp+18h] BYREF

  v5 = *a3;
  v6 = (signed __int64 *)(a1 + 280);
  v16 = *a3;
  v8 = 0;
  v17 = 0;
  StLockAcquireShared((struct VLOCK *)(a1 + 280));
  v12 = SMKM_STORE_MGR<SM_TRAITS>::SmFeCheckPresent(a1, a2, &v16, &v17);
  if ( v12 != 1024 )
  {
    if ( v16 == v5 || (*(_DWORD *)(a1 + 2120) & 8) != 0 )
      v5 = v16;
    else
      v12 = 1024;
  }
  if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v6);
  KeAbPostRelease((unsigned __int64)v6);
  KeLeaveGuardedRegion();
  if ( v12 == 1024 )
    return (unsigned int)-1073741275;
  v13 = SmKmStoreReferenceEx(a1, v12);
  if ( !v13 )
  {
    return (unsigned int)-1073741275;
  }
  else
  {
    v14 = a5;
    *a5 = 0;
    if ( v17 )
      *v14 = 1;
    *a3 = v5;
    *a4 = v13;
  }
  return v8;
}
