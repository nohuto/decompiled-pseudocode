/*
 * XREFs of RtlEqualString @ 0x14049DC00
 * Callers:
 *     WheapGetModuleInfo @ 0x1406DA41C (WheapGetModuleInfo.c)
 *     IopGetBootDiskInformation @ 0x140CC4748 (IopGetBootDiskInformation.c)
 *     IopInitializeBuiltinDriver @ 0x140D0F138 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     RtlCompareString @ 0x14097C2A0 (RtlCompareString.c)
 */

BOOLEAN __stdcall RtlEqualString(const STRING *String1, const STRING *String2, BOOLEAN CaseInSensitive)
{
  return String1->Length == String2->Length && RtlCompareString(String1, String2, CaseInSensitive) == 0;
}
