/*
 * XREFs of MiObtainSystemCacheView @ 0x1402E4B60
 * Callers:
 *     MmMapViewInSystemCache @ 0x1402E29A0 (MmMapViewInSystemCache.c)
 *     MmReserveViewInSystemCache @ 0x14086AB08 (MmReserveViewInSystemCache.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021AAD4 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402474C0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140249B40 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     MiInsertReadiedSystemCacheViews @ 0x1402A3354 (MiInsertReadiedSystemCacheViews.c)
 *     MiConsumeSystemCacheTbFlushNeededView @ 0x1402A3488 (MiConsumeSystemCacheTbFlushNeededView.c)
 *     MiExpandSystemCache @ 0x1402A36A0 (MiExpandSystemCache.c)
 *     MiReturnSystemCacheRegionsToKva @ 0x1402A38D8 (MiReturnSystemCacheRegionsToKva.c)
 *     MiReleaseSystemCacheView @ 0x1402A71F0 (MiReleaseSystemCacheView.c)
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     CcUnmapInactiveViewsInternal @ 0x140414910 (CcUnmapInactiveViewsInternal.c)
 *     MiUnlockSystemCacheInit @ 0x14050DB28 (MiUnlockSystemCacheInit.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiReadyReservedView @ 0x140523988 (MiReadyReservedView.c)
 *     MiInitializeSystemCache @ 0x14086A918 (MiInitializeSystemCache.c)
 */

__int64 __fastcall MiObtainSystemCacheView(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // r13
  _QWORD *v5; // r14
  int v6; // r15d
  int *v7; // rbx
  unsigned __int8 CurrentIrql; // r12
  unsigned int v10; // edi
  int i; // edx
  struct _KTHREAD *CurrentThread; // rsi
  AutoBoost *v13; // rax
  AutoBoost *v14; // rdi
  __int64 v15; // rcx
  KIRQL v17; // al
  unsigned __int64 v18; // rdi
  int v19; // esi
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // eax
  unsigned int v24; // esi
  _QWORD *v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rdx
  _QWORD *v28; // rsi
  _QWORD *v29; // rcx
  __int64 v30; // rax
  unsigned int v31; // edx
  __int64 v32; // rax
  _QWORD *v33; // rax
  int v34; // eax
  _QWORD *v35; // rcx
  __int64 v36; // r9
  _QWORD ***v37; // r9
  _DWORD *v38; // rcx
  __int64 v39; // rcx
  signed __int32 v40[8]; // [rsp+0h] [rbp-58h] BYREF
  _QWORD *v41; // [rsp+20h] [rbp-38h] BYREF
  _QWORD **v42; // [rsp+28h] [rbp-30h]
  __int64 retaddr; // [rsp+58h] [rbp+0h]
  __int64 v44; // [rsp+60h] [rbp+8h] BYREF

  v4 = 0LL;
  v42 = &v41;
  v5 = (_QWORD *)(a1 + 2688);
  v6 = 0;
  v41 = &v41;
  v7 = (int *)(a1 + 2752);
  v44 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
  {
    v10 = 0;
    if ( _interlockedbittestandset(v7, 0x1Fu) )
      v10 = ExpWaitForSpinLockExclusiveAndAcquire(v7, CurrentIrql);
    for ( i = *v7; (*v7 & 0xBFFFFFFF) != 0x80000000; i = *v7 )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedOr(v7, 0x40000000u);
      if ( (++v10 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v10);
      }
      else
      {
        _mm_pause();
      }
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
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
        *v7 = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v7, retaddr);
    }
    else
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
        *v7 = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v7, retaddr);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v13 = (AutoBoost *)KeAbPreAcquire(a1 + 2760, 0LL, 0LL, a4);
    v14 = v13;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 2760), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 2760), v13, a1 + 2760);
    if ( v14 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        *((_BYTE *)v14 + 33) |= 2u;
      else
        *((_BYTE *)v14 + 10) = 1;
    }
    v15 = a1;
    if ( !*(_BYTE *)(a1 + 22300) )
    {
      if ( !(unsigned int)MiInitializeSystemCache(a1) )
      {
        MiUnlockSystemCacheInit(a1, CurrentThread);
        return 0LL;
      }
      v17 = ExAcquireSpinLockExclusive(v7);
      v18 = v17;
      *(_BYTE *)(a1 + 22300) = 1;
      if ( v17 == 17 )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
          *v7 = 0;
        else
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v7, retaddr);
      }
      else
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
          *v7 = 0;
        else
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v7, retaddr);
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v18);
        __writecr8(v18);
      }
      v15 = a1;
    }
    MiUnlockSystemCacheInit(v15, CurrentThread);
    ExAcquireSpinLockExclusive(v7);
    v6 = v44;
  }
  _InterlockedOr(v40, 0);
  v19 = KiTbFlushTimeStamp;
  if ( *(_QWORD *)(a1 + 2576) )
  {
    v20 = *(_DWORD *)(a1 + 2584);
    if ( (unsigned int)(KiTbFlushTimeStamp - v20) > 2 || (v20 & 1) == 0 && (unsigned int)(KiTbFlushTimeStamp - v20) >= 2 )
      MiInsertReadiedSystemCacheViews(a1, (_QWORD *)(a1 + 2560));
  }
  if ( *(_QWORD *)(a1 + 2608) )
  {
    v21 = *(_DWORD *)(a1 + 2616);
    if ( (unsigned int)(v19 - v21) > 2 || (v21 & 1) == 0 && (unsigned int)(v19 - v21) >= 2 )
      MiInsertReadiedSystemCacheViews(a1, (_QWORD *)(a1 + 2592));
  }
  if ( *(_QWORD *)(a1 + 2640) )
  {
    v22 = *(_DWORD *)(a1 + 2648);
    if ( (unsigned int)(v19 - v22) > 2 || (v22 & 1) == 0 && (unsigned int)(v19 - v22) >= 2 )
      MiInsertReadiedSystemCacheViews(a1, (_QWORD *)(a1 + 2624));
  }
  if ( *(_QWORD *)(a1 + 2672) )
  {
    v23 = *(_DWORD *)(a1 + 2680);
    v24 = v19 - v23;
    if ( v24 > 2 || (v23 & 1) == 0 && v24 >= 2 )
      MiInsertReadiedSystemCacheViews(a1, (_QWORD *)(a1 + 2656));
  }
  if ( v5[2] )
  {
    v25 = (_QWORD *)*v5;
    if ( *(_QWORD **)(*v5 + 8LL) == v5 )
    {
      v26 = *v25;
      if ( *(_QWORD **)(*v25 + 8LL) == v25 )
      {
        *v5 = v26;
        v27 = a1 + 2720;
        *(_QWORD *)(v26 + 8) = v5;
        v25[4] = v25[4] & 0x3FFFFFFFFFFFFFFFLL | 0x8000000000000000uLL;
        --v5[2];
        goto LABEL_103;
      }
    }
LABEL_111:
    __fastfail(3u);
  }
  v28 = (_QWORD *)(a1 + 2720);
  v29 = *(_QWORD **)(a1 + 2720);
  if ( v29 != (_QWORD *)(a1 + 2720) )
  {
    if ( (_QWORD *)v29[1] != v28 )
      goto LABEL_111;
    v30 = *v29;
    if ( *(_QWORD **)(*v29 + 8LL) != v29 )
      goto LABEL_111;
    *v28 = v30;
    *(_QWORD *)(v30 + 8) = v28;
    --*(_QWORD *)(a1 + 2736);
    v31 = 0;
    do
    {
      while ( 1 )
      {
        v32 = v29[4] & 0x3FFFFFFFFFFFFFFFLL;
        if ( v31 )
          break;
        v29[4] = v32 | 0x8000000000000000uLL;
        v29 += 5;
        v31 = 1;
      }
      v29[4] = v32;
      v33 = (_QWORD *)v5[1];
      if ( (_QWORD *)*v33 != v5 )
        goto LABEL_111;
      *v29 = v5;
      ++v31;
      v29[1] = v33;
      *v33 = v29;
      v5[1] = v29;
      v29 += 5;
    }
    while ( v31 < 8 );
    v5[2] += 7LL;
    v25 = v29 - 40;
    v27 = a1 + 2720;
    if ( v29 != (_QWORD *)320 )
    {
LABEL_103:
      v34 = *(_DWORD *)(a1 + 4);
      v42 = &v41;
      v41 = &v41;
      while ( 1 )
      {
        v35 = *(_QWORD **)v27;
        if ( *(_QWORD *)v27 == v27 || (v34 & 1) == 0 && *(_QWORD *)(v27 + 16) <= 0x20uLL )
          break;
        if ( v35[1] != v27 )
          goto LABEL_111;
        v36 = *v35;
        if ( *(_QWORD **)(*v35 + 8LL) != v35 )
          goto LABEL_111;
        *(_QWORD *)v27 = v36;
        *(_QWORD *)(v36 + 8) = v27;
        v37 = (_QWORD ***)v42;
        --*(_QWORD *)(v27 + 16);
        if ( *v37 != &v41 )
          goto LABEL_111;
        v35[1] = v37;
        *v35 = &v41;
        *v37 = (_QWORD **)v35;
        v42 = (_QWORD **)v35;
      }
      v38 = (_DWORD *)(a1 + 2752);
      if ( CurrentIrql == 17 )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
          *v38 = 0;
        else
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v38, retaddr);
      }
      else
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
          *v38 = 0;
        else
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v38, retaddr);
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        __writecr8(CurrentIrql);
      }
      if ( !v25 )
        goto LABEL_126;
      goto LABEL_125;
    }
  }
  v25 = (_QWORD *)MiConsumeSystemCacheTbFlushNeededView(a1, 0x400uLL);
  v27 = a1 + 2720;
  if ( v25 )
    goto LABEL_103;
  if ( CurrentIrql == 17 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
      *v7 = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v7, retaddr);
  }
  else
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
      *v7 = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v7, retaddr);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  v25 = MiExpandSystemCache((volatile signed __int32 *)a1);
  if ( !v25 )
  {
    ExAcquireSpinLockExclusive(v7);
    v6 = 1;
    v25 = (_QWORD *)MiConsumeSystemCacheTbFlushNeededView(a1, 1uLL);
    v27 = a1 + 2720;
    goto LABEL_103;
  }
LABEL_125:
  v4 = v25[2];
LABEL_126:
  if ( v6 )
  {
    v44 = 0LL;
    if ( CcInitializationComplete )
    {
      if ( CcNumberOfMappedVacbs )
      {
        v39 = *(_QWORD *)(*(_QWORD *)(a1 + 256) + 8LL);
        if ( v39 )
        {
          if ( (unsigned int)CcUnmapInactiveViewsInternal(v39, 64LL, 0LL, &v44) )
          {
            if ( v4 )
              MiReleaseSystemCacheView(0LL, v4);
            v4 = v44;
            MiReadyReservedView(a1, v44);
          }
        }
      }
    }
  }
  if ( v41 != &v41 )
    MiReturnSystemCacheRegionsToKva(a1, &v41);
  return v4;
}
