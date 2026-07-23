/*
 * XREFs of RtlpInitUnicodeStringUsingBuffer @ 0x180051870
 * Callers:
 *     RtlLCIDToCultureName @ 0x1800512D0 (RtlLCIDToCultureName.c)
 *     RtlLcidToLocaleName @ 0x1800515E0 (RtlLcidToLocaleName.c)
 *     RtlpGetCustomCultureDataFromFile @ 0x1801264C0 (RtlpGetCustomCultureDataFromFile.c)
 * Callees:
 *     RtlCreateUnicodeString @ 0x180028180 (RtlCreateUnicodeString.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

__int64 __fastcall RtlpInitUnicodeStringUsingBuffer(char a1, const WCHAR *a2, unsigned int a3, _UNICODE_STRING *a4)
{
  unsigned __int64 v5; // rdi
  unsigned __int16 v6; // bx
  __int64 result; // rax
  BOOLEAN UnicodeString; // al
  unsigned int v9; // ecx

  if ( a1 )
  {
    UnicodeString = RtlCreateUnicodeString(a4, a2);
    v9 = 0;
    if ( !UnicodeString )
      return (unsigned int)-1073741801;
    return v9;
  }
  else
  {
    if ( a3 >= 0x55 )
      return 3221225507LL;
    v5 = 2LL * a3;
    if ( a4->MaximumLength <= v5 )
    {
      return 3221225507LL;
    }
    else
    {
      v6 = 2 * a3;
      memmove(a4->Buffer, a2, (unsigned __int16)(2 * a3));
      a4->Buffer[v5 / 2] = 0;
      result = 0LL;
      a4->Length = v6;
    }
  }
  return result;
}
