/*
 * XREFs of sub_1800564DC @ 0x1800564DC
 * Callers:
 *     sub_1800564DC @ 0x1800564DC (sub_1800564DC.c)
 *     sub_180056F84 @ 0x180056F84 (sub_180056F84.c)
 *     sub_180056FAC @ 0x180056FAC (sub_180056FAC.c)
 *     sub_1800573EC @ 0x1800573EC (sub_1800573EC.c)
 * Callees:
 *     sub_1800564DC @ 0x1800564DC (sub_1800564DC.c)
 *     sub_180056534 @ 0x180056534 (sub_180056534.c)
 */

__int64 __fastcall sub_1800564DC(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rbx
  __int64 *v6; // rdx
  __int64 v7; // rcx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = sub_180056534(v7, v6) )
  {
    sub_1800564DC(a1, a2, i[2]);
    v6 = i;
    i = (__int64 *)*i;
  }
  return result;
}
