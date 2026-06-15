/*
 * XREFs of sub_14008B52C @ 0x14008B52C
 * Callers:
 *     sub_14008B690 @ 0x14008B690 (sub_14008B690.c)
 *     sub_14008B894 @ 0x14008B894 (sub_14008B894.c)
 *     sub_14008B9B8 @ 0x14008B9B8 (sub_14008B9B8.c)
 *     sub_14008CB44 @ 0x14008CB44 (sub_14008CB44.c)
 *     sub_140093134 @ 0x140093134 (sub_140093134.c)
 *     sub_140093678 @ 0x140093678 (sub_140093678.c)
 *     sub_140093E30 @ 0x140093E30 (sub_140093E30.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 */

__int64 __fastcall sub_14008B52C(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = sub_140003238((__int64 *)(v3 + 8));
      v3 += 16LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
