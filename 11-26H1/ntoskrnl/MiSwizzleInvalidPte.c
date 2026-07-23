/*
 * XREFs of MiSwizzleInvalidPte @ 0x1402B1EF0
 * Callers:
 *     MiSharedInsertPfnChainInList @ 0x1402AFEC0 (MiSharedInsertPfnChainInList.c)
 *     MiEmptyPageAccessLog @ 0x1402B1B9C (MiEmptyPageAccessLog.c)
 *     MiUnmapFrameBuffer @ 0x140314AD4 (MiUnmapFrameBuffer.c)
 *     MiInitializeTransitionPfn @ 0x14036C744 (MiInitializeTransitionPfn.c)
 *     MiMakeSubsectionPte @ 0x1404AF348 (MiMakeSubsectionPte.c)
 *     MiInitializeMdlBatchPages @ 0x14050888C (MiInitializeMdlBatchPages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiSwizzleInvalidPte(__int64 a1)
{
  if ( qword_140E2D8C0 )
  {
    if ( (qword_140E2D8C0 & a1) == 0 )
      return a1 | qword_140E2D8C0;
    return a1 | 0x10;
  }
  return a1;
}
