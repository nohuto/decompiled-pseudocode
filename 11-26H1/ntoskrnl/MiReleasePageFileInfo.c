/*
 * XREFs of MiReleasePageFileInfo @ 0x1402DAD50
 * Callers:
 *     MiProbeUnlockPage @ 0x14028B900 (MiProbeUnlockPage.c)
 *     MiLockCode @ 0x14029602C (MiLockCode.c)
 *     MiOutSwapWorkingSetPte @ 0x140296850 (MiOutSwapWorkingSetPte.c)
 *     MiProcessWsInSwapFault @ 0x14029EFBC (MiProcessWsInSwapFault.c)
 *     MiInPageSingleKernelStack @ 0x1402A0214 (MiInPageSingleKernelStack.c)
 *     MiWalkImageReleasePage @ 0x1402CC6DC (MiWalkImageReleasePage.c)
 *     MiSectionProtectPageFilePte @ 0x1402CF8E8 (MiSectionProtectPageFilePte.c)
 *     MiWalkVaRange @ 0x1402D3560 (MiWalkVaRange.c)
 *     MiActOnPte @ 0x1402D4420 (MiActOnPte.c)
 *     MiProtoFaultGetProtection @ 0x1402D93F0 (MiProtoFaultGetProtection.c)
 *     MiDecommitPrivatePageTail @ 0x1402DB300 (MiDecommitPrivatePageTail.c)
 *     MiDecommitSharedPageTail @ 0x1402DBF60 (MiDecommitSharedPageTail.c)
 *     MiPfnShareCountIsZero @ 0x1402DC770 (MiPfnShareCountIsZero.c)
 *     MiMigratePfn @ 0x1402F6990 (MiMigratePfn.c)
 *     MiCompleteTransitionPfnFault @ 0x140302030 (MiCompleteTransitionPfnFault.c)
 *     MiResolveProtoCombine @ 0x1403089FC (MiResolveProtoCombine.c)
 *     MiInsertPurgedPages @ 0x140309EC4 (MiInsertPurgedPages.c)
 *     MiCombineInitialFinish @ 0x14030A2B4 (MiCombineInitialFinish.c)
 *     MiHandleForkValidPrivatePte @ 0x14030ADC0 (MiHandleForkValidPrivatePte.c)
 *     MiHandleForkPagefilePte @ 0x14030CE54 (MiHandleForkPagefilePte.c)
 *     MiHandleForkTransitionPte @ 0x14030E420 (MiHandleForkTransitionPte.c)
 *     MiTrimSystemImagePages @ 0x14030F0A4 (MiTrimSystemImagePages.c)
 *     MiWsleFree @ 0x140319990 (MiWsleFree.c)
 *     MiMakePteClean @ 0x14031A2A0 (MiMakePteClean.c)
 *     MiLockPageAndSetDirty @ 0x14031A7E4 (MiLockPageAndSetDirty.c)
 *     MiLockPageTablePage @ 0x14031A8E0 (MiLockPageTablePage.c)
 *     MiPfnReferenceCountIsZero @ 0x14031C374 (MiPfnReferenceCountIsZero.c)
 *     MiHardFaultPageRelease @ 0x14031C920 (MiHardFaultPageRelease.c)
 *     MiDeleteMergedPte @ 0x14033C800 (MiDeleteMergedPte.c)
 *     MiBuildReservationCluster @ 0x14033D2B4 (MiBuildReservationCluster.c)
 *     MiDeleteTransitionPte @ 0x14033E7F0 (MiDeleteTransitionPte.c)
 *     MiReleasePageFileSpace @ 0x14033ECA0 (MiReleasePageFileSpace.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x14033F350 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiDecommitHandlePageFileFormatPte @ 0x140360BD0 (MiDecommitHandlePageFileFormatPte.c)
 *     MiReservePageFileSpace @ 0x1403670E8 (MiReservePageFileSpace.c)
 *     MiReservePageFileSpaceForPage @ 0x1403676AC (MiReservePageFileSpaceForPage.c)
 *     MiCompleteSecureProcessFault @ 0x14038AED0 (MiCompleteSecureProcessFault.c)
 *     MiSetSystemCodeProtection @ 0x14038B984 (MiSetSystemCodeProtection.c)
 *     MmSetAddressRangeModifiedEx @ 0x14039A698 (MmSetAddressRangeModifiedEx.c)
 *     MiDeleteClusterPage @ 0x1403C6268 (MiDeleteClusterPage.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x140404DD0 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiUnlockStoreLockedPages @ 0x1404075E4 (MiUnlockStoreLockedPages.c)
 *     MiWriteCompletePfn @ 0x1404077B0 (MiWriteCompletePfn.c)
 *     MiStoreWriteModifiedPagePostIssue @ 0x140408014 (MiStoreWriteModifiedPagePostIssue.c)
 *     MiStoreWriteProcessFailedPages @ 0x140409734 (MiStoreWriteProcessFailedPages.c)
 *     MiWriteComplete @ 0x14040A870 (MiWriteComplete.c)
 *     MiMakeOutswappedPageResident @ 0x14040BF9C (MiMakeOutswappedPageResident.c)
 *     MiPurgeSubsection @ 0x140422170 (MiPurgeSubsection.c)
 *     MiSetPagesModified @ 0x14045BE6C (MiSetPagesModified.c)
 *     MiStoreMarkLockedPagesModified @ 0x14045CC24 (MiStoreMarkLockedPagesModified.c)
 *     MiProtectPagedPool @ 0x1404B84A4 (MiProtectPagedPool.c)
 *     MiMakeProtoPoolReadOnly @ 0x1404C57B8 (MiMakeProtoPoolReadOnly.c)
 *     MiFreeModifiedReservations @ 0x1404DC3E4 (MiFreeModifiedReservations.c)
 *     MmUpdateUserShadowStackValue @ 0x1404E0BFC (MmUpdateUserShadowStackValue.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x140514568 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiDiscardPteTransitionPage @ 0x1405287F0 (MiDiscardPteTransitionPage.c)
 *     MiLockDriverPageRange @ 0x1406E57E8 (MiLockDriverPageRange.c)
 *     MiReplaceImportEntry @ 0x1406E6D18 (MiReplaceImportEntry.c)
 *     MiDiscardPte @ 0x1406EEED0 (MiDiscardPte.c)
 *     MmDbgMarkPfnModifiedWorker @ 0x1406FEFFC (MmDbgMarkPfnModifiedWorker.c)
 *     MiScanPagefileSpace @ 0x14086C170 (MiScanPagefileSpace.c)
 *     MiFreeReservationRun @ 0x140AC1DFC (MiFreeReservationRun.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021AAD4 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402474C0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140249B40 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     MiFlushSingleTbEntry @ 0x140285050 (MiFlushSingleTbEntry.c)
 *     MiUpdatePageFileHighInPte @ 0x14028C010 (MiUpdatePageFileHighInPte.c)
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     MiCoalescePageFileBitmapsCache @ 0x14044C2E0 (MiCoalescePageFileBitmapsCache.c)
 *     MiPageHashBugCheck @ 0x14052F994 (MiPageHashBugCheck.c)
 *     RtlpInterlockedPushEntrySList @ 0x140730CD0 (RtlpInterlockedPushEntrySList.c)
 */

char __fastcall MiReleasePageFileInfo(struct _KEVENT *a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rbx
  __int64 v5; // r15
  __int64 v6; // rdi
  __int64 v7; // r13
  volatile signed __int32 *v8; // rsi
  KIRQL v9; // r12
  unsigned int v10; // r14d
  volatile signed __int32 i; // ecx
  __int64 v12; // r14
  int v13; // r9d
  __int64 v14; // rcx
  unsigned __int64 v15; // r10
  __int64 *v16; // r11
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  unsigned __int64 updated; // rax
  unsigned __int64 *v20; // r11
  unsigned __int64 v21; // rcx
  __int64 v22; // rdx
  int v23; // edx
  struct _SLIST_ENTRY *v24; // rsi
  _SLIST_ENTRY *Next; // rcx
  int v26; // rdx^4
  char v27; // al
  int v28; // r9d
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rdx
  char v31; // r8
  __int64 v32; // r14
  int v33; // ecx
  int v34; // eax
  unsigned __int64 v35; // r9
  __int64 v36; // rdi
  __int64 v37; // rbx
  unsigned __int16 **v38; // r11
  unsigned __int16 *v39; // rcx
  unsigned int j; // r8d
  int v41; // ecx
  int v42; // eax
  _DWORD *v43; // rcx
  __int64 retaddr; // [rsp+78h] [rbp+0h]
  int v47; // [rsp+88h] [rbp+10h]

  v3 = a2;
  if ( qword_140E2D740 && (a2 & 0x10) == 0 )
    v3 = a2 & qword_140E2D748;
  v4 = HIDWORD(v3);
  v5 = (a2 >> 2) & 1;
  v6 = (a2 >> 3) & 1;
  v47 = 0;
  v7 = *((_QWORD *)&a1[929].Header.WaitListHead.Flink + ((unsigned __int16)a2 >> 12));
  v8 = (volatile signed __int32 *)(v7 + 200);
  if ( (a3 & 1) != 0 )
  {
    v9 = 17;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
    {
      v10 = 0;
      if ( _interlockedbittestandset(v8, 0x1Fu) )
        v10 = ExpWaitForSpinLockExclusiveAndAcquire((int *)(v7 + 200), 0xFFu);
      for ( i = *v8; (*v8 & 0xBFFFFFFF) != 0x80000000; i = *v8 )
      {
        if ( (i & 0x40000000) == 0 )
          _InterlockedOr(v8, 0x40000000u);
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
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented((int *)(v7 + 200), 0xFFu);
    }
  }
  else
  {
    v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v7 + 200));
  }
  v12 = *(_QWORD *)(v7 + 80);
  if ( (_DWORD)v5 )
  {
    *(_BYTE *)(*(_QWORD *)(v12 + 32) + (v4 >> 3)) &= ~(1 << (v4 & 7));
    ++*(_DWORD *)(v7 + 20);
  }
  if ( !(_DWORD)v6 )
    goto LABEL_75;
  v13 = 1;
  if ( (a3 & 2) == 0 )
  {
    v14 = *(_QWORD *)(v7 + 184);
    if ( v14 )
    {
      v15 = v14 + (unsigned int)(dword_140E35F4C * v4);
      v16 = (__int64 *)(((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v17 = *v16;
      if ( (*v16 & 1) != 0 )
      {
        v21 = 0LL;
        if ( *(_DWORD *)v15 == 1 && !*(_DWORD *)&stru_140E2EB88.SavedApcStateFill[8] )
          MiPageHashBugCheck(0x62uLL, (unsigned int)v4, v15);
        if ( dword_140E35F50 && (v22 = *(_QWORD *)(v15 + 8)) != 0 )
        {
          if ( (v22 & 1) == 0 && !*(_DWORD *)&stru_140E2EB88.SavedApcStateFill[8] )
            MiPageHashBugCheck(0x61uLL, (unsigned int)v4, v15);
          v23 = *(_DWORD *)(v15 + 4);
          v21 = *(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFFEuLL;
        }
        else
        {
          v23 = 0;
        }
        *(_DWORD *)v15 = 1;
        if ( dword_140E35F50 )
        {
          *(_QWORD *)(v15 + 8) = v21;
          *(_DWORD *)(v15 + 4) = v23;
        }
        v24 = (struct _SLIST_ENTRY *)(48 * ((v17 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
        Next = v24[1].Next;
        v26 = HIDWORD(Next);
        if ( qword_140E2D740 && ((unsigned __int8)Next & 0x10) == 0 )
          v26 = HIDWORD(qword_140E2D748) & HIDWORD(Next);
        if ( Next )
        {
          if ( qword_140E2D740 )
          {
            v27 = (char)Next;
            v28 = qword_140E2D748 & (unsigned int)Next;
            LODWORD(Next) = (unsigned int)Next & 0xFFFFFFEF;
            if ( (v27 & 0x10) == 0 )
              LODWORD(Next) = v28;
          }
        }
        v29 = (unsigned int)Next | ((unsigned __int64)(unsigned int)(v26 - 1) << 32);
        if ( qword_140E2D740 )
        {
          if ( (qword_140E2D740 & v29) != 0 )
            v29 |= 0x10uLL;
          else
            v29 |= qword_140E2D740;
        }
        v24[1].Next = (_SLIST_ENTRY *)v29;
        if ( v26 == 1 )
        {
          --*(_DWORD *)(v7 + 176);
          *v16 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
          MiFlushSingleTbEntry(v15, 2LL);
          RtlpInterlockedPushEntrySList((PSLIST_HEADER)(v7 + 48), v24);
        }
        v13 = 1;
      }
      else
      {
        v18 = *v16;
        if ( qword_140E2D740 )
        {
          HIDWORD(v18) = HIDWORD(*v16);
          if ( (v17 & 0x10) == 0 )
            HIDWORD(v18) = HIDWORD(qword_140E2D748) & HIDWORD(v17);
        }
        updated = MiUpdatePageFileHighInPte(*v16, HIDWORD(v18) - 1);
        *v20 = updated;
      }
    }
  }
  v30 = v4 >> 3;
  v31 = v4 & 7;
  if ( (*(_BYTE *)(v7 + 172) & 0x40) == 0 )
  {
    *(_BYTE *)(*(_QWORD *)(v12 + 16) + v30) &= ~(1 << v31);
    v41 = *(_DWORD *)(v7 + 12);
    *(_DWORD *)(v7 + 12) = v41 + 1;
    if ( (unsigned int)v4 < *(_DWORD *)(v7 + 88) )
      *(_DWORD *)(v7 + 88) = v4;
    ++*(_DWORD *)(v7 + 96);
    if ( !v41 )
    {
      v42 = 0;
      if ( (*(_BYTE *)(v7 + 174) & 1) != 0 )
        v42 = v13;
      v47 = v42;
    }
LABEL_75:
    if ( (_DWORD)v5 || (LOBYTE(v34) = _bittest64(*(const signed __int64 **)(v12 + 32), v4), !(_BYTE)v34) )
    {
      if ( (_DWORD)v6 || (LOBYTE(v34) = _bittest64(*(const signed __int64 **)(v12 + 16), v4), !(_BYTE)v34) )
      {
        MiCoalescePageFileBitmapsCache(v7, (unsigned int)v5, (unsigned int)v4);
        LOBYTE(v34) = _InterlockedExchange(
                        (volatile __int32 *)(*(_QWORD *)(v7 + 224) + 1000LL),
                        (*(_DWORD *)(*(_QWORD *)(v7 + 224) + 1000LL) & 0xFFFFFC00 | 0x200) + 1024);
      }
    }
    goto LABEL_80;
  }
  v32 = *(_QWORD *)(v7 + 224);
  *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v7 + 80) + 32LL) + v30) &= ~(1 << v31);
  if ( (unsigned int)v4 < *(_DWORD *)(v7 + 104) )
    *(_DWORD *)(v7 + 104) = v4;
  v33 = *(_DWORD *)(v7 + 168);
  LOBYTE(v34) = v33 + 1;
  *(_DWORD *)(v7 + 168) = v33 + 1;
  if ( v33 == 255 )
  {
LABEL_68:
    LOBYTE(v34) = KeSetEvent((PRKEVENT)(v32 + 1424), 0, 0);
    goto LABEL_80;
  }
  v35 = *(_QWORD *)(v32 + 22464);
  if ( v35 < 0x32 )
  {
    v34 = 0;
    if ( KeNumberNodes )
    {
      v36 = *(_QWORD *)(v32 + 16) + 13856LL;
      while ( 2 )
      {
        v37 = 0LL;
        v38 = (unsigned __int16 **)v36;
        do
        {
          v39 = *v38;
          for ( j = 0; j < dword_140E2D78C; v39 += 8 )
          {
            v35 += *v39;
            if ( v35 >= 0x32 )
              goto LABEL_80;
            ++j;
          }
          ++v37;
          ++v38;
        }
        while ( v37 <= 1 );
        v36 += 56320LL;
        if ( ++v34 < (unsigned int)(unsigned __int16)KeNumberNodes )
          continue;
        break;
      }
    }
    goto LABEL_68;
  }
LABEL_80:
  v43 = (_DWORD *)(v7 + 200);
  if ( (a3 & 1) != 0 || v9 == 17 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0
      || (LOBYTE(v34) = stru_140F11D08.WaitStatus, LODWORD(stru_140F11D08.WaitStatus)) )
    {
      *v43 = 0;
    }
    else
    {
      LOBYTE(v34) = ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v43, retaddr);
    }
  }
  else
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
      *v43 = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v43, retaddr);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v9);
    LOBYTE(v34) = v9;
    __writecr8(v9);
  }
  if ( v47 )
    LOBYTE(v34) = KeSetEvent(a1 + 42, 0, 0);
  return v34;
}
