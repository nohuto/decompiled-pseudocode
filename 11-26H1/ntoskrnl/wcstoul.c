/*
 * XREFs of wcstoul @ 0x1405389D0
 * Callers:
 *     PnpStringToDwordValue @ 0x1404FB41C (PnpStringToDwordValue.c)
 *     HalpMcEnumerateAndSetPatchConfig @ 0x1405931E8 (HalpMcEnumerateAndSetPatchConfig.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x14089A3A0 (_CmDevicePanelEnumSubkeyCallback.c)
 *     LocalGetAclForString @ 0x1409243B0 (LocalGetAclForString.c)
 *     BiCleanupLoadedStores @ 0x1409D3368 (BiCleanupLoadedStores.c)
 *     BiOpenSystemStore @ 0x1409D43D4 (BiOpenSystemStore.c)
 *     LocalpConvertStringSidToSid @ 0x140A60294 (LocalpConvertStringSidToSid.c)
 *     _CmCreateOrdinalInstanceKey @ 0x140AE8928 (_CmCreateOrdinalInstanceKey.c)
 *     _CmSplitDevicePanelId @ 0x140B5CB08 (_CmSplitDevicePanelId.c)
 *     HalpInitChipHacks @ 0x140CB3C08 (HalpInitChipHacks.c)
 *     KsepMatchInitBiosInfo @ 0x140CCD5F0 (KsepMatchInitBiosInfo.c)
 * Callees:
 *     wcstoxlX @ 0x14053873C (wcstoxlX.c)
 */

unsigned int __cdecl wcstoul(const wchar_t *Str, wchar_t **EndPtr, int Radix)
{
  return wcstoxlX((__int64)&_initiallocalestructinfo, (wint_t *)Str, EndPtr, Radix, 1, 0);
}
