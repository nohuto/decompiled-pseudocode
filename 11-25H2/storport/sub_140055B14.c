/*
 * XREFs of sub_140055B14 @ 0x140055B14
 * Callers:
 *     sub_1400B931C @ 0x1400B931C (sub_1400B931C.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_140055B14(_BYTE *a1)
{
  bool result; // al

  result = 0;
  if ( !*a1 && !a1[1] && !a1[2] && !a1[3] )
    return a1[4] == 0;
  return result;
}
