/*
 * XREFs of sub_140074C24 @ 0x140074C24
 * Callers:
 *     sub_140074AF0 @ 0x140074AF0 (sub_140074AF0.c)
 * Callees:
 *     sub_140005600 @ 0x140005600 (sub_140005600.c)
 *     sub_1400444D0 @ 0x1400444D0 (sub_1400444D0.c)
 *     sub_1400451F4 @ 0x1400451F4 (sub_1400451F4.c)
 *     sub_1400492F4 @ 0x1400492F4 (sub_1400492F4.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140074C24(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rdi
  int v5; // eax
  unsigned int v6; // r14d
  __int64 v7; // [rsp+68h] [rbp+20h]

  if ( !a3 )
    return 2147500035LL;
  try
  {
    *a3 = 0LL;
    v6 = -2147024882;
    v4 = sub_1400492F4(96LL, a2);
    *(_DWORD *)(v4 + 16) = 0;
    *(_OWORD *)(v4 + 24) = 0LL;
    *(_OWORD *)(v4 + 40) = 0LL;
    *(_QWORD *)(v4 + 56) = 0LL;
    *(_BYTE *)(v4 + 64) = 0;
    *(_QWORD *)(v4 + 72) = 0LL;
    *(_QWORD *)(v4 + 80) = 0LL;
    *(_QWORD *)v4 = off_1400BD4E8;
    *(_QWORD *)(v4 + 8) = off_1400BD4A8;
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
    sub_1400451F4((volatile signed __int32 *)(v4 + 16));
    v5 = sub_140005600(v4 + 24);
    v6 = 0;
    if ( v5 < 0 )
      v6 = v5;
    sub_1400444D0((volatile signed __int32 *)(v4 + 16));
    if ( v6 || (v6 = sub_1400B6010(v4)) != 0 )
      sub_1400B6010(v4);
  }
  return v6;
}
