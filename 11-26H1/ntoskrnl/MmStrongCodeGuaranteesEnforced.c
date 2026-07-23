/*
 * XREFs of MmStrongCodeGuaranteesEnforced @ 0x140D076D0
 * Callers:
 *     KiVerifyXcpt15 @ 0x140C863F0 (KiVerifyXcpt15.c)
 *     KeFreeInitializationCode @ 0x140C86CCC (KeFreeInitializationCode.c)
 *     sub_140C88940 @ 0x140C88940 (sub_140C88940.c)
 * Callees:
 *     <none>
 */

unsigned __int64 MmStrongCodeGuaranteesEnforced()
{
  return ((unsigned __int64)MiFlags >> 17) & 1;
}
