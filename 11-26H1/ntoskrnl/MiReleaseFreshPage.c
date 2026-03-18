/*
 * XREFs of MiReleaseFreshPage @ 0x140292190
 * Callers:
 *     MiMakePageAvoidRead @ 0x140282DC0 (MiMakePageAvoidRead.c)
 *     MiCreateSharedZeroPages @ 0x140283980 (MiCreateSharedZeroPages.c)
 *     MiGetPageChainForFault @ 0x140284C30 (MiGetPageChainForFault.c)
 *     MiGetPage @ 0x1402866A0 (MiGetPage.c)
 *     MiDeleteUltraThreadContext @ 0x14028F5E0 (MiDeleteUltraThreadContext.c)
 *     MiFindContiguousPagesNode @ 0x1402904F0 (MiFindContiguousPagesNode.c)
 *     MiClaimPhysicalRun @ 0x140291700 (MiClaimPhysicalRun.c)
 *     MiFreePageChain @ 0x140292AA4 (MiFreePageChain.c)
 *     MiTradePageMarkedActive @ 0x1402931C0 (MiTradePageMarkedActive.c)
 *     MiReplaceLockedPage @ 0x140295664 (MiReplaceLockedPage.c)
 *     MiLockCode @ 0x14029602C (MiLockCode.c)
 *     MiSwitchToTransition @ 0x1402A2130 (MiSwitchToTransition.c)
 *     MiFreeLargeZeroPages @ 0x1402A5600 (MiFreeLargeZeroPages.c)
 *     MiSharePagesCleanup @ 0x1402C65C0 (MiSharePagesCleanup.c)
 *     MiResolvePrivateZeroFault @ 0x1402D5420 (MiResolvePrivateZeroFault.c)
 *     MiCompletePrivateZeroFault @ 0x1402D6770 (MiCompletePrivateZeroFault.c)
 *     MiCreateUltraThreadContextHelper @ 0x1402F2710 (MiCreateUltraThreadContextHelper.c)
 *     MiReplenishUltraPageTables @ 0x1402F445C (MiReplenishUltraPageTables.c)
 *     MiCreateUltraThreadContext @ 0x1402F45F0 (MiCreateUltraThreadContext.c)
 *     MiTradePageMarkedTransition @ 0x1402FD5C0 (MiTradePageMarkedTransition.c)
 *     MiWalkEntireSubsection @ 0x14031B370 (MiWalkEntireSubsection.c)
 *     MiFinishHardFault @ 0x14031D830 (MiFinishHardFault.c)
 *     MiAllocateMdlPagesByLists @ 0x140337F84 (MiAllocateMdlPagesByLists.c)
 *     MiAllocateMostlyContiguousPagesForMdl @ 0x1403382F4 (MiAllocateMostlyContiguousPagesForMdl.c)
 *     MiAllocatePageFileReadResources @ 0x1403719F8 (MiAllocatePageFileReadResources.c)
 *     MiMakeDriverPagesPrivate @ 0x14038A9E0 (MiMakeDriverPagesPrivate.c)
 *     MiAllocateKernelStackPages @ 0x1403D1778 (MiAllocateKernelStackPages.c)
 *     MiSwapStackPage @ 0x140415804 (MiSwapStackPage.c)
 *     MiDeleteUltraMapContext @ 0x1404655E0 (MiDeleteUltraMapContext.c)
 *     MiManageUltraSpacePageTable @ 0x14049504C (MiManageUltraSpacePageTable.c)
 *     MiProtectDriverSectionPte @ 0x1406E5D50 (MiProtectDriverSectionPte.c)
 *     MiEstablishDefragSlabEntries @ 0x140706AC4 (MiEstablishDefragSlabEntries.c)
 *     MiFreeReadListPages @ 0x140A525E0 (MiFreeReadListPages.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402DCDD0 (MiInsertPageInFreeOrZeroedList.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiReleaseFreshPage(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // di
  int v5; // ebp
  unsigned int v6; // esi
  unsigned int v7; // ecx
  int v8; // ecx
  __int64 v9; // rax
  unsigned int v10; // ebp
  __int64 v11; // rdx
  __int64 result; // rax

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
  }
  v5 = 0;
  v6 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v6 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1, a2, a3) )
      {
        HvlNotifyLongSpinWait(v6);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(a1 + 24) < 0 );
  }
  if ( (*(_BYTE *)(a1 + 34) & 7) == 6 )
    *(_DWORD *)(a1 + 32) = *(_DWORD *)(a1 + 32) & 0xFFF8FFFF | 0x50000;
  v7 = *(_DWORD *)(a1 + 32) & 0xD7C7FFFF;
  *(_QWORD *)(a1 + 40) &= ~0x8000000000000000uLL;
  *(_DWORD *)(a1 + 32) = v7;
  v8 = 0;
  if ( (*(_QWORD *)(a1 + 40) & 0x10000000000LL) != 0 )
    v8 = *(_DWORD *)(a1 + 36) & 0x18000000;
  *(_DWORD *)(a1 + 36) = v8;
  *(_DWORD *)(a1 + 32) &= ~0x10000000u;
  *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
  *(_DWORD *)(a1 + 32) &= 0xFFFF0000;
  v9 = *(_QWORD *)(a1 + 16);
  LOBYTE(v5) = (v9 & 0x3E0) != 0;
  v10 = v5 + 1;
  if ( qword_140E2D740 && (*(_QWORD *)(a1 + 16) & 0x10) == 0 )
    HIDWORD(v9) &= HIDWORD(qword_140E2D748);
  v11 = v10;
  LODWORD(v11) = v10 | 0x400;
  if ( HIDWORD(v9) != -3 )
    v11 = v10;
  MiInsertPageInFreeOrZeroedList((a1 + 0x220000000000LL) / 48, v11);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
