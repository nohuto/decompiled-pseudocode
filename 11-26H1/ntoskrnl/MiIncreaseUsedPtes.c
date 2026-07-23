/*
 * XREFs of MiIncreaseUsedPtes @ 0x140367CC0
 * Callers:
 *     MiFinishPageTableForLargePage @ 0x1402A1A9C (MiFinishPageTableForLargePage.c)
 *     MiCommitVadEmptyPacket @ 0x1403133AC (MiCommitVadEmptyPacket.c)
 *     MiMapMdlCommon @ 0x140314C5C (MiMapMdlCommon.c)
 *     MiMakeHyperPteDemandZero @ 0x1403177EC (MiMakeHyperPteDemandZero.c)
 *     MiMakeHyperRangeAccessible @ 0x1403188A0 (MiMakeHyperRangeAccessible.c)
 *     MiSplitPrivatePage @ 0x14031942C (MiSplitPrivatePage.c)
 *     MiInitializePfnForOtherProcess @ 0x14033D818 (MiInitializePfnForOtherProcess.c)
 *     MiAddMappedPtes @ 0x140341E90 (MiAddMappedPtes.c)
 *     MiUpdateAwePageTable @ 0x140342494 (MiUpdateAwePageTable.c)
 *     MiLinkPoolCommitChain @ 0x140367300 (MiLinkPoolCommitChain.c)
 *     MiInsertPhysicalPteMapping @ 0x140367EF0 (MiInsertPhysicalPteMapping.c)
 *     MiReservePageFileSpaceForPage @ 0x14036944C (MiReservePageFileSpaceForPage.c)
 *     MiCompleteRestrictedImageFault @ 0x140376250 (MiCompleteRestrictedImageFault.c)
 *     MiInPagePageTable @ 0x1403A69D0 (MiInPagePageTable.c)
 *     MiAllocateKernelStackPages @ 0x1403D4748 (MiAllocateKernelStackPages.c)
 *     MiInsertLargeUserMapping @ 0x14042D264 (MiInsertLargeUserMapping.c)
 *     MmMapDriverTablePage @ 0x14045569C (MmMapDriverTablePage.c)
 *     MiProtectPageFilePte @ 0x140480B38 (MiProtectPageFilePte.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1404E06A4 (MiUpdatePrivateDemandZeroView.c)
 *     MiMapKernelScp @ 0x1404EC740 (MiMapKernelScp.c)
 *     MiMakeSystemLeavesNonZero @ 0x1405129C0 (MiMakeSystemLeavesNonZero.c)
 *     MiMakeLargePageTable @ 0x14052D62C (MiMakeLargePageTable.c)
 *     MiInitializeDynamicBitmap @ 0x1406F9D64 (MiInitializeDynamicBitmap.c)
 *     MiAddMappedPtesPadding @ 0x1406FA494 (MiAddMappedPtesPadding.c)
 *     MiCommitHotPatchTable @ 0x140700C9C (MiCommitHotPatchTable.c)
 *     MiMapDummyPages @ 0x140CF9C50 (MiMapDummyPages.c)
 *     MiProtectSharedUserPage @ 0x140CFA190 (MiProtectSharedUserPage.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall MiIncreaseUsedPtes(__int64 a1, unsigned __int64 a2, unsigned int a3, char a4)
{
  unsigned __int64 v4; // rax
  __int64 v7; // r14
  __int64 v8; // rbx
  int v9; // esi
  unsigned int v10; // edi
  __int64 v11; // rax
  unsigned int v12; // r8d
  __int64 v14; // rcx
  _KPROCESS *Process; // r8
  unsigned __int64 KernelWaitTime; // rdx
  __int64 v17; // rdx

  v4 = *(_QWORD *)a2;
  v7 = a3;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    v14 = *(_QWORD *)a2;
    if ( (v4 & 1) != 0 && ((v4 & 0x20) == 0 || (v4 & 0x42) == 0) && (MiFlags & 0x1800000) != 0 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process->AddressPolicy != 1 )
      {
        KernelWaitTime = Process[2].KernelWaitTime;
        if ( KernelWaitTime )
        {
          v17 = *(_QWORD *)(KernelWaitTime + 8 * ((a2 >> 3) & 0x1FF));
          if ( (v17 & 0x20) != 0 )
            v14 = v4 | 0x20;
          v4 = v14 | 0x42;
          if ( (v17 & 0x42) == 0 )
            v4 = v14;
        }
      }
    }
  }
  v8 = 48 * ((v4 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  v9 = a4 & 1;
  if ( (a4 & 1) == 0 )
  {
    v10 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
    {
      do
      {
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
      while ( *(__int64 *)(v8 + 24) < 0 );
    }
  }
  if ( (*(_DWORD *)(v8 + 36) & 0x4000000) != 0 )
    v11 = *(_QWORD *)v8 >> 36;
  else
    v11 = *(_QWORD *)(v8 + 16) >> 17;
  v12 = (v11 & 0x3FF) + v7;
  if ( (*(_DWORD *)(v8 + 36) & 0x4000000) != 0 )
    *(_QWORD *)v8 = ((unsigned __int64)v12 << 36) ^ (*(_QWORD *)v8 ^ ((unsigned __int64)v12 << 36)) & 0xFFFFC00FFFFFFFFFuLL;
  else
    *(_QWORD *)(v8 + 16) = ((unsigned __int64)v12 << 17) ^ (*(_QWORD *)(v8 + 16) ^ ((unsigned __int64)v12 << 17)) & 0xFFFFFFFFF801FFFFuLL;
  if ( (a4 & 4) != 0 )
    *(_QWORD *)(v8 + 24) = (*(_QWORD *)(v8 + 24) + v7) ^ (*(_QWORD *)(v8 + 24) ^ (*(_QWORD *)(v8 + 24) + v7)) & 0xC000000000000000uLL;
  if ( !v9 )
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return v12;
}
