/*
 * XREFs of MiSanitizeShadowPxe @ 0x140342108
 * Callers:
 *     MiTradeActivePage @ 0x140295898 (MiTradeActivePage.c)
 *     MiRewritePteWithLockBit @ 0x14029F518 (MiRewritePteWithLockBit.c)
 *     MiTradePageWritePte @ 0x14029F8EC (MiTradePageWritePte.c)
 *     MiWriteValidPteNewPage @ 0x14029FC70 (MiWriteValidPteNewPage.c)
 *     MiSwapNumaStandbyPage @ 0x1402C8D30 (MiSwapNumaStandbyPage.c)
 *     MiCompletePrivateZeroFault @ 0x1402D6770 (MiCompletePrivateZeroFault.c)
 *     MiAllocateWsle @ 0x1402D7F18 (MiAllocateWsle.c)
 *     MiMigratePfn @ 0x1402F6990 (MiMigratePfn.c)
 *     MiInvalidateCollidedIos @ 0x14030F394 (MiInvalidateCollidedIos.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x14031B000 (MiRewriteTrimPteAsDemandZero.c)
 *     MiHardFaultPageRelease @ 0x14031C920 (MiHardFaultPageRelease.c)
 *     MiSwapHardFaultPage @ 0x14031CCEC (MiSwapHardFaultPage.c)
 *     MiDecommitAddToList @ 0x140323520 (MiDecommitAddToList.c)
 *     MiUnlockWsle @ 0x140324658 (MiUnlockWsle.c)
 *     MiUnlockNestedPageTableWritePte @ 0x140325648 (MiUnlockNestedPageTableWritePte.c)
 *     MiWsleFlush @ 0x14032A510 (MiWsleFlush.c)
 *     MiSetProtectionOnTransitionPte @ 0x14033CED4 (MiSetProtectionOnTransitionPte.c)
 *     MiWriteEnclavePte @ 0x140340C78 (MiWriteEnclavePte.c)
 *     MiWriteRepurposedTransitionPte @ 0x140342030 (MiWriteRepurposedTransitionPte.c)
 *     MiShadowTopLevelPxes @ 0x1403422E0 (MiShadowTopLevelPxes.c)
 *     MiResolveProtoPteFault @ 0x1403A5DAC (MiResolveProtoPteFault.c)
 *     MiReadWriteAnyLevelShadowPte @ 0x14040D644 (MiReadWriteAnyLevelShadowPte.c)
 *     MiInsertLargeVadMapping @ 0x140510234 (MiInsertLargeVadMapping.c)
 *     MiProtectAweTransitionPte @ 0x140702154 (MiProtectAweTransitionPte.c)
 *     MiCreateHardwareEnclave @ 0x1408760F0 (MiCreateHardwareEnclave.c)
 *     MiUpdateUserMappings @ 0x140C06620 (MiUpdateUserMappings.c)
 *     MiMapDummyPages @ 0x140CF38D0 (MiMapDummyPages.c)
 *     MxZeroBootMappings @ 0x140CF422C (MxZeroBootMappings.c)
 *     MxClearStaleSecurePageMapping @ 0x140CF51D0 (MxClearStaleSecurePageMapping.c)
 *     MiFillGapPtes @ 0x140CF9690 (MiFillGapPtes.c)
 *     MiInitializeBootShadowStackPage @ 0x140CFC214 (MiInitializeBootShadowStackPage.c)
 * Callees:
 *     MiPteHasShadow @ 0x1403011E0 (MiPteHasShadow.c)
 */

__int64 MiSanitizeShadowPxe()
{
  _QWORD *v0; // rdx
  unsigned int v1; // r9d

  if ( MiPteHasShadow() )
  {
    v1 = 1;
    if ( !BYTE5(stru_140E2D930.Header.WaitListHead.Blink) && (*v0 & 1) != 0 )
      *v0 |= 0x8000000000000000uLL;
  }
  else if ( (KeGetCurrentThread()->ApcState.Process[3].ActiveGroupsMask.Masks[1] & 0x100000000000LL) != 0
         && (*v0 & 1) != 0 )
  {
    *v0 |= 0x8000000000000000uLL;
  }
  return v1;
}
