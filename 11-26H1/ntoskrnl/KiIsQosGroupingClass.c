/*
 * XREFs of KiIsQosGroupingClass @ 0x14044FAD0
 * Callers:
 *     KiCheckPreferredHeteroProcessor @ 0x140220510 (KiCheckPreferredHeteroProcessor.c)
 *     KiHeteroSelectIdleProcessorFromNode @ 0x140236710 (KiHeteroSelectIdleProcessorFromNode.c)
 * Callees:
 *     <none>
 */

bool __fastcall KiIsQosGroupingClass(int a1)
{
  return (unsigned int)(a1 - 5) <= 1 || a1 == 2 || a1 == 1 && !KiDisableMediumQosGrouping;
}
