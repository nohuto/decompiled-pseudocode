/*
 * XREFs of SymCryptSaveXmm @ 0x1404C3520
 * Callers:
 *     SymCryptSha256AppendBlocks @ 0x140555A30 (SymCryptSha256AppendBlocks.c)
 *     SymCryptParallelSha256Process @ 0x140557ED0 (SymCryptParallelSha256Process.c)
 * Callees:
 *     HalSystemVectorDispatchEntry @ 0x1404B6E40 (HalSystemVectorDispatchEntry.c)
 */

__int64 SymCryptSaveXmm()
{
  return HalSystemVectorDispatchEntry();
}
