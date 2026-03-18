/*
 * XREFs of MiIncreaseUsedPtes @ 0x140365F20
 * Callers:
 *     MiFinishPageTableForLargePage @ 0x1402A254C (MiFinishPageTableForLargePage.c)
 *     MiCommitVadEmptyPacket @ 0x140311378 (MiCommitVadEmptyPacket.c)
 *     MiMapMdlCommon @ 0x140312C2C (MiMapMdlCommon.c)
 *     MiMakeHyperPteDemandZero @ 0x1403157BC (MiMakeHyperPteDemandZero.c)
 *     MiMakeHyperRangeAccessible @ 0x140316870 (MiMakeHyperRangeAccessible.c)
 *     MiSplitPrivatePage @ 0x1403173FC (MiSplitPrivatePage.c)
 *     MiInitializePfnForOtherProcess @ 0x14033B798 (MiInitializePfnForOtherProcess.c)
 *     MiAddMappedPtes @ 0x14033FE10 (MiAddMappedPtes.c)
 *     MiUpdateAwePageTable @ 0x140340414 (MiUpdateAwePageTable.c)
 *     MiLinkPoolCommitChain @ 0x140365560 (MiLinkPoolCommitChain.c)
 *     MiInsertPhysicalPteMapping @ 0x140366150 (MiInsertPhysicalPteMapping.c)
 *     MiReservePageFileSpaceForPage @ 0x1403676AC (MiReservePageFileSpaceForPage.c)
 *     MiCompleteRestrictedImageFault @ 0x1403744A0 (MiCompleteRestrictedImageFault.c)
 *     MiInPagePageTable @ 0x1403A4C70 (MiInPagePageTable.c)
 *     MiAllocateKernelStackPages @ 0x1403D1778 (MiAllocateKernelStackPages.c)
 *     MmMapDriverTablePage @ 0x14040E640 (MmMapDriverTablePage.c)
 *     MiInsertLargeUserMapping @ 0x14043A9B4 (MiInsertLargeUserMapping.c)
 *     MiProtectPageFilePte @ 0x140487168 (MiProtectPageFilePte.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1404E72E8 (MiUpdatePrivateDemandZeroView.c)
 *     MiMapKernelScp @ 0x1404F3160 (MiMapKernelScp.c)
 *     MiMakeSystemLeavesNonZero @ 0x140518F50 (MiMakeSystemLeavesNonZero.c)
 *     MiMakeLargePageTable @ 0x14052B10C (MiMakeLargePageTable.c)
 *     MiInitializeDynamicBitmap @ 0x1406F50F4 (MiInitializeDynamicBitmap.c)
 *     MiAddMappedPtesPadding @ 0x1406F5824 (MiAddMappedPtesPadding.c)
 *     MiCommitHotPatchTable @ 0x1406FBFCC (MiCommitHotPatchTable.c)
 *     MiMapDummyPages @ 0x140CF38D0 (MiMapDummyPages.c)
 *     MiProtectSharedUserPage @ 0x140CF3E10 (MiProtectSharedUserPage.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
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
