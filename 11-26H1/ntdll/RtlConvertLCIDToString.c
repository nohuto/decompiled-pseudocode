/*
 * XREFs of RtlConvertLCIDToString @ 0x180125D70
 * Callers:
 *     RtlpConvertCultureNamesToLCIDs @ 0x180126050 (RtlpConvertCultureNamesToLCIDs.c)
 * Callees:
 *     RtlIntegerToUnicodeString @ 0x180055710 (RtlIntegerToUnicodeString.c)
 *     RtlStringCchCopyW @ 0x1800DBA18 (RtlStringCchCopyW.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __cdecl RtlConvertLCIDToString(LCID LcidValue, ULONG Base, ULONG Padding, PWSTR pResultBuf, ULONG Size)
{
  NTSTATUS v8; // esi
  ULONG v10; // ebx
  NTSTATUS result; // eax
  ULONG i; // eax
  _UNICODE_STRING String; // [rsp+20h] [rbp-438h] BYREF
  _BYTE v14[1024]; // [rsp+30h] [rbp-428h] BYREF

  v8 = 0;
  *(_DWORD *)(&String.MaximumLength + 1) = 0;
  memset_thunk_772440563353939046(v14, 0, 0x400uLL);
  v10 = Size;
  if ( Size >= 0x200 )
    return -2147483643;
  String.Length = 2 * Size;
  String.MaximumLength = 2 * Size;
  String.Buffer = (wchar_t *)v14;
  result = RtlIntegerToUnicodeString(LcidValue, Base, &String);
  if ( result >= 0 )
  {
    for ( i = String.Length >> 1; i < Padding; ++i )
    {
      if ( !v10 )
        return -1073741823;
      *pResultBuf++ = 48;
      --v10;
    }
    if ( (int)RtlStringCchCopyW(pResultBuf, v10, (__int64)String.Buffer) < 0 )
      return -1073741823;
    return v8;
  }
  return result;
}
