/*
 * XREFs of HalpHpetAcknowledgeInterrupt @ 0x1404F0BD0
 * Callers:
 *     <none>
 * Callees:
 *     HalpHpetSetMatchValue @ 0x1404E860C (HalpHpetSetMatchValue.c)
 *     HalSetTimerProblem @ 0x140531D30 (HalSetTimerProblem.c)
 */

__int64 __fastcall HalpHpetAcknowledgeInterrupt(__int64 a1)
{
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 8) == 1 )
    return HalpHpetSetMatchValue((int *)a1, *(_DWORD *)(a1 + 20), 1);
  if ( *(_DWORD *)(a1 + 8) == 2 && !*(_BYTE *)(a1 + 12) )
    return HalSetTimerProblem(a1, 2LL);
  return result;
}
