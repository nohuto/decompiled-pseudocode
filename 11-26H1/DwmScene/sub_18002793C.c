/*
 * XREFs of sub_18002793C @ 0x18002793C
 * Callers:
 *     sub_180028AE4 @ 0x180028AE4 (sub_180028AE4.c)
 *     sub_18006F374 @ 0x18006F374 (sub_18006F374.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18002793C(__int64 a1, unsigned int a2)
{
  do
  {
    *(_BYTE *)--a1 = a2 % 0xA + 48;
    a2 /= 0xAu;
  }
  while ( a2 );
  return a1;
}
