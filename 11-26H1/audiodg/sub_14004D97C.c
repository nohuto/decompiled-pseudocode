/*
 * XREFs of sub_14004D97C @ 0x14004D97C
 * Callers:
 *     sub_140003410 @ 0x140003410 (sub_140003410.c)
 * Callees:
 *     sub_140003C3C @ 0x140003C3C (sub_140003C3C.c)
 *     sub_140005600 @ 0x140005600 (sub_140005600.c)
 *     sub_1400492F4 @ 0x1400492F4 (sub_1400492F4.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14004D97C(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v5; // esi
  __int64 v6; // rdi

  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  v5 = -2147024882;
  v6 = sub_1400492F4(304LL, a2);
  *(_DWORD *)(v6 + 8) = 0;
  *(_QWORD *)v6 = off_1400BB720;
  sub_140003C3C(v6 + 24);
  *(_QWORD *)(v6 + 24) = off_1400BB3A8;
  *(_QWORD *)(v6 + 32) = off_1400BB618;
  *(_QWORD *)(v6 + 40) = off_1400BB448;
  *(_QWORD *)(v6 + 48) = a1;
  sub_1400B6010(qword_1400E8490);
  if ( v6 )
  {
    v5 = sub_140005600(v6 + 56);
    if ( v5 < 0 || (v5 = sub_1400B6010(v6)) != 0 )
      sub_1400B6010(v6);
  }
  return (unsigned int)v5;
}
