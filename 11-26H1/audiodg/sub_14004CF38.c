/*
 * XREFs of sub_14004CF38 @ 0x14004CF38
 * Callers:
 *     sub_14004D2A0 @ 0x14004D2A0 (sub_14004D2A0.c)
 * Callees:
 *     sub_14004FA18 @ 0x14004FA18 (sub_14004FA18.c)
 */

__int64 __fastcall sub_14004CF38(_QWORD *a1)
{
  sub_14004FA18(a1 + 24);
  sub_14004FA18(a1 + 22);
  *a1 = &std::exception::`vftable';
  return o___std_exception_destroy();
}
