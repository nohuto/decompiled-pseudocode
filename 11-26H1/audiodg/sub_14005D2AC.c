/*
 * XREFs of sub_14005D2AC @ 0x14005D2AC
 * Callers:
 *     sub_140056334 @ 0x140056334 (sub_140056334.c)
 * Callees:
 *     sub_1400454AC @ 0x1400454AC (sub_1400454AC.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     sub_14005D3D4 @ 0x14005D3D4 (sub_14005D3D4.c)
 *     sub_14005D708 @ 0x14005D708 (sub_14005D708.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_14005D2AC(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 *a5, void *a6, __int64 *a7)
{
  __int64 v7; // rax
  int v8; // edi
  void *v9; // rbx
  __int64 v11; // [rsp+28h] [rbp-30h]
  __int64 v12; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v7 = sub_140049338(64LL, (__int64)&unk_1400C75FC);
  v12 = v7;
  if ( v7 )
  {
    v9 = (void *)sub_14005D3D4(v7);
    a6 = v9;
    v12 = 0LL;
    v8 = sub_14005D708(v9, *a5, v11, *a7);
    if ( v8 >= 0 )
    {
      v8 = sub_1400B6010(v9);
      sub_1400B6010(v9);
    }
    else if ( v9 )
    {
      sub_1400B6010(v9);
    }
  }
  else
  {
    v8 = -2147024882;
  }
  sub_1400454AC(&v12);
  return (unsigned int)v8;
}
