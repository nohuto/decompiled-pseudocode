/*
 * XREFs of NdisGetSharedDataAlignment @ 0x14006D010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG NdisGetSharedDataAlignment(void)
{
  return KeGetRecommendedSharedDataAlignment();
}
