/*
 * XREFs of RtlInitUnicodeStringEx_0 @ 0x180070330
 * Callers:
 *     CompatCacheLookupPackage @ 0x180058EBC (CompatCacheLookupPackage.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall RtlInitUnicodeStringEx_0(PUNICODE_STRING DestinationString, PCWSTR SourceString)
{
  return RtlInitUnicodeStringEx(DestinationString, SourceString);
}
