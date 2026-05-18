/*
 * XREFs of sub_18007AD20 @ 0x18007AD20
 * Callers:
 *     sub_18007B264 @ 0x18007B264 (sub_18007B264.c)
 * Callees:
 *     sub_18007B2A4 @ 0x18007B2A4 (sub_18007B2A4.c)
 */

__int64 __fastcall sub_18007AD20(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = sub_18007B2A4(a1, *(_QWORD *)(a1 + 8));
  *(_QWORD *)(v2 + 8) += 4LL;
  return result;
}
