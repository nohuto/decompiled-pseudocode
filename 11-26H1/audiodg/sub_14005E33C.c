/*
 * XREFs of sub_14005E33C @ 0x14005E33C
 * Callers:
 *     sub_14005E250 @ 0x14005E250 (sub_14005E250.c)
 * Callees:
 *     sub_140005600 @ 0x140005600 (sub_140005600.c)
 *     sub_1400444D0 @ 0x1400444D0 (sub_1400444D0.c)
 *     sub_1400451F4 @ 0x1400451F4 (sub_1400451F4.c)
 *     sub_1400492F4 @ 0x1400492F4 (sub_1400492F4.c)
 *     sub_14005DD58 @ 0x14005DD58 (sub_14005DD58.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_14005E33C(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rdx
  __int64 v5; // rdi
  int v6; // eax
  unsigned int v7; // esi
  __int64 v8; // [rsp+78h] [rbp+20h]

  if ( !a3 )
    return 2147500035LL;
  try
  {
    *a3 = 0LL;
    v7 = -2147024882;
    v5 = sub_1400492F4(136LL, a2);
    sub_14005DD58(v5, v4);
    *(_QWORD *)v5 = off_1400BC160;
    sub_1400B6010(qword_1400E8490);
    v8 = v5;
  }
  catch ( ... )
  {
    v7 = -2147024882;
    v5 = v8;
  }
  if ( v5 )
  {
    sub_1400451F4((volatile signed __int32 *)(v5 + 8));
    v6 = sub_140005600(v5 + 16);
    v7 = 0;
    if ( v6 < 0 )
      v7 = v6;
    sub_1400444D0((volatile signed __int32 *)(v5 + 8));
    if ( v7 || (v7 = sub_1400B6010(v5)) != 0 )
      sub_1400B6010(v5);
  }
  return v7;
}
