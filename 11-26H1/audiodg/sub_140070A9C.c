/*
 * XREFs of sub_140070A9C @ 0x140070A9C
 * Callers:
 *     sub_140070990 @ 0x140070990 (sub_140070990.c)
 * Callees:
 *     sub_140005600 @ 0x140005600 (sub_140005600.c)
 *     sub_1400444D0 @ 0x1400444D0 (sub_1400444D0.c)
 *     sub_1400451F4 @ 0x1400451F4 (sub_1400451F4.c)
 *     sub_1400492F4 @ 0x1400492F4 (sub_1400492F4.c)
 *     sub_140070344 @ 0x140070344 (sub_140070344.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140070A9C(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v4; // rax
  volatile signed __int32 *v5; // rdi
  int v6; // eax
  unsigned int v7; // esi
  volatile signed __int32 *v8; // [rsp+68h] [rbp+20h]

  if ( !a3 )
    return 2147500035LL;
  try
  {
    *a3 = 0LL;
    v7 = -2147024882;
    v4 = (_QWORD *)sub_1400492F4(336LL, a2);
    v5 = (volatile signed __int32 *)sub_140070344(v4);
    v8 = v5;
  }
  catch ( ... )
  {
    v7 = -2147024882;
    v5 = v8;
  }
  if ( v5 )
  {
    sub_1400451F4(v5 + 62);
    v6 = sub_140005600((__int64)(v5 + 64));
    v7 = 0;
    if ( v6 < 0 )
      v7 = v6;
    sub_1400444D0(v5 + 62);
    if ( v7 || (v7 = sub_1400B6010(v5)) != 0 )
      sub_1400B6010(v5);
  }
  return v7;
}
