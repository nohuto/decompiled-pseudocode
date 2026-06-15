/*
 * XREFs of sub_1400940C0 @ 0x1400940C0
 * Callers:
 *     sub_140094080 @ 0x140094080 (sub_140094080.c)
 * Callees:
 *     sub_1400454AC @ 0x1400454AC (sub_1400454AC.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     sub_1400945D0 @ 0x1400945D0 (sub_1400945D0.c)
 *     sub_140094A74 @ 0x140094A74 (sub_140094A74.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1400940C0(_QWORD *a1, _QWORD *a2)
{
  __int64 v3; // rax
  _QWORD *v4; // rbx
  int v5; // edi
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v8; // [rsp+40h] [rbp+18h]

  *a1 = 0LL;
  v3 = sub_140049338(64LL, (__int64)&unk_1400C75FC);
  v4 = (_QWORD *)v3;
  v7 = v3;
  if ( v3 )
  {
    sub_1400945D0(v3);
    *v4 = off_1400BF3E8;
    v4[2] = 0LL;
    v4[3] = 0LL;
    v4[4] = 0LL;
    v4[5] = 0LL;
    v4[6] = 0LL;
    v4[7] = 0LL;
    v8 = v4;
    v7 = 0LL;
    v5 = sub_140094A74(v4, *a2);
    if ( v5 >= 0 )
      v5 = sub_1400B6010(v4);
    sub_1400B6010(v4);
  }
  else
  {
    v5 = -2147024882;
  }
  sub_1400454AC(&v7);
  return (unsigned int)v5;
}
