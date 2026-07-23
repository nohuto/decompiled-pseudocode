/*
 * XREFs of MiWritePteShadow @ 0x14031E2BC
 * Callers:
 *     MiProtectNonPagedPool @ 0x140250A90 (MiProtectNonPagedPool.c)
 *     MiTradeActivePage @ 0x140294DF8 (MiTradeActivePage.c)
 *     MiRewritePteWithLockBit @ 0x14029EA68 (MiRewritePteWithLockBit.c)
 *     MiTradePageWritePte @ 0x14029EE3C (MiTradePageWritePte.c)
 *     MiWriteValidPteNewPage @ 0x14029F1C0 (MiWriteValidPteNewPage.c)
 *     MiSwapNumaStandbyPage @ 0x1402AAAF0 (MiSwapNumaStandbyPage.c)
 *     MiCompletePrivateZeroFault @ 0x1402B8530 (MiCompletePrivateZeroFault.c)
 *     MiAllocateWsle @ 0x1402B9CD8 (MiAllocateWsle.c)
 *     MiMigratePfn @ 0x1402D8A10 (MiMigratePfn.c)
 *     MiCombineWithExisting @ 0x1402EA2C4 (MiCombineWithExisting.c)
 *     MiInvalidateCollidedIos @ 0x1402F1414 (MiInvalidateCollidedIos.c)
 *     MiHardFaultPageRelease @ 0x14031E950 (MiHardFaultPageRelease.c)
 *     MiSwapHardFaultPage @ 0x14031ED1C (MiSwapHardFaultPage.c)
 *     MmUnmapViewInSystemCache @ 0x1403203B0 (MmUnmapViewInSystemCache.c)
 *     MiDecommitAddToList @ 0x140325550 (MiDecommitAddToList.c)
 *     MiUnlockWsle @ 0x140326688 (MiUnlockWsle.c)
 *     MiUnlockNestedPageTableWritePte @ 0x140327678 (MiUnlockNestedPageTableWritePte.c)
 *     MiWsleFlush @ 0x14032C540 (MiWsleFlush.c)
 *     MiSetProtectionOnTransitionPte @ 0x14033EF54 (MiSetProtectionOnTransitionPte.c)
 *     MiWriteEnclavePte @ 0x140342CF8 (MiWriteEnclavePte.c)
 *     MiWriteRepurposedTransitionPte @ 0x1403440B0 (MiWriteRepurposedTransitionPte.c)
 *     MiShadowTopLevelPxes @ 0x140344360 (MiShadowTopLevelPxes.c)
 *     MiTransformValidPteInPlace @ 0x1403444D8 (MiTransformValidPteInPlace.c)
 *     MiCopyOnWriteUpdatePte @ 0x14036D080 (MiCopyOnWriteUpdatePte.c)
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

_KPROCESS *MiWritePteShadow()
{
  _KPROCESS *result; // rax
  __int64 v1; // rdx
  unsigned __int64 v2; // r8
  __int64 v3; // r8
  __int64 v4; // rdx

  result = MiPteHasShadow();
  if ( result )
  {
    result = (_KPROCESS *)result[2].KernelWaitTime;
    if ( result )
    {
      v3 = (v2 >> 3) & 0x1FF;
      if ( (v1 & 1) != 0 )
        v4 = v1 & 0x7FFFFFFFFFFFFFFFLL;
      else
        v4 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
      *((_QWORD *)&result->Header.Lock + v3) = v4;
    }
  }
  return result;
}
