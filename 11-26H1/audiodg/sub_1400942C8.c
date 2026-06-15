/*
 * XREFs of sub_1400942C8 @ 0x1400942C8
 * Callers:
 *     sub_140094750 @ 0x140094750 (sub_140094750.c)
 * Callees:
 *     sub_1400454AC @ 0x1400454AC (sub_1400454AC.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     sub_140094570 @ 0x140094570 (sub_140094570.c)
 *     sub_140094B70 @ 0x140094B70 (sub_140094B70.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1400942C8(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        _DWORD *a4,
        __int64 *a5,
        __int64 *a6,
        __int64 *a7,
        _DWORD *a8,
        _DWORD *a9,
        _DWORD *a10,
        __int64 *a11)
{
  __int64 v14; // rax
  int v15; // edi
  __int64 v16; // rbx
  __int64 v18; // [rsp+80h] [rbp+8h] BYREF

  *a1 = 0LL;
  v14 = sub_140049338(112LL, (__int64)&unk_1400C75FC);
  v18 = v14;
  if ( v14 )
  {
    v16 = sub_140094570(v14);
    v18 = 0LL;
    v15 = sub_140094B70(v16, *a2, *a3, *a4, *a5, *a6, *a7, *a8, *a9, *a10, *a11);
    if ( v15 >= 0 )
    {
      v15 = sub_1400B6010(v16);
      sub_1400B6010(v16);
    }
    else if ( v16 )
    {
      sub_1400B6010(v16);
    }
  }
  else
  {
    v15 = -2147024882;
  }
  sub_1400454AC(&v18);
  return (unsigned int)v15;
}
