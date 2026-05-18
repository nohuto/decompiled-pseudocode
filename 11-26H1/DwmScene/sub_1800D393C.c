/*
 * XREFs of sub_1800D393C @ 0x1800D393C
 * Callers:
 *     sub_1800D3C78 @ 0x1800D3C78 (sub_1800D3C78.c)
 * Callees:
 *     sub_1800D1EA0 @ 0x1800D1EA0 (sub_1800D1EA0.c)
 */

__int64 __fastcall sub_1800D393C(_QWORD *a1)
{
  char *v1; // rdx
  __int64 result; // rax

  v1 = (char *)a1[2];
  a1[2] = *(_QWORD *)v1;
  sub_1800D1EA0((__int64)a1, v1);
  result = *a1;
  --*(_QWORD *)(*a1 + 8LL);
  return result;
}
