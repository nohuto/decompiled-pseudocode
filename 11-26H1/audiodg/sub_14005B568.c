/*
 * XREFs of sub_14005B568 @ 0x14005B568
 * Callers:
 *     sub_140067874 @ 0x140067874 (sub_140067874.c)
 * Callees:
 *     sub_1400454AC @ 0x1400454AC (sub_1400454AC.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     sub_14005B69C @ 0x14005B69C (sub_14005B69C.c)
 *     sub_14005BAC8 @ 0x14005BAC8 (sub_14005BAC8.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_14005B568(_QWORD *a1, _QWORD *a2, _QWORD *a3, _QWORD *a4, _QWORD *a5)
{
  __int64 v8; // rax
  int v9; // edi
  __int64 v10; // rbx
  __int64 v12; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v8 = sub_140049338(72LL, (__int64)&unk_1400C75FC);
  v12 = v8;
  if ( v8 )
  {
    v10 = sub_14005B69C(v8);
    v12 = 0LL;
    v9 = sub_14005BAC8(v10, *a2, *a3, *a4, *a5);
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
  sub_1400454AC(&v12);
  return (unsigned int)v9;
}
