/*
 * XREFs of sub_140086DE8 @ 0x140086DE8
 * Callers:
 *     sub_14005E820 @ 0x14005E820 (sub_14005E820.c)
 * Callees:
 *     sub_1400454AC @ 0x1400454AC (sub_1400454AC.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     sub_140053D30 @ 0x140053D30 (sub_140053D30.c)
 *     sub_140086B50 @ 0x140086B50 (sub_140086B50.c)
 *     sub_1400870F0 @ 0x1400870F0 (sub_1400870F0.c)
 *     sub_140088B90 @ 0x140088B90 (sub_140088B90.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_140086DE8(_QWORD *a1, _QWORD *a2, __int128 *a3)
{
  __int64 v6; // rax
  int v7; // edi
  __int64 v8; // rbx
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF
  __int64 v12; // [rsp+68h] [rbp+20h]

  *a1 = 0LL;
  v6 = sub_140049338(128LL, (__int64)&unk_1400C75FC);
  v11 = v6;
  if ( v6 )
  {
    v8 = sub_1400870F0(v6);
    v12 = v8;
    v11 = 0LL;
    v10 = *a3;
    v7 = sub_140088B90(v8, *a2, &v10);
    if ( v7 >= 0 )
      v7 = sub_140086B50(v8, (__int64)&xmmword_1400C9350, a1);
    if ( v8 )
      sub_140053D30(v8);
  }
  else
  {
    v7 = -2147024882;
  }
  sub_1400454AC(&v11);
  return (unsigned int)v7;
}
