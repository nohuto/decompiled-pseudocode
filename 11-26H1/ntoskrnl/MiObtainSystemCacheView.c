/*
 * XREFs of MiObtainSystemCacheView @ 0x1402C6BA0
 * Callers:
 *     MmMapViewInSystemCache @ 0x1402C4A60 (MmMapViewInSystemCache.c)
 *     MmReserveViewInSystemCache @ 0x140870EE8 (MmReserveViewInSystemCache.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021C464 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140248E20 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14024B4A0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     MiInsertReadiedSystemCacheViews @ 0x1402A28A4 (MiInsertReadiedSystemCacheViews.c)
 *     MiConsumeSystemCacheTbFlushNeededView @ 0x1402A29D8 (MiConsumeSystemCacheTbFlushNeededView.c)
 *     MiExpandSystemCache @ 0x1402A2BF0 (MiExpandSystemCache.c)
 *     MiReturnSystemCacheRegionsToKva @ 0x1402A2E28 (MiReturnSystemCacheRegionsToKva.c)
 *     MiReleaseSystemCacheView @ 0x1402A6600 (MiReleaseSystemCacheView.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     CcUnmapInactiveViewsInternal @ 0x140408F40 (CcUnmapInactiveViewsInternal.c)
 *     MiUnlockSystemCacheInit @ 0x140507598 (MiUnlockSystemCacheInit.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiReadyReservedView @ 0x140525FF8 (MiReadyReservedView.c)
 *     MiInitializeSystemCache @ 0x140870CF8 (MiInitializeSystemCache.c)
 */

__int64 __fastcall MiObtainSystemCacheView(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // r13
  _QWORD *v5; // r14
  int v6; // r15d
  int *v7; // rbx
  unsigned __int8 CurrentIrql; // r12
  unsigned int v10; // edi
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  AutoBoost *v14; // rax
  AutoBoost *v15; // rdi
  __int64 v16; // rcx
  KIRQL v18; // al
  unsigned __int64 v19; // rdi
  int v20; // esi
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // eax
  unsigned int v25; // esi
  _QWORD *v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rdx
  _QWORD *v29; // rsi
  _QWORD *v30; // rcx
  __int64 v31; // rax
  unsigned int v32; // edx
  __int64 v33; // rax
  _QWORD *v34; // rax
  int v35; // eax
  _QWORD *v36; // rcx
  __int64 v37; // r9
  _QWORD ***v38; // r9
  _DWORD *v39; // rcx
  __int64 v40; // rcx
  signed __int32 v41[8]; // [rsp+0h] [rbp-58h] BYREF
  _QWORD *v42; // [rsp+20h] [rbp-38h] BYREF
  _QWORD **v43; // [rsp+28h] [rbp-30h]
  __int64 retaddr; // [rsp+58h] [rbp+0h]
  __int64 v45; // [rsp+60h] [rbp+8h] BYREF

  v4 = 0LL;
  v43 = &v42;
  v5 = (_QWORD *)(a1 + 2688);
  v6 = 0;
  v42 = &v42;
  v7 = (int *)(a1 + 2752);
  v45 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v10 = 0;
    if ( _interlockedbittestandset(v7, 0x1Fu) )
      v10 = ExpWaitForSpinLockExclusiveAndAcquire(v7, CurrentIrql);
    v11 = (unsigned int)*v7;
    v12 = v11 & 0xFFFFFFFFBFFFFFFFuLL;
    if ( (v11 & 0xBFFFFFFF) != 0x80000000 )
    {
      do
      {
        if ( (v11 & 0x40000000) == 0 )
          _InterlockedOr(v7, 0x40000000u);
        if ( (++v10 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v12, v11, a3) )
        {
          HvlNotifyLongSpinWait(v10);
        }
        else
        {
          _mm_pause();
        }
        v11 = (unsigned int)*v7;
      }
      while ( (*v7 & 0xBFFFFFFF) != 0x80000000 );
    }
  }
  else
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v7, CurrentIrql);
  }
  if ( !*(_BYTE *)(a1 + 22300) )
  {
    if ( CurrentIrql == 17 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        *v7 = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v7, retaddr);
    }
    else
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        *v7 = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v7, retaddr);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v14 = (AutoBoost *)KeAbPreAcquire(a1 + 2760, 0LL, 0LL, a4);
    v15 = v14;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 2760), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 2760), v14, a1 + 2760);
    if ( v15 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        *((_BYTE *)v15 + 33) |= 2u;
      else
        *((_BYTE *)v15 + 10) = 1;
    }
    v16 = a1;
    if ( !*(_BYTE *)(a1 + 22300) )
    {
      if ( !(unsigned int)MiInitializeSystemCache(a1) )
      {
        MiUnlockSystemCacheInit(a1, CurrentThread);
        return 0LL;
      }
      v18 = ExAcquireSpinLockExclusive(v7);
      v19 = v18;
      *(_BYTE *)(a1 + 22300) = 1;
      if ( v18 == 17 )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          *v7 = 0;
        else
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v7, retaddr);
      }
      else
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          *v7 = 0;
        else
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v7, retaddr);
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v19);
        __writecr8(v19);
      }
      v16 = a1;
    }
    MiUnlockSystemCacheInit(v16, CurrentThread);
    ExAcquireSpinLockExclusive(v7);
    v6 = v45;
  }
  _InterlockedOr(v41, 0);
  v20 = KiTbFlushTimeStamp;
  if ( *(_QWORD *)(a1 + 2576) )
  {
    v21 = *(_DWORD *)(a1 + 2584);
    if ( (unsigned int)(KiTbFlushTimeStamp - v21) > 2 || (v21 & 1) == 0 && (unsigned int)(KiTbFlushTimeStamp - v21) >= 2 )
      MiInsertReadiedSystemCacheViews(a1, (_QWORD *)(a1 + 2560));
  }
  if ( *(_QWORD *)(a1 + 2608) )
  {
    v22 = *(_DWORD *)(a1 + 2616);
    if ( (unsigned int)(v20 - v22) > 2 || (v22 & 1) == 0 && (unsigned int)(v20 - v22) >= 2 )
      MiInsertReadiedSystemCacheViews(a1, (_QWORD *)(a1 + 2592));
  }
  if ( *(_QWORD *)(a1 + 2640) )
  {
    v23 = *(_DWORD *)(a1 + 2648);
    if ( (unsigned int)(v20 - v23) > 2 || (v23 & 1) == 0 && (unsigned int)(v20 - v23) >= 2 )
      MiInsertReadiedSystemCacheViews(a1, (_QWORD *)(a1 + 2624));
  }
  if ( *(_QWORD *)(a1 + 2672) )
  {
    v24 = *(_DWORD *)(a1 + 2680);
    v25 = v20 - v24;
    if ( v25 > 2 || (v24 & 1) == 0 && v25 >= 2 )
      MiInsertReadiedSystemCacheViews(a1, (_QWORD *)(a1 + 2656));
  }
  if ( v5[2] )
  {
    v26 = (_QWORD *)*v5;
    if ( *(_QWORD **)(*v5 + 8LL) == v5 )
    {
      v27 = *v26;
      if ( *(_QWORD **)(*v26 + 8LL) == v26 )
      {
        *v5 = v27;
        v28 = a1 + 2720;
        *(_QWORD *)(v27 + 8) = v5;
        v26[4] = v26[4] & 0x3FFFFFFFFFFFFFFFLL | 0x8000000000000000uLL;
        --v5[2];
        goto LABEL_103;
      }
    }
LABEL_111:
    __fastfail(3u);
  }
  v29 = (_QWORD *)(a1 + 2720);
  v30 = *(_QWORD **)(a1 + 2720);
  if ( v30 != (_QWORD *)(a1 + 2720) )
  {
    if ( (_QWORD *)v30[1] != v29 )
      goto LABEL_111;
    v31 = *v30;
    if ( *(_QWORD **)(*v30 + 8LL) != v30 )
      goto LABEL_111;
    *v29 = v31;
    *(_QWORD *)(v31 + 8) = v29;
    --*(_QWORD *)(a1 + 2736);
    v32 = 0;
    do
    {
      while ( 1 )
      {
        v33 = v30[4] & 0x3FFFFFFFFFFFFFFFLL;
        if ( v32 )
          break;
        v30[4] = v33 | 0x8000000000000000uLL;
        v30 += 5;
        v32 = 1;
      }
      v30[4] = v33;
      v34 = (_QWORD *)v5[1];
      if ( (_QWORD *)*v34 != v5 )
        goto LABEL_111;
      *v30 = v5;
      ++v32;
      v30[1] = v34;
      *v34 = v30;
      v5[1] = v30;
      v30 += 5;
    }
    while ( v32 < 8 );
    v5[2] += 7LL;
    v26 = v30 - 40;
    v28 = a1 + 2720;
    if ( v30 != (_QWORD *)320 )
    {
LABEL_103:
      v35 = *(_DWORD *)(a1 + 4);
      v43 = &v42;
      v42 = &v42;
      while ( 1 )
      {
        v36 = *(_QWORD **)v28;
        if ( *(_QWORD *)v28 == v28 || (v35 & 1) == 0 && *(_QWORD *)(v28 + 16) <= 0x20uLL )
          break;
        if ( v36[1] != v28 )
          goto LABEL_111;
        v37 = *v36;
        if ( *(_QWORD **)(*v36 + 8LL) != v36 )
          goto LABEL_111;
        *(_QWORD *)v28 = v37;
        *(_QWORD *)(v37 + 8) = v28;
        v38 = (_QWORD ***)v43;
        --*(_QWORD *)(v28 + 16);
        if ( *v38 != &v42 )
          goto LABEL_111;
        v36[1] = v38;
        *v36 = &v42;
        *v38 = (_QWORD **)v36;
        v43 = (_QWORD **)v36;
      }
      v39 = (_DWORD *)(a1 + 2752);
      if ( CurrentIrql == 17 )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          *v39 = 0;
        else
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v39, retaddr);
      }
      else
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          *v39 = 0;
        else
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v39, retaddr);
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
      }
      if ( !v26 )
        goto LABEL_126;
      goto LABEL_125;
    }
  }
  v26 = (_QWORD *)MiConsumeSystemCacheTbFlushNeededView(a1, 0x400uLL);
  v28 = a1 + 2720;
  if ( v26 )
    goto LABEL_103;
  if ( CurrentIrql == 17 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      *v7 = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v7, retaddr);
  }
  else
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      *v7 = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v7, retaddr);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  v26 = MiExpandSystemCache((volatile signed __int32 *)a1);
  if ( !v26 )
  {
    ExAcquireSpinLockExclusive(v7);
    v6 = 1;
    v26 = (_QWORD *)MiConsumeSystemCacheTbFlushNeededView(a1, 1uLL);
    v28 = a1 + 2720;
    goto LABEL_103;
  }
LABEL_125:
  v4 = v26[2];
LABEL_126:
  if ( v6 )
  {
    v45 = 0LL;
    if ( CcInitializationComplete )
    {
      if ( CcNumberOfMappedVacbs )
      {
        v40 = *(_QWORD *)(*(_QWORD *)(a1 + 256) + 8LL);
        if ( v40 )
        {
          if ( (unsigned int)CcUnmapInactiveViewsInternal(v40, 64LL, 0LL, &v45) )
          {
            if ( v4 )
              MiReleaseSystemCacheView(0LL, v4);
            v4 = v45;
            MiReadyReservedView(a1, v45);
          }
        }
      }
    }
  }
  if ( v42 != &v42 )
    MiReturnSystemCacheRegionsToKva(a1, &v42);
  return v4;
}
