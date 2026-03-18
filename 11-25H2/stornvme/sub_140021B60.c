/*
 * XREFs of sub_140021B60 @ 0x140021B60
 * Callers:
 *     sub_140021A3C @ 0x140021A3C (sub_140021A3C.c)
 *     sub_140027D64 @ 0x140027D64 (sub_140027D64.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_140021B60(unsigned __int8 a1, _BYTE *a2, unsigned int a3)
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
