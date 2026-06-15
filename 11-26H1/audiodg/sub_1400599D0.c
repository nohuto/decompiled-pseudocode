/*
 * XREFs of sub_1400599D0 @ 0x1400599D0
 * Callers:
 *     sub_1400031B0 @ 0x1400031B0 (sub_1400031B0.c)
 * Callees:
 *     sub_1400033B8 @ 0x1400033B8 (sub_1400033B8.c)
 *     sub_140005600 @ 0x140005600 (sub_140005600.c)
 *     sub_1400492F4 @ 0x1400492F4 (sub_1400492F4.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_1400599D0(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rdi
  int v6; // esi
  __int64 v7; // [rsp+20h] [rbp-38h]

  if ( !a3 )
    return 2147500035LL;
  try
  {
    *a3 = 0LL;
    v6 = -2147024882;
    v5 = sub_1400492F4(424LL, a2);
    *(_DWORD *)(v5 + 8) = 0;
    *(_QWORD *)v5 = off_1400BBCD0;
    sub_1400033B8(v5 + 24);
    *(_QWORD *)(v5 + 24) = off_1400BBCF0;
    *(_QWORD *)(v5 + 32) = off_1400BBE30;
    *(_QWORD *)(v5 + 40) = off_1400BBCB8;
    *(_QWORD *)(v5 + 48) = off_1400BBD38;
    *(_QWORD *)(v5 + 368) = a1;
    sub_1400B6010(qword_1400E8490);
    v7 = v5;
  }
  catch ( ... )
  {
    v6 = -2147024882;
    v5 = v7;
  }
  if ( v5 )
  {
    v6 = sub_140005600(v5 + 376);
    if ( v6 < 0 || (v6 = sub_1400B6010(v5)) != 0 )
      sub_1400B6010(v5);
  }
  return (unsigned int)v6;
}
