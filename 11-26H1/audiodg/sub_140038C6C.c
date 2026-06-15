/*
 * XREFs of sub_140038C6C @ 0x140038C6C
 * Callers:
 *     sub_1400574A0 @ 0x1400574A0 (sub_1400574A0.c)
 * Callees:
 *     sub_140017D8C @ 0x140017D8C (sub_140017D8C.c)
 *     sub_1400454AC @ 0x1400454AC (sub_1400454AC.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_140038C6C(_QWORD *a1)
{
  __int64 v1; // rax
  _QWORD *v2; // rdi
  unsigned int v3; // ebx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v1 = sub_140049338(16LL, &unk_1400C75FC);
  v2 = (_QWORD *)v1;
  v5 = v1;
  if ( v1 )
  {
    sub_140017D8C(v1);
    *v2 = off_1400BA7B0;
    if ( qword_1400E84B8 )
      sub_1400B6010(qword_1400E84B8);
    *v2 = off_1400BA778;
    v3 = sub_1400B6010(v2);
    sub_1400B6010(v2);
    return v3;
  }
  else
  {
    sub_1400454AC(&v5);
    return 2147942414LL;
  }
}
