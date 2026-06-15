/*
 * XREFs of sub_14005A40C @ 0x14005A40C
 * Callers:
 *     sub_1400478F8 @ 0x1400478F8 (sub_1400478F8.c)
 * Callees:
 *     sub_1400453E4 @ 0x1400453E4 (sub_1400453E4.c)
 */

__int64 __fastcall sub_14005A40C(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 8) )
    return sub_1400453E4(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16));
  return result;
}
