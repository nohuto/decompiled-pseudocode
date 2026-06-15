/*
 * XREFs of sub_14006F638 @ 0x14006F638
 * Callers:
 *     sub_14006F4F0 @ 0x14006F4F0 (sub_14006F4F0.c)
 * Callees:
 *     sub_140005600 @ 0x140005600 (sub_140005600.c)
 *     sub_1400444D0 @ 0x1400444D0 (sub_1400444D0.c)
 *     sub_1400451F4 @ 0x1400451F4 (sub_1400451F4.c)
 *     sub_1400492F4 @ 0x1400492F4 (sub_1400492F4.c)
 *     sub_14006F008 @ 0x14006F008 (sub_14006F008.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14006F638(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rdi
  int v5; // eax
  unsigned int v6; // esi
  __int64 v7; // [rsp+68h] [rbp+20h]

  if ( !a3 )
    return 2147500035LL;
  try
  {
    *a3 = 0LL;
    v6 = -2147024882;
    v4 = sub_1400492F4(248LL, a2);
    sub_14006F008(v4);
    *(_QWORD *)v4 = off_1400BC9A0;
    *(_QWORD *)(v4 + 8) = off_1400BC978;
    *(_QWORD *)(v4 + 16) = off_1400BCB48;
    *(_QWORD *)(v4 + 24) = off_1400BCC88;
    sub_1400B6010(qword_1400E8490);
    v7 = v4;
  }
  catch ( ... )
  {
    v6 = -2147024882;
    v4 = v7;
  }
  if ( v4 )
  {
    sub_1400451F4((volatile signed __int32 *)(v4 + 152));
    v5 = sub_140005600(v4 + 160);
    v6 = 0;
    if ( v5 < 0 )
      v6 = v5;
    sub_1400444D0((volatile signed __int32 *)(v4 + 152));
    if ( v6 || (v6 = sub_1400B6010(v4)) != 0 )
      sub_1400B6010(v4);
  }
  return v6;
}
