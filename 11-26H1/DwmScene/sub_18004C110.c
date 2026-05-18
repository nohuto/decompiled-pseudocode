/*
 * XREFs of sub_18004C110 @ 0x18004C110
 * Callers:
 *     sub_18004C110 @ 0x18004C110 (sub_18004C110.c)
 *     sub_18004D138 @ 0x18004D138 (sub_18004D138.c)
 *     sub_18004EB3C @ 0x18004EB3C (sub_18004EB3C.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_18004C110 @ 0x18004C110 (sub_18004C110.c)
 *     sub_18004D2E8 @ 0x18004D2E8 (sub_18004D2E8.c)
 */

__int64 __fastcall sub_18004C110(__int64 a1, __int64 a2, char *a3)
{
  char *i; // rdi
  char *v6; // rbx
  __int64 result; // rax

  for ( i = a3; !i[25]; result = sub_18000E26C(v6, 0x68uLL) )
  {
    sub_18004C110(a1, a2, *((_QWORD *)i + 2));
    v6 = i;
    i = *(char **)i;
    sub_18004D2E8(v6 + 32);
  }
  return result;
}
