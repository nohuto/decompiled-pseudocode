/*
 * XREFs of sub_1800980C4 @ 0x1800980C4
 * Callers:
 *     sub_1800980C4 @ 0x1800980C4 (sub_1800980C4.c)
 *     sub_180098348 @ 0x180098348 (sub_180098348.c)
 *     sub_18009A710 @ 0x18009A710 (sub_18009A710.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_1800980C4 @ 0x1800980C4 (sub_1800980C4.c)
 *     sub_1800983DC @ 0x1800983DC (sub_1800983DC.c)
 */

__int64 __fastcall sub_1800980C4(__int64 a1, __int64 a2, char *a3)
{
  char *i; // rdi
  char *v6; // rbx
  __int64 result; // rax

  for ( i = a3; !i[25]; result = sub_18000E26C(v6, 0x1D0uLL) )
  {
    sub_1800980C4(a1, a2, *((_QWORD *)i + 2));
    v6 = i;
    i = *(char **)i;
    sub_1800983DC(v6 + 32);
  }
  return result;
}
