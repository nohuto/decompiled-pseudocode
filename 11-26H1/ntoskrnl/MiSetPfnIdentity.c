/*
 * XREFs of MiSetPfnIdentity @ 0x140369440
 * Callers:
 *     MiCreateSlabEntry @ 0x140206284 (MiCreateSlabEntry.c)
 *     MiInPageSingleKernelStack @ 0x1402A0214 (MiInPageSingleKernelStack.c)
 *     MiSwapNumaStandbyPage @ 0x1402C8D30 (MiSwapNumaStandbyPage.c)
 *     MiInsertFreeZeroPage @ 0x1402DCE70 (MiInsertFreeZeroPage.c)
 *     MmStoreProbeAndLockPages @ 0x1402F0670 (MmStoreProbeAndLockPages.c)
 *     MiReferencePageForModifiedWrite @ 0x1402F4B50 (MiReferencePageForModifiedWrite.c)
 *     MiAddPageToFlushMdl @ 0x1402F5760 (MiAddPageToFlushMdl.c)
 *     MiMigratePfn @ 0x1402F6990 (MiMigratePfn.c)
 *     MiRestoreTransitionPte @ 0x1402F8F60 (MiRestoreTransitionPte.c)
 *     MiDeleteSectionCluster @ 0x140318360 (MiDeleteSectionCluster.c)
 *     MiSwapHardFaultPage @ 0x14031CCEC (MiSwapHardFaultPage.c)
 *     MiInitializeMdlPfnSecureState @ 0x14033BD48 (MiInitializeMdlPfnSecureState.c)
 *     MiDeleteShadowStackPtes @ 0x1403407F4 (MiDeleteShadowStackPtes.c)
 *     MiFreePagesFromMdl @ 0x1403454C0 (MiFreePagesFromMdl.c)
 *     MiOutPageSingleKernelStack @ 0x140368960 (MiOutPageSingleKernelStack.c)
 *     MiUpdateSlabPagePlaceholderState @ 0x140369290 (MiUpdateSlabPagePlaceholderState.c)
 *     MiFreePageToSlabAllocator @ 0x140369964 (MiFreePageToSlabAllocator.c)
 *     MiMarkPfnVerified @ 0x14038C9E8 (MiMarkPfnVerified.c)
 *     MiFreeSecureKernelPage @ 0x1403C3010 (MiFreeSecureKernelPage.c)
 *     MiAllocateKernelStackPages @ 0x1403D1778 (MiAllocateKernelStackPages.c)
 *     MiTradeStackPageFast @ 0x140415F18 (MiTradeStackPageFast.c)
 *     MiClearPfnImageVerified @ 0x14046FA64 (MiClearPfnImageVerified.c)
 *     MiInitializeAwePfn @ 0x1405105D4 (MiInitializeAwePfn.c)
 *     MiCopyKstack @ 0x140513484 (MiCopyKstack.c)
 *     MiFreeLargeInitializationCodePages @ 0x140520698 (MiFreeLargeInitializationCodePages.c)
 *     MiAddExpansionNonPagedPool @ 0x140520A60 (MiAddExpansionNonPagedPool.c)
 *     MiSwitchKstackPages @ 0x140530AD0 (MiSwitchKstackPages.c)
 *     MiCreatePfnTemplate @ 0x1406E70E8 (MiCreatePfnTemplate.c)
 *     MiClearAweLargePageMetadata @ 0x140700F94 (MiClearAweLargePageMetadata.c)
 *     MiPrepareLargePageSubPageForFree @ 0x140712130 (MiPrepareLargePageSubPageForFree.c)
 *     MxInsertEnclaveBootPages @ 0x140CFD18C (MxInsertEnclaveBootPages.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall MiSetPfnIdentity(__int64 a1, unsigned int a2)
{
  signed __int64 v2; // r9
  unsigned __int64 v3; // rdx
  signed __int64 result; // rax
  signed __int64 v5; // r8

  v2 = *(_QWORD *)(a1 + 40);
  v3 = (unsigned __int64)a2 << 60;
  result = _InterlockedCompareExchange64(
             (volatile signed __int64 *)(a1 + 40),
             v3 ^ (v2 ^ v3) & 0x8FFFFFFFFFFFFFFFuLL,
             v2);
  if ( v2 != result )
  {
    do
    {
      v5 = result;
      result = _InterlockedCompareExchange64(
                 (volatile signed __int64 *)(a1 + 40),
                 v3 ^ (result ^ v3) & 0x8FFFFFFFFFFFFFFFuLL,
                 result);
    }
    while ( v5 != result );
  }
  return result;
}
