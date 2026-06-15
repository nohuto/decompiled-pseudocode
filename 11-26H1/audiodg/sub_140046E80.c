/*
 * XREFs of sub_140046E80 @ 0x140046E80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140046E80(_DWORD *a1, float a2)
{
  __int64 result; // rax

  result = (unsigned int)((int)(a2 * 8388608.0) << 8);
  *a1 = result;
  return result;
}
