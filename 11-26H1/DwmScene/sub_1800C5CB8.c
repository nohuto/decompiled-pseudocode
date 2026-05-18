/*
 * XREFs of sub_1800C5CB8 @ 0x1800C5CB8
 * Callers:
 *     sub_1800C7180 @ 0x1800C7180 (sub_1800C7180.c)
 *     sub_1800C8020 @ 0x1800C8020 (sub_1800C8020.c)
 * Callees:
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_18007F6A4 @ 0x18007F6A4 (sub_18007F6A4.c)
 */

_QWORD *__fastcall sub_1800C5CB8(__int64 a1, _QWORD *a2, int a3)
{
  _QWORD *v3; // rbx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  int v7; // [rsp+40h] [rbp+18h] BYREF

  v3 = (_QWORD *)(a1 + 112);
  v7 = a3;
  sub_18007F6A4((__int64 *)(a1 + 112), (__int64)&v6, &v7);
  if ( v6 == *v3 )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    sub_180012C40(a2, (_QWORD *)(v6 + 40));
  }
  return a2;
}
