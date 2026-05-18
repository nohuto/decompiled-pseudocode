/*
 * XREFs of sub_18007E42C @ 0x18007E42C
 * Callers:
 *     sub_18007DD3C @ 0x18007DD3C (sub_18007DD3C.c)
 *     sub_18007E080 @ 0x18007E080 (sub_18007E080.c)
 * Callees:
 *     sub_18007F6A4 @ 0x18007F6A4 (sub_18007F6A4.c)
 */

bool __fastcall sub_18007E42C(__int64 a1, int a2)
{
  _QWORD *v2; // rbx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  int v5; // [rsp+38h] [rbp+10h] BYREF

  v2 = (_QWORD *)(a1 + 112);
  v5 = a2;
  sub_18007F6A4(a1 + 112, &v4, &v5);
  return v4 != *v2;
}
