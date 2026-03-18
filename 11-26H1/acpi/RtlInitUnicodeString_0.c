/*
 * XREFs of RtlInitUnicodeString_0 @ 0x140055D0D
 * Callers:
 *     ArbpGetRegistryValue @ 0x1400A840C (ArbpGetRegistryValue.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall RtlInitUnicodeString_0(PUNICODE_STRING DestinationString, PCWSTR SourceString)
{
  RtlInitUnicodeString(DestinationString, SourceString);
}
