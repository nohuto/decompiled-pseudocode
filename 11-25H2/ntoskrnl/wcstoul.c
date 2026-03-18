/*
 * XREFs of wcstoul @ 0x1404FE050
 * Callers:
 *     PnpStringToDwordValue @ 0x1404D8330 (PnpStringToDwordValue.c)
 *     HalpMcEnumerateAndSetPatchConfig @ 0x140556BB8 (HalpMcEnumerateAndSetPatchConfig.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x14080D190 (_CmDevicePanelEnumSubkeyCallback.c)
 *     LocalGetAclForString @ 0x140917620 (LocalGetAclForString.c)
 *     LocalpConvertStringSidToSid @ 0x1409E7FDC (LocalpConvertStringSidToSid.c)
 *     BiOpenSystemStore @ 0x140A26AF8 (BiOpenSystemStore.c)
 *     _CmCreateOrdinalInstanceKey @ 0x140A5E0F0 (_CmCreateOrdinalInstanceKey.c)
 *     _CmSplitDevicePanelId @ 0x140AB1928 (_CmSplitDevicePanelId.c)
 *     HalpInitChipHacks @ 0x140C02B04 (HalpInitChipHacks.c)
 *     KsepMatchInitBiosInfo @ 0x140C1AA00 (KsepMatchInitBiosInfo.c)
 * Callees:
 *     wcstoxlX @ 0x1404FDDC4 (wcstoxlX.c)
 */

unsigned int __cdecl wcstoul(const wchar_t *Str, wchar_t **EndPtr, int Radix)
{
  return wcstoxlX((__int64)&_initiallocalestructinfo, (wint_t *)Str, EndPtr, Radix, 1, 0);
}
