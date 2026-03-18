/*
 * XREFs of sub_1409F04FC @ 0x1409F04FC
 * Callers:
 *     sub_1409F02EC @ 0x1409F02EC (sub_1409F02EC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1409F04FC(__int64 a1, unsigned int a2, int a3)
{
  unsigned int v3; // r9d

  v3 = a2 + a3;
  while ( 1 )
  {
    if ( a2 >= v3 )
      return 0xFFFFFFFFLL;
    if ( *(_BYTE *)(a2 + a1 + 44) )
      break;
    ++a2;
  }
  return a2;
}
