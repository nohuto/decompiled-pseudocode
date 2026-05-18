/*
 * XREFs of sub_180049070 @ 0x180049070
 * Callers:
 *     sub_180048F34 @ 0x180048F34 (sub_180048F34.c)
 *     sub_1800490A8 @ 0x1800490A8 (sub_1800490A8.c)
 *     sub_180049250 @ 0x180049250 (sub_180049250.c)
 *     sub_180049298 @ 0x180049298 (sub_180049298.c)
 *     sub_1800494AC @ 0x1800494AC (sub_1800494AC.c)
 *     sub_18004963C @ 0x18004963C (sub_18004963C.c)
 *     sub_1800496FC @ 0x1800496FC (sub_1800496FC.c)
 *     sub_1800497A4 @ 0x1800497A4 (sub_1800497A4.c)
 *     sub_18004B410 @ 0x18004B410 (sub_18004B410.c)
 *     sub_18004B5D8 @ 0x18004B5D8 (sub_18004B5D8.c)
 *     sub_18004B664 @ 0x18004B664 (sub_18004B664.c)
 * Callees:
 *     sub_1800496A0 @ 0x1800496A0 (sub_1800496A0.c)
 */

__int64 __fastcall sub_180049070(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = sub_1800496A0(v3);
      v3 += 88LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
