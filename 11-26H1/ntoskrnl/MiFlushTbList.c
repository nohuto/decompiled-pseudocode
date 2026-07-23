/*
 * XREFs of MiFlushTbList @ 0x14032B070
 * Callers:
 *     MmProtectPool @ 0x14024F9E4 (MmProtectPool.c)
 *     MiReleasePtes @ 0x140281250 (MiReleasePtes.c)
 *     MiFlushSingleTbEntry @ 0x1402845B0 (MiFlushSingleTbEntry.c)
 *     MiGetPteFromCopyList @ 0x1402849F0 (MiGetPteFromCopyList.c)
 *     MiLockCode @ 0x14029558C (MiLockCode.c)
 *     MiZeroPageWorkMapping @ 0x14029F2C0 (MiZeroPageWorkMapping.c)
 *     MiCleanupLazyStampedPageTable @ 0x14029F55C (MiCleanupLazyStampedPageTable.c)
 *     MiSwitchToTransition @ 0x1402A1680 (MiSwitchToTransition.c)
 *     MiReleaseLargePdeMappings @ 0x1402A22D4 (MiReleaseLargePdeMappings.c)
 *     MiConsumeSystemCacheTbFlushNeededView @ 0x1402A29D8 (MiConsumeSystemCacheTbFlushNeededView.c)
 *     MiReleasePteMappings @ 0x1402A3050 (MiReleasePteMappings.c)
 *     MiWalkVaRange @ 0x1402B5320 (MiWalkVaRange.c)
 *     MiSectionProtectAllPtes @ 0x1402E5F80 (MiSectionProtectAllPtes.c)
 *     MiSharePagesYield @ 0x1402E9160 (MiSharePagesYield.c)
 *     MiUnlockClonePageTable @ 0x1402ED6FC (MiUnlockClonePageTable.c)
 *     MiSetPagingOfDriver @ 0x1402F173C (MiSetPagingOfDriver.c)
 *     MmProtectMdlSystemAddress @ 0x1402F1A90 (MmProtectMdlSystemAddress.c)
 *     MiProtectFlushPayload @ 0x1403134BC (MiProtectFlushPayload.c)
 *     MiProtectPrivateMemory @ 0x1403136E8 (MiProtectPrivateMemory.c)
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x1403146B4 (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MiWalkPtesForWriteWatchState @ 0x140319928 (MiWalkPtesForWriteWatchState.c)
 *     MiMoveDirtyBitsToPfns @ 0x14031B4A0 (MiMoveDirtyBitsToPfns.c)
 *     MiFastTrimWorkingSet @ 0x1403216C0 (MiFastTrimWorkingSet.c)
 *     MiGetNextPageTablePte @ 0x14032A730 (MiGetNextPageTablePte.c)
 *     MiAgeWorkingSetTail @ 0x14032AD10 (MiAgeWorkingSetTail.c)
 *     MiFreeWsleList @ 0x14032AE80 (MiFreeWsleList.c)
 *     MiCreateSystemPageTable @ 0x14033B880 (MiCreateSystemPageTable.c)
 *     MiDecommitHardwareEnclavePages @ 0x140342EB4 (MiDecommitHardwareEnclavePages.c)
 *     MiUnmapContiguousMemory @ 0x1403456A8 (MiUnmapContiguousMemory.c)
 *     MiFlushValidPteFromTb @ 0x140345918 (MiFlushValidPteFromTb.c)
 *     MiReservePtes @ 0x14035FBF0 (MiReservePtes.c)
 *     MiFillSystemPtes @ 0x1403611E8 (MiFillSystemPtes.c)
 *     MiFlushTbAsNeeded @ 0x140361AE0 (MiFlushTbAsNeeded.c)
 *     MiReleaseTrimViewResources @ 0x140361E24 (MiReleaseTrimViewResources.c)
 *     MiDecommitPages @ 0x140361EF0 (MiDecommitPages.c)
 *     MiDeleteVaTail @ 0x140363010 (MiDeleteVaTail.c)
 *     MiDeleteNonPagedPoolTail @ 0x140364AB0 (MiDeleteNonPagedPoolTail.c)
 *     MiDeleteSystemPageTableTail @ 0x140364E70 (MiDeleteSystemPageTableTail.c)
 *     MiCreateSystemPageTableTail @ 0x140364F30 (MiCreateSystemPageTableTail.c)
 *     MiSetReadOnlyOnSectionView @ 0x14036D8F4 (MiSetReadOnlyOnSectionView.c)
 *     MiSetSystemCodeProtection @ 0x14038D734 (MiSetSystemCodeProtection.c)
 *     MmSetAddressRangeModifiedEx @ 0x14039C3F8 (MmSetAddressRangeModifiedEx.c)
 *     MiLargePageFault @ 0x1403A95C0 (MiLargePageFault.c)
 *     MiDecommitLargePoolVa @ 0x1403CD620 (MiDecommitLargePoolVa.c)
 *     MmOutPageKernelStack @ 0x140410180 (MmOutPageKernelStack.c)
 *     MiDecommitPagesTail @ 0x1404438DC (MiDecommitPagesTail.c)
 *     MiFlushDirtyBitsToPfn @ 0x1404560EC (MiFlushDirtyBitsToPfn.c)
 *     MiTrimWorkingSetTail @ 0x14045D050 (MiTrimWorkingSetTail.c)
 *     MiUpdateOldWorkingSetPagesTail @ 0x14045D220 (MiUpdateOldWorkingSetPagesTail.c)
 *     MiAgeTrimListsTail @ 0x14045D310 (MiAgeTrimListsTail.c)
 *     MiGetNextPageTableTail @ 0x140486330 (MiGetNextPageTableTail.c)
 *     MiMapMemoryDumpMdl @ 0x1404BCF5C (MiMapMemoryDumpMdl.c)
 *     MiRevokeExecuteTail @ 0x1404BE250 (MiRevokeExecuteTail.c)
 *     MiAdjustSecureDriverStateForIatCapture @ 0x1404D7408 (MiAdjustSecureDriverStateForIatCapture.c)
 *     MiClearPteAccessedBitRange @ 0x1404E15F4 (MiClearPteAccessedBitRange.c)
 *     MiSetPageProtection @ 0x1404E4A38 (MiSetPageProtection.c)
 *     MiUnmapKernelScp @ 0x1404F0274 (MiUnmapKernelScp.c)
 *     MiMapMdlWithLargePages @ 0x1404FC1D0 (MiMapMdlWithLargePages.c)
 *     MiClearDriverTablePtes @ 0x1404FF898 (MiClearDriverTablePtes.c)
 *     MiFlushCacheMdl @ 0x1405101E0 (MiFlushCacheMdl.c)
 *     MiUnmapMdlCommon @ 0x14051F5C4 (MiUnmapMdlCommon.c)
 *     MiReadyReservedView @ 0x140525FF8 (MiReadyReservedView.c)
 *     MiFinishPteChangesInPageTable @ 0x14052A40C (MiFinishPteChangesInPageTable.c)
 *     MiDecommitRemoveEnclaveReleaseLocks @ 0x140530B74 (MiDecommitRemoveEnclaveReleaseLocks.c)
 *     MiPageBootRegistry @ 0x1406E8744 (MiPageBootRegistry.c)
 *     MiClearSystemAccessBits @ 0x1406F7100 (MiClearSystemAccessBits.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1406F720C (MiDemoteValidLargePageOneLevel.c)
 *     MiWritePteHighLevelIsr @ 0x1406F79F0 (MiWritePteHighLevelIsr.c)
 *     MiFlushEnclaveTb @ 0x140704C84 (MiFlushEnclaveTb.c)
 *     MiBuildPhysicalPageFreeChain @ 0x140705918 (MiBuildPhysicalPageFreeChain.c)
 *     MiProtectAweUnlock @ 0x140706EF4 (MiProtectAweUnlock.c)
 *     MiZeroAndFlushAweLazyPtes @ 0x140707CBC (MiZeroAndFlushAweLazyPtes.c)
 *     MiScrubLargeMappedPage @ 0x140710CEC (MiScrubLargeMappedPage.c)
 *     MiCalibrateTbFlush @ 0x140712BB4 (MiCalibrateTbFlush.c)
 *     MiProtectLargeKernelHalRange @ 0x14086A8A0 (MiProtectLargeKernelHalRange.c)
 *     MmDeleteShadowMapping @ 0x14087BFD8 (MmDeleteShadowMapping.c)
 *     MmUnmapProtectedKernelPageRange @ 0x140B3A4F8 (MmUnmapProtectedKernelPageRange.c)
 *     MiMarkBootKernelStack @ 0x140D02B7C (MiMarkBootKernelStack.c)
 *     MiFreeBootDriverPages @ 0x140D11120 (MiFreeBootDriverPages.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeFlushCurrentTbOnly @ 0x140251FE8 (KeFlushCurrentTbOnly.c)
 *     KeFlushTb @ 0x140252130 (KeFlushTb.c)
 *     VmpFlushTb @ 0x140253324 (VmpFlushTb.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiIpiSendRequest @ 0x14032BF00 (KiIpiSendRequest.c)
 *     KiFlushRangeWorker @ 0x14032CFD0 (KiFlushRangeWorker.c)
 *     HvlFlushRangeListTb @ 0x14032D130 (HvlFlushRangeListTb.c)
 *     ExFlushTb @ 0x140414DF8 (ExFlushTb.c)
 *     VmFlushTb @ 0x140414E94 (VmFlushTb.c)
 *     KiFlushRangeTb @ 0x140414FC0 (KiFlushRangeTb.c)
 *     KiPrepareFlushCurrentAffinity @ 0x1404150F0 (KiPrepareFlushCurrentAffinity.c)
 *     VslGetNestedPageProtectionFlags @ 0x140415184 (VslGetNestedPageProtectionFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     KiSetUserTbFlushPending @ 0x14072D090 (KiSetUserTbFlushPending.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall MiFlushTbList(__int64 a1)
{
  __int64 v1; // r13
  __int64 v2; // r14
  char v3; // dl
  _KPROCESS *Process; // rax
  unsigned __int64 v5; // r8
  volatile _KAFFINITY_EX *v6; // r9
  bool v7; // cf
  unsigned __int64 CurrentPrcb; // rdx
  unsigned int v9; // eax
  unsigned int v10; // r15d
  int v11; // edi
  int v12; // eax
  char v13; // bl
  unsigned __int8 CurrentIrql; // r14
  unsigned __int16 i; // cx
  char v16; // r13
  void **v17; // rax
  int v18; // r13d
  unsigned __int64 v19; // rbx
  _KPROCESS *v20; // rcx
  __int64 v22; // r12
  unsigned __int64 v23; // r15
  unsigned int v24; // r13d
  _KPROCESS *v25; // rcx
  __int64 v27; // r14
  int v28; // r9d
  unsigned int v29; // edi
  void **v30; // r13
  struct _KPRCB *v31; // rdi
  __int64 v32; // r8
  _KSTATIC_AFFINITY_BLOCK *p_StaticAffinity; // rbx
  $B38C3B1372D6E954799962D5DD404846 *v34; // r14
  volatile _KAFFINITY_EX *v35; // r15
  unsigned __int16 Count; // ax
  unsigned __int16 Size; // cx
  unsigned __int16 v38; // cx
  signed __int64 v39; // r15
  __int64 v40; // r8
  __int64 v41; // rax
  unsigned int v42; // ecx
  __int64 v43; // rcx
  unsigned __int16 j; // cx
  _KTHREAD *v45; // rcx
  unsigned __int64 v46; // r10
  volatile _KAFFINITY_EX *ActiveProcessors; // rdx
  int v48; // r12d
  char v49; // bl
  __int64 v50; // rdx
  unsigned __int8 v51; // bl
  void **v52; // r15
  void **v53; // r8
  _ULARGE_INTEGER DueTime; // rcx
  _KPROCESS *v55; // rcx
  struct _KPRCB *v56; // rdi
  unsigned int v57; // ebx
  unsigned int v58; // r14d
  unsigned __int8 v59; // bl
  _KPROCESS *v60; // rcx
  _ULARGE_INTEGER v61; // rdi
  unsigned int k; // ecx
  _QWORD *v63; // rbx
  __int64 v64; // rdi
  unsigned __int64 v65; // rdi
  bool v66; // zf
  int v67; // edx
  __int64 v68; // rax
  void **v69; // r14
  unsigned __int64 v70; // rdi
  unsigned int v71; // r13d
  unsigned __int64 v72; // rbx
  _KPROCESS *v73; // rcx
  __int64 v75; // r12
  unsigned __int64 v76; // r15
  _KPROCESS *v77; // rcx
  _KPROCESS *v79; // rdi
  unsigned __int8 v80; // bl
  unsigned __int64 *v81; // r8
  unsigned __int64 *v82; // r8
  signed __int32 v83[8]; // [rsp+0h] [rbp-100h] BYREF
  unsigned int v84; // [rsp+40h] [rbp-C0h]
  unsigned int v85; // [rsp+44h] [rbp-BCh]
  unsigned int v86; // [rsp+48h] [rbp-B8h]
  void **v87; // [rsp+50h] [rbp-B0h]
  void **v88; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v89; // [rsp+60h] [rbp-A0h]
  void **v90; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v91; // [rsp+70h] [rbp-90h]
  unsigned int v92; // [rsp+74h] [rbp-8Ch]
  int v93; // [rsp+78h] [rbp-88h]
  struct _KPRCB *v94; // [rsp+80h] [rbp-80h]
  __int64 v95; // [rsp+88h] [rbp-78h]
  __int128 v96; // [rsp+90h] [rbp-70h]
  __int128 v97; // [rsp+A0h] [rbp-60h]
  __int128 v98; // [rsp+B0h] [rbp-50h]
  __int128 v99; // [rsp+C0h] [rbp-40h]
  _BYTE v100[272]; // [rsp+D0h] [rbp-30h] BYREF

  v1 = *(unsigned int *)(a1 + 28);
  v2 = a1;
  v95 = a1;
  v84 = v1;
  if ( !(_DWORD)v1 )
    return;
  v3 = *(_BYTE *)(a1 + 24);
  if ( v3 )
  {
    v5 = -1LL;
  }
  else
  {
    if ( *(_DWORD *)(a1 + 8) == 1 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process[3].ProcessListEntry.Blink || (Process->SecureState.EntireField & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
      {
        v5 = -1LL;
        goto LABEL_8;
      }
    }
    v5 = qword_140E2D910;
  }
  if ( *(_DWORD *)(a1 + 8) == 1 )
  {
LABEL_8:
    v6 = 0LL;
    v86 = 0;
    goto LABEL_9;
  }
  v6 = (volatile _KAFFINITY_EX *)((unsigned int)((*(_BYTE *)(a1 + 16) & 4) != 0) + 1);
  v86 = ((*(_BYTE *)(a1 + 16) & 4) != 0) + 1;
LABEL_9:
  if ( !*(_BYTE *)(a1 + 25) )
  {
    if ( !v3 && (*(_QWORD *)(a1 + 32) >= v5 || *(_BYTE *)(a1 + 26)) )
    {
      *(_BYTE *)(a1 + 25) = 1;
      goto LABEL_118;
    }
    v7 = v3 != 0;
    CurrentPrcb = *(unsigned int *)(a1 + 20);
    v9 = v7 ? 0x80000000 : 0;
    if ( (CurrentPrcb & 1) != 0 )
    {
      v9 |= 1u;
    }
    else if ( (CurrentPrcb & 2) != 0 )
    {
      v9 |= 2u;
    }
    else if ( (CurrentPrcb & 4) != 0 )
    {
      v9 |= 4u;
    }
    v10 = *(_DWORD *)(a1 + 8);
    v11 = v9 | 8;
    v87 = (void **)(a1 + 40);
    v85 = v10;
    if ( (CurrentPrcb & 0x100) == 0 )
      v11 = v9;
    v12 = *(_DWORD *)(a1 + 16);
    LODWORD(v94) = v11;
    if ( (v12 & 1) == 0 )
    {
      v13 = 0;
      if ( (HvlEnlightenments & 4) != 0 )
      {
        if ( (HvlEnlightenments & 2) != 0 )
        {
          v16 = 1;
          goto LABEL_55;
        }
        if ( (KiFlushPcid & 3) == 1 )
        {
          v16 = 1;
          goto LABEL_55;
        }
        if ( (_DWORD)KeNumberProcessors_0 != 1 )
        {
          if ( (_DWORD)v6 )
          {
            v16 = 1;
          }
          else
          {
            _InterlockedOr(v83, 0);
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql != 12 )
              __writecr8(0xCuLL);
            if ( KiIrqlFlags )
              KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 12LL);
            CurrentPrcb = (unsigned __int64)KeGetCurrentPrcb();
            v6 = *(volatile _KAFFINITY_EX **)(*(_QWORD *)(*(_QWORD *)(CurrentPrcb + 8) + 184LL) + 128LL);
            for ( i = 0; i < v6->Count; ++i )
            {
              v5 = v6->Bitmap[i];
              if ( v5 && (i != *(unsigned __int8 *)(CurrentPrcb + 208) || v5 != *(_QWORD *)(CurrentPrcb + 200)) )
              {
                if ( KiIrqlFlags )
                  KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
                __writecr8(CurrentIrql);
                v16 = 1;
                goto LABEL_55;
              }
            }
            CurrentPrcb = v84;
            v16 = 0;
            if ( v84 )
            {
              v17 = v87;
              v88 = v87;
              v18 = __ROL4__(1, v10) & 6;
              v89 = v84;
              v93 = v18;
              do
              {
                v19 = (unsigned __int64)*v17;
                if ( v18 )
                {
                  if ( KiFlushPcid )
                  {
                    v20 = KeGetCurrentThread()->ApcState.Process;
                    if ( !v20->AddressPolicy )
                    {
                      if ( (KiFlushPcid & 2) != 0 )
                      {
                        *(_QWORD *)&v96 = 1LL;
                        *((_QWORD *)&v96 + 1) = v19;
                        _EAX = 0;
                        __asm { invpcid eax, [rbp+110h+var_180] }
                      }
                      else
                      {
                        KiSetUserTbFlushPending(v20, CurrentPrcb, v5);
                      }
                    }
                  }
                }
                __invlpg((void *)v19);
                v22 = 4096LL << (9 * ((unsigned __int8)(v19 >> 10) & 3u));
                v23 = v19 & 0x3FF;
                if ( (v19 & 0x3FF) != 0 )
                {
                  v24 = v85;
                  do
                  {
                    v19 += v22;
                    if ( KiFlushPcid )
                    {
                      if ( v24 - 1 <= 1 )
                      {
                        v25 = KeGetCurrentThread()->ApcState.Process;
                        if ( !v25->AddressPolicy )
                        {
                          if ( (KiFlushPcid & 2) != 0 )
                          {
                            *(_QWORD *)&v97 = 1LL;
                            *((_QWORD *)&v97 + 1) = v19;
                            _EAX = 0;
                            __asm { invpcid eax, [rbp+110h+var_170] }
                          }
                          else
                          {
                            KiSetUserTbFlushPending(v25, CurrentPrcb, v5);
                          }
                        }
                      }
                    }
                    __invlpg((void *)v19);
                    --v23;
                  }
                  while ( v23 );
                  v18 = v93;
                }
                v17 = v88 + 1;
                v66 = v89-- == 1;
                ++v88;
              }
              while ( !v66 );
              v11 = (int)v94;
              v16 = 0;
              v10 = v85;
            }
            if ( KiIrqlFlags )
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
            __writecr8(CurrentIrql);
            v13 = 1;
          }
LABEL_55:
          v27 = (__int64)v87;
          if ( v10 == 1 )
          {
            if ( (unsigned __int64)*v87 < 0x7FFFFFFF0000LL
              && KeGetCurrentThread()->ApcState.Process->SecureState.EntireField )
            {
              v28 = 1;
              goto LABEL_82;
            }
          }
          else if ( !v10
                 && (v11 & 0x80000009) == 0x80000001
                 && (VslGetNestedPageProtectionFlags(0LL, CurrentPrcb, v5, v6) & 0x4000) != 0 )
          {
            v28 = 2;
            goto LABEL_82;
          }
          v28 = 0;
          if ( !v16 )
          {
            v29 = v84;
            goto LABEL_59;
          }
LABEL_82:
          if ( KiKvaShadow )
          {
            if ( !v10 )
            {
              LODWORD(v46) = 0;
              LOBYTE(v5) = 0;
              goto LABEL_85;
            }
          }
          else if ( v10 == 1 )
          {
            v46 = KeGetCurrentThread()->ApcState.Process->DirectoryTableBase & 0xFFFFFFFFFFFFF000uLL;
            LOBYTE(v5) = 0;
            goto LABEL_85;
          }
          LODWORD(v46) = 0;
          LOBYTE(v5) = 1;
LABEL_85:
          if ( v86 )
          {
            LODWORD(ActiveProcessors) = 0;
          }
          else
          {
            _InterlockedOr(v83, 0);
            ActiveProcessors = KeGetCurrentThread()->ApcState.Process->ActiveProcessors;
          }
          v29 = v84;
          v13 |= HvlFlushRangeListTb(v46, (_DWORD)ActiveProcessors, v5, v28, v16, v84, v27);
LABEL_59:
          if ( v13 )
            goto LABEL_140;
          v90 = (void **)v27;
          v91 = v29;
          v92 = v10;
          v30 = (void **)KeGetCurrentIrql();
          v88 = v30;
          if ( (_BYTE)v30 != 12 )
            __writecr8(0xCuLL);
          if ( KiIrqlFlags )
          {
            LOBYTE(CurrentPrcb) = 12;
            KiRaiseIrqlProcessIrqlFlags((unsigned __int8)v30, CurrentPrcb);
          }
          v31 = KeGetCurrentPrcb();
          v32 = v86;
          v94 = v31;
          if ( v86 )
          {
            if ( (unsigned int)KeNumberProcessors_0 <= 1 )
            {
LABEL_131:
              KiFlushRangeWorker(&v90, CurrentPrcb, v32);
LABEL_137:
              if ( KiIrqlFlags )
                KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v30);
              __writecr8((unsigned __int8)v30);
              v10 = v85;
              v27 = (__int64)v87;
LABEL_140:
              if ( v10 == 1
                && VmTbFlushEnabled
                && (v79 = KeGetCurrentThread()->ApcState.Process, v79[3].ProcessListEntry.Blink) )
              {
                v80 = KeGetCurrentIrql();
                if ( v80 > 2u )
                {
                  __int2c();
                  v82 = (unsigned __int64 *)v27;
                  v58 = v84;
                  VmpFlushTb((PEX_SPIN_LOCK)v79[3].ProcessListEntry.Blink, v84, v82);
                }
                else
                {
                  if ( v80 < 2u )
                  {
                    v80 = KeGetCurrentIrql();
                    if ( v80 != 2 )
                      __writecr8(2uLL);
                    if ( KiIrqlFlags )
                    {
                      LOBYTE(CurrentPrcb) = 2;
                      KiRaiseIrqlProcessIrqlFlags(v80, CurrentPrcb);
                    }
                  }
                  v81 = (unsigned __int64 *)v27;
                  v58 = v84;
                  VmpFlushTb((PEX_SPIN_LOCK)v79[3].ProcessListEntry.Blink, v84, v81);
                  if ( v80 < 2u )
                  {
                    if ( KiIrqlFlags )
                      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v80);
                    __writecr8(v80);
                  }
                }
              }
              else
              {
                v58 = v84;
              }
              if ( !ExTbFlushActive )
                goto LABEL_117;
              v59 = KeGetCurrentIrql();
              if ( v59 != 15 )
                __writecr8(0xFuLL);
              if ( KiIrqlFlags )
              {
                LOBYTE(CurrentPrcb) = 15;
                KiRaiseIrqlProcessIrqlFlags(v59, CurrentPrcb);
              }
              v60 = KeGetCurrentThread()->ApcState.Process;
              if ( v10 == 1 )
              {
                v61 = (_ULARGE_INTEGER)v60[4].Padding[1];
                if ( v60[3].ActiveGroupPadding[1] )
                {
                  v52 = v87;
                  guard_dispatch_icall_no_overrides(v60[3].ActiveGroupPadding[1], v58, v87);
                  if ( !v61.QuadPart )
                    goto LABEL_114;
                }
                else
                {
                  if ( !v61.QuadPart )
                  {
LABEL_114:
                    if ( KiIrqlFlags )
                      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v59);
                    __writecr8(v59);
LABEL_117:
                    v2 = v95;
                    goto LABEL_118;
                  }
                  v52 = v87;
                }
                v53 = v52;
                DueTime = v61;
              }
              else
              {
                v53 = v87;
                DueTime = ExSaPageGroupDescriptorArrayLock.Timer.DueTime;
              }
              ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))guard_dispatch_icall_no_overrides)(
                (_ULARGE_INTEGER)DueTime.QuadPart,
                v58,
                v53);
              goto LABEL_114;
            }
            v67 = 1;
            LODWORD(p_StaticAffinity) = 0;
            v66 = v86 == 1;
          }
          else
          {
            _InterlockedOr(v83, 0);
            p_StaticAffinity = &v31->StaticAffinity;
            v34 = &v31->StaticAffinity.KeFlushTbAffinity.8;
            v35 = v31->CurrentThread->ApcState.Process->ActiveProcessors;
            *(_QWORD *)&v31->StaticAffinity.KeFlushTbAffinity.Count = 2097153LL;
            memset_0(&v31->StaticAffinity.KeRcuAffinity.8, 0, sizeof(v31->StaticAffinity.KeRcuAffinity.8));
            Count = v35->Count;
            Size = v31->StaticAffinity.KeFlushTbAffinity.Size;
            v31->StaticAffinity.KeFlushTbAffinity.Size = Size;
            CurrentPrcb = Size;
            v31->StaticAffinity.KeFlushTbAffinity.Reserved = 0;
            if ( Count <= Size )
              LOWORD(CurrentPrcb) = Count;
            v38 = 0;
            p_StaticAffinity->KeFlushTbAffinity.Count = CurrentPrcb;
            if ( (_WORD)CurrentPrcb )
            {
              v39 = (char *)v35 - (char *)p_StaticAffinity;
              v40 = (unsigned __int16)CurrentPrcb;
              v38 = CurrentPrcb;
              do
              {
                v34->Bitmap[0] = *(unsigned __int64 *)((char *)v34->Bitmap + v39);
                v34 = ($B38C3B1372D6E954799962D5DD404846 *)((char *)v34 + 8);
                --v40;
              }
              while ( v40 );
            }
            for ( ; v38 < v31->StaticAffinity.KeFlushTbAffinity.Size; p_StaticAffinity->KeFlushTbAffinity.Bitmap[v41] = 0LL )
              v41 = v38++;
            v42 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.Lock + v31->Number);
            v32 = v42 & 0x3F;
            v43 = v42 >> 6;
            if ( p_StaticAffinity->KeFlushTbAffinity.Count > (unsigned int)v43 )
            {
              CurrentPrcb = (unsigned __int64)p_StaticAffinity + 8 * v43;
              v45 = *(_KTHREAD **)(CurrentPrcb + 8);
              _bittestandreset64((__int64 *)&v45, (unsigned int)v32);
              *(_QWORD *)(CurrentPrcb + 8) = v45;
            }
            for ( j = 0; ; ++j )
            {
              if ( j >= p_StaticAffinity->KeFlushTbAffinity.Count )
                goto LABEL_131;
              CurrentPrcb = p_StaticAffinity->KeFlushTbAffinity.Bitmap[j];
              if ( CurrentPrcb )
              {
                if ( j != v31->Group || CurrentPrcb != v31->GroupSetMember )
                  break;
              }
            }
            v66 = v86 == 1;
            v67 = 0;
          }
          v68 = 2147483652LL;
          if ( !v66 )
            v68 = 4LL;
          KiIpiSendRequest((_DWORD)v31, v67, (_DWORD)p_StaticAffinity, (unsigned int)&v90, v68);
          v69 = v90;
          v89 = (unsigned __int64)&v90[v91];
          v70 = v89;
          do
          {
            v71 = v92;
            v72 = (unsigned __int64)*v69;
            if ( KiFlushPcid )
            {
              if ( v92 - 1 <= 1 )
              {
                v73 = KeGetCurrentThread()->ApcState.Process;
                if ( !v73->AddressPolicy )
                {
                  if ( (KiFlushPcid & 2) != 0 )
                  {
                    *(_QWORD *)&v98 = 1LL;
                    *((_QWORD *)&v98 + 1) = v72;
                    _EAX = 0;
                    __asm { invpcid eax, [rbp+110h+var_160] }
                  }
                  else
                  {
                    KiSetUserTbFlushPending(v73, CurrentPrcb, v5);
                  }
                }
              }
            }
            __invlpg((void *)v72);
            v75 = 4096LL << (9 * ((unsigned __int8)(v72 >> 10) & 3u));
            v76 = v72 & 0x3FF;
            if ( (v72 & 0x3FF) != 0 )
            {
              do
              {
                v72 += v75;
                if ( KiFlushPcid )
                {
                  if ( v71 - 1 <= 1 )
                  {
                    v77 = KeGetCurrentThread()->ApcState.Process;
                    if ( !v77->AddressPolicy )
                    {
                      if ( (KiFlushPcid & 2) != 0 )
                      {
                        *(_QWORD *)&v99 = 1LL;
                        *((_QWORD *)&v99 + 1) = v72;
                        _EAX = 0;
                        __asm { invpcid eax, [rbp+110h+var_150] }
                      }
                      else
                      {
                        KiSetUserTbFlushPending(v77, CurrentPrcb, v5);
                      }
                    }
                  }
                }
                __invlpg((void *)v72);
                --v76;
              }
              while ( v76 );
              v70 = v89;
            }
            ++v69;
          }
          while ( (unsigned __int64)v69 < v70 );
          v56 = v94;
          v57 = 0;
          while ( v56->PacketBarrier )
          {
            if ( (++v57 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
            {
              if ( KeGetCurrentIrql() < 2u || !KeGetCurrentPrcb()->SchedulerAssist )
              {
LABEL_160:
                HvlNotifyLongSpinWait(v57);
                continue;
              }
              for ( k = 0; k < (unsigned int)KeNumberProcessors_0; ++k )
              {
                CurrentPrcb = KiProcessorBlock[k];
                if ( (*(_BYTE *)(CurrentPrcb + 35) & 1) != 0 )
                {
                  CurrentPrcb = *(_QWORD *)(CurrentPrcb + 36600);
                  if ( !CurrentPrcb )
                    goto LABEL_160;
                  v5 = *(unsigned __int8 *)(CurrentPrcb + 64);
                  if ( !*(_BYTE *)(CurrentPrcb + 65) || !(_BYTE)v5 )
                    goto LABEL_160;
                }
              }
            }
            _mm_pause();
          }
          LOBYTE(v30) = (_BYTE)v88;
          goto LABEL_137;
        }
      }
      v16 = 0;
      goto LABEL_55;
    }
    if ( v10 == 1 )
    {
      if ( *(_QWORD *)(a1 + 40) < 0x7FFFFFFF0000uLL && KeGetCurrentThread()->ApcState.Process->SecureState.EntireField )
      {
        v48 = 1;
LABEL_93:
        v49 = (HvlEnlightenments & 0x800000) != 0 && (HvlEnlightenments & 2) != 0;
        if ( !v48 && !v49 )
          goto LABEL_162;
        memset_0(v100, 0, 0x108uLL);
        if ( KiKvaShadow )
        {
          if ( !v10 )
          {
            LODWORD(v65) = 0;
            goto LABEL_180;
          }
        }
        else if ( v10 == 1 )
        {
          v65 = KeGetCurrentThread()->ApcState.Process->DirectoryTableBase & 0xFFFFFFFFFFFFF000uLL;
          LOBYTE(v10) = 0;
          goto LABEL_180;
        }
        LODWORD(v65) = 0;
        LOBYTE(v10) = 1;
LABEL_180:
        KiPrepareFlushCurrentAffinity(v100);
        if ( (unsigned __int8)HvlFlushRangeListTb(v65, (unsigned int)v100, (unsigned __int8)v10, v48, v49, v1, v2 + 40) )
        {
LABEL_98:
          if ( VmTbFlushEnabled )
            VmFlushTb((unsigned int)v1, v2 + 40, v85, v6);
          if ( ExTbFlushActive )
          {
            v51 = KeGetCurrentIrql();
            if ( v51 != 15 )
              __writecr8(0xFuLL);
            if ( KiIrqlFlags )
            {
              LOBYTE(v50) = 15;
              KiRaiseIrqlProcessIrqlFlags(v51, v50);
            }
            ExFlushTb((unsigned int)v1, v2 + 40, v85, v6);
            if ( KiIrqlFlags )
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v51);
            __writecr8(v51);
          }
          goto LABEL_118;
        }
        v10 = v85;
LABEL_162:
        v63 = (_QWORD *)(v2 + 40);
        v64 = v1;
        do
        {
          KiFlushRangeTb(*v63++, v10, v5, v6);
          --v64;
        }
        while ( v64 );
        goto LABEL_98;
      }
    }
    else if ( !v10
           && (v11 & 0x80000009) == 0x80000001
           && (VslGetNestedPageProtectionFlags(0LL, CurrentPrcb, v5, v6) & 0x4000) != 0 )
    {
      v48 = 2;
      goto LABEL_93;
    }
    v48 = 0;
    goto LABEL_93;
  }
LABEL_118:
  if ( *(_BYTE *)(v2 + 25) )
  {
    v55 = (_KPROCESS *)*(unsigned int *)(v2 + 8);
    if ( (*(_DWORD *)(v2 + 16) & 1) != 0 )
      KeFlushCurrentTbOnly((unsigned int)v55);
    else
      KeFlushTb(v55, (volatile _KAFFINITY_EX *)v86, v5);
  }
  *(_DWORD *)(v2 + 16) &= 0xFFFFFFDB;
  *(_DWORD *)(v2 + 28) = 0;
  *(_QWORD *)(v2 + 32) = 0LL;
  *(_WORD *)(v2 + 25) = 0;
}
