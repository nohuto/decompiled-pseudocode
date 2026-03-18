/*
 * XREFs of MiImageContainsVa @ 0x1404BD1D8
 * Callers:
 *     MmFindDataTableEntryByAddress @ 0x140366EA0 (MmFindDataTableEntryByAddress.c)
 *     MiIsDriverPage @ 0x1404BD140 (MiIsDriverPage.c)
 *     MiGetHighestPteConsumer @ 0x140524CA4 (MiGetHighestPteConsumer.c)
 *     MiCheckVerifierFunctionsCfgState @ 0x14087BAA8 (MiCheckVerifierFunctionsCfgState.c)
 *     MiIsBootImageTargetFullyRetpolined @ 0x140CFACE0 (MiIsBootImageTargetFullyRetpolined.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiImageContainsVa(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 48);
  return a2 >= v2 && a2 < v2 + *(unsigned int *)(a1 + 64);
}
