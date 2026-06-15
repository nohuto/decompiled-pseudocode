/*
 * XREFs of sub_140086D20 @ 0x140086D20
 * Callers:
 *     sub_140088B90 @ 0x140088B90 (sub_140088B90.c)
 * Callees:
 *     sub_1400454AC @ 0x1400454AC (sub_1400454AC.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     sub_140087090 @ 0x140087090 (sub_140087090.c)
 *     sub_140088A38 @ 0x140088A38 (sub_140088A38.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140086D20(_QWORD *a1, _QWORD *a2)
{
  __int64 v3; // rax
  int v4; // edi
  __int64 v5; // rbx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v3 = sub_140049338(32LL, (__int64)&unk_1400C75FC);
  v7 = v3;
  if ( v3 )
  {
    v5 = sub_140087090(v3);
    v7 = 0LL;
    v4 = sub_140088A38(v5, *a2);
    if ( v4 >= 0 )
    {
      v4 = sub_1400B6010(v5);
      sub_1400B6010(v5);
    }
    else if ( v5 )
    {
      sub_1400B6010(v5);
    }
  }
  else
  {
    v4 = -2147024882;
  }
  sub_1400454AC(&v7);
  return (unsigned int)v4;
}
