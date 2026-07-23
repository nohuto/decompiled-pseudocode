/*
 * XREFs of SddlBaseInitialize @ 0x14063FB00
 * Callers:
 *     SepInitializationPhase1 @ 0x140815D14 (SepInitializationPhase1.c)
 * Callees:
 *     InitializeSidLookupTable @ 0x14081E230 (InitializeSidLookupTable.c)
 */

__int64 SddlBaseInitialize()
{
  return InitializeSidLookupTable();
}
