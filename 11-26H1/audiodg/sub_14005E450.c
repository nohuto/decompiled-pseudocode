/*
 * XREFs of sub_14005E450 @ 0x14005E450
 * Callers:
 *     <none>
 * Callees:
 *     sub_140005600 @ 0x140005600 (sub_140005600.c)
 *     sub_1400492F4 @ 0x1400492F4 (sub_1400492F4.c)
 *     sub_14005E0BC @ 0x14005E0BC (sub_14005E0BC.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14005E450(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // r15
  __int64 v5; // rbx
  int v6; // esi
  __int64 v7; // [rsp+20h] [rbp-38h]

  v3 = a1;
  if ( !a3 )
    return 2147500035LL;
  try
  {
    *a3 = 0LL;
    v6 = -2147024882;
    v5 = sub_1400492F4(88LL, a2);
    *(_DWORD *)(v5 + 8) = 0;
    *(_OWORD *)(v5 + 16) = 0LL;
    *(_OWORD *)(v5 + 32) = 0LL;
    *(_QWORD *)(v5 + 48) = 0LL;
    *(_BYTE *)(v5 + 56) = 0;
    *(_DWORD *)(v5 + 72) = 0;
    *(_QWORD *)(v5 + 80) = 0LL;
    *(_QWORD *)v5 = off_1400BC188;
    v7 = v5;
  }
  catch ( ... )
  {
    v3 = a1;
    v6 = -2147024882;
    v5 = v7;
  }
  if ( v5 )
  {
    *(_QWORD *)(v5 + 64) = v3;
    v6 = sub_140005600(v5 + 16);
    if ( v6 < 0 || (v6 = sub_1400B6010(v5)) != 0 )
      sub_14005E0BC((_QWORD *)v5);
  }
  return (unsigned int)v6;
}
