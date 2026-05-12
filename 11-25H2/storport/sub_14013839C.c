/*
 * XREFs of sub_14013839C @ 0x14013839C
 * Callers:
 *     sub_140135DCC @ 0x140135DCC (sub_140135DCC.c)
 *     sub_1401360E4 @ 0x1401360E4 (sub_1401360E4.c)
 *     sub_14013A45C @ 0x14013A45C (sub_14013A45C.c)
 *     sub_14013A658 @ 0x14013A658 (sub_14013A658.c)
 *     sub_14013A76C @ 0x14013A76C (sub_14013A76C.c)
 *     sub_14013A99C @ 0x14013A99C (sub_14013A99C.c)
 * Callees:
 *     sub_1400858E8 @ 0x1400858E8 (sub_1400858E8.c)
 */

__int64 __fastcall sub_14013839C(_DWORD *a1, __int64 *a2, __int64 *a3)
{
  __int64 v5; // rdx
  __int64 result; // rax

  v5 = *a2;
  if ( v5 )
  {
    result = sub_1400858E8(a1, v5);
    *a2 = 0LL;
  }
  if ( *a3 )
  {
    result = sub_1400858E8(a1, *a3);
    *a3 = 0LL;
  }
  return result;
}
