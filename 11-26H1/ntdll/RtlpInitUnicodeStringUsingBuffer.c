/*
 * XREFs of RtlpInitUnicodeStringUsingBuffer @ 0x180006140
 * Callers:
 *     RtlLCIDToCultureName @ 0x180005BA0 (RtlLCIDToCultureName.c)
 *     RtlLcidToLocaleName @ 0x180005EB0 (RtlLcidToLocaleName.c)
 *     RtlpGetCustomCultureDataFromFile @ 0x180126750 (RtlpGetCustomCultureDataFromFile.c)
 * Callees:
 *     RtlCreateUnicodeString @ 0x18003DC10 (RtlCreateUnicodeString.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall RtlpInitUnicodeStringUsingBuffer(char a1, const void *a2, unsigned int a3, __int64 a4)
{
  unsigned __int64 v5; // rdi
  __int16 v6; // bx
  __int64 result; // rax
  char UnicodeString; // al
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
    if ( *(unsigned __int16 *)(a4 + 2) <= v5 )
    {
      return 3221225507LL;
    }
    else
    {
      v6 = 2 * a3;
      memmove(*(void **)(a4 + 8), a2, (unsigned __int16)(2 * a3));
      *(_WORD *)(v5 + *(_QWORD *)(a4 + 8)) = 0;
      result = 0LL;
      *(_WORD *)a4 = v6;
    }
  }
  return result;
}
