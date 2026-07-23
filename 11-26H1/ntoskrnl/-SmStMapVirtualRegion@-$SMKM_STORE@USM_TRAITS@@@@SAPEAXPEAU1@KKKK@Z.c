/*
 * XREFs of ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x140391D40
 * Callers:
 *     ?StDmpSinglePageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAXPEAU_ST_PAGE_LOCATION@1@@Z @ 0x140391408 (-StDmpSinglePageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1.c)
 *     ?SmStMapRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEADPEAU1@KKKK@Z @ 0x140391D08 (-SmStMapRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEADPEAU1@KKKK@Z.c)
 *     ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z @ 0x140392C04 (-SmStTrimWsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z.c)
 *     ?SmStCompareRegionDataCallback@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z @ 0x140392FD0 (-SmStCompareRegionDataCallback@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z.c)
 *     ?StMapAndLockRegion@?$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z @ 0x140393630 (-StMapAndLockRegion@-$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z.c)
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX@@@Z @ 0x140393844 (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX.c)
 *     ?SmStOutSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x1403EA9E4 (-SmStOutSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     MiChargeCommit @ 0x1402D8520 (MiChargeCommit.c)
 *     ?StLockAcquireShared@@YAKPEAUVLOCK@@@Z @ 0x140392300 (-StLockAcquireShared@@YAKPEAUVLOCK@@@Z.c)
 *     ?SmStLockVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KPEAT_SM_VIRTUAL_REGION@@PEAXK@Z @ 0x140395C2C (-SmStLockVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KPEAT_SM_VIRTUAL_REGION@@PEAXK@Z.c)
 *     SmAcquireReleaseCharges @ 0x140396390 (SmAcquireReleaseCharges.c)
 *     SmKmStoreHelperCheckWaitCommand @ 0x1403E9D34 (SmKmStoreHelperCheckWaitCommand.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        int a5)
{
  int v6; // ecx
  __int64 v8; // rdi
  volatile signed __int16 *v9; // r14
  signed __int64 *v10; // rbx
  __int64 v11; // rbp
  __int64 v12; // rax
  unsigned __int64 v13; // r13
  signed __int16 v14; // bx
  _DWORD *v15; // rax
  signed __int16 v16; // bx
  __int64 v17; // rdx
  struct _KTHREAD *CurrentThread; // rcx
  bool v19; // zf
  __int64 v21; // [rsp+70h] [rbp+8h]
  int v23; // [rsp+88h] [rbp+20h]

  v6 = 0;
  v23 = 0;
  v8 = 1LL;
  v9 = (volatile signed __int16 *)(*(_QWORD *)(a1 + 2648) + 8LL * a2);
  if ( (a5 & 0x40) != 0 )
  {
    v10 = (signed __int64 *)(a1 + 2472);
    v23 = 1;
    StLockAcquireShared((struct VLOCK *)(a1 + 2472));
    v6 = 0;
    if ( (*(_QWORD *)v9 & 0x7FFFFFFFFFFF0000LL) == 0 )
    {
      v8 = 0LL;
      goto LABEL_38;
    }
  }
  v11 = *(_QWORD *)v9;
  v12 = *(_QWORD *)v9 & 0x7FFFFFFFFFFF0000LL;
  v13 = *(unsigned int *)(a1 + 2640);
  v21 = v12;
  if ( (a5 & 8) != 0 )
  {
    v8 = 0LL;
    if ( (v11 & 0x4000) != 0 )
    {
      *v9 = v11 & 0xBFFF;
    }
    else if ( *(volatile signed __int16 **)(a1 + 3048) == v9 )
    {
      if ( (unsigned int)SmKmStoreHelperCheckWaitCommand(a1 + 2808, 0LL) == -1073741536 )
        *(_QWORD *)(a1 + 3048) = 0LL;
      else
        v8 = 3LL;
    }
    goto LABEL_36;
  }
  if ( (a5 & 0x10) == 0 )
  {
    if ( (a5 & 4) != 0 )
    {
      _InterlockedOr16(v9, 0x8000u);
    }
    else if ( (a5 & 2) == 0 )
    {
      if ( (v11 & 0x1FFF) == 0x1FFF )
        goto LABEL_36;
      while ( 1 )
      {
        v14 = v11 ^ (v11 ^ (v11 + 1)) & 0x1FFF;
        if ( (v11 & 0x1FFF) == 0 && *(__int64 *)v9 >= 0 )
        {
          if ( (unsigned int)MiChargeCommit(**(ULONG ***)(*(_QWORD *)(a1 + 3200) + 2208LL), v13 >> 12, 1u) )
          {
            v6 = 1;
          }
          else
          {
            v6 = 0;
            if ( KeGetCurrentThread() != *(struct _KTHREAD **)(a1 + 2952) )
            {
              v8 = 2LL;
              goto LABEL_36;
            }
            v15 = (_DWORD *)(a1 + 3032);
            if ( (a5 & 0x80u) != 0 && *v15 )
              goto LABEL_36;
            ++*v15;
            v14 = v14 & 0xC000 | 0x2000;
          }
        }
        v16 = _InterlockedCompareExchange16(v9, v14, v11);
        if ( (_WORD)v11 == v16 )
          break;
        if ( v6 )
        {
          SmAcquireReleaseCharges(*(_QWORD *)(a1 + 3200), v13, 1LL, 1LL);
        }
        else if ( (v11 & 0x1FFF) == 0 && *(__int64 *)v9 >= 0 )
        {
          --*(_DWORD *)(a1 + 3032);
        }
        LOWORD(v11) = v16;
        if ( (v16 & 0x1FFF) == 0x1FFF )
          goto LABEL_36;
        v6 = 0;
      }
      v12 = v21;
    }
    v8 = v12 + a3;
    goto LABEL_36;
  }
  v8 = SMKM_STORE<SM_TRAITS>::SmStLockVirtualRegion(a1, a2, (_DWORD)v9, v12, a5);
LABEL_36:
  if ( !v23 )
    return v8;
  v10 = (signed __int64 *)(a1 + 2472);
LABEL_38:
  if ( _InterlockedCompareExchange64(v10, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v10);
  KeAbPostRelease((unsigned __int64)v10);
  CurrentThread = KeGetCurrentThread();
  v19 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v19 && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery((__int64)CurrentThread, v17);
  return v8;
}
