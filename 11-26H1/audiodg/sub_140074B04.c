/*
 * XREFs of sub_140074B04 @ 0x140074B04
 * Callers:
 *     sub_140074AF0 @ 0x140074AF0 (sub_140074AF0.c)
 * Callees:
 *     sub_140005600 @ 0x140005600 (sub_140005600.c)
 *     sub_1400492F4 @ 0x1400492F4 (sub_1400492F4.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140074B04(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rbx
  int v6; // esi
  __int64 v7; // [rsp+20h] [rbp-38h]

  if ( !a3 )
    return 2147500035LL;
  try
  {
    *a3 = 0LL;
    v6 = -2147024882;
    v5 = sub_1400492F4(120LL, a2);
    *(_DWORD *)(v5 + 8) = 0;
    *(_QWORD *)v5 = off_1400BD488;
    *(_OWORD *)(v5 + 48) = 0LL;
    *(_OWORD *)(v5 + 64) = 0LL;
    *(_QWORD *)(v5 + 80) = 0LL;
    *(_BYTE *)(v5 + 88) = 0;
    *(_QWORD *)(v5 + 96) = 0LL;
    *(_QWORD *)(v5 + 104) = 0LL;
    *(_QWORD *)(v5 + 24) = off_1400BD4D0;
    *(_QWORD *)(v5 + 32) = off_1400BD508;
    *(_QWORD *)(v5 + 40) = a1;
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
    v6 = sub_140005600(v5 + 48);
    if ( v6 < 0 || (v6 = sub_1400B6010(v5)) != 0 )
      sub_1400B6010(v5);
  }
  return (unsigned int)v6;
}
