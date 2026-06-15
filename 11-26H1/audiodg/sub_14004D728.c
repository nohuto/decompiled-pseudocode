/*
 * XREFs of sub_14004D728 @ 0x14004D728
 * Callers:
 *     sub_140005500 @ 0x140005500 (sub_140005500.c)
 * Callees:
 *     sub_140005600 @ 0x140005600 (sub_140005600.c)
 *     sub_1400056B0 @ 0x1400056B0 (sub_1400056B0.c)
 *     sub_1400492F4 @ 0x1400492F4 (sub_1400492F4.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14004D728(__int64 a1, __int64 a2, _QWORD *a3)
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
    v5 = sub_1400492F4(208LL, a2);
    *(_DWORD *)(v5 + 8) = 0;
    *(_QWORD *)v5 = off_1400BB510;
    sub_1400056B0(v5 + 24);
    *(_QWORD *)(v5 + 24) = off_1400BB6A8;
    *(_QWORD *)(v5 + 32) = off_1400BB5A8;
    *(_QWORD *)(v5 + 40) = off_1400BB460;
    *(_QWORD *)(v5 + 48) = off_1400BB330;
    *(_QWORD *)(v5 + 56) = a1;
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
    v6 = sub_140005600(v5 + 64);
    if ( v6 < 0 || (v6 = sub_1400B6010(v5)) != 0 )
      sub_1400B6010(v5);
  }
  return (unsigned int)v6;
}
