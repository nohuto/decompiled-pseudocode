/*
 * XREFs of sub_14008A224 @ 0x14008A224
 * Callers:
 *     sub_140087830 @ 0x140087830 (sub_140087830.c)
 * Callees:
 *     sub_1400454AC @ 0x1400454AC (sub_1400454AC.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     sub_14008A314 @ 0x14008A314 (sub_14008A314.c)
 *     sub_14008A540 @ 0x14008A540 (sub_14008A540.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_14008A224(_QWORD *a1, _QWORD *a2, __int64 a3, _QWORD *a4, _DWORD *a5, __int64 *a6)
{
  __int64 v8; // rax
  int v9; // edi
  __int64 v10; // rbx
  int v11; // r8d
  __int64 v13; // [rsp+60h] [rbp+18h] BYREF

  v13 = a3;
  *a1 = 0LL;
  v8 = sub_140049338(72LL, (__int64)&unk_1400C75FC);
  v13 = v8;
  if ( v8 )
  {
    v10 = sub_14008A314(v8);
    v13 = 0LL;
    v9 = sub_14008A540(v10, *a2, v11, *a4, *a5, *a6);
    if ( v9 >= 0 )
    {
      v9 = sub_1400B6010(v10);
      sub_1400B6010(v10);
    }
    else if ( v10 )
    {
      sub_1400B6010(v10);
    }
  }
  else
  {
    v9 = -2147024882;
  }
  sub_1400454AC(&v13);
  return (unsigned int)v9;
}
