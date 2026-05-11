/*
 * XREFs of USBCntrlGetSetProcessingUnitEnable @ 0x140039500
 * Callers:
 *     TopologyProcessExtensionUnit @ 0x1400319F0 (TopologyProcessExtensionUnit.c)
 *     TopologyProcessProcessUnit @ 0x140031EE0 (TopologyProcessProcessUnit.c)
 * Callees:
 *     USBCntrlGetSetProcessingUnitValue @ 0x140039530 (USBCntrlGetSetProcessingUnitValue.c)
 */

__int64 __fastcall USBCntrlGetSetProcessingUnitEnable(int a1, int a2, int a3, __int64 a4)
{
  return USBCntrlGetSetProcessingUnitValue(a1, a2, a3, 1, a4, 1);
}
