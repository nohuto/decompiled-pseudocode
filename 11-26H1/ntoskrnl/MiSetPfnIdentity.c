/*
 * XREFs of MiSetPfnIdentity @ 0x14036B1E0
 * Callers:
 *     MiCreateSlabEntry @ 0x140206364 (MiCreateSlabEntry.c)
 *     MiInPageSingleKernelStack @ 0x14029F764 (MiInPageSingleKernelStack.c)
 *     MiSwapNumaStandbyPage @ 0x1402AAAF0 (MiSwapNumaStandbyPage.c)
 *     MiInsertFreeZeroPage @ 0x1402BEC30 (MiInsertFreeZeroPage.c)
 *     MmStoreProbeAndLockPages @ 0x1402D26F0 (MmStoreProbeAndLockPages.c)
 *     MiReferencePageForModifiedWrite @ 0x1402D6BD0 (MiReferencePageForModifiedWrite.c)
 *     MiAddPageToFlushMdl @ 0x1402D77E0 (MiAddPageToFlushMdl.c)
 *     MiMigratePfn @ 0x1402D8A10 (MiMigratePfn.c)
 *     MiRestoreTransitionPte @ 0x1402DAFE0 (MiRestoreTransitionPte.c)
 *     MiDeleteSectionCluster @ 0x14031A390 (MiDeleteSectionCluster.c)
 *     MiSwapHardFaultPage @ 0x14031ED1C (MiSwapHardFaultPage.c)
 *     MiInitializeMdlPfnSecureState @ 0x14033DDC8 (MiInitializeMdlPfnSecureState.c)
 *     MiDeleteShadowStackPtes @ 0x140342874 (MiDeleteShadowStackPtes.c)
 *     MiFreePagesFromMdl @ 0x140347540 (MiFreePagesFromMdl.c)
 *     MiOutPageSingleKernelStack @ 0x14036A700 (MiOutPageSingleKernelStack.c)
 *     MiUpdateSlabPagePlaceholderState @ 0x14036B030 (MiUpdateSlabPagePlaceholderState.c)
 *     MiFreePageToSlabAllocator @ 0x14036B704 (MiFreePageToSlabAllocator.c)
 *     MiMarkPfnVerified @ 0x14038E794 (MiMarkPfnVerified.c)
 *     MiFreeSecureKernelPage @ 0x1403CCF10 (MiFreeSecureKernelPage.c)
 *     MiAllocateKernelStackPages @ 0x1403D4748 (MiAllocateKernelStackPages.c)
 *     MiTradeStackPageFast @ 0x14040A528 (MiTradeStackPageFast.c)
 *     MiClearPfnImageVerified @ 0x1404691E4 (MiClearPfnImageVerified.c)
 *     MiInitializeAwePfn @ 0x14050A044 (MiInitializeAwePfn.c)
 *     MiCopyKstack @ 0x14050CEF4 (MiCopyKstack.c)
 *     MiFreeLargeInitializationCodePages @ 0x140522D3C (MiFreeLargeInitializationCodePages.c)
 *     MiAddExpansionNonPagedPool @ 0x140523104 (MiAddExpansionNonPagedPool.c)
 *     MiSwitchKstackPages @ 0x140532FD0 (MiSwitchKstackPages.c)
 *     MiCreatePfnTemplate @ 0x1406EBD98 (MiCreatePfnTemplate.c)
 *     MiClearAweLargePageMetadata @ 0x140705C64 (MiClearAweLargePageMetadata.c)
 *     MiPrepareLargePageSubPageForFree @ 0x140716E28 (MiPrepareLargePageSubPageForFree.c)
 *     MxInsertEnclaveBootPages @ 0x140D0350C (MxInsertEnclaveBootPages.c)
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
