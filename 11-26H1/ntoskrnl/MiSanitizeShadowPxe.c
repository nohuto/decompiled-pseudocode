/*
 * XREFs of MiSanitizeShadowPxe @ 0x140344188
 * Callers:
 *     MiTradeActivePage @ 0x140294DF8 (MiTradeActivePage.c)
 *     MiRewritePteWithLockBit @ 0x14029EA68 (MiRewritePteWithLockBit.c)
 *     MiTradePageWritePte @ 0x14029EE3C (MiTradePageWritePte.c)
 *     MiWriteValidPteNewPage @ 0x14029F1C0 (MiWriteValidPteNewPage.c)
 *     MiSwapNumaStandbyPage @ 0x1402AAAF0 (MiSwapNumaStandbyPage.c)
 *     MiCompletePrivateZeroFault @ 0x1402B8530 (MiCompletePrivateZeroFault.c)
 *     MiAllocateWsle @ 0x1402B9CD8 (MiAllocateWsle.c)
 *     MiMigratePfn @ 0x1402D8A10 (MiMigratePfn.c)
 *     MiInvalidateCollidedIos @ 0x1402F1414 (MiInvalidateCollidedIos.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x14031D030 (MiRewriteTrimPteAsDemandZero.c)
 *     MiHardFaultPageRelease @ 0x14031E950 (MiHardFaultPageRelease.c)
 *     MiSwapHardFaultPage @ 0x14031ED1C (MiSwapHardFaultPage.c)
 *     MiDecommitAddToList @ 0x140325550 (MiDecommitAddToList.c)
 *     MiUnlockWsle @ 0x140326688 (MiUnlockWsle.c)
 *     MiUnlockNestedPageTableWritePte @ 0x140327678 (MiUnlockNestedPageTableWritePte.c)
 *     MiWsleFlush @ 0x14032C540 (MiWsleFlush.c)
 *     MiSetProtectionOnTransitionPte @ 0x14033EF54 (MiSetProtectionOnTransitionPte.c)
 *     MiWriteEnclavePte @ 0x140342CF8 (MiWriteEnclavePte.c)
 *     MiWriteRepurposedTransitionPte @ 0x1403440B0 (MiWriteRepurposedTransitionPte.c)
 *     MiShadowTopLevelPxes @ 0x140344360 (MiShadowTopLevelPxes.c)
 *     MiResolveProtoPteFault @ 0x1403A7B0C (MiResolveProtoPteFault.c)
 *     MiReadWriteAnyLevelShadowPte @ 0x14042A570 (MiReadWriteAnyLevelShadowPte.c)
 *     MiInsertLargeVadMapping @ 0x140509CA4 (MiInsertLargeVadMapping.c)
 *     MiProtectAweTransitionPte @ 0x140706E24 (MiProtectAweTransitionPte.c)
 *     MiCreateHardwareEnclave @ 0x14087C4D4 (MiCreateHardwareEnclave.c)
 *     MiUpdateUserMappings @ 0x140C0C830 (MiUpdateUserMappings.c)
 *     MiMapDummyPages @ 0x140CF9C50 (MiMapDummyPages.c)
 *     MxZeroBootMappings @ 0x140CFA5AC (MxZeroBootMappings.c)
 *     MxClearStaleSecurePageMapping @ 0x140CFB550 (MxClearStaleSecurePageMapping.c)
 *     MiFillGapPtes @ 0x140CFFA10 (MiFillGapPtes.c)
 *     MiInitializeBootShadowStackPage @ 0x140D02594 (MiInitializeBootShadowStackPage.c)
 * Callees:
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 */

__int64 MiSanitizeShadowPxe()
{
  _QWORD *v0; // rdx
  unsigned int v1; // r9d

  if ( MiPteHasShadow() )
  {
    v1 = 1;
    if ( !BYTE5(stru_140E2DAB0.Header.WaitListHead.Blink) && (*v0 & 1) != 0 )
      *v0 |= 0x8000000000000000uLL;
  }
  else if ( (KeGetCurrentThread()->ApcState.Process[3].ActiveGroupsMask.Masks[1] & 0x100000000000LL) != 0
         && (*v0 & 1) != 0 )
  {
    *v0 |= 0x8000000000000000uLL;
  }
  return v1;
}
