/*
 * XREFs of MiUserPdeOrAbove @ 0x1402A1440
 * Callers:
 *     MiCreateSharedZeroPages @ 0x140283980 (MiCreateSharedZeroPages.c)
 *     MiGetPteFromCopyList @ 0x140285490 (MiGetPteFromCopyList.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140287EE0 (MiMapPageInHyperSpaceWorker.c)
 *     MiCachedPageFinish @ 0x1402A0710 (MiCachedPageFinish.c)
 *     MiMapFrame @ 0x1402A0B50 (MiMapFrame.c)
 *     MiWriteLargePte @ 0x1402A10E0 (MiWriteLargePte.c)
 *     MiCompletePrivateZeroFault @ 0x1402D6770 (MiCompletePrivateZeroFault.c)
 *     MiProtoFaultGetProtection @ 0x1402D93F0 (MiProtoFaultGetProtection.c)
 *     MiMakeValidPte @ 0x1402DA020 (MiMakeValidPte.c)
 *     MmCheckCachedPageStates @ 0x1402E6810 (MmCheckCachedPageStates.c)
 *     MiMapArbitraryPage @ 0x1402F2C80 (MiMapArbitraryPage.c)
 *     MiComputeCombineHash @ 0x1402F39F0 (MiComputeCombineHash.c)
 *     MiMakeTransitionPteValid @ 0x1403035C0 (MiMakeTransitionPteValid.c)
 *     MiCompleteRestrictedImageFault @ 0x1403744A0 (MiCompleteRestrictedImageFault.c)
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
