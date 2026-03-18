/*
 * XREFs of MiMakeTransitionPte @ 0x14030DC00
 * Callers:
 *     MiProtectNonPagedPool @ 0x14024F130 (MiProtectNonPagedPool.c)
 *     MiExclusiveInsertPfnChainInList @ 0x1402CC408 (MiExclusiveInsertPfnChainInList.c)
 *     MiCompletePrivateZeroFault @ 0x1402D6770 (MiCompletePrivateZeroFault.c)
 *     MiCombineInitialInstance @ 0x1403093AC (MiCombineInitialInstance.c)
 *     MiDuplicateCloneLeaf @ 0x14030D374 (MiDuplicateCloneLeaf.c)
 *     MiBuildForkPageTable @ 0x14030DC5C (MiBuildForkPageTable.c)
 *     MiSwitchValidPteToTransition @ 0x14030ED40 (MiSwitchValidPteToTransition.c)
 *     MiTrimSystemImagePages @ 0x14030F0A4 (MiTrimSystemImagePages.c)
 *     MmProtectMdlSystemAddress @ 0x14030FA10 (MmProtectMdlSystemAddress.c)
 *     MiMakeVaRangeNoAccess @ 0x140310CE0 (MiMakeVaRangeNoAccess.c)
 *     MiWsleFlush @ 0x14032A510 (MiWsleFlush.c)
 *     MiOutPageSingleKernelStack @ 0x140368960 (MiOutPageSingleKernelStack.c)
 *     MiInitializeReadInProgressPfn @ 0x1403737C0 (MiInitializeReadInProgressPfn.c)
 *     MiMakeOutswappedPageResident @ 0x14040BF9C (MiMakeOutswappedPageResident.c)
 *     MmOutSwapProcess @ 0x14049A5C8 (MmOutSwapProcess.c)
 *     MiPageBootRegistry @ 0x1406E3A98 (MiPageBootRegistry.c)
 *     MiInitializeNewPfns @ 0x1406E6548 (MiInitializeNewPfns.c)
 *     MiProtectAweValidPte @ 0x140702298 (MiProtectAweValidPte.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiMakeTransitionPte(__int64 a1, char a2)
{
  unsigned __int64 result; // rax

  result = *(_QWORD *)&CLFS_LSN_NULL_EXT & 0xFFF0000000000C1FuLL | (32
                                                                  * (a2 & 0x1F | ((a1 & 0xFFFFFFFFFFLL) << 7) | 0x40));
  if ( qword_140E2D740 )
  {
    if ( (qword_140E2D740 & result) != 0 )
      result |= 0x10uLL;
    else
      result |= qword_140E2D740;
  }
  return result;
}
