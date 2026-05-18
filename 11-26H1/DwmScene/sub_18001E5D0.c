/*
 * XREFs of sub_18001E5D0 @ 0x18001E5D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800183D8 @ 0x1800183D8 (sub_1800183D8.c)
 */

_QWORD *__fastcall sub_18001E5D0(_QWORD *a1, __int64 a2)
{
  sub_1800183D8((__int64)a1, a2);
  *a1 = &Spectre::Utils::SpectreInvalidArgException::`vftable';
  return a1;
}
