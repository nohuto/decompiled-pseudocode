/*
 * XREFs of sub_1400180E8 @ 0x1400180E8
 * Callers:
 *     sub_140017DA0 @ 0x140017DA0 (sub_140017DA0.c)
 * Callees:
 *     sub_1400181B4 @ 0x1400181B4 (sub_1400181B4.c)
 *     sub_14001826C @ 0x14001826C (sub_14001826C.c)
 *     sub_1400454AC @ 0x1400454AC (sub_1400454AC.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1400180E8(__int64 *a1, _QWORD *a2)
{
  unsigned int v4; // edi
  __int64 v5; // rax
  __int64 v6; // rbx
  int v7; // ebp
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+50h] [rbp+18h]

  v4 = 0;
  *a1 = 0LL;
  v5 = sub_140049338(96LL, &unk_1400C75FC);
  if ( !v5 )
    return (unsigned int)-2147024882;
  v6 = sub_14001826C(v5);
  v10 = v6;
  v9 = 0LL;
  v7 = sub_1400181B4(v6, *a2);
  if ( v7 >= 0 )
  {
    if ( v6 )
      sub_1400B6010(v6);
    *a1 = v6;
    if ( v6 )
      sub_1400B6010(v6);
    return v4;
  }
  if ( v6 )
    sub_1400B6010(v6);
  sub_1400454AC(&v9);
  return (unsigned int)v7;
}
