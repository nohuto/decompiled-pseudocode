/*
 * XREFs of RtlUnicodeStringToLcid @ 0x1801148C4
 * Callers:
 *     RtlGetUILanguageInfo @ 0x18000A1D0 (RtlGetUILanguageInfo.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x1801424F0 (RtlpConvertLCIDsToCultureNames.c)
 *     RtlpSetInstallLanguage @ 0x180142B80 (RtlpSetInstallLanguage.c)
 * Callees:
 *     RtlIsValidLocaleName @ 0x180001D40 (RtlIsValidLocaleName.c)
 *     RtlLCIDToCultureName @ 0x180005BA0 (RtlLCIDToCultureName.c)
 *     RtlUnicodeStringToInteger @ 0x1800068F0 (RtlUnicodeStringToInteger.c)
 *     iswctype @ 0x18012AE10 (iswctype.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlUnicodeStringToLcid(unsigned __int16 *a1, int *a2)
{
  unsigned int v4; // ebx
  unsigned int v5; // esi
  unsigned int i; // edi
  unsigned int v7; // ecx
  wchar_t *String[2]; // [rsp+20h] [rbp-F8h] BYREF
  _BYTE v10[176]; // [rsp+30h] [rbp-E8h] BYREF

  v4 = 0;
  memset_thunk_772440563353939046(v10, 0, 0xAAuLL);
  *(_OWORD *)String = 0LL;
  if ( !a1 )
    return (unsigned int)-1073741811;
  if ( !a2 )
    return (unsigned int)-1073741811;
  v5 = *a1 >> 1;
  if ( v5 > 4 )
    return (unsigned int)-1073741811;
  for ( i = 0; i < v5; ++i )
  {
    if ( !iswctype(*(_WORD *)(*((_QWORD *)a1 + 1) + 2LL * i), 0x80u) )
      return (unsigned int)-1073741811;
  }
  if ( (int)RtlUnicodeStringToInteger(a1, 0x10u, a2) < 0 )
    return (unsigned int)-1073741811;
  v7 = *a2;
  String[1] = (wchar_t *)v10;
  LODWORD(String[0]) = 11141290;
  if ( !(unsigned __int8)RtlLCIDToCultureName(v7, (__int64)String) || !RtlIsValidLocaleName(String[1], 2) )
    return (unsigned int)-1073741811;
  return v4;
}
