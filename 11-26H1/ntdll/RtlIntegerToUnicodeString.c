/*
 * XREFs of RtlIntegerToUnicodeString @ 0x180009FE0
 * Callers:
 *     RtlConvertLCIDToString @ 0x180126000 (RtlConvertLCIDToString.c)
 * Callees:
 *     RtlIntegerToChar @ 0x18000A080 (RtlIntegerToChar.c)
 *     RtlAnsiStringToUnicodeString @ 0x18003B7A0 (RtlAnsiStringToUnicodeString.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

NTSTATUS __fastcall RtlIntegerToUnicodeString(__int64 a1, __int64 a2, UNICODE_STRING *a3)
{
  NTSTATUS result; // eax
  __int64 v5; // rax
  STRING SourceString; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v7[40]; // [rsp+30h] [rbp-38h] BYREF

  *(_DWORD *)(&SourceString.MaximumLength + 1) = 0;
  result = RtlIntegerToChar(a1, a2, 33LL, v7);
  if ( result >= 0 )
  {
    SourceString.MaximumLength = 33;
    SourceString.Buffer = v7;
    v5 = -1LL;
    do
      ++v5;
    while ( v7[v5] );
    SourceString.Length = v5;
    return RtlAnsiStringToUnicodeString(a3, &SourceString, 0);
  }
  return result;
}
