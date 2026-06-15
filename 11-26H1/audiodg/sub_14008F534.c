/*
 * XREFs of sub_14008F534 @ 0x14008F534
 * Callers:
 *     sub_140087F10 @ 0x140087F10 (sub_140087F10.c)
 * Callees:
 *     sub_1400454AC @ 0x1400454AC (sub_1400454AC.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     sub_1400906C0 @ 0x1400906C0 (sub_1400906C0.c)
 *     sub_140091540 @ 0x140091540 (sub_140091540.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_14008F534(_QWORD *a1, _QWORD *a2, _QWORD *a3, _QWORD *a4, _DWORD *a5)
{
  __int64 v8; // rax
  _QWORD *v9; // rbx
  int v10; // edi
  __int64 v12; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v8 = sub_140049338(120LL, (__int64)&unk_1400C75FC);
  v9 = (_QWORD *)v8;
  v12 = v8;
  if ( v8 )
  {
    sub_1400906C0(v8);
    *v9 = off_1400BEF38;
    v9[6] = off_1400BEF00;
    v9[7] = off_1400BEED8;
    v12 = 0LL;
    v10 = sub_140091540((_DWORD)v9, *a2, *a3, *a4, *a5);
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
