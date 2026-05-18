/*
 * XREFs of sub_180043738 @ 0x180043738
 * Callers:
 *     sub_1800929B0 @ 0x1800929B0 (sub_1800929B0.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_18007C6B8 @ 0x18007C6B8 (sub_18007C6B8.c)
 *     sub_18007E81C @ 0x18007E81C (sub_18007E81C.c)
 */

__int64 __fastcall sub_180043738(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v7; // rax
  __int64 v8; // r10
  unsigned __int16 v9; // bp
  __int64 v11; // [rsp+20h] [rbp-18h] BYREF
  __int64 v12; // [rsp+28h] [rbp-10h]

  v7 = (_QWORD *)sub_18007E81C(*(_QWORD *)(a1 + 120), &v11);
  v9 = sub_18007C6B8(*v7, v8);
  if ( v12 )
    sub_180010EC8(v12);
  return sub_1800437B0(a1, v9, a3, a4);
}
