/*
 * XREFs of KiGetL2L3AssociativityAmd @ 0x140BFB848
 * Callers:
 *     KiSetCacheInformationAmd @ 0x140BFD0E8 (KiSetCacheInformationAmd.c)
 * Callees:
 *     <none>
 */

char __fastcall KiGetL2L3AssociativityAmd(char a1)
{
  char result; // al

  if ( !a1 )
    return 0;
  result = 2;
  if ( a1 != 2 )
  {
    result = 4;
    if ( a1 != 4 )
    {
      if ( a1 == 6 )
      {
        return 8;
      }
      else if ( a1 == 8 )
      {
        return 16;
      }
      else
      {
        result = -1;
        if ( a1 != 15 )
          return 1;
      }
    }
  }
  return result;
}
