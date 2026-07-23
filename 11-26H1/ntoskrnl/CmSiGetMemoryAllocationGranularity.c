/*
 * XREFs of CmSiGetMemoryAllocationGranularity @ 0x1404DEBF4
 * Callers:
 *     HvpViewMapCreateViewsForRegion @ 0x1408BE958 (HvpViewMapCreateViewsForRegion.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x1408E37B4 (HvpViewMapPromoteRangeToMapping.c)
 * Callees:
 *     <none>
 */

__int64 CmSiGetMemoryAllocationGranularity()
{
  return 0x10000LL;
}
