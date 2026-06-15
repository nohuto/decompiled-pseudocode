/*
 * XREFs of sub_140037C94 @ 0x140037C94
 * Callers:
 *     sub_140037C80 @ 0x140037C80 (sub_140037C80.c)
 * Callees:
 *     sub_140005600 @ 0x140005600 (sub_140005600.c)
 *     sub_140037D8C @ 0x140037D8C (sub_140037D8C.c)
 *     sub_1400444D0 @ 0x1400444D0 (sub_1400444D0.c)
 *     sub_1400451F4 @ 0x1400451F4 (sub_1400451F4.c)
 *     sub_1400492F4 @ 0x1400492F4 (sub_1400492F4.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #try_helpers=1
__int64 __fastcall sub_140037C94(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // esi
  __int64 v4; // rax
  __int64 v5; // rdi
  int v6; // eax

  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  v3 = -2147024882;
  v4 = sub_1400492F4(280LL);
  v5 = sub_140037D8C(v4);
  if ( v5 )
  {
    sub_1400451F4(v5 + 224);
    v6 = sub_140005600(v5 + 232);
    v3 = 0;
    if ( v6 < 0 )
      v3 = v6;
    sub_1400444D0(v5 + 224);
    if ( v3 || (v3 = sub_1400B6010(v5)) != 0 )
      sub_1400B6010(v5);
  }
  return v3;
}
