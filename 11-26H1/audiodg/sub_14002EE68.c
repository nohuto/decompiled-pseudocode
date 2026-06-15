/*
 * XREFs of sub_14002EE68 @ 0x14002EE68
 * Callers:
 *     sub_140097700 @ 0x140097700 (sub_140097700.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14002EE68(_WORD *a1, float a2)
{
  __int64 result; // rax

  result = (unsigned int)(int)(a2 * 32768.0);
  *a1 = result;
  return result;
}
