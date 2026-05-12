/*
 * XREFs of sub_14008D628 @ 0x14008D628
 * Callers:
 *     sub_14008F4F4 @ 0x14008F4F4 (sub_14008F4F4.c)
 *     sub_14008FC40 @ 0x14008FC40 (sub_14008FC40.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_14008D628(unsigned __int8 a1, _BYTE *a2, unsigned int a3)
{
  char result; // al

  if ( a3 >= 2 )
  {
    *a2 = a0123456789abcd[(unsigned __int64)a1 >> 4];
    result = a0123456789abcd[a1 & 0xF];
    a2[1] = result;
  }
  return result;
}
