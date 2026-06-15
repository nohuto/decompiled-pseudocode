/*
 * XREFs of sub_14008F74C @ 0x14008F74C
 * Callers:
 *     sub_1400881B0 @ 0x1400881B0 (sub_1400881B0.c)
 * Callees:
 *     sub_1400454AC @ 0x1400454AC (sub_1400454AC.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     sub_140090760 @ 0x140090760 (sub_140090760.c)
 *     sub_140091680 @ 0x140091680 (sub_140091680.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_14008F74C(_QWORD *a1, _QWORD *a2, _QWORD *a3, _QWORD *a4, _DWORD *a5)
{
  __int64 v8; // rax
  _QWORD *v9; // rbx
  int v10; // edi
  __int64 v12; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v8 = sub_140049338(128LL, (__int64)&unk_1400C75FC);
  v9 = (_QWORD *)v8;
  v12 = v8;
  if ( v8 )
  {
    sub_140090760(v8);
    *v9 = off_1400BF0C0;
    v9[6] = off_1400BF000;
    v9[7] = off_1400BEFD8;
    v9[14] = off_1400BF0E8;
    v12 = 0LL;
    v10 = sub_140091680((_DWORD)v9, *a2, *a3, *a4, *a5);
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
