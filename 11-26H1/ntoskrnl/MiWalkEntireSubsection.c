/*
 * XREFs of MiWalkEntireSubsection @ 0x14031D3A0
 * Callers:
 *     MiWalkEntireImage @ 0x140ACA024 (MiWalkEntireImage.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402461A0 (KeDelayExecutionThread.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     MiReleaseFreshPage @ 0x1402916F0 (MiReleaseFreshPage.c)
 *     MiLockSpecialPurposeMemoryCachedPage @ 0x1402A96FC (MiLockSpecialPurposeMemoryCachedPage.c)
 *     MiWalkImageReleasePage @ 0x1402AE49C (MiWalkImageReleasePage.c)
 *     MiUnlockProtoPoolPage @ 0x1402B5C00 (MiUnlockProtoPoolPage.c)
 *     MiInvalidPteConforms @ 0x1402D64B0 (MiInvalidPteConforms.c)
 *     MiLockProtoPoolPage @ 0x1402D7150 (MiLockProtoPoolPage.c)
 *     MiAddLockedPageCharge @ 0x1402D7DB0 (MiAddLockedPageCharge.c)
 *     MiUnlinkPageFromListEx @ 0x1402D92D0 (MiUnlinkPageFromListEx.c)
 *     MiGetPfnSlabType @ 0x1402DFCC0 (MiGetPfnSlabType.c)
 *     MiCheckProtoPtePageState @ 0x14031DB30 (MiCheckProtoPtePageState.c)
 *     MiDiscardTransitionPfnEx @ 0x14036BD80 (MiDiscardTransitionPfnEx.c)
 *     MiStartingOffset @ 0x14036EC40 (MiStartingOffset.c)
 *     MiGetEffectivePagePriorityThread @ 0x140373760 (MiGetEffectivePagePriorityThread.c)
 *     MiUseSlabAllocator @ 0x140375BA4 (MiUseSlabAllocator.c)
 *     MiCheckSlabPage @ 0x14038C61C (MiCheckSlabPage.c)
 *     MmAccessFault @ 0x1403A40F0 (MmAccessFault.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     MiWalkReadInProgressPte @ 0x14070A398 (MiWalkReadInProgressPte.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     MiMakeRestOfImageHot @ 0x1408816B4 (MiMakeRestOfImageHot.c)
 *     MiPageHasRelocations @ 0x1409A0720 (MiPageHasRelocations.c)
 *     MiPrefetchControlArea @ 0x140A58548 (MiPrefetchControlArea.c)
 *     MiDereferenceSubsectionProtos @ 0x140A9AFD0 (MiDereferenceSubsectionProtos.c)
 *     MiFreeSubsectionProtos @ 0x140B26E04 (MiFreeSubsectionProtos.c)
 *     MiWalkEntireImagePageNeedsProcessing @ 0x140B61CD0 (MiWalkEntireImagePageNeedsProcessing.c)
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
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v28; // rbx
  int v29; // eax
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rcx
  unsigned int EffectivePagePriorityThread; // eax
  int v35; // edx
  int v36; // r9d
  int v37; // r8d
  int v38; // eax
  __int64 v39; // rbx
  signed __int64 *v40; // rbx
  volatile unsigned __int8 *v41; // rdx
  _BYTE *v42; // rdi
  unsigned int v43; // r9d
  __int64 v44; // rdx
  __int64 v45; // rcx
  bool v46; // zf
  void *v47; // [rsp+30h] [rbp-98h]
  __int64 v48; // [rsp+40h] [rbp-88h]
  __int64 *v49; // [rsp+48h] [rbp-80h]
  __int64 v50; // [rsp+50h] [rbp-78h]
  __int64 *v51; // [rsp+58h] [rbp-70h]
  struct _KTHREAD *CurrentThread; // [rsp+60h] [rbp-68h]
  __int64 v53; // [rsp+68h] [rbp-60h]
  __int64 v54; // [rsp+D0h] [rbp+8h] BYREF
  int v55; // [rsp+D8h] [rbp+10h]
  int v56; // [rsp+E0h] [rbp+18h] BYREF
  __int64 *v57; // [rsp+E8h] [rbp+20h]

  v2 = a1 + 104;
  v48 = *(_QWORD *)a1;
  v3 = 17;
  LOBYTE(v54) = 17;
  v4 = *(__int64 **)(a1 + 24);
  CurrentThread = KeGetCurrentThread();
  v53 = *(_QWORD *)(a1 + 8);
  v49 = *(__int64 **)v53;
  v50 = *(_QWORD *)(a1 + 48);
  v5 = &v4[*(unsigned int *)(v53 + 44)];
  v6 = 0LL;
  v51 = 0LL;
  v7 = 0;
  v55 = 0;
  *(_DWORD *)(a1 + 120) = *(_DWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 104) = v53;
  *(_DWORD *)(a1 + 124) = *(_DWORD *)(v48 + 20);
  v8 = *(unsigned int *)(a1 + 16);
  v57 = v5;
  *(_QWORD *)(a1 + 112) = MiStartingOffset(v53, v4, v8);
  *(_QWORD *)(v2 + 40) = *(_QWORD *)(v48 + 8);
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
      MiUnlockProtoPoolPage(v6, v3, v9);
    }
    if ( (*(_DWORD *)(a1 + 20) & 1) != 0 )
      v17 = MiLockProtoPoolPage((ULONG_PTR)v4, &v54);
    else
      v17 = MiCheckProtoPtePageState(v49, v4, 0LL, &v54);
    v6 = v17;
    if ( !v17 )
    {
      if ( (*(_DWORD *)(a1 + 20) & 1) != 0 )
      {
        MmAccessFault(2uLL, (ULONG_PTR)v4);
      }
      else
      {
        v30 = (unsigned __int64)(4096 - ((unsigned __int16)v4 & 0xFFFu)) >> 3;
        *(_QWORD *)(v2 + 8) += v30 << 12;
        *(_DWORD *)(v2 + 16) += v30;
        v4 += v30;
      }
      v3 = v54;
      goto LABEL_2;
    }
    v3 = v54;
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
          MiUnlockProtoPoolPage(v6, v3, v9);
          v6 = 0LL;
          if ( (*(_DWORD *)(v48 + 24) & 0x40) != 0
            && !(unsigned int)MiPageHasRelocations(*(_QWORD *)(v50 + 32), *(unsigned int *)(v2 + 16), 1LL) )
          {
            goto LABEL_21;
          }
          EffectivePagePriorityThread = MiGetEffectivePagePriorityThread(CurrentThread);
          v5 = v57;
          v36 = EffectivePagePriorityThread;
          if ( EffectivePagePriorityThread > 5 )
            v36 = 5;
          if ( v4 == v51 )
          {
            v37 = 4096;
          }
          else
          {
            v51 = v4;
            v37 = (unsigned int)(v57 - v4) << 12;
          }
          v38 = MiPrefetchControlArea((int)v49, v35, v37, v36, 2, *(_DWORD *)(a1 + 16), v47);
          v11 = 0xFFFFDE0000000000uLL;
          v10 = 0xFFFFFFFFFFLL;
          v12 = 0x40000000000000LL;
          if ( v38 < 0 )
          {
            KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
            goto LABEL_2;
          }
          goto LABEL_3;
        }
        if ( MiInvalidPteConforms(*v4) )
        {
          if ( qword_140E2D8C0 )
          {
            v14 &= ~0x10uLL;
            if ( (v13 & 0x10) == 0 )
              v14 = qword_140E2D8C8 & v13;
          }
LABEL_12:
          v15 = v10 & (v14 >> 12);
          if ( v15 <= qword_140E2D920 )
          {
            v16 = v11 + 48 * v15;
            if ( (*(_QWORD *)(v16 + 40) & v12) != 0 )
              break;
          }
        }
      }
      v56 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v56);
        while ( *(__int64 *)(v16 + 24) < 0 );
      }
      if ( *v4 != v13 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        continue;
      }
      break;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v16 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x20) != 0 )
      v16 = MiLockSpecialPurposeMemoryCachedPage(v16, 0);
    if ( !v16 )
      goto LABEL_20;
    v18 = *v4;
    v19 = *v4;
    if ( (*v4 & 1) == 0 )
    {
      if ( qword_140E2D8C0 )
      {
        v19 &= ~0x10uLL;
        if ( (v18 & 0x10) == 0 )
          v19 = v18 & qword_140E2D8C8;
      }
    }
    v20 = (v19 >> 12) & 0xFFFFFFFFFFLL;
    if ( (*(_DWORD *)(v48 + 24) & 8) != 0 && ((*(_QWORD *)(v16 + 40) >> 60) & 7) == 3
      || (v21 = *(_QWORD *)(v16 + 16), (v21 & 0x400) == 0)
      && (v9 = (unsigned int)(*(_DWORD *)(v48 + 24) | *(_DWORD *)(a1 + 20)),
          ((*(_BYTE *)(v48 + 24) | *(_BYTE *)(a1 + 20)) & 1) == 0) )
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
        v55 = 0;
        v7 = 0;
        goto LABEL_22;
      }
LABEL_64:
      v7 = v55;
      goto LABEL_21;
    }
    if ( (*(_DWORD *)(v48 + 24) & 1) != 0 )
    {
      if ( (v18 & 1) != 0 )
        goto LABEL_63;
      v9 = v21 >> 16;
      v31 = v21 >> 2;
      if ( (v21 & 0x400) == 0 )
        v31 = v21 >> 16;
      if ( (v31 & 1) == 0 )
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
      if ( (*(_DWORD *)(v48 + 24) & 0x21) == 0x20
        && *(int *)(v16 + 32) >= 0
        && (*(_QWORD *)(v16 + 40) & 0x20000000000000LL) == 0
        && (v28 = *(_QWORD *)(a1 + 64),
            v29 = MiPageToNode(v20),
            (unsigned int)MiUseSlabAllocator(v28, v53, *(_QWORD *)(v16 + 16), v29, a1 + 96))
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
        v32 = *(_QWORD *)(v16 + 16);
        v33 = v32 >> 2;
        if ( (v32 & 0x400) == 0 )
          v33 = v32 >> 16;
        if ( (v33 & 1) != 0 )
          *(_BYTE *)(v2 + 32) = 1;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v3 = v54;
      MiUnlockProtoPoolPage(v6, (unsigned __int8)v54, v22);
      v6 = 0LL;
      if ( *(_BYTE *)(v2 + 32) )
      {
        v24 = *(unsigned int *)(v48 + 24);
        if ( (v24 & 1) == 0 && (*(_BYTE *)(a1 + 20) & 8) == 0 )
        {
          if ( (unsigned int)MiWalkEntireImagePageNeedsProcessing(v50, *(unsigned int *)(v2 + 16)) )
          {
            MiMakeRestOfImageHot(a1);
            *(_DWORD *)(a1 + 20) |= 8u;
          }
        }
      }
      *(_DWORD *)(v2 + 48) = 0;
      *(_QWORD *)(v2 + 24) = v20;
      v55 = guard_dispatch_icall_no_overrides(v2, v23, v24);
      v7 = v55;
      MiWalkImageReleasePage(a1, v25);
      if ( v7 < 0 )
      {
        if ( v7 == -1073741670 )
          *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 113;
        else
          *(_DWORD *)&stru_140E2D2D0.WaitBlockFill10[8] = 114;
        goto LABEL_54;
      }
LABEL_21:
      ++*(_DWORD *)(v2 + 16);
      ++v4;
      *(_QWORD *)(v2 + 8) += 4096LL;
LABEL_22:
      v5 = v57;
      goto LABEL_2;
    }
    MiDiscardTransitionPfnEx(v16, 0LL, v9, v12);
    _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v10 = 0xFFFFFFFFFFLL;
    v7 = v55;
    v12 = 0x40000000000000LL;
    v5 = v57;
    v11 = 0xFFFFDE0000000000uLL;
    if ( (*(_DWORD *)(a1 + 20) & 1) == 0 )
      goto LABEL_21;
  }
  if ( v6 )
    MiUnlockProtoPoolPage(v6, v3, v9);
LABEL_54:
  v26 = *(_QWORD *)(a1 + 88);
  if ( v26 != -1 )
  {
    MiReleaseFreshPage(48 * v26 - 0x220000000000LL, v10, v9);
    *(_QWORD *)(a1 + 88) = -1LL;
  }
  *(_DWORD *)(a1 + 96) = 9;
  if ( *(_QWORD *)(a1 + 40) )
  {
    v54 = 0LL;
    v39 = *v49;
    --CurrentThread->SpecialApcDisable;
    v40 = (signed __int64 *)(v39 + 40);
    v42 = (_BYTE *)KeAbPreAcquire((__int64)v40, 0LL, 0LL, (struct _KLOCK_ENTRIES *)v12);
    if ( _InterlockedCompareExchange64(v40, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v40, 0, (LegacyAutoBoost *)v42, (struct _KTHREAD *)v40);
    if ( v42 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
      {
        LOBYTE(v41) = 2;
        AutoBoost::KiAbpSetEntryValue((AutoBoost *)(v42 + 33), v41, 1u, v43);
      }
      else
      {
        v42[10] = 1;
      }
    }
    MiDereferenceSubsectionProtos(v53, *(unsigned int *)(a1 + 16), &v54);
    if ( _InterlockedCompareExchange64(v40, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v40);
    KeAbPostRelease((unsigned __int64)v40);
    v46 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v46 && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v45, v44);
    MiFreeSubsectionProtos(&v54);
  }
  return (unsigned int)v7;
}
