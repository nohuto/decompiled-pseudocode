/*
 * XREFs of sub_1800431E4 @ 0x1800431E4
 * Callers:
 *     sub_180077D20 @ 0x180077D20 (sub_180077D20.c)
 *     sub_180092860 @ 0x180092860 (sub_180092860.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180043240 @ 0x180043240 (sub_180043240.c)
 *     sub_18007C6B8 @ 0x18007C6B8 (sub_18007C6B8.c)
 *     sub_18007E81C @ 0x18007E81C (sub_18007E81C.c)
 */

__int64 __fastcall sub_1800431E4(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  __int64 v5; // r9
  unsigned __int16 v6; // bx
  _BYTE v8[8]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+28h] [rbp-20h]
  _BYTE v10[8]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v11; // [rsp+38h] [rbp-10h]

  v3 = (_QWORD *)sub_180043240(a1, v10, a3, a2);
  v4 = (_QWORD *)sub_18007E81C(*v3, v8);
  v6 = sub_18007C6B8(*v4, v5);
  if ( v9 )
    sub_180010EC8(v9);
  if ( v11 )
    sub_180010EC8(v11);
  return v6;
}
