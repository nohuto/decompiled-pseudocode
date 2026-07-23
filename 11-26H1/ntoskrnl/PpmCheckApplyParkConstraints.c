/*
 * XREFs of PpmCheckApplyParkConstraints @ 0x1404B5534
 * Callers:
 *     PpmParkApplyForcedMask @ 0x1407E1804 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x1407E1A18 (PpmParkClearForcedMask.c)
 *     PpmReapplyPerfPolicy @ 0x140AD8B10 (PpmReapplyPerfPolicy.c)
 *     PpmCheckInitProcessors @ 0x140AEB890 (PpmCheckInitProcessors.c)
 * Callees:
 *     PpmCheckCustomRun @ 0x1404B5550 (PpmCheckCustomRun.c)
 */

__int64 PpmCheckApplyParkConstraints()
{
  return PpmCheckCustomRun(4LL);
}
