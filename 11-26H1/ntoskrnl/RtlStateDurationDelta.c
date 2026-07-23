/*
 * XREFs of RtlStateDurationDelta @ 0x140474510
 * Callers:
 *     PopEtEnergyValuesDeltaCalculate @ 0x1409CCE40 (PopEtEnergyValuesDeltaCalculate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStateDurationDelta(__int64 a1, unsigned int *a2, unsigned int *a3)
{
  unsigned int v4; // ecx
  __int64 result; // rax

  *(_QWORD *)a1 = 0LL;
  v4 = a2[1] & 0x7FFFFFFF;
  if ( (a3[1] & 0x7FFFFFFF) > v4 )
    *(_DWORD *)(a1 + 4) = (a3[1] - v4) & 0x7FFFFFFF;
  result = *a2;
  if ( (unsigned int)result <= *a3 )
    result = *a3;
  *(_DWORD *)a1 = result;
  return result;
}
