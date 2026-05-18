/*
 * XREFs of sub_1800D1DF4 @ 0x1800D1DF4
 * Callers:
 *     sub_1800D1DF4 @ 0x1800D1DF4 (sub_1800D1DF4.c)
 *     sub_1800D2A78 @ 0x1800D2A78 (sub_1800D2A78.c)
 *     sub_1800D2E40 @ 0x1800D2E40 (sub_1800D2E40.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_1800D1DF4 @ 0x1800D1DF4 (sub_1800D1DF4.c)
 *     sub_1800D2B1C @ 0x1800D2B1C (sub_1800D2B1C.c)
 */

__int64 __fastcall sub_1800D1DF4(__int64 a1, __int64 a2, char *a3)
{
  char *i; // rdi
  char *v6; // rbx
  __int64 result; // rax

  for ( i = a3; !i[25]; result = sub_18000E26C(v6, 0xC0uLL) )
  {
    sub_1800D1DF4(a1, a2, *((_QWORD *)i + 2));
    v6 = i;
    i = *(char **)i;
    sub_1800D2B1C(v6 + 32);
  }
  return result;
}
