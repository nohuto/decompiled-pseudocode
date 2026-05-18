/*
 * XREFs of sub_1800DD707 @ 0x1800DD707
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_1800183D8 @ 0x1800183D8 (sub_1800183D8.c)
 *     sub_18007C50C @ 0x18007C50C (sub_18007C50C.c)
 */

void __fastcall __noreturn sub_1800DD707(__int64 a1, __int64 a2)
{
  sub_18007C50C(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 16LL));
  sub_1800183D8(a2 + 48, *(_QWORD *)(a2 + 40));
  throw (Spectre::Utils::SpectreException *)(a2 + 48);
}
