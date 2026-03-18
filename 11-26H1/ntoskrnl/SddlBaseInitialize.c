/*
 * XREFs of SddlBaseInitialize @ 0x14063BF24
 * Callers:
 *     SepInitializationPhase1 @ 0x140810284 (SepInitializationPhase1.c)
 * Callees:
 *     InitializeSidLookupTable @ 0x140818020 (InitializeSidLookupTable.c)
 */

__int64 SddlBaseInitialize()
{
  return InitializeSidLookupTable();
}
