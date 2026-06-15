/*
 * XREFs of sub_14005E264 @ 0x14005E264
 * Callers:
 *     sub_14005E250 @ 0x14005E250 (sub_14005E250.c)
 * Callees:
 *     sub_140005600 @ 0x140005600 (sub_140005600.c)
 *     sub_1400492F4 @ 0x1400492F4 (sub_1400492F4.c)
 *     sub_14005DC64 @ 0x14005DC64 (sub_14005DC64.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_14005E264(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rbx
  int v6; // edi
  __int64 v7; // [rsp+20h] [rbp-28h]
  __int64 v8; // [rsp+28h] [rbp-20h]

  if ( !a3 )
    return 2147500035LL;
  try
  {
    *a3 = 0LL;
    v6 = -2147024882;
    v8 = sub_1400492F4(160LL, a2);
    v5 = sub_14005DC64(v8, a1);
    v7 = v5;
  }
  catch ( ... )
  {
    v6 = -2147024882;
    v5 = v7;
  }
  if ( v5 )
  {
    v6 = sub_140005600(v5 + 40);
    if ( v6 < 0 || (v6 = sub_1400B6010(v5)) != 0 )
      sub_1400B6010(v5);
  }
  return (unsigned int)v6;
}
