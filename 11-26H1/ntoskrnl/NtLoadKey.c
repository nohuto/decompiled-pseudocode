/*
 * XREFs of NtLoadKey @ 0x14093C0F0
 * Callers:
 *     DifNtLoadKeyWrapper @ 0x14067E730 (DifNtLoadKeyWrapper.c)
 * Callees:
 *     NtLoadKeyEx @ 0x14093D390 (NtLoadKeyEx.c)
 */

NTSTATUS __cdecl NtLoadKey(POBJECT_ATTRIBUTES TargetKey, POBJECT_ATTRIBUTES SourceFile)
{
  return NtLoadKeyEx(TargetKey, SourceFile, 0, 0LL, 0LL, 0, 0LL, 0LL);
}
