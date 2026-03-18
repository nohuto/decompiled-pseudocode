/*
 * XREFs of ulColorRefToRGB @ 0x14015F890
 * Callers:
 *     <none>
 * Callees:
 *     ulIndexToRGB @ 0x140090D30 (ulIndexToRGB.c)
 */

__int64 __fastcall ulColorRefToRGB(__int64 a1, __int64 a2, unsigned int a3)
{
  if ( (a3 & 0x10FF0000) == 0x10FF0000 )
    return ulIndexToRGB(a1, a2, (unsigned __int8)a3);
  else
    return a3;
}
