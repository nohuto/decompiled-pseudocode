/*
 * XREFs of MiIsLazyStampedPte @ 0x1404893A8
 * Callers:
 *     MiQueryPteAttributes @ 0x1402D2E80 (MiQueryPteAttributes.c)
 *     MiQueryAddressState @ 0x140305180 (MiQueryAddressState.c)
 *     MiDeleteVa @ 0x140322AC0 (MiDeleteVa.c)
 *     MiGetNextPageTablePte @ 0x140328700 (MiGetNextPageTablePte.c)
 *     MiIsPdeOrAboveAccessible @ 0x1404892CC (MiIsPdeOrAboveAccessible.c)
 *     MiQueryVaLargePage @ 0x140526064 (MiQueryVaLargePage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsLazyStampedPte(__int16 a1)
{
  return (a1 & 1) == 0 && (a1 & 0x400) == 0 && (a1 & 0x800) == 0 && (a1 & 0x3E0) == 768LL;
}
