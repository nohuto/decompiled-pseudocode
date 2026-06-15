/*
 * XREFs of sub_1400709A4 @ 0x1400709A4
 * Callers:
 *     sub_140070990 @ 0x140070990 (sub_140070990.c)
 * Callees:
 *     sub_140005600 @ 0x140005600 (sub_140005600.c)
 *     sub_1400492F4 @ 0x1400492F4 (sub_1400492F4.c)
 *     sub_1400702A0 @ 0x1400702A0 (sub_1400702A0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_1400709A4(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rbx
  int v6; // edi
  __int64 v7; // [rsp+20h] [rbp-38h]

  if ( !a3 )
    return 2147500035LL;
  try
  {
    *a3 = 0LL;
    v6 = -2147024882;
    v5 = sub_1400492F4(360LL, a2);
    *(_DWORD *)(v5 + 8) = 0;
    *(_QWORD *)v5 = off_1400BCF28;
    sub_1400702A0((_QWORD *)(v5 + 24), a1);
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
    v6 = sub_140005600(v5 + 280);
    if ( v6 < 0 || (v6 = sub_1400B6010(v5)) != 0 )
      sub_1400B6010(v5);
  }
  return (unsigned int)v6;
}
