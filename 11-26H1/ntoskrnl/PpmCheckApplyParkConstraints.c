/*
 * XREFs of PpmCheckApplyParkConstraints @ 0x1404BBD54
 * Callers:
 *     PpmParkApplyForcedMask @ 0x1407DD1D8 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x1407DD3EC (PpmParkClearForcedMask.c)
 *     PpmCheckInitProcessors @ 0x140A9CBF0 (PpmCheckInitProcessors.c)
 *     PpmReapplyPerfPolicy @ 0x140A9D088 (PpmReapplyPerfPolicy.c)
 * Callees:
 *     PpmCheckCustomRun @ 0x1404BBD70 (PpmCheckCustomRun.c)
 */

__int64 PpmCheckApplyParkConstraints()
{
  return PpmCheckCustomRun(4LL);
}
