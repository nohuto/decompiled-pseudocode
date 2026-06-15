/*
 * XREFs of sub_1400B21E8 @ 0x1400B21E8
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException @ 0x14004A6E8 (_CxxThrowException.c)
 *     sub_1400627BC @ 0x1400627BC (sub_1400627BC.c)
 */

void __fastcall __noreturn sub_1400B21E8(__int64 a1, __int64 a2)
{
  sub_1400627BC(*(_QWORD *)(a2 + 80), *(_QWORD *)(a2 + 104));
  throw;
}
