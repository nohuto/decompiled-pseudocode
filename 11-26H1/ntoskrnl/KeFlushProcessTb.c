/*
 * XREFs of KeFlushProcessTb @ 0x1404840AC
 * Callers:
 *     KeSwapDirectoryTableBase @ 0x140483D2C (KeSwapDirectoryTableBase.c)
 *     MiDeleteProcessShadow @ 0x140483DCC (MiDeleteProcessShadow.c)
 *     MmOutSwapProcess @ 0x14049A5C8 (MmOutSwapProcess.c)
 *     MiDeleteFinalPageTables @ 0x1404CE05C (MiDeleteFinalPageTables.c)
 * Callees:
 *     KiFlushAddressSpaceTb @ 0x14024FEF8 (KiFlushAddressSpaceTb.c)
 */

__int64 __fastcall KeFlushProcessTb(__int64 a1)
{
  __int64 result; // rax

  result = (unsigned int)HvlEnlightenments;
  if ( (HvlEnlightenments & 1) != 0 )
    return KiFlushAddressSpaceTb(a1 & 0xFFFFFFFFFFFFF000uLL, 0LL, 0LL, 0LL);
  return result;
}
