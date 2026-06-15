/*
 * XREFs of sub_14008D3E4 @ 0x14008D3E4
 * Callers:
 *     sub_140087D00 @ 0x140087D00 (sub_140087D00.c)
 * Callees:
 *     sub_1400454AC @ 0x1400454AC (sub_1400454AC.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     sub_14008D790 @ 0x14008D790 (sub_14008D790.c)
 *     sub_14008E414 @ 0x14008E414 (sub_14008E414.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_14008D3E4(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        _DWORD *a5,
        __int64 *a6,
        void **a7,
        __int64 *a8)
{
  __int64 v11; // rax
  int v12; // edi
  __int64 v13; // rbx
  __int64 v15; // [rsp+70h] [rbp+8h] BYREF

  *a1 = 0LL;
  v11 = sub_140049338(80LL, (__int64)&unk_1400C75FC);
  v15 = v11;
  if ( v11 )
  {
    v13 = sub_14008D790(v11);
    v15 = 0LL;
    v12 = sub_14008E414(v13, *a2, *a3, *a4, *a5, *a6, *a7, *a8);
    if ( v12 >= 0 )
    {
      v12 = sub_1400B6010(v13);
      sub_1400B6010(v13);
    }
    else if ( v13 )
    {
      sub_1400B6010(v13);
    }
  }
  else
  {
    v12 = -2147024882;
  }
  sub_1400454AC(&v15);
  return (unsigned int)v12;
}
