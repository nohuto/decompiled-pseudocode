/*
 * XREFs of sub_140071AE4 @ 0x140071AE4
 * Callers:
 *     sub_140037C80 @ 0x140037C80 (sub_140037C80.c)
 * Callees:
 *     sub_140005600 @ 0x140005600 (sub_140005600.c)
 *     sub_1400492F4 @ 0x1400492F4 (sub_1400492F4.c)
 *     sub_140071864 @ 0x140071864 (sub_140071864.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140071AE4(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rax
  __int64 v6; // rdi
  int v7; // ebx
  __int64 v8; // [rsp+20h] [rbp-28h]

  if ( !a3 )
    return 2147500035LL;
  try
  {
    *a3 = 0LL;
    v7 = -2147024882;
    v5 = sub_1400492F4(304LL, a2);
    v6 = sub_140071864(v5, a1);
    v8 = v6;
  }
  catch ( ... )
  {
    v7 = -2147024882;
    v6 = v8;
  }
  if ( v6 )
  {
    v7 = sub_140005600(v6 + 256);
    if ( v7 < 0 || (v7 = sub_1400B6010(v6)) != 0 )
      sub_1400B6010(v6);
  }
  return (unsigned int)v7;
}
