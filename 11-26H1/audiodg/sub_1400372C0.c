/*
 * XREFs of sub_1400372C0 @ 0x1400372C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140005600 @ 0x140005600 (sub_140005600.c)
 *     sub_1400492F4 @ 0x1400492F4 (sub_1400492F4.c)
 *     sub_14004D1AC @ 0x14004D1AC (sub_14004D1AC.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #try_helpers=1
__int64 __fastcall sub_1400372C0(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v4; // edi
  __int64 v5; // rbx

  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  v4 = -2147024882;
  v5 = sub_1400492F4(72LL);
  *(_DWORD *)(v5 + 8) = 0;
  *(_OWORD *)(v5 + 16) = 0LL;
  *(_OWORD *)(v5 + 32) = 0LL;
  *(_QWORD *)(v5 + 48) = 0LL;
  *(_BYTE *)(v5 + 56) = 0;
  *(_QWORD *)v5 = off_1400BA748;
  if ( v5 )
  {
    *(_QWORD *)(v5 + 64) = a1;
    v4 = sub_140005600(v5 + 16);
    if ( v4 < 0 || (v4 = sub_1400B6010(v5)) != 0 )
      sub_14004D1AC(v5);
  }
  return (unsigned int)v4;
}
