/*
 * XREFs of sub_1800878A0 @ 0x1800878A0
 * Callers:
 *     sub_180087C7C @ 0x180087C7C (sub_180087C7C.c)
 * Callees:
 *     sub_180087CBC @ 0x180087CBC (sub_180087CBC.c)
 */

__int64 __fastcall sub_1800878A0(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = sub_180087CBC(a1, *(_QWORD *)(a1 + 8));
  *(_QWORD *)(v2 + 8) += 16LL;
  return result;
}
