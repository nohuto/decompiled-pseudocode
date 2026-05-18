/*
 * XREFs of sub_180018488 @ 0x180018488
 * Callers:
 *     sub_1800161F4 @ 0x1800161F4 (sub_1800161F4.c)
 * Callees:
 *     sub_180018B60 @ 0x180018B60 (sub_180018B60.c)
 */

__int64 __fastcall sub_180018488(void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_180018B60(v1);
  return result;
}
