/*
 * XREFs of RtlEqualString @ 0x1404A4570
 * Callers:
 *     WheapGetModuleInfo @ 0x1406D633C (WheapGetModuleInfo.c)
 *     IopGetBootDiskInformation @ 0x140CBE678 (IopGetBootDiskInformation.c)
 *     IopInitializeBuiltinDriver @ 0x140D08E68 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     RtlCompareString @ 0x14096B960 (RtlCompareString.c)
 */

BOOLEAN __stdcall RtlEqualString(const STRING *String1, const STRING *String2, BOOLEAN CaseInSensitive)
{
  return String1->Length == String2->Length && RtlCompareString(String1, String2, CaseInSensitive) == 0;
}
