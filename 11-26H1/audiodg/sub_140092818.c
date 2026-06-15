/*
 * XREFs of sub_140092818 @ 0x140092818
 * Callers:
 *     sub_140087E30 @ 0x140087E30 (sub_140087E30.c)
 * Callees:
 *     sub_1400454AC @ 0x1400454AC (sub_1400454AC.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     sub_140092B10 @ 0x140092B10 (sub_140092B10.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_140092818(_QWORD *a1, _QWORD *a2, __int64 a3, _QWORD *a4, _DWORD *a5, _DWORD *a6)
{
  __int64 v8; // rax
  int v9; // r8d
  _QWORD *v10; // rbx
  int v11; // edi
  __int64 v13; // [rsp+60h] [rbp+18h] BYREF

  v13 = a3;
  *a1 = 0LL;
  v8 = sub_140049338(64LL, (__int64)&unk_1400C75FC);
  v10 = (_QWORD *)v8;
  v13 = v8;
  if ( v8 )
  {
    *(_QWORD *)v8 = off_1400BEA60;
    *(_QWORD *)(v8 + 16) = 0LL;
    *(_QWORD *)(v8 + 24) = 0LL;
    *(_QWORD *)(v8 + 32) = 0LL;
    *(_QWORD *)(v8 + 40) = 0LL;
    *(_QWORD *)(v8 + 48) = off_1400BF280;
    *(_DWORD *)(v8 + 60) = 1;
    *(_QWORD *)v8 = &off_1400BF230;
    *(_QWORD *)(v8 + 48) = off_1400BF208;
    if ( qword_1400E84B8 )
      sub_1400B6010(qword_1400E84B8);
    *v10 = &off_1400BF230;
    v10[6] = off_1400BF258;
    v13 = 0LL;
    v11 = sub_140092B10((_DWORD)v10, *a2, v9, *a4, *a5, *a6);
    if ( v11 >= 0 )
      v11 = sub_1400B6010(v10);
    sub_1400B6010(v10);
  }
  else
  {
    v11 = -2147024882;
  }
  sub_1400454AC(&v13);
  return (unsigned int)v11;
}
