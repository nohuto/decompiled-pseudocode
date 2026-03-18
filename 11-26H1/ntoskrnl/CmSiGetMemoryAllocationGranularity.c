/*
 * XREFs of CmSiGetMemoryAllocationGranularity @ 0x1404E5654
 * Callers:
 *     HvpViewMapCreateViewsForRegion @ 0x1408B8388 (HvpViewMapCreateViewsForRegion.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x1408DD1F4 (HvpViewMapPromoteRangeToMapping.c)
 * Callees:
 *     <none>
 */

__int64 CmSiGetMemoryAllocationGranularity()
{
  return 0x10000LL;
}
