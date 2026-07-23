/*
 * XREFs of sub_1409ECCCC @ 0x1409ECCCC
 * Callers:
 *     sub_1409ECABC @ 0x1409ECABC (sub_1409ECABC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1409ECCCC(__int64 a1, unsigned int a2, int a3)
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
