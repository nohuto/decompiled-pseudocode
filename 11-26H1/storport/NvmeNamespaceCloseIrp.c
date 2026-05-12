/*
 * XREFs of NvmeNamespaceCloseIrp @ 0x14002FF68
 * Callers:
 *     RaDriverCloseIrp @ 0x1401B2D90 (RaDriverCloseIrp.c)
 * Callees:
 *     RaidHandleCreateCloseIrp @ 0x14002FF80 (RaidHandleCreateCloseIrp.c)
 */

__int64 __fastcall NvmeNamespaceCloseIrp(__int64 a1)
{
  return RaidHandleCreateCloseIrp(*(unsigned int *)(a1 + 96));
}
