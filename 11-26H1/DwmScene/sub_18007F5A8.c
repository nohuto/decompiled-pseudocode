/*
 * XREFs of sub_18007F5A8 @ 0x18007F5A8
 * Callers:
 *     sub_18007DAAC @ 0x18007DAAC (sub_18007DAAC.c)
 *     sub_180085744 @ 0x180085744 (sub_180085744.c)
 *     sub_180085A18 @ 0x180085A18 (sub_180085A18.c)
 *     sub_1800D6984 @ 0x1800D6984 (sub_1800D6984.c)
 *     sub_1800D6DF0 @ 0x1800D6DF0 (sub_1800D6DF0.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 */

__int64 __fastcall sub_18007F5A8(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    result = sub_18000E26C(v2, 4 * ((__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v2) >> 2));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
