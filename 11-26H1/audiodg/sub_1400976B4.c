/*
 * XREFs of sub_1400976B4 @ 0x1400976B4
 * Callers:
 *     sub_140097700 @ 0x140097700 (sub_140097700.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400976B4(_DWORD *a1, float a2)
{
  __int64 result; // rax

  result = (unsigned int)((int)(a2 * 524288.0) << 12);
  *a1 = result;
  return result;
}
