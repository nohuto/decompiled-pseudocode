/*
 * XREFs of MmStrongCodeGuaranteesEnforced @ 0x140D01330
 * Callers:
 *     KiVerifyXcpt15 @ 0x140C803F0 (KiVerifyXcpt15.c)
 *     KeFreeInitializationCode @ 0x140C80CCC (KeFreeInitializationCode.c)
 *     sub_140C82940 @ 0x140C82940 (sub_140C82940.c)
 * Callees:
 *     <none>
 */

unsigned __int64 MmStrongCodeGuaranteesEnforced()
{
  return ((unsigned __int64)MiFlags >> 17) & 1;
}
