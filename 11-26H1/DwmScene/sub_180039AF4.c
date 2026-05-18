/*
 * XREFs of sub_180039AF4 @ 0x180039AF4
 * Callers:
 *     sub_18003A25C @ 0x18003A25C (sub_18003A25C.c)
 * Callees:
 *     sub_180011930 @ 0x180011930 (sub_180011930.c)
 */

__int64 __fastcall sub_180039AF4(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v3; // r9

  result = sub_180011930(*(_QWORD **)(a1 + 8), a2);
  *(_QWORD *)(v3 + 8) += 16LL;
  return result;
}
