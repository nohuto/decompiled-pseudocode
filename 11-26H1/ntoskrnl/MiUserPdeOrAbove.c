/*
 * XREFs of MiUserPdeOrAbove @ 0x1402A0990
 * Callers:
 *     MiCreateSharedZeroPages @ 0x140282EF0 (MiCreateSharedZeroPages.c)
 *     MiGetPteFromCopyList @ 0x1402849F0 (MiGetPteFromCopyList.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140287440 (MiMapPageInHyperSpaceWorker.c)
 *     MiCachedPageFinish @ 0x14029FC60 (MiCachedPageFinish.c)
 *     MiMapFrame @ 0x1402A00A0 (MiMapFrame.c)
 *     MiWriteLargePte @ 0x1402A0630 (MiWriteLargePte.c)
 *     MiCompletePrivateZeroFault @ 0x1402B8530 (MiCompletePrivateZeroFault.c)
 *     MiProtoFaultGetProtection @ 0x1402BB1B0 (MiProtoFaultGetProtection.c)
 *     MiMakeValidPte @ 0x1402BBDE0 (MiMakeValidPte.c)
 *     MmCheckCachedPageStates @ 0x1402C8850 (MmCheckCachedPageStates.c)
 *     MiMapArbitraryPage @ 0x1402D4D00 (MiMapArbitraryPage.c)
 *     MiComputeCombineHash @ 0x1402D5A70 (MiComputeCombineHash.c)
 *     MiMakeTransitionPteValid @ 0x1402E5640 (MiMakeTransitionPteValid.c)
 *     MiCompleteRestrictedImageFault @ 0x140376250 (MiCompleteRestrictedImageFault.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiUserPdeOrAbove(unsigned __int64 a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 v2; // r8
  unsigned int i; // eax

  v1 = 0xFFFFF6FB40000000uLL;
  v2 = 0xFFFFF6FB5FFFFFF8uLL;
  for ( i = 1; i < 4; ++i )
  {
    if ( a1 <= v2 && a1 >= v1 )
      return 1LL;
    v1 = ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v2 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  }
  return 0LL;
}
