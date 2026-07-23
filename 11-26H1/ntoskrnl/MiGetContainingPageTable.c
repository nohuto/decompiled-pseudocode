/*
 * XREFs of MiGetContainingPageTable @ 0x1402BB9B0
 * Callers:
 *     MiSwitchToTransition @ 0x1402A1680 (MiSwitchToTransition.c)
 *     MmCopyToCachedPage @ 0x1402B23B0 (MmCopyToCachedPage.c)
 *     MiCompleteProtoPteFault @ 0x1402BAC10 (MiCompleteProtoPteFault.c)
 *     MiDecommitFreePagesTail @ 0x1402BC510 (MiDecommitFreePagesTail.c)
 *     MiMakeSystemCachePtesValid @ 0x1402C7F80 (MiMakeSystemCachePtesValid.c)
 *     MmCheckCachedPageStates @ 0x1402C8850 (MmCheckCachedPageStates.c)
 *     MiLockProtoPoolPage @ 0x1402D7150 (MiLockProtoPoolPage.c)
 *     MiDemoteCombinedPte @ 0x1402E01A0 (MiDemoteCombinedPte.c)
 *     MiResolveProtoCombine @ 0x1402EAA7C (MiResolveProtoCombine.c)
 *     MiCombineInitialFinish @ 0x1402EC334 (MiCombineInitialFinish.c)
 *     MiHandleForkValidPrivatePte @ 0x1402ECE40 (MiHandleForkValidPrivatePte.c)
 *     MiHandleForkTransitionPte @ 0x1402F04A0 (MiHandleForkTransitionPte.c)
 *     MiTrimSystemImagePages @ 0x1402F1124 (MiTrimSystemImagePages.c)
 *     MiDeleteRotateVa @ 0x140314480 (MiDeleteRotateVa.c)
 *     MiWsleFree @ 0x14031B9C0 (MiWsleFree.c)
 *     MiCheckProtoPtePageState @ 0x14031DB30 (MiCheckProtoPtePageState.c)
 *     MmUnmapViewInSystemCache @ 0x1403203B0 (MmUnmapViewInSystemCache.c)
 *     MiUnlockWsle @ 0x140326688 (MiUnlockWsle.c)
 *     MiInitializeSystemPageTable @ 0x14033CC0C (MiInitializeSystemPageTable.c)
 *     MiTransformValidPteInPlace @ 0x1403444D8 (MiTransformValidPteInPlace.c)
 *     MiLinkPoolCommitChain @ 0x140367300 (MiLinkPoolCommitChain.c)
 *     MiAssignNonPagedPoolPte @ 0x1403679D0 (MiAssignNonPagedPoolPte.c)
 *     MiInsertPhysicalPteMapping @ 0x140367EF0 (MiInsertPhysicalPteMapping.c)
 *     MiInitializeTransitionPfn @ 0x14036C744 (MiInitializeTransitionPfn.c)
 *     MiCopyOnWriteInitializeTargetPage @ 0x14036D3E8 (MiCopyOnWriteInitializeTargetPage.c)
 *     MiBuildMdlForMappedFileFault @ 0x140370990 (MiBuildMdlForMappedFileFault.c)
 *     MiInitializeReadInProgressPfn @ 0x140375570 (MiInitializeReadInProgressPfn.c)
 *     MiCompleteRestrictedImageFault @ 0x140376250 (MiCompleteRestrictedImageFault.c)
 *     MiLockProtoPoolPageForce @ 0x1403A2E40 (MiLockProtoPoolPageForce.c)
 *     MiAcquireCachedPageLocks @ 0x1403A3520 (MiAcquireCachedPageLocks.c)
 *     MiDecommitLargePoolVa @ 0x1403CD620 (MiDecommitLargePoolVa.c)
 *     MiDeleteClusterPage @ 0x1403D0168 (MiDeleteClusterPage.c)
 *     MmMapDriverTablePage @ 0x14045569C (MmMapDriverTablePage.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x140478A34 (MiTryLockProtoPoolPageAtDpc.c)
 *     MiMakeModifiedSystemCachePteValid @ 0x140485680 (MiMakeModifiedSystemCachePteValid.c)
 *     MiMapKernelScp @ 0x1404EC740 (MiMapKernelScp.c)
 *     MiUnmapKernelScp @ 0x1404F0274 (MiUnmapKernelScp.c)
 *     MiUnmapMdlCommon @ 0x14051F5C4 (MiUnmapMdlCommon.c)
 *     MmContainingPageForReservedMapping @ 0x1405250BC (MmContainingPageForReservedMapping.c)
 *     MiMakeLargePageTable @ 0x14052D62C (MiMakeLargePageTable.c)
 *     MiInitializeNewPfns @ 0x1406EB1F8 (MiInitializeNewPfns.c)
 *     MiUpdateLargePageSectionPfns @ 0x1406F4F60 (MiUpdateLargePageSectionPfns.c)
 *     MI_GET_DIRECTORY_FRAME_FROM_PROCESS_PDE @ 0x1406F70D8 (MI_GET_DIRECTORY_FRAME_FROM_PROCESS_PDE.c)
 *     MiCaptureSparsePages @ 0x140880010 (MiCaptureSparsePages.c)
 *     MxClearStaleSecurePageMapping @ 0x140CFB550 (MxClearStaleSecurePageMapping.c)
 *     MxCreatePfnsForPtes @ 0x140CFC580 (MxCreatePfnsForPtes.c)
 *     MiFillGapPtes @ 0x140CFFA10 (MiFillGapPtes.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14024E230 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiQueuePinDriverAddressLog @ 0x14024E374 (MiQueuePinDriverAddressLog.c)
 *     MiVaToPfnEx @ 0x14024F870 (MiVaToPfnEx.c)
 *     MiUpdateNonPagedPoolNoSteal @ 0x14024FD1C (MiUpdateNonPagedPoolNoSteal.c)
 *     MiGetSystemRegionType @ 0x1402644B0 (MiGetSystemRegionType.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall MiGetContainingPageTable(ULONG_PTR BugCheckParameter4)
{
  ULONG_PTR v2; // rbx
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // r8
  __int64 v7; // rax
  _KPROCESS *Process; // r9
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v10; // rcx
  ULONG_PTR v11; // r14
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 *v17; // r8
  unsigned __int64 v18; // rbp
  __int64 v19; // rcx
  __int64 v20; // r9
  __int64 *v21; // r10
  __int64 v22; // rdx
  unsigned __int64 PteShadow; // rbp
  int SystemRegionType; // r15d
  __int64 HasShadow; // rax
  unsigned __int64 v26; // r10
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // [rsp+28h] [rbp-40h]
  ULONG_PTR v34; // [rsp+30h] [rbp-38h]
  unsigned __int64 v35; // [rsp+38h] [rbp-30h]
  unsigned __int64 v36; // [rsp+40h] [rbp-28h]
  __int64 v37; // [rsp+48h] [rbp-20h]

  if ( BugCheckParameter4 >= 0xFFFF800000000000uLL && byte_140E37BF0[((BugCheckParameter4 >> 39) & 0x1FF) - 256] == 4 )
  {
    v11 = ((BugCheckParameter4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v34 = v11;
    v35 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v36 = ((v35 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v37 = ((v36 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v12 = MI_IS_PHYSICAL_ADDRESS(BugCheckParameter4);
    v15 = v12;
    if ( v12 )
    {
      v16 = MiVaToPfnEx(BugCheckParameter4);
      v17 = (__int64 *)*(&v34 + v15);
      v18 = v16;
      v19 = *v17;
      if ( (unsigned __int64)v17 >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)v17 <= 0xFFFFF6FB7DBED7F8uLL
        && (v19 & 1) != 0
        && ((v19 & 0x20) == 0 || (v19 & 0x42) == 0) )
      {
        MiPteHasShadow(v19, 0xFFFFF6FB7DBED7F8uLL, v17);
      }
    }
    else
    {
      v20 = 4LL;
      do
      {
        v21 = (__int64 *)*(&v33 + v20--);
        v22 = *v21;
        if ( (unsigned __int64)v21 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v21 <= 0xFFFFF6FB7DBED7F8uLL )
        {
          v14 = *v21;
          if ( (v22 & 1) == 0 )
            goto LABEL_48;
          if ( (v22 & 0x20) == 0 || (v22 & 0x42) == 0 )
          {
            HasShadow = MiPteHasShadow(v13, v22, v14);
            if ( HasShadow )
            {
              v27 = *(_QWORD *)(HasShadow + 1288);
              if ( v27 )
              {
                v28 = *(_QWORD *)(v27 + 8 * ((v26 >> 3) & 0x1FF));
                if ( (v28 & 0x20) != 0 )
                  v14 |= 0x20uLL;
                LOBYTE(v22) = v14 | 0x42;
                if ( (v28 & 0x42) == 0 )
                  LOBYTE(v22) = v14;
              }
            }
          }
        }
        if ( (v22 & 1) == 0 )
          goto LABEL_48;
      }
      while ( v20 != 1 );
      PteShadow = *(_QWORD *)v11;
      if ( v11 >= 0xFFFFF6FB7DBED000uLL
        && v11 <= 0xFFFFF6FB7DBED7F8uLL
        && (PteShadow & 1) != 0
        && ((PteShadow & 0x20) == 0 || (PteShadow & 0x42) == 0) )
      {
        v29 = MiPteHasShadow(v13, *(_QWORD *)v11, v14);
        if ( v29 )
        {
          v31 = *(_QWORD *)(v29 + 1288);
          if ( v31 )
          {
            v32 = *(_QWORD *)(v31 + 8 * ((v11 >> 3) & 0x1FF));
            if ( (v32 & 0x20) != 0 )
              v30 |= 0x20uLL;
            PteShadow = v30 | 0x42;
            if ( (v32 & 0x42) == 0 )
              PteShadow = v30;
          }
        }
      }
      SystemRegionType = MiGetSystemRegionType(BugCheckParameter4);
      if ( SystemRegionType == 11 )
        MiQueuePinDriverAddressLog(BugCheckParameter4, PteShadow, 0);
      if ( (PteShadow & 1) == 0 )
LABEL_48:
        KeBugCheckEx(0x1Au, 0x530BuLL, BugCheckParameter4, 1uLL, BugCheckParameter4);
      if ( SystemRegionType == 4 )
      {
        MiUpdateNonPagedPoolNoSteal(BugCheckParameter4, 1u);
        PteShadow = *(_QWORD *)v11;
        if ( v11 >= 0xFFFFF6FB7DBED000uLL && v11 <= 0xFFFFF6FB7DBED7F8uLL )
          PteShadow = MiReadPteShadow(((BugCheckParameter4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, *(_QWORD *)v11);
      }
      v18 = (PteShadow >> 12) & 0xFFFFFFFFFFLL;
    }
    return __PAIR64__(v18 >> 20, ((_DWORD)v18 << 12) + (unsigned int)(BugCheckParameter4 & 0xFFF)) >> 12;
  }
  else
  {
    v2 = (BugCheckParameter4 >> 9) & 0x7FFFFFFFF8LL;
    v3 = *(_QWORD *)(v2 - 0x98000000000LL);
    v4 = v2 - 0x98000000000LL;
    if ( v2 - 0x98000000000LL >= 0xFFFFF6FB7DBED000uLL && v4 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      v7 = *(_QWORD *)(v2 - 0x98000000000LL);
      if ( (v3 & 1) != 0 && ((v3 & 0x20) == 0 || (v3 & 0x42) == 0) && (MiFlags & 0x1800000) != 0 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( Process->AddressPolicy != 1 )
        {
          KernelWaitTime = Process[2].KernelWaitTime;
          if ( KernelWaitTime )
          {
            v10 = *(_QWORD *)(KernelWaitTime + 8 * ((v4 >> 3) & 0x1FF));
            if ( (v10 & 0x20) != 0 )
              v7 = v3 | 0x20;
            v3 = v7 | 0x42;
            if ( (v10 & 0x42) == 0 )
              v3 = v7;
          }
        }
      }
    }
    return (v3 >> 12) & 0xFFFFFFFFFFLL;
  }
}
