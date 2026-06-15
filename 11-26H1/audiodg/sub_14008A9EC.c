/*
 * XREFs of sub_14008A9EC @ 0x14008A9EC
 * Callers:
 *     sub_14008BAD0 @ 0x14008BAD0 (sub_14008BAD0.c)
 * Callees:
 *     sub_1400454AC @ 0x1400454AC (sub_1400454AC.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_14008A9EC(_QWORD *a1, _QWORD *a2)
{
  __int64 v3; // rax
  _QWORD *v4; // rbx
  unsigned int v5; // edi
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v3 = sub_140049338(24LL, (__int64)&unk_1400C75FC);
  v4 = (_QWORD *)v3;
  v7 = v3;
  if ( v3 )
  {
    *(_DWORD *)(v3 + 12) = 1;
    *(_QWORD *)v3 = off_1400BEC78;
    if ( qword_1400E84B8 )
      sub_1400B6010(qword_1400E84B8);
    *v4 = off_1400BED80;
    v4[2] = 0LL;
    v7 = 0LL;
    v4[2] = *a2;
    v5 = sub_1400B6010(v4);
    sub_1400B6010(v4);
  }
  else
  {
    v5 = -2147024882;
  }
  sub_1400454AC(&v7);
  return v5;
}
