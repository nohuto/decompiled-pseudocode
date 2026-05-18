/*
 * XREFs of sub_180084D48 @ 0x180084D48
 * Callers:
 *     sub_180080354 @ 0x180080354 (sub_180080354.c)
 * Callees:
 *     sub_18007F6A4 @ 0x18007F6A4 (sub_18007F6A4.c)
 */

bool __fastcall sub_180084D48(__int64 a1, int a2)
{
  _QWORD *v2; // rbx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  int v5; // [rsp+38h] [rbp+10h] BYREF

  v2 = (_QWORD *)(a1 + 144);
  v5 = a2;
  sub_18007F6A4((__int64 *)(a1 + 144), (__int64)&v4, &v5);
  return v4 != *v2;
}
