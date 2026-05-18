/*
 * XREFs of sub_180085298 @ 0x180085298
 * Callers:
 *     sub_180085CB0 @ 0x180085CB0 (sub_180085CB0.c)
 * Callees:
 *     sub_180085238 @ 0x180085238 (sub_180085238.c)
 */

__int64 __fastcall sub_180085298(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 result; // rax

  sub_180085238(*(_QWORD *)(a1 + 8), a2);
  result = *(_QWORD *)(v2 + 8);
  *(_QWORD *)(v2 + 8) = result + 12;
  return result;
}
