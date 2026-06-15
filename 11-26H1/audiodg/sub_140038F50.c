/*
 * XREFs of sub_140038F50 @ 0x140038F50
 * Callers:
 *     sub_14001A7C0 @ 0x14001A7C0 (sub_14001A7C0.c)
 *     sub_14007D9A8 @ 0x14007D9A8 (sub_14007D9A8.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140038F50(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 *v6; // rsi
  __int64 v7; // rcx
  __int64 result; // rax

  v6 = (__int64 *)a1[3];
  if ( *v6 != a2 )
  {
    if ( a2 )
      sub_1400B6010(a2);
    v7 = *v6;
    *v6 = a2;
    if ( v7 )
      sub_1400B6010(v7);
  }
  result = a1[4];
  *(_QWORD *)(result + 8 * ((__int64)(a1[3] - a1[2]) >> 3)) = a3;
  a1[3] += 8LL;
  return result;
}
