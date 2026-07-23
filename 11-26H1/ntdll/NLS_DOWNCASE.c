/*
 * XREFs of NLS_DOWNCASE @ 0x180097C90
 * Callers:
 *     RtlDowncaseUnicodeChar @ 0x180097C70 (RtlDowncaseUnicodeChar.c)
 *     RtlFindCharInUnicodeString @ 0x180099860 (RtlFindCharInUnicodeString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NLS_DOWNCASE(__int64 a1, int a2)
{
  if ( (unsigned __int16)a2 < 0x41u )
    return (unsigned __int16)a2;
  if ( (unsigned __int16)a2 > 0x5Au )
  {
    if ( a1 )
    {
      if ( (unsigned __int16)a2 >= 0xC0u )
        LOWORD(a2) = *(_WORD *)(a1
                              + 2LL
                              * ((a2 & 0xF)
                               + (unsigned int)*(unsigned __int16 *)(a1
                                                                   + 2LL
                                                                   * ((((unsigned __int16)a2 >> 4) & 0xF)
                                                                    + (unsigned int)*(unsigned __int16 *)(a1 + 2 * ((unsigned __int64)(unsigned __int16)a2 >> 8))))))
                   + a2;
    }
    return (unsigned __int16)a2;
  }
  return (unsigned int)(a2 + 32);
}
