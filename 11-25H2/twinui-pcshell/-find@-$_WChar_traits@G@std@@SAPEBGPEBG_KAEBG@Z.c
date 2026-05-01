/*
 * XREFs of ?find@?$_WChar_traits@G@std@@SAPEBGPEBG_KAEBG@Z @ 0x1801E5460
 * Callers:
 *     ??$_Traits_find_ch@U?$char_traits@G@std@@@std@@YA_KQEBG_K1G@Z @ 0x18033533C (--$_Traits_find_ch@U-$char_traits@G@std@@@std@@YA_KQEBG_K1G@Z.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall std::_WChar_traits<unsigned short>::find(_WORD *a1, __int64 a2, _WORD *a3)
{
  _WORD *result; // rax

  result = 0LL;
  if ( a2 )
  {
    while ( *a1 != *a3 )
    {
      if ( a2 == 1 )
        return result;
      --a2;
      ++a1;
    }
    return a1;
  }
  return result;
}
