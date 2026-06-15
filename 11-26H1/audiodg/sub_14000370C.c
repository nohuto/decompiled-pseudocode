/*
 * XREFs of sub_14000370C @ 0x14000370C
 * Callers:
 *     sub_1400031D0 @ 0x1400031D0 (sub_1400031D0.c)
 * Callees:
 *     sub_1400036C0 @ 0x1400036C0 (sub_1400036C0.c)
 *     sub_140005600 @ 0x140005600 (sub_140005600.c)
 *     sub_1400444D0 @ 0x1400444D0 (sub_1400444D0.c)
 *     sub_1400451F4 @ 0x1400451F4 (sub_1400451F4.c)
 *     sub_1400492F4 @ 0x1400492F4 (sub_1400492F4.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #try_helpers=1
__int64 __fastcall sub_14000370C(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // esi
  _QWORD *v4; // rdi
  int v5; // eax

  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  v3 = -2147024882;
  v4 = (_QWORD *)sub_1400492F4(392LL);
  sub_1400036C0((__int64)v4);
  *v4 = off_1400BA5F0;
  v4[1] = off_1400BA5D8;
  v4[2] = off_1400BA630;
  sub_1400B6010(qword_1400E8490);
  if ( v4 )
  {
    sub_1400451F4(v4 + 42);
    v5 = sub_140005600(v4 + 43);
    v3 = 0;
    if ( v5 < 0 )
      v3 = v5;
    sub_1400444D0(v4 + 42);
    if ( v3 || (v3 = sub_1400B6010(v4)) != 0 )
      sub_1400B6010(v4);
  }
  return v3;
}
