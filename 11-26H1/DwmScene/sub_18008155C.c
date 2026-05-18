/*
 * XREFs of sub_18008155C @ 0x18008155C
 * Callers:
 *     sub_18007F9A0 @ 0x18007F9A0 (sub_18007F9A0.c)
 *     sub_180084FD8 @ 0x180084FD8 (sub_180084FD8.c)
 * Callees:
 *     sub_18007F964 @ 0x18007F964 (sub_18007F964.c)
 */

__int64 __fastcall sub_18008155C(__int64 *a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  result = sub_18007F964((__int64)a1, &v5);
  *a1 = result;
  a1[1] = result;
  a1[2] = result + 48 * a2;
  return result;
}
