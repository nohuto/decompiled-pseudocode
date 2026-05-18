/*
 * XREFs of sub_180085270 @ 0x180085270
 * Callers:
 *     sub_180085CB0 @ 0x180085CB0 (sub_180085CB0.c)
 *     sub_1800950B0 @ 0x1800950B0 (sub_1800950B0.c)
 * Callees:
 *     sub_180085228 @ 0x180085228 (sub_180085228.c)
 */

__int64 __fastcall sub_180085270(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  __int64 result; // rax

  sub_180085228(*(_QWORD **)(a1 + 8), a2);
  result = *(_QWORD *)(v2 + 8);
  *(_QWORD *)(v2 + 8) = result + 8;
  return result;
}
