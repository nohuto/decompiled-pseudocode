/*
 * XREFs of sub_14003E7F4 @ 0x14003E7F4
 * Callers:
 *     sub_140097700 @ 0x140097700 (sub_140097700.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14003E7F4(_DWORD *a1, float a2)
{
  __int64 result; // rax

  result = (unsigned int)(int)(a2 * 2147483648.0);
  *a1 = result;
  return result;
}
