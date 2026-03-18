/*
 * XREFs of IrqArbScoreRequirement @ 0x1400D2A20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IrqArbScoreRequirement(__int64 a1)
{
  unsigned int v1; // edx
  unsigned int v2; // ecx
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 12);
  v2 = v1 - *(_DWORD *)(a1 + 8) + 1;
  if ( !v2 || v2 > 0xFFFF )
    v2 = 0xFFFF;
  result = v2 + 5;
  if ( v1 < 0x10 )
    return v2;
  return result;
}
