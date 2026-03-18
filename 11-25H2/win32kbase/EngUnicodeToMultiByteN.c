/*
 * XREFs of EngUnicodeToMultiByteN @ 0x1401C7DA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall EngUnicodeToMultiByteN(
        PCHAR pchMultiByteString,
        ULONG cjMultiByteBuf,
        PULONG pcjMultiByteString,
        PWSTR pwszUnicodeString,
        ULONG cjUnicodeString)
{
  RtlUnicodeToMultiByteN(pchMultiByteString, cjMultiByteBuf, pcjMultiByteString, pwszUnicodeString, cjUnicodeString);
}
