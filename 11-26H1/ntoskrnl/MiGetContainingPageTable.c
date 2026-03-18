/*
 * XREFs of MiGetContainingPageTable @ 0x1402D9BF0
 * Callers:
 *     MiSwitchToTransition @ 0x1402A2130 (MiSwitchToTransition.c)
 *     MmCopyToCachedPage @ 0x1402D05F0 (MmCopyToCachedPage.c)
 *     MiCompleteProtoPteFault @ 0x1402D8E50 (MiCompleteProtoPteFault.c)
 *     MiDecommitFreePagesTail @ 0x1402DA750 (MiDecommitFreePagesTail.c)
 *     MiMakeSystemCachePtesValid @ 0x1402E5F40 (MiMakeSystemCachePtesValid.c)
 *     MmCheckCachedPageStates @ 0x1402E6810 (MmCheckCachedPageStates.c)
 *     MiLockProtoPoolPage @ 0x1402F50D0 (MiLockProtoPoolPage.c)
 *     MiDemoteCombinedPte @ 0x1402FE120 (MiDemoteCombinedPte.c)
 *     MiResolveProtoCombine @ 0x1403089FC (MiResolveProtoCombine.c)
 *     MiCombineInitialFinish @ 0x14030A2B4 (MiCombineInitialFinish.c)
 *     MiHandleForkValidPrivatePte @ 0x14030ADC0 (MiHandleForkValidPrivatePte.c)
 *     MiHandleForkTransitionPte @ 0x14030E420 (MiHandleForkTransitionPte.c)
 *     MiTrimSystemImagePages @ 0x14030F0A4 (MiTrimSystemImagePages.c)
 *     MiDeleteRotateVa @ 0x140312450 (MiDeleteRotateVa.c)
 *     MiWsleFree @ 0x140319990 (MiWsleFree.c)
 *     MiCheckProtoPtePageState @ 0x14031BB00 (MiCheckProtoPtePageState.c)
 *     MmUnmapViewInSystemCache @ 0x14031E380 (MmUnmapViewInSystemCache.c)
 *     MiUnlockWsle @ 0x140324658 (MiUnlockWsle.c)
 *     MiInitializeSystemPageTable @ 0x14033AB8C (MiInitializeSystemPageTable.c)
 *     MiTransformValidPteInPlace @ 0x140342458 (MiTransformValidPteInPlace.c)
 *     MiLinkPoolCommitChain @ 0x140365560 (MiLinkPoolCommitChain.c)
 *     MiAssignNonPagedPoolPte @ 0x140365C30 (MiAssignNonPagedPoolPte.c)
 *     MiInsertPhysicalPteMapping @ 0x140366150 (MiInsertPhysicalPteMapping.c)
 *     MiInitializeTransitionPfn @ 0x14036A9A4 (MiInitializeTransitionPfn.c)
 *     MiCopyOnWriteInitializeTargetPage @ 0x14036B648 (MiCopyOnWriteInitializeTargetPage.c)
 *     MiBuildMdlForMappedFileFault @ 0x14036EBF0 (MiBuildMdlForMappedFileFault.c)
 *     MiInitializeReadInProgressPfn @ 0x1403737C0 (MiInitializeReadInProgressPfn.c)
 *     MiCompleteRestrictedImageFault @ 0x1403744A0 (MiCompleteRestrictedImageFault.c)
 *     MiLockProtoPoolPageForce @ 0x1403A10E0 (MiLockProtoPoolPageForce.c)
 *     MiAcquireCachedPageLocks @ 0x1403A17C0 (MiAcquireCachedPageLocks.c)
 *     MiDecommitLargePoolVa @ 0x1403C3720 (MiDecommitLargePoolVa.c)
 *     MiDeleteClusterPage @ 0x1403C6268 (MiDeleteClusterPage.c)
 *     MmMapDriverTablePage @ 0x14040E640 (MmMapDriverTablePage.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x14047F0C4 (MiTryLockProtoPoolPageAtDpc.c)
 *     MiMakeModifiedSystemCachePteValid @ 0x14048BB40 (MiMakeModifiedSystemCachePteValid.c)
 *     MiMapKernelScp @ 0x1404F3160 (MiMapKernelScp.c)
 *     MiUnmapKernelScp @ 0x1404F6C64 (MiUnmapKernelScp.c)
 *     MiUnmapMdlCommon @ 0x14051D098 (MiUnmapMdlCommon.c)
 *     MmContainingPageForReservedMapping @ 0x140522A50 (MmContainingPageForReservedMapping.c)
 *     MiMakeLargePageTable @ 0x14052B10C (MiMakeLargePageTable.c)
 *     MiInitializeNewPfns @ 0x1406E6548 (MiInitializeNewPfns.c)
 *     MiUpdateLargePageSectionPfns @ 0x1406F02F0 (MiUpdateLargePageSectionPfns.c)
 *     MI_GET_DIRECTORY_FRAME_FROM_PROCESS_PDE @ 0x1406F2468 (MI_GET_DIRECTORY_FRAME_FROM_PROCESS_PDE.c)
 *     MiCaptureSparsePages @ 0x140879C14 (MiCaptureSparsePages.c)
 *     MxClearStaleSecurePageMapping @ 0x140CF51D0 (MxClearStaleSecurePageMapping.c)
 *     MxCreatePfnsForPtes @ 0x140CF6200 (MxCreatePfnsForPtes.c)
 *     MiFillGapPtes @ 0x140CF9690 (MiFillGapPtes.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14024C8D0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiQueuePinDriverAddressLog @ 0x14024CA14 (MiQueuePinDriverAddressLog.c)
 *     MiVaToPfnEx @ 0x14024DF10 (MiVaToPfnEx.c)
 *     MiUpdateNonPagedPoolNoSteal @ 0x14024E3BC (MiUpdateNonPagedPoolNoSteal.c)
 *     MiGetSystemRegionType @ 0x140264F40 (MiGetSystemRegionType.c)
 *     MiPteHasShadow @ 0x1403011E0 (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140314FF0 (MiReadPteShadow.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
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

  if ( BugCheckParameter4 >= 0xFFFF800000000000uLL && byte_140E37A70[((BugCheckParameter4 >> 39) & 0x1FF) - 256] == 4 )
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
