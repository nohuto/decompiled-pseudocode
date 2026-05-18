/*
 * XREFs of sub_18001B3E0 @ 0x18001B3E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18001B3E0(__int64 a1, unsigned int *a2, float a3, float a4)
{
  unsigned int v4; // xmm1_4
  __int64 result; // rax

  v4 = a2[2];
  result = *a2;
  *(_DWORD *)(a1 + 148) = a2[1];
  *(_DWORD *)(a1 + 152) = v4;
  *(_DWORD *)(a1 + 144) = result;
  *(float *)(a1 + 156) = a3;
  *(float *)(a1 + 160) = a4;
  return result;
}
