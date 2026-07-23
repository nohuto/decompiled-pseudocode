/*
 * XREFs of MiIsLazyStampedPte @ 0x140482EE8
 * Callers:
 *     MiQueryPteAttributes @ 0x1402B4C40 (MiQueryPteAttributes.c)
 *     MiQueryAddressState @ 0x1402E7200 (MiQueryAddressState.c)
 *     MiDeleteVa @ 0x140324AF0 (MiDeleteVa.c)
 *     MiGetNextPageTablePte @ 0x14032A730 (MiGetNextPageTablePte.c)
 *     MiIsPdeOrAboveAccessible @ 0x140482E0C (MiIsPdeOrAboveAccessible.c)
 *     MiQueryVaLargePage @ 0x1405286D4 (MiQueryVaLargePage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsLazyStampedPte(__int16 a1)
{
  return (a1 & 1) == 0 && (a1 & 0x400) == 0 && (a1 & 0x800) == 0 && (a1 & 0x3E0) == 768LL;
}
