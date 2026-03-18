/*
 * XREFs of ?WriteEncoded8@@YAHEPEAEIPEBE@Z @ 0x1403187C8
 * Callers:
 *     ?EncodeRLE8@@YAHPEAE0III@Z @ 0x14021A9A4 (-EncodeRLE8@@YAHPEAE0III@Z.c)
 *     ?EncodeRLE4@@YAHPEAE0III@Z @ 0x140231554 (-EncodeRLE4@@YAHPEAE0III@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WriteEncoded8(unsigned __int8 a1, unsigned __int8 *a2, unsigned __int8 a3, unsigned __int8 *a4)
{
  if ( !a2 )
    return 2LL;
  if ( a2 + 2 <= a4 )
  {
    *a2 = a3;
    a2[1] = a1;
    return 2LL;
  }
  return 0LL;
}
