/*
 * XREFs of sub_140005514 @ 0x140005514
 * Callers:
 *     sub_140005500 @ 0x140005500 (sub_140005500.c)
 * Callees:
 *     sub_140005600 @ 0x140005600 (sub_140005600.c)
 *     sub_140005654 @ 0x140005654 (sub_140005654.c)
 *     sub_1400444D0 @ 0x1400444D0 (sub_1400444D0.c)
 *     sub_1400451F4 @ 0x1400451F4 (sub_1400451F4.c)
 *     sub_1400492F4 @ 0x1400492F4 (sub_1400492F4.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #try_helpers=1
__int64 __fastcall sub_140005514(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // esi
  __int64 v4; // rax
  __int64 v5; // rdi
  int v6; // eax

  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  v3 = -2147024882;
  v4 = sub_1400492F4(184LL);
  v5 = sub_140005654(v4);
  if ( v5 )
  {
    sub_1400451F4(v5 + 32);
    v6 = sub_140005600(v5 + 40);
    v3 = 0;
    if ( v6 < 0 )
      v3 = v6;
    sub_1400444D0(v5 + 32);
    if ( v3 || (v3 = sub_1400B6010(v5)) != 0 )
      sub_1400B6010(v5);
  }
  return v3;
}
