/*
 * XREFs of MiMakeTransitionPte @ 0x1402EFC80
 * Callers:
 *     MiProtectNonPagedPool @ 0x140250A90 (MiProtectNonPagedPool.c)
 *     MiExclusiveInsertPfnChainInList @ 0x1402AE1C8 (MiExclusiveInsertPfnChainInList.c)
 *     MiCompletePrivateZeroFault @ 0x1402B8530 (MiCompletePrivateZeroFault.c)
 *     MiCombineInitialInstance @ 0x1402EB42C (MiCombineInitialInstance.c)
 *     MiDuplicateCloneLeaf @ 0x1402EF3F4 (MiDuplicateCloneLeaf.c)
 *     MiBuildForkPageTable @ 0x1402EFCDC (MiBuildForkPageTable.c)
 *     MiSwitchValidPteToTransition @ 0x1402F0DC0 (MiSwitchValidPteToTransition.c)
 *     MiTrimSystemImagePages @ 0x1402F1124 (MiTrimSystemImagePages.c)
 *     MmProtectMdlSystemAddress @ 0x1402F1A90 (MmProtectMdlSystemAddress.c)
 *     MiMakeVaRangeNoAccess @ 0x140312D14 (MiMakeVaRangeNoAccess.c)
 *     MiWsleFlush @ 0x14032C540 (MiWsleFlush.c)
 *     MiOutPageSingleKernelStack @ 0x14036A700 (MiOutPageSingleKernelStack.c)
 *     MiInitializeReadInProgressPfn @ 0x140375570 (MiInitializeReadInProgressPfn.c)
 *     MiMakeOutswappedPageResident @ 0x1404296E4 (MiMakeOutswappedPageResident.c)
 *     MmOutSwapProcess @ 0x140494118 (MmOutSwapProcess.c)
 *     MiPageBootRegistry @ 0x1406E8744 (MiPageBootRegistry.c)
 *     MiInitializeNewPfns @ 0x1406EB1F8 (MiInitializeNewPfns.c)
 *     MiProtectAweValidPte @ 0x140706F68 (MiProtectAweValidPte.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiMakeTransitionPte(__int64 a1, char a2)
{
  unsigned __int64 result; // rax

  result = *(_QWORD *)&CLFS_LSN_NULL_EXT & 0xFFF0000000000C1FuLL | (32
                                                                  * (a2 & 0x1F | ((a1 & 0xFFFFFFFFFFLL) << 7) | 0x40));
  if ( qword_140E2D8C0 )
  {
    if ( (qword_140E2D8C0 & result) != 0 )
      result |= 0x10uLL;
    else
      result |= qword_140E2D8C0;
  }
  return result;
}
