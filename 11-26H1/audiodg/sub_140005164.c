/*
 * XREFs of sub_140005164 @ 0x140005164
 * Callers:
 *     sub_140003960 @ 0x140003960 (sub_140003960.c)
 *     sub_140005310 @ 0x140005310 (sub_140005310.c)
 *     sub_14006D1D0 @ 0x14006D1D0 (sub_14006D1D0.c)
 *     sub_14006E600 @ 0x14006E600 (sub_14006E600.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_140005164(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rdi
  __int64 v5; // rbx

  v3 = *(_QWORD **)(a1 + 72);
  while ( 1 )
  {
    if ( !v3 )
      return 0LL;
    v5 = v3[2];
    v3 = (_QWORD *)*v3;
    if ( v5 )
      sub_1400B6010(v5);
    if ( sub_1400B6010(v5) == a2 )
      break;
    sub_1400B6010(v5);
  }
  sub_1400B6010(v5);
  return v5;
}
