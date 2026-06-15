/*
 * XREFs of sub_140044864 @ 0x140044864
 * Callers:
 *     sub_140015C88 @ 0x140015C88 (sub_140015C88.c)
 *     sub_14003F724 @ 0x14003F724 (sub_14003F724.c)
 *     sub_14003F8B0 @ 0x14003F8B0 (sub_14003F8B0.c)
 * Callees:
 *     sub_1400182D4 @ 0x1400182D4 (sub_1400182D4.c)
 *     sub_140044930 @ 0x140044930 (sub_140044930.c)
 *     sub_1400454AC @ 0x1400454AC (sub_1400454AC.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140044864(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  int v7; // edi
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v4 = (_QWORD *)sub_140049338(32LL, &unk_1400C75FC);
  v5 = v4;
  if ( !v4 )
    return 2147942414LL;
  sub_1400182D4(v4);
  *v5 = off_1400BA830;
  v5[2] = 0LL;
  *((_BYTE *)v5 + 24) = 0;
  v8 = 0LL;
  v7 = sub_140044930(v5, *a2);
  sub_1400B6010(v5);
  if ( v7 < 0 )
    return (unsigned int)v7;
  *a1 = v5;
  sub_1400B6010(v5);
  sub_1400454AC(&v8);
  return 0LL;
}
