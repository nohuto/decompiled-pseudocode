/*
 * XREFs of sub_1400AEBC0 @ 0x1400AEBC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140012A30 @ 0x140012A30 (sub_140012A30.c)
 *     _CxxThrowException @ 0x14004A6E8 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_1400AEBC0(__int64 a1, __int64 a2)
{
  sub_140012A30(*(_QWORD *)(a2 + 48), *(_QWORD *)(a2 + 72));
  throw;
}
