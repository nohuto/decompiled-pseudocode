/*
 * XREFs of MiWalkEntireSubsection @ 0x14031B370
 * Callers:
 *     MiWalkEntireImage @ 0x140AC8434 (MiWalkEntireImage.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140244840 (KeDelayExecutionThread.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 *     MiPageToNode @ 0x140289710 (MiPageToNode.c)
 *     MiReleaseFreshPage @ 0x140292190 (MiReleaseFreshPage.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x1402AA2EC (MiLockSpecialPurposeMemoryCachedPage.c)
 *     MiWalkImageReleasePage @ 0x1402CC6DC (MiWalkImageReleasePage.c)
 *     MiUnlockProtoPoolPage @ 0x1402D3E40 (MiUnlockProtoPoolPage.c)
 *     MiInvalidPteConforms @ 0x1402F4430 (MiInvalidPteConforms.c)
 *     MiLockProtoPoolPage @ 0x1402F50D0 (MiLockProtoPoolPage.c)
 *     MiAddLockedPageCharge @ 0x1402F5D30 (MiAddLockedPageCharge.c)
 *     MiUnlinkPageFromListEx @ 0x1402F7250 (MiUnlinkPageFromListEx.c)
 *     MiGetPfnSlabType @ 0x1402FDC40 (MiGetPfnSlabType.c)
 *     MiCheckProtoPtePageState @ 0x14031BB00 (MiCheckProtoPtePageState.c)
 *     MiDiscardTransitionPfnEx @ 0x140369FE0 (MiDiscardTransitionPfnEx.c)
 *     MiStartingOffset @ 0x14036CEA0 (MiStartingOffset.c)
 *     MiGetEffectivePagePriorityThread @ 0x1403719B0 (MiGetEffectivePagePriorityThread.c)
 *     MiUseSlabAllocator @ 0x140373DF4 (MiUseSlabAllocator.c)
 *     MiCheckSlabPage @ 0x14038A86C (MiCheckSlabPage.c)
 *     MmAccessFault @ 0x1403A2390 (MmAccessFault.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x140444460 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     MiWalkReadInProgressPte @ 0x1407056C8 (MiWalkReadInProgressPte.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     MiMakeRestOfImageHot @ 0x14087B2B4 (MiMakeRestOfImageHot.c)
 *     MiPageHasRelocations @ 0x1409CF740 (MiPageHasRelocations.c)
 *     MiPrefetchControlArea @ 0x140A4F258 (MiPrefetchControlArea.c)
 *     MiDereferenceSubsectionProtos @ 0x140A96E50 (MiDereferenceSubsectionProtos.c)
 *     MiFreeSubsectionProtos @ 0x140B24964 (MiFreeSubsectionProtos.c)
 *     MiWalkEntireImagePageNeedsProcessing @ 0x140B5EB50 (MiWalkEntireImagePageNeedsProcessing.c)
 */

__int64 __fastcall MiWalkEntireSubsection(__int64 a1)
{
  __int64 v2; // r15
  unsigned __int8 v3; // si
  __int64 *v4; // r14
  __int64 *v5; // rdi
  __int64 v6; // r12
  int v7; // ebp
  __int64 v8; // r8
  __int64 v9; // r8
  __int64 v10; // rdx
  unsigned __int64 v11; // r10
  unsigned __int64 v12; // r9
  __int64 v13; // rbx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rcx
  unsigned __int64 v19; // rbp
  ULONG_PTR v20; // rbp
  unsigned __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v27; // rbx
  int v28; // eax
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rcx
  unsigned int EffectivePagePriorityThread; // eax
  int v34; // edx
  int v35; // r9d
  int v36; // r8d
  int v37; // eax
  __int64 v38; // rbx
  signed __int64 *v39; // rbx
  volatile unsigned __int8 *v40; // rdx
  _BYTE *v41; // rdi
  unsigned int v42; // r9d
  __int64 v43; // rdx
  __int64 v44; // rcx
  bool v45; // zf
  void *v46; // [rsp+30h] [rbp-98h]
  __int64 v47; // [rsp+40h] [rbp-88h]
  __int64 *v48; // [rsp+48h] [rbp-80h]
  __int64 v49; // [rsp+50h] [rbp-78h]
  __int64 *v50; // [rsp+58h] [rbp-70h]
  struct _KTHREAD *CurrentThread; // [rsp+60h] [rbp-68h]
  __int64 v52; // [rsp+68h] [rbp-60h]
  __int64 v53; // [rsp+D0h] [rbp+8h] BYREF
  int v54; // [rsp+D8h] [rbp+10h]
  int v55; // [rsp+E0h] [rbp+18h] BYREF
  __int64 *v56; // [rsp+E8h] [rbp+20h]

  v2 = a1 + 104;
  v47 = *(_QWORD *)a1;
  v3 = 17;
  LOBYTE(v53) = 17;
  v4 = *(__int64 **)(a1 + 24);
  CurrentThread = KeGetCurrentThread();
  v52 = *(_QWORD *)(a1 + 8);
  v48 = *(__int64 **)v52;
  v49 = *(_QWORD *)(a1 + 48);
  v5 = &v4[*(unsigned int *)(v52 + 44)];
  v6 = 0LL;
  v50 = 0LL;
  v7 = 0;
  v54 = 0;
  *(_DWORD *)(a1 + 120) = *(_DWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 104) = v52;
  *(_DWORD *)(a1 + 124) = *(_DWORD *)(v47 + 20);
  v8 = *(unsigned int *)(a1 + 16);
  v56 = v5;
  *(_QWORD *)(a1 + 112) = MiStartingOffset(v52, v4, v8);
  *(_QWORD *)(v2 + 40) = *(_QWORD *)(v47 + 8);
LABEL_2:
  v10 = 0xFFFFFFFFFFLL;
  v11 = 0xFFFFDE0000000000uLL;
  v12 = 0x40000000000000LL;
LABEL_3:
  while ( v4 < v5 )
  {
    if ( ((unsigned __int16)v4 & 0xFFF) != 0 )
    {
      if ( v6 )
        goto LABEL_6;
    }
    else if ( v6 )
    {
      MiUnlockProtoPoolPage(v6, v3);
    }
    if ( (*(_DWORD *)(a1 + 20) & 1) != 0 )
      v17 = MiLockProtoPoolPage((ULONG_PTR)v4, &v53);
    else
      v17 = MiCheckProtoPtePageState(v48, v4, 0LL, &v53);
    v6 = v17;
    if ( !v17 )
    {
      if ( (*(_DWORD *)(a1 + 20) & 1) != 0 )
      {
        MmAccessFault(2uLL, (ULONG_PTR)v4);
      }
      else
      {
        v29 = (unsigned __int64)(4096 - ((unsigned __int16)v4 & 0xFFFu)) >> 3;
        *(_QWORD *)(v2 + 8) += v29 << 12;
        *(_DWORD *)(v2 + 16) += v29;
        v4 += v29;
      }
      v3 = v53;
      goto LABEL_2;
    }
    v3 = v53;
    while ( 2 )
    {
      v11 = 0xFFFFDE0000000000uLL;
      v12 = 0x40000000000000LL;
      v10 = 0xFFFFFFFFFFLL;
      while ( 1 )
      {
LABEL_6:
        v13 = *v4;
        if ( (*v4 & 1) != 0 )
        {
          v14 = *v4;
          goto LABEL_12;
        }
        if ( (*v4 & 0xC00) != 0x800 )
        {
LABEL_20:
          if ( (*(_DWORD *)(a1 + 20) & 1) == 0 )
            goto LABEL_21;
          if ( (*v4 & 0x400) != 0 )
            goto LABEL_21;
          if ( (*v4 & 8) == 0 )
            goto LABEL_21;
          MiUnlockProtoPoolPage(v6, v3);
          v6 = 0LL;
          if ( (*(_DWORD *)(v47 + 24) & 0x40) != 0
            && !(unsigned int)MiPageHasRelocations(*(_QWORD *)(v49 + 32), *(unsigned int *)(v2 + 16), 1LL) )
          {
            goto LABEL_21;
          }
          EffectivePagePriorityThread = MiGetEffectivePagePriorityThread(CurrentThread);
          v5 = v56;
          v35 = EffectivePagePriorityThread;
          if ( EffectivePagePriorityThread > 5 )
            v35 = 5;
          if ( v4 == v50 )
          {
            v36 = 4096;
          }
          else
          {
            v50 = v4;
            v36 = (unsigned int)(v56 - v4) << 12;
          }
          v37 = MiPrefetchControlArea((int)v48, v34, v36, v35, 2, *(_DWORD *)(a1 + 16), v46);
          v11 = 0xFFFFDE0000000000uLL;
          v10 = 0xFFFFFFFFFFLL;
          v12 = 0x40000000000000LL;
          if ( v37 < 0 )
          {
            KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
            goto LABEL_2;
          }
          goto LABEL_3;
        }
        if ( MiInvalidPteConforms(*v4) )
        {
          if ( qword_140E2D740 )
          {
            v14 &= ~0x10uLL;
            if ( (v13 & 0x10) == 0 )
              v14 = qword_140E2D748 & v13;
          }
LABEL_12:
          v15 = v10 & (v14 >> 12);
          if ( v15 <= qword_140E2D7A0 )
          {
            v16 = v11 + 48 * v15;
            if ( (*(_QWORD *)(v16 + 40) & v12) != 0 )
              break;
          }
        }
      }
      v55 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v55);
        while ( *(__int64 *)(v16 + 24) < 0 );
      }
      if ( *v4 != v13 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        continue;
      }
      break;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(stru_140E2EB88.ThreadLock + 8 * ((*(_QWORD *)(v16 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x20) != 0 )
      v16 = MiLockSpecialPurposeMemoryCachedPage(v16, 0);
    if ( !v16 )
      goto LABEL_20;
    v18 = *v4;
    v19 = *v4;
    if ( (*v4 & 1) == 0 )
    {
      if ( qword_140E2D740 )
      {
        v19 &= ~0x10uLL;
        if ( (v18 & 0x10) == 0 )
          v19 = v18 & qword_140E2D748;
      }
    }
    v20 = (v19 >> 12) & 0xFFFFFFFFFFLL;
    if ( (*(_DWORD *)(v47 + 24) & 8) != 0 && ((*(_QWORD *)(v16 + 40) >> 60) & 7) == 3
      || (v21 = *(_QWORD *)(v16 + 16), (v21 & 0x400) == 0)
      && (v9 = (unsigned int)(*(_DWORD *)(v47 + 24) | *(_DWORD *)(a1 + 20)),
          ((*(_BYTE *)(v47 + 24) | *(_BYTE *)(a1 + 20)) & 1) == 0) )
    {
LABEL_63:
      _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      goto LABEL_64;
    }
    if ( (v18 & 1) == 0 && (*(_BYTE *)(v16 + 34) & 0x20) != 0 )
    {
      if ( (int)MiWalkReadInProgressPte(a1, v6, v16, v3) < 0 )
      {
        v6 = 0LL;
        v54 = 0;
        v7 = 0;
        goto LABEL_22;
      }
LABEL_64:
      v7 = v54;
      goto LABEL_21;
    }
    if ( (*(_DWORD *)(v47 + 24) & 1) != 0 )
    {
      if ( (v18 & 1) != 0 )
        goto LABEL_63;
      v9 = v21 >> 16;
      v30 = v21 >> 2;
      if ( (v21 & 0x400) == 0 )
        v30 = v21 >> 16;
      if ( (v30 & 1) == 0 )
        goto LABEL_63;
    }
    *(_DWORD *)(a1 + 80) = 8;
    if ( (v18 & 1) != 0 )
      goto LABEL_47;
    if ( (unsigned int)MiGetPfnSlabType(v16) == 9 && (*(_DWORD *)(v16 + 32) & 0x8000000) != 0 )
      *(_DWORD *)(a1 + 80) = HIBYTE(*(_DWORD *)(v16 + 32)) & 7;
    if ( (MiUnlinkPageFromListEx(v16, 0) & 3) == 0 )
    {
      v2 = a1 + 104;
      *(_QWORD *)(v16 + 24) &= 0xC000000000000000uLL;
LABEL_47:
      if ( (*(_DWORD *)(v47 + 24) & 0x21) == 0x20
        && *(int *)(v16 + 32) >= 0
        && (*(_QWORD *)(v16 + 40) & 0x20000000000000LL) == 0
        && (v27 = *(_QWORD *)(a1 + 64),
            v28 = MiPageToNode(v20),
            (unsigned int)MiUseSlabAllocator(v27, v52, *(_QWORD *)(v16 + 16), v28, a1 + 96))
        && (v12 = *(unsigned int *)(a1 + 96), (unsigned int)v12 <= 4)
        && ((unsigned int)MiGetPfnSlabType(v16) == 9 || !(unsigned int)MiCheckSlabPage(v16, (unsigned int)v12, 4LL)) )
      {
        *(_DWORD *)(a1 + 20) |= 4u;
      }
      else
      {
        *(_DWORD *)(a1 + 20) &= ~4u;
      }
      MiAddLockedPageCharge(v16, 1, v9, v12);
      *(_BYTE *)(v2 + 32) = 0;
      if ( (*(_DWORD *)(a1 + 20) & 0x10) != 0 )
      {
        v31 = *(_QWORD *)(v16 + 16);
        v32 = v31 >> 2;
        if ( (v31 & 0x400) == 0 )
          v32 = v31 >> 16;
        if ( (v32 & 1) != 0 )
          *(_BYTE *)(v2 + 32) = 1;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v3 = v53;
      MiUnlockProtoPoolPage(v6, v53);
      v6 = 0LL;
      if ( *(_BYTE *)(v2 + 32) )
      {
        v23 = *(unsigned int *)(v47 + 24);
        if ( (v23 & 1) == 0 && (*(_BYTE *)(a1 + 20) & 8) == 0 )
        {
          if ( (unsigned int)MiWalkEntireImagePageNeedsProcessing(v49, *(unsigned int *)(v2 + 16)) )
          {
            MiMakeRestOfImageHot(a1);
            *(_DWORD *)(a1 + 20) |= 8u;
          }
        }
      }
      *(_DWORD *)(v2 + 48) = 0;
      *(_QWORD *)(v2 + 24) = v20;
      v54 = guard_dispatch_icall_no_overrides(v2, v22, v23);
      v7 = v54;
      MiWalkImageReleasePage(a1, v24);
      if ( v7 < 0 )
      {
        if ( v7 == -1073741670 )
          *(_DWORD *)&stru_140E2D150.WaitBlockFill10[8] = 113;
        else
          *(_DWORD *)&stru_140E2D150.WaitBlockFill10[8] = 114;
        goto LABEL_54;
      }
LABEL_21:
      ++*(_DWORD *)(v2 + 16);
      ++v4;
      *(_QWORD *)(v2 + 8) += 4096LL;
LABEL_22:
      v5 = v56;
      goto LABEL_2;
    }
    MiDiscardTransitionPfnEx(v16, 0LL, v9, v12);
    _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v10 = 0xFFFFFFFFFFLL;
    v7 = v54;
    v12 = 0x40000000000000LL;
    v5 = v56;
    v11 = 0xFFFFDE0000000000uLL;
    if ( (*(_DWORD *)(a1 + 20) & 1) == 0 )
      goto LABEL_21;
  }
  if ( v6 )
    MiUnlockProtoPoolPage(v6, v3);
LABEL_54:
  v25 = *(_QWORD *)(a1 + 88);
  if ( v25 != -1 )
  {
    MiReleaseFreshPage(48 * v25 - 0x220000000000LL, v10, v9);
    *(_QWORD *)(a1 + 88) = -1LL;
  }
  *(_DWORD *)(a1 + 96) = 9;
  if ( *(_QWORD *)(a1 + 40) )
  {
    v53 = 0LL;
    v38 = *v48;
    --CurrentThread->SpecialApcDisable;
    v39 = (signed __int64 *)(v38 + 40);
    v41 = (_BYTE *)KeAbPreAcquire((__int64)v39, 0LL, 0LL, (struct _KLOCK_ENTRIES *)v12);
    if ( _InterlockedCompareExchange64(v39, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v39, 0, (LegacyAutoBoost *)v41, (struct _KTHREAD *)v39);
    if ( v41 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
      {
        LOBYTE(v40) = 2;
        AutoBoost::KiAbpSetEntryValue((AutoBoost *)(v41 + 33), v40, 1u, v42);
      }
      else
      {
        v41[10] = 1;
      }
    }
    MiDereferenceSubsectionProtos(v52, *(unsigned int *)(a1 + 16), &v53);
    if ( _InterlockedCompareExchange64(v39, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v39);
    KeAbPostRelease((unsigned __int64)v39);
    v45 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v45 && ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v44, v43);
    MiFreeSubsectionProtos(&v53);
  }
  return (unsigned int)v7;
}
