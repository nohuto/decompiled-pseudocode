/*
 * XREFs of wcstoul @ 0x14053AE50
 * Callers:
 *     PnpStringToDwordValue @ 0x1404F4A2C (PnpStringToDwordValue.c)
 *     HalpMcEnumerateAndSetPatchConfig @ 0x140595968 (HalpMcEnumerateAndSetPatchConfig.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x1408A07A0 (_CmDevicePanelEnumSubkeyCallback.c)
 *     LocalGetAclForString @ 0x1408FFEC0 (LocalGetAclForString.c)
 *     BiCleanupLoadedStores @ 0x1409A4348 (BiCleanupLoadedStores.c)
 *     BiOpenSystemStore @ 0x1409A53B4 (BiOpenSystemStore.c)
 *     LocalpConvertStringSidToSid @ 0x140A6D254 (LocalpConvertStringSidToSid.c)
 *     _CmCreateOrdinalInstanceKey @ 0x140AE67D8 (_CmCreateOrdinalInstanceKey.c)
 *     _CmSplitDevicePanelId @ 0x140B5FC88 (_CmSplitDevicePanelId.c)
 *     HalpInitChipHacks @ 0x140CB9C48 (HalpInitChipHacks.c)
 *     KsepMatchInitBiosInfo @ 0x140CD3750 (KsepMatchInitBiosInfo.c)
 * Callees:
 *     wcstoxlX @ 0x14053ABBC (wcstoxlX.c)
 */

unsigned int __cdecl wcstoul(const wchar_t *Str, wchar_t **EndPtr, int Radix)
{
  return wcstoxlX((__int64)&_initiallocalestructinfo, (wint_t *)Str, EndPtr, Radix, 1, 0);
}
