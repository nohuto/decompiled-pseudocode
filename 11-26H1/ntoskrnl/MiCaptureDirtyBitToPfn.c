/*
 * XREFs of MiCaptureDirtyBitToPfn @ 0x14031AE30
 * Callers:
 *     MiLockCode @ 0x14029602C (MiLockCode.c)
 *     MiOutSwapWorkingSetPte @ 0x140296850 (MiOutSwapWorkingSetPte.c)
 *     MiWalkImageReleasePage @ 0x1402CC6DC (MiWalkImageReleasePage.c)
 *     MiDecommitPrivatePageTail @ 0x1402DB300 (MiDecommitPrivatePageTail.c)
 *     MiDecommitSharedPageTail @ 0x1402DBF60 (MiDecommitSharedPageTail.c)
 *     MiCompleteTransitionPfnFault @ 0x140302030 (MiCompleteTransitionPfnFault.c)
 *     MiResolveProtoCombine @ 0x1403089FC (MiResolveProtoCombine.c)
 *     MiHandleForkValidPrivatePte @ 0x14030ADC0 (MiHandleForkValidPrivatePte.c)
 *     MiTrimSystemImagePages @ 0x14030F0A4 (MiTrimSystemImagePages.c)
 *     MiWsleFree @ 0x140319990 (MiWsleFree.c)
 *     MiMakePteClean @ 0x14031A2A0 (MiMakePteClean.c)
 *     MiLockPageAndSetDirty @ 0x14031A7E4 (MiLockPageAndSetDirty.c)
 *     MiLockPageTablePage @ 0x14031A8E0 (MiLockPageTablePage.c)
 *     MiHardFaultPageRelease @ 0x14031C920 (MiHardFaultPageRelease.c)
 *     MiAddPageToInsertList @ 0x14031EF60 (MiAddPageToInsertList.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x14033F350 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiCompleteSecureProcessFault @ 0x14038AED0 (MiCompleteSecureProcessFault.c)
 *     MiSetSystemCodeProtection @ 0x14038B984 (MiSetSystemCodeProtection.c)
 *     MmSetAddressRangeModifiedEx @ 0x14039A698 (MmSetAddressRangeModifiedEx.c)
 *     MiMakeOutswappedPageResident @ 0x14040BF9C (MiMakeOutswappedPageResident.c)
 *     MiProtectPagedPool @ 0x1404B84A4 (MiProtectPagedPool.c)
 *     MiMakeProtoPoolReadOnly @ 0x1404C57B8 (MiMakeProtoPoolReadOnly.c)
 *     MmUpdateUserShadowStackValue @ 0x1404E0BFC (MmUpdateUserShadowStackValue.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x140514568 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiDiscardPteTransitionPage @ 0x1405287F0 (MiDiscardPteTransitionPage.c)
 *     MiLockDriverPageRange @ 0x1406E57E8 (MiLockDriverPageRange.c)
 *     MiReplaceImportEntry @ 0x1406E6D18 (MiReplaceImportEntry.c)
 *     MmDbgMarkPfnModifiedWorker @ 0x1406FEFFC (MmDbgMarkPfnModifiedWorker.c)
 *     MiScanPagefileSpace @ 0x14086C170 (MiScanPagefileSpace.c)
 * Callees:
 *     MiGetSubsectionFromPte @ 0x1402836C0 (MiGetSubsectionFromPte.c)
 *     MiReadPteShadow @ 0x140314FF0 (MiReadPteShadow.c)
 *     MiCanPfnOriginalPteBeLost @ 0x140408680 (MiCanPfnOriginalPteBeLost.c)
 *     MiSetSubsectionModified @ 0x14045CF48 (MiSetSubsectionModified.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall MiCaptureDirtyBitToPfn(ULONG_PTR BugCheckParameter2)
{
  unsigned __int64 v1; // rbx
  unsigned __int8 v3; // cl
  int v5; // edi
  __int64 PteShadow; // rax
  _DWORD *v7; // rcx
  _DWORD *SubsectionFromPte; // r8
  __int64 v9[3]; // [rsp+30h] [rbp-18h] BYREF

  v1 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  v3 = *(_BYTE *)(BugCheckParameter2 + 34);
  if ( (v3 & 0x10) == 0 )
  {
    if ( (((*(_QWORD *)(BugCheckParameter2 + 16) & 0x400LL) == 0) & (unsigned __int8)~(v3 >> 3)) != 0 )
    {
      v9[0] = *(_QWORD *)(BugCheckParameter2 + 16);
      if ( (v9[0] & 8) != 0 )
      {
        *(_QWORD *)(BugCheckParameter2 + 16) &= ~8uLL;
        PteShadow = v9[0];
        if ( (unsigned __int64)v9 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v9 <= 0xFFFFF6FB7DBED7F8uLL )
          PteShadow = MiReadPteShadow((unsigned __int64)v9, v9[0]);
        v9[0] = PteShadow & 0xFFFFFFFFFFFFFFFBuLL;
        v1 = PteShadow & 0xFFFFFFFFFFFFFFFBuLL;
      }
      else
      {
        v1 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
      }
    }
    v5 = *(_DWORD *)(BugCheckParameter2 + 32);
    if ( *(__int64 *)(BugCheckParameter2 + 40) < 0
      && (*(_QWORD *)(BugCheckParameter2 + 16) & 0x400000000000400LL) == 0x400 )
    {
      SubsectionFromPte = (_DWORD *)MiGetSubsectionFromPte(*(_QWORD *)(BugCheckParameter2 + 16));
      if ( (*(_DWORD *)(*(_QWORD *)SubsectionFromPte + 56LL) & 0x820) == 0x20 && (SubsectionFromPte[8] & 0x20000) == 0 )
        KeBugCheckEx(0x1Au, 0x8840uLL, BugCheckParameter2, 0LL, 1uLL);
    }
    if ( *(__int64 *)(BugCheckParameter2 + 40) < 0
      && (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400LL) != 0
      && (*(_QWORD *)(BugCheckParameter2 + 24) & 0x4000000000000000LL) == 0 )
    {
      v7 = (_DWORD *)MiGetSubsectionFromPte(*(_QWORD *)(BugCheckParameter2 + 16));
      if ( (*(_DWORD *)(*(_QWORD *)v7 + 56LL) & 0x20) == 0 && (v7[38] & 1) == 0 )
        MiSetSubsectionModified(v7, 0LL);
    }
    if ( (v5 & 0x80000) != 0
      && (unsigned int)MiCanPfnOriginalPteBeLost(BugCheckParameter2)
      && (*(_BYTE *)(BugCheckParameter2 + 16) & 8) != 0
      && (v5 & 0x100000) == 0 )
    {
      *(_QWORD *)(BugCheckParameter2 + 16) &= ~8uLL;
    }
    *(_DWORD *)(BugCheckParameter2 + 32) = v5 | 0x100000;
  }
  return v1;
}
