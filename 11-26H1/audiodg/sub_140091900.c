/*
 * XREFs of sub_140091900 @ 0x140091900
 * Callers:
 *     sub_1400880D0 @ 0x1400880D0 (sub_1400880D0.c)
 * Callees:
 *     sub_1400454AC @ 0x1400454AC (sub_1400454AC.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     sub_140092404 @ 0x140092404 (sub_140092404.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_140091900(_QWORD *a1, _QWORD *a2, __int64 a3, _QWORD *a4, _DWORD *a5)
{
  __int64 v7; // rax
  int v8; // r8d
  _QWORD *v9; // rbx
  int v10; // edi
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF

  v12 = a3;
  *a1 = 0LL;
  v7 = sub_140049338(64LL, (__int64)&unk_1400C75FC);
  v9 = (_QWORD *)v7;
  v12 = v7;
  if ( v7 )
  {
    *(_QWORD *)v7 = off_1400BEA60;
    *(_QWORD *)(v7 + 16) = 0LL;
    *(_QWORD *)(v7 + 24) = 0LL;
    *(_QWORD *)(v7 + 32) = 0LL;
    *(_QWORD *)(v7 + 40) = 0LL;
    *(_DWORD *)(v7 + 60) = 1;
    *(_QWORD *)v7 = off_1400BF1A0;
    *(_QWORD *)(v7 + 48) = off_1400BF160;
    if ( qword_1400E84B8 )
      sub_1400B6010(qword_1400E84B8);
    *v9 = off_1400BF1A0;
    v9[6] = off_1400BF1C8;
    v12 = 0LL;
    v10 = sub_140092404((_DWORD)v9, *a2, v8, *a4, *a5);
    if ( v10 >= 0 )
      v10 = sub_1400B6010(v9);
    sub_1400B6010(v9);
  }
  else
  {
    v10 = -2147024882;
  }
  sub_1400454AC(&v12);
  return (unsigned int)v10;
}
