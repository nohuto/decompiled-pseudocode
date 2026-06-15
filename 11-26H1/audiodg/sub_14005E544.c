/*
 * XREFs of sub_14005E544 @ 0x14005E544
 * Callers:
 *     sub_14005E150 @ 0x14005E150 (sub_14005E150.c)
 * Callees:
 *     sub_140005600 @ 0x140005600 (sub_140005600.c)
 *     sub_1400444D0 @ 0x1400444D0 (sub_1400444D0.c)
 *     sub_1400451F4 @ 0x1400451F4 (sub_1400451F4.c)
 *     sub_1400492F4 @ 0x1400492F4 (sub_1400492F4.c)
 *     sub_14005DD58 @ 0x14005DD58 (sub_14005DD58.c)
 *     sub_14005E0E8 @ 0x14005E0E8 (sub_14005E0E8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_14005E544(__int64 *a1, __int64 a2)
{
  __int64 *v2; // r14
  __int64 v4; // rdx
  int v5; // eax
  unsigned int v6; // esi
  __int64 v7; // rdi
  __int64 v9; // [rsp+60h] [rbp+18h]

  v2 = a1;
  if ( !a1 )
    return 2147500035LL;
  try
  {
    *a1 = 0LL;
    v6 = -2147024882;
    v7 = sub_1400492F4(136LL, a2);
    sub_14005DD58(v7, v4);
    *(_QWORD *)v7 = off_1400BC218;
    v9 = v7;
  }
  catch ( ... )
  {
    v2 = a1;
    v6 = -2147024882;
    v7 = v9;
  }
  if ( v7 )
  {
    sub_1400451F4((volatile signed __int32 *)(v7 + 8));
    v5 = sub_140005600(v7 + 16);
    v6 = 0;
    if ( v5 < 0 )
      v6 = v5;
    sub_1400444D0((volatile signed __int32 *)(v7 + 8));
    if ( v6 )
    {
      sub_14005E0E8(v7);
      v7 = 0LL;
    }
  }
  *v2 = v7;
  return v6;
}
