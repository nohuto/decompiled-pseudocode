/*
 * XREFs of RtlInt64ToUnicodeString @ 0x180141960
 * Callers:
 *     <none>
 * Callees:
 *     RtlAnsiStringToUnicodeString @ 0x18003B7A0 (RtlAnsiStringToUnicodeString.c)
 *     RtlLargeIntegerToChar @ 0x1800FB0F0 (RtlLargeIntegerToChar.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

NTSTATUS __fastcall RtlInt64ToUnicodeString(unsigned __int64 a1, unsigned int a2, UNICODE_STRING *a3)
{
  NTSTATUS result; // eax
  __int64 v5; // rax
  STRING SourceString; // [rsp+20h] [rbp-88h] BYREF
  unsigned __int64 v7; // [rsp+30h] [rbp-78h] BYREF
  char v8[80]; // [rsp+40h] [rbp-68h] BYREF

  v7 = a1;
  *(_DWORD *)(&SourceString.MaximumLength + 1) = 0;
  result = RtlLargeIntegerToChar(&v7, a2, 65, v8);
  if ( result >= 0 )
  {
    SourceString.MaximumLength = 65;
    SourceString.Buffer = v8;
    v5 = -1LL;
    do
      ++v5;
    while ( v8[v5] );
    SourceString.Length = v5;
    return RtlAnsiStringToUnicodeString(a3, &SourceString, 0);
  }
  return result;
}
