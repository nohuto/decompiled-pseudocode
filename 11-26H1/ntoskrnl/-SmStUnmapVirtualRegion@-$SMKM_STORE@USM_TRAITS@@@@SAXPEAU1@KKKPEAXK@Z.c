/*
 * XREFs of ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x140391910
 * Callers:
 *     ?StDmFinishPageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_WORK_ITEM@1@J@Z @ 0x1403917A0 (-StDmFinishPageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@P.c)
 *     ?StUnlockAndUnmapRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAD@Z @ 0x140392AC8 (-StUnlockAndUnmapRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAD@Z.c)
 *     ?SmStCompareRegionDataCallback@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z @ 0x140392FD0 (-SmStCompareRegionDataCallback@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z.c)
 *     ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z @ 0x140393390 (-SmStTrimWsStoreBatch@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z.c)
 *     ?StMapAndLockRegion@?$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z @ 0x140393630 (-StMapAndLockRegion@-$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z.c)
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX@@@Z @ 0x140393844 (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX.c)
 *     ?SmStOutSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x1403EA9E4 (-SmStOutSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021C464 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     SmKmFreeMdlForLock @ 0x140384DDC (SmKmFreeMdlForLock.c)
 *     SmpFpReleaseResource @ 0x1403FEA14 (SmpFpReleaseResource.c)
 *     SmKmUnlockMdl @ 0x14040060C (SmKmUnlockMdl.c)
 *     MiSignalCommitSignals @ 0x14042F350 (MiSignalCommitSignals.c)
 *     MiRestockOverCommit @ 0x1404F2AA4 (MiRestockOverCommit.c)
 */

void __fastcall SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4,
        int a5,
        unsigned int a6)
{
  unsigned __int64 v6; // rbx
  int v8; // r12d
  volatile signed __int16 *v9; // rdi
  __int64 v10; // rsi
  struct _KTHREAD *CurrentThread; // rax
  LegacyAutoBoost *v12; // rbp
  __int64 v13; // rcx
  PMDL *v14; // rdi
  bool v15; // zf
  __int64 v16; // rsi
  PMDL v17; // rbp
  __int64 v18; // rbx
  __int64 v19; // rsi
  _DWORD *v20; // rdi
  volatile LONG *v21; // rcx
  unsigned __int64 v22; // rbp
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedCommit; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  struct _KTHREAD *v27; // rcx
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  v6 = *(unsigned int *)(a1 + 2640);
  v8 = 0;
  v9 = (volatile signed __int16 *)(*(_QWORD *)(a1 + 2648) + 8LL * a2);
  v10 = *(_QWORD *)v9 & 0x7FFFFFFFFFFF0000LL;
  if ( (a6 & 8) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v8 = 1;
    --CurrentThread->SpecialApcDisable;
    v12 = (LegacyAutoBoost *)KeAbPreAcquire(a1 + 2472, 0LL, 0LL, a4);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 2472), 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)(a1 + 2472), 0, v12, (struct _KTHREAD *)(a1 + 2472));
    if ( v12 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        *((_BYTE *)v12 + 33) |= 2u;
      else
        *((_BYTE *)v12 + 10) = 1;
    }
  }
  if ( (a6 & 4) != 0 )
  {
    if ( *(__int64 *)v9 < 0 )
      goto LABEL_57;
    v13 = *(_QWORD *)(a1 + 2656);
    v14 = (PMDL *)(v13 + 8LL * ((a6 >> 4) & 7));
    if ( (unsigned __int64)v14 >= v13 + 80 )
    {
LABEL_19:
      v14 = 0LL;
    }
    else
    {
      while ( 1 )
      {
        v15 = *v14 ? (*v14)->StartVa == (PVOID)v10 : v10 == 0;
        if ( v15 )
          break;
        if ( (unsigned __int64)v14 >= v13 + 64 )
          ++v14;
        else
          v14 = (PMDL *)(v13 + 64);
        if ( (unsigned __int64)v14 >= v13 + 80 )
          goto LABEL_19;
      }
    }
    SmKmUnlockMdl(*v14, *(PEX_SPIN_LOCK *)(a1 + 2936));
    v16 = *(_QWORD *)(a1 + 2936);
    v17 = *v14;
    if ( *(_QWORD *)(v16 + 112) == a1 + 2808 && (unsigned int)SmpFpReleaseResource(*(PEX_SPIN_LOCK *)(a1 + 2936)) )
    {
      if ( !*(_BYTE *)(v16 + 94) )
      {
        _InterlockedExchange64((volatile __int64 *)(v16 + 112), 0LL);
        KeSetEvent((PRKEVENT)(v16 + 8), 0, 0);
        *v14 = 0LL;
        goto LABEL_57;
      }
    }
    else
    {
      SmKmFreeMdlForLock(*(_QWORD *)(v16 + 32), (unsigned int *)v17);
    }
    *v14 = 0LL;
    goto LABEL_57;
  }
  if ( (a6 & 2) != 0 )
  {
    _InterlockedAnd16(v9, 0x7FFFu);
    goto LABEL_57;
  }
  if ( (a6 & 1) == 0 )
  {
    if ( _bittest16((const signed __int16 *)v9, 0xDu) && KeGetCurrentThread() == *(struct _KTHREAD **)(a1 + 2952) )
    {
      --*(_DWORD *)(a1 + 3032);
      _InterlockedAnd16(v9, 0xDFFFu);
      goto LABEL_57;
    }
    if ( (_InterlockedDecrement16(v9) & 0x1FFF) == 0 && *(__int64 *)v9 >= 0 )
    {
      v18 = v6 >> 12;
      v19 = **(_QWORD **)(*(_QWORD *)(a1 + 3200) + 2208LL);
      if ( v18 )
      {
        if ( !*(_QWORD *)(v19 + 17288) )
        {
LABEL_51:
          if ( (ULONG *)v19 != &MiSystemPartition
            || *(_DWORD *)(v19 + 17296)
            || (CurrentPrcb = KeGetCurrentPrcb(),
                _m_prefetchw((const void *)&CurrentPrcb->CachedCommit),
                CachedCommit = CurrentPrcb->CachedCommit,
                (unsigned __int64)(v18 + CachedCommit) > 0x100) )
          {
LABEL_56:
            _InterlockedAdd64((volatile signed __int64 *)(v19 + 23168), -v18);
            MiSignalCommitSignals(v19, _InterlockedExchangeAdd64((volatile signed __int64 *)(v19 + 23104), -v18) - v18);
          }
          else
          {
            while ( 1 )
            {
              v25 = _InterlockedCompareExchange(
                      (volatile signed __int32 *)&CurrentPrcb->CachedCommit,
                      v18 + CachedCommit,
                      CachedCommit);
              if ( v25 == CachedCommit )
                break;
              CachedCommit = v25;
              if ( (unsigned __int64)(v25 + v18) > 0x100 )
                goto LABEL_56;
            }
          }
          goto LABEL_57;
        }
        v20 = (_DWORD *)(v19 + 17272);
        v21 = (volatile LONG *)(v19 + 17272);
        if ( KeGetCurrentIrql() == 2 )
        {
          ExAcquireSpinLockExclusiveAtDpcLevel(v21);
          v18 = MiRestockOverCommit(v19, v18);
        }
        else
        {
          v22 = ExAcquireSpinLockExclusive(v21);
          v18 = MiRestockOverCommit(v19, v18);
          if ( (_BYTE)v22 != 17 )
          {
            if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
              *v20 = 0;
            else
              ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(v19 + 17272), retaddr);
            if ( KiIrqlFlags )
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v22);
            __writecr8(v22);
LABEL_50:
            if ( !v18 )
              goto LABEL_57;
            goto LABEL_51;
          }
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          *v20 = 0;
        else
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(v19 + 17272), retaddr);
        goto LABEL_50;
      }
    }
  }
LABEL_57:
  if ( v8 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 2472), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(a1 + 2472));
    KeAbPostRelease(a1 + 2472);
    v27 = KeGetCurrentThread();
    v15 = v27->SpecialApcDisable++ == -1;
    if ( v15 && ($241382875694CED3D471BC5892DE3337 *)v27->ApcState.ApcListHead[0].Flink != &v27->152 )
      KiCheckForKernelApcDelivery((__int64)v27, v26);
  }
}
