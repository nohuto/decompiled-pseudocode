/*
 * XREFs of SearchInCHSBaseFontFileNameSuffixes @ 0x140205958
 * Callers:
 *     ?IsCHSBaseFont@@YAHPEBGI@Z @ 0x1402621E4 (-IsCHSBaseFont@@YAHPEBGI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SearchInCHSBaseFontFileNameSuffixes(
        PCUNICODE_STRING String1,
        PCUNICODE_STRING String2,
        unsigned int a3)
{
  unsigned int i; // ebx

  for ( i = 0; i < a3; ++i )
  {
    if ( RtlEqualUnicodeString(String1, String2, 0) )
      return i;
    ++String2;
  }
  return 0xFFFFFFFFLL;
}
