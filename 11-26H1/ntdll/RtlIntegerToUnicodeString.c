/*
 * XREFs of RtlIntegerToUnicodeString @ 0x180055710
 * Callers:
 *     RtlConvertLCIDToString @ 0x180125D70 (RtlConvertLCIDToString.c)
 * Callees:
 *     RtlAnsiStringToUnicodeString @ 0x180025D10 (RtlAnsiStringToUnicodeString.c)
 *     RtlIntegerToChar @ 0x1800557B0 (RtlIntegerToChar.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

NTSTATUS __cdecl RtlIntegerToUnicodeString(ULONG Value, ULONG Base, PUNICODE_STRING String)
{
  NTSTATUS result; // eax
  __int64 v5; // rax
  ANSI_STRING SourceString; // [rsp+20h] [rbp-48h] BYREF
  CHAR Stringa[40]; // [rsp+30h] [rbp-38h] BYREF

  *(_DWORD *)(&SourceString.MaximumLength + 1) = 0;
  result = RtlIntegerToChar(Value, Base, 33, Stringa);
  if ( result >= 0 )
  {
    SourceString.MaximumLength = 33;
    SourceString.Buffer = Stringa;
    v5 = -1LL;
    do
      ++v5;
    while ( Stringa[v5] );
    SourceString.Length = v5;
    return RtlAnsiStringToUnicodeString(String, &SourceString, 0);
  }
  return result;
}
