/*
 * XREFs of sub_140137D80 @ 0x140137D80
 * Callers:
 *     sub_140134A98 @ 0x140134A98 (sub_140134A98.c)
 *     sub_140135DCC @ 0x140135DCC (sub_140135DCC.c)
 *     sub_1401360E4 @ 0x1401360E4 (sub_1401360E4.c)
 *     sub_14013A658 @ 0x14013A658 (sub_14013A658.c)
 *     sub_14013A76C @ 0x14013A76C (sub_14013A76C.c)
 *     sub_14013A99C @ 0x14013A99C (sub_14013A99C.c)
 * Callees:
 *     sub_140085014 @ 0x140085014 (sub_140085014.c)
 *     sub_140085320 @ 0x140085320 (sub_140085320.c)
 *     sub_1400858E8 @ 0x1400858E8 (sub_1400858E8.c)
 */

__int64 __fastcall sub_140137D80(_DWORD *a1, char a2, __int16 a3, int a4, __int64 *a5, __int64 *a6)
{
  int v10; // esi

  *a5 = 0LL;
  *a6 = 0LL;
  v10 = sub_140085320((__int64)a1, a2, a3, a4, a5);
  if ( v10 < 0 || (v10 = sub_140085014((__int64)a1, a2, a3, a4, a6), v10 < 0) )
  {
    if ( *a5 )
    {
      sub_1400858E8(a1, *a5);
      *a5 = 0LL;
    }
    if ( *a6 )
    {
      sub_1400858E8(a1, *a6);
      *a6 = 0LL;
    }
  }
  return (unsigned int)v10;
}
