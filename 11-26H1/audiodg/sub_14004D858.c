/*
 * XREFs of sub_14004D858 @ 0x14004D858
 * Callers:
 *     sub_140032750 @ 0x140032750 (sub_140032750.c)
 * Callees:
 *     sub_140005600 @ 0x140005600 (sub_140005600.c)
 *     sub_140032884 @ 0x140032884 (sub_140032884.c)
 *     sub_1400492F4 @ 0x1400492F4 (sub_1400492F4.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14004D858(__int64 a1, __int64 a2, _QWORD *a3)
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
    v5 = sub_1400492F4(432LL, a2);
    *(_DWORD *)(v5 + 8) = 0;
    *(_QWORD *)v5 = off_1400BB530;
    sub_140032884(v5 + 24);
    *(_QWORD *)(v5 + 24) = off_1400BB480;
    *(_QWORD *)(v5 + 32) = off_1400BB5F8;
    *(_QWORD *)(v5 + 40) = off_1400BB550;
    *(_QWORD *)(v5 + 48) = a1;
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
    v6 = sub_140005600(v5 + 56);
    if ( v6 < 0 || (v6 = sub_1400B6010(v5)) != 0 )
      sub_1400B6010(v5);
  }
  return (unsigned int)v6;
}
