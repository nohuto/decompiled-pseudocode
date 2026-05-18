/*
 * XREFs of sub_180043264 @ 0x180043264
 * Callers:
 *     sub_180092860 @ 0x180092860 (sub_180092860.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180043240 @ 0x180043240 (sub_180043240.c)
 *     sub_18007C97C @ 0x18007C97C (sub_18007C97C.c)
 *     sub_18007E81C @ 0x18007E81C (sub_18007E81C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180043264(__int64 a1)
{
  _QWORD *v1; // rax
  _QWORD *v2; // rax
  unsigned __int16 v3; // r9
  __int64 v4; // rbx
  _BYTE v6[8]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+28h] [rbp-20h]
  __int64 v8; // [rsp+30h] [rbp-18h] BYREF
  __int64 v9; // [rsp+38h] [rbp-10h]

  v1 = (_QWORD *)sub_180043240(a1, &v8);
  v2 = (_QWORD *)sub_18007E81C(*v1, v6);
  v4 = sub_18007C97C(*v2, v3);
  if ( v7 )
    sub_180010EC8(v7);
  if ( v9 )
    sub_180010EC8(v9);
  return v4;
}
