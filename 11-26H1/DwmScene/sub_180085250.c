/*
 * XREFs of sub_180085250 @ 0x180085250
 * Callers:
 *     sub_180085684 @ 0x180085684 (sub_180085684.c)
 * Callees:
 *     sub_1800856C4 @ 0x1800856C4 (sub_1800856C4.c)
 */

__int64 __fastcall sub_180085250(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = sub_1800856C4(a1, *(_QWORD *)(a1 + 8));
  *(_QWORD *)(v2 + 8) += 12LL;
  return result;
}
