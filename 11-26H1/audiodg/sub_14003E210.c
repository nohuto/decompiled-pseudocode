/*
 * XREFs of sub_14003E210 @ 0x14003E210
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14003E210(_BYTE *a1, float a2)
{
  int v2; // eax
  __int64 result; // rax

  v2 = (int)(a2 * 8388608.0);
  *a1 = v2;
  v2 >>= 8;
  a1[1] = v2;
  result = (unsigned int)(v2 >> 8);
  a1[2] = result;
  return result;
}
