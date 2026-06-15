/*
 * XREFs of sub_14008D61C @ 0x14008D61C
 * Callers:
 *     sub_14008E414 @ 0x14008E414 (sub_14008E414.c)
 * Callees:
 *     sub_1400454AC @ 0x1400454AC (sub_1400454AC.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     sub_14008D730 @ 0x14008D730 (sub_14008D730.c)
 *     sub_14008ED14 @ 0x14008ED14 (sub_14008ED14.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14008D61C(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4,
        int *a5,
        __int64 *a6,
        void **a7,
        __int64 *a8)
{
  __int64 v11; // rax
  _QWORD *v12; // rbx
  int v13; // edi
  int v14; // r8d
  __int64 v16; // [rsp+70h] [rbp+18h] BYREF

  v16 = a3;
  *a1 = 0LL;
  v11 = sub_140049338(72LL, (__int64)&unk_1400C75FC);
  v12 = (_QWORD *)v11;
  v16 = v11;
  if ( v11 )
  {
    sub_14008D730(v11);
    *v12 = off_1400BEE88;
    v16 = 0LL;
    v13 = sub_14008ED14((int)v12, *a2, v14, *a4, *a5, *a6, *a7, *a8);
    sub_1400B6010(v12);
    if ( v13 >= 0 )
    {
      *a1 = v12;
      sub_1400B6010(v12);
      v13 = 0;
    }
  }
  else
  {
    v13 = -2147024882;
  }
  sub_1400454AC(&v16);
  return (unsigned int)v13;
}
