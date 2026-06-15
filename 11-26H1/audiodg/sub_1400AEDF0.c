/*
 * XREFs of sub_1400AEDF0 @ 0x1400AEDF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140036EB4 @ 0x140036EB4 (sub_140036EB4.c)
 *     _CxxThrowException @ 0x14004A6E8 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_1400AEDF0(__int64 a1, __int64 a2)
{
  sub_140036EB4(*(_QWORD *)(a2 + 48), *(_QWORD *)(a2 + 56));
  throw;
}
