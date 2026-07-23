/*
 * XREFs of PopAdaptiveStandbySetPolicyTimer @ 0x1407E5600
 * Callers:
 *     PopAdaptiveStandbyCheckHibernateBudgetAction @ 0x1407E2E8C (PopAdaptiveStandbyCheckHibernateBudgetAction.c)
 * Callees:
 *     KeSetTimer2 @ 0x14037C2B0 (KeSetTimer2.c)
 */

char __fastcall PopAdaptiveStandbySetPolicyTimer(__int64 a1, unsigned int a2, unsigned int a3)
{
  char v3; // bl
  unsigned int *v4; // rax

  v3 = 0;
  if ( a2 < a3 )
  {
    v4 = (unsigned int *)(a1 + 328);
    if ( !*(_BYTE *)(a1 + 324) || *v4 != a3 )
    {
      *v4 = a3;
      v3 = 1;
      *(_BYTE *)(a1 + 324) = 1;
      KeSetTimer2(a1 + 336, -10000000LL * (a3 - a2 + 1), 0LL, 0LL);
    }
  }
  return v3;
}
