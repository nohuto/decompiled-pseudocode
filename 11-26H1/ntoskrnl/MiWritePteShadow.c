/*
 * XREFs of MiWritePteShadow @ 0x14031C28C
 * Callers:
 *     MiProtectNonPagedPool @ 0x14024F130 (MiProtectNonPagedPool.c)
 *     MiTradeActivePage @ 0x140295898 (MiTradeActivePage.c)
 *     MiRewritePteWithLockBit @ 0x14029F518 (MiRewritePteWithLockBit.c)
 *     MiTradePageWritePte @ 0x14029F8EC (MiTradePageWritePte.c)
 *     MiWriteValidPteNewPage @ 0x14029FC70 (MiWriteValidPteNewPage.c)
 *     MiSwapNumaStandbyPage @ 0x1402C8D30 (MiSwapNumaStandbyPage.c)
 *     MiCompletePrivateZeroFault @ 0x1402D6770 (MiCompletePrivateZeroFault.c)
 *     MiAllocateWsle @ 0x1402D7F18 (MiAllocateWsle.c)
 *     MiMigratePfn @ 0x1402F6990 (MiMigratePfn.c)
 *     MiCombineWithExisting @ 0x140308244 (MiCombineWithExisting.c)
 *     MiInvalidateCollidedIos @ 0x14030F394 (MiInvalidateCollidedIos.c)
 *     MiHardFaultPageRelease @ 0x14031C920 (MiHardFaultPageRelease.c)
 *     MiSwapHardFaultPage @ 0x14031CCEC (MiSwapHardFaultPage.c)
 *     MmUnmapViewInSystemCache @ 0x14031E380 (MmUnmapViewInSystemCache.c)
 *     MiDecommitAddToList @ 0x140323520 (MiDecommitAddToList.c)
 *     MiUnlockWsle @ 0x140324658 (MiUnlockWsle.c)
 *     MiUnlockNestedPageTableWritePte @ 0x140325648 (MiUnlockNestedPageTableWritePte.c)
 *     MiWsleFlush @ 0x14032A510 (MiWsleFlush.c)
 *     MiSetProtectionOnTransitionPte @ 0x14033CED4 (MiSetProtectionOnTransitionPte.c)
 *     MiWriteEnclavePte @ 0x140340C78 (MiWriteEnclavePte.c)
 *     MiWriteRepurposedTransitionPte @ 0x140342030 (MiWriteRepurposedTransitionPte.c)
 *     MiShadowTopLevelPxes @ 0x1403422E0 (MiShadowTopLevelPxes.c)
 *     MiTransformValidPteInPlace @ 0x140342458 (MiTransformValidPteInPlace.c)
 *     MiCopyOnWriteUpdatePte @ 0x14036B2E0 (MiCopyOnWriteUpdatePte.c)
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
