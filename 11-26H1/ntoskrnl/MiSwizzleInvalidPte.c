/*
 * XREFs of MiSwizzleInvalidPte @ 0x1402D0130
 * Callers:
 *     MiSharedInsertPfnChainInList @ 0x1402CE100 (MiSharedInsertPfnChainInList.c)
 *     MiEmptyPageAccessLog @ 0x1402CFDDC (MiEmptyPageAccessLog.c)
 *     MiUnmapFrameBuffer @ 0x140312AA4 (MiUnmapFrameBuffer.c)
 *     MiInitializeTransitionPfn @ 0x14036A9A4 (MiInitializeTransitionPfn.c)
 *     MiMakeSubsectionPte @ 0x1404B5EF8 (MiMakeSubsectionPte.c)
 *     MiInitializeMdlBatchPages @ 0x14050EE1C (MiInitializeMdlBatchPages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiSwizzleInvalidPte(__int64 a1)
{
  if ( qword_140E2D740 )
  {
    if ( (qword_140E2D740 & a1) == 0 )
      return a1 | qword_140E2D740;
    return a1 | 0x10;
  }
  return a1;
}
