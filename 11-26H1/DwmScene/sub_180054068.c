/*
 * XREFs of sub_180054068 @ 0x180054068
 * Callers:
 *     sub_18002BE58 @ 0x18002BE58 (sub_18002BE58.c)
 *     sub_18007DD3C @ 0x18007DD3C (sub_18007DD3C.c)
 *     sub_1800BB650 @ 0x1800BB650 (sub_1800BB650.c)
 *     sub_1800BB9A0 @ 0x1800BB9A0 (sub_1800BB9A0.c)
 *     sub_1800C6000 @ 0x1800C6000 (sub_1800C6000.c)
 *     sub_1800C63E0 @ 0x1800C63E0 (sub_1800C63E0.c)
 *     sub_1800C68A0 @ 0x1800C68A0 (sub_1800C68A0.c)
 *     sub_1800C7CA0 @ 0x1800C7CA0 (sub_1800C7CA0.c)
 *     sub_1800C8130 @ 0x1800C8130 (sub_1800C8130.c)
 *     sub_1800C8650 @ 0x1800C8650 (sub_1800C8650.c)
 *     sub_1800CB8A8 @ 0x1800CB8A8 (sub_1800CB8A8.c)
 *     sub_1800CBD3C @ 0x1800CBD3C (sub_1800CBD3C.c)
 *     sub_1800CC010 @ 0x1800CC010 (sub_1800CC010.c)
 * Callees:
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180042544 @ 0x180042544 (sub_180042544.c)
 */

_QWORD *__fastcall sub_180054068(__int64 a1, _QWORD *a2, int a3)
{
  _QWORD *v3; // rbx
  __int64 v5; // rax
  int v7; // [rsp+40h] [rbp+18h] BYREF

  v3 = (_QWORD *)(a1 + 112);
  v7 = a3;
  v5 = sub_180042544(a1 + 112, (__int64)&v7);
  if ( v5 == *v3 )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    sub_180012C40(a2, (_QWORD *)(v5 + 40));
  }
  return a2;
}
