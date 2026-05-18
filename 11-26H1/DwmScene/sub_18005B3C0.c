/*
 * XREFs of sub_18005B3C0 @ 0x18005B3C0
 * Callers:
 *     sub_1800593B4 @ 0x1800593B4 (sub_1800593B4.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_18001955C @ 0x18001955C (sub_18001955C.c)
 *     sub_18003BCCC @ 0x18003BCCC (sub_18003BCCC.c)
 *     sub_180042248 @ 0x180042248 (sub_180042248.c)
 *     sub_180059600 @ 0x180059600 (sub_180059600.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_18005B3C0(__int64 a1)
{
  __int128 v2; // xmm0
  __int128 v3; // xmm2
  __int128 v4; // xmm1
  __int128 v5; // xmm3
  __int64 v7; // [rsp+20h] [rbp-39h] BYREF
  __int64 v8; // [rsp+28h] [rbp-31h]
  __int128 v9[4]; // [rsp+30h] [rbp-29h] BYREF
  _OWORD v10[4]; // [rsp+70h] [rbp+17h] BYREF

  if ( (*(_BYTE *)(a1 + 544) & 1) == 0 || sub_180059600(a1, 1) )
    return 0;
  sub_180042248(a1, &v7);
  if ( v7 )
  {
    sub_18003BCCC(v7, v9);
    sub_18001955C(v9, (__int64)v10);
    *(_OWORD *)(a1 + 804) = v9[0];
    *(_OWORD *)(a1 + 820) = v9[1];
    *(_OWORD *)(a1 + 836) = v9[2];
    *(_OWORD *)(a1 + 852) = v9[3];
    v2 = v10[3];
    v3 = v10[2];
    v4 = v10[1];
    v5 = v10[0];
  }
  else
  {
    *(_OWORD *)(a1 + 804) = xmmword_1800FA780;
    *(_OWORD *)(a1 + 820) = xmmword_1800FA790;
    *(_OWORD *)(a1 + 836) = xmmword_1800FA7A0;
    *(_OWORD *)(a1 + 852) = xmmword_1800FA7B0;
    v2 = xmmword_1800FA7B0;
    v3 = xmmword_1800FA7A0;
    v4 = xmmword_1800FA790;
    v5 = xmmword_1800FA780;
  }
  *(_OWORD *)(a1 + 612) = v5;
  *(_OWORD *)(a1 + 628) = v4;
  *(_OWORD *)(a1 + 644) = v3;
  *(_OWORD *)(a1 + 660) = v2;
  *(_DWORD *)(a1 + 544) &= ~1u;
  if ( v8 )
    sub_180010EC8(v8);
  return 1;
}
