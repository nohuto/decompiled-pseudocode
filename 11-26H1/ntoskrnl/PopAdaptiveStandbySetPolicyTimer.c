/*
 * XREFs of PopAdaptiveStandbySetPolicyTimer @ 0x1407E07A4
 * Callers:
 *     PopAdaptiveStandbyCheckHibernateBudgetAction @ 0x1407DE80C (PopAdaptiveStandbyCheckHibernateBudgetAction.c)
 * Callees:
 *     KeSetTimer2 @ 0x14037A500 (KeSetTimer2.c)
 */

char __fastcall PopAdaptiveStandbySetPolicyTimer(__int64 a1, unsigned int a2, unsigned int a3)
{
  char v3; // bl
  unsigned int *v4; // rax

  v3 = 0;
  if ( a2 < a3 )
  {
    v4 = (unsigned int *)(a1 + 312);
    if ( !*(_BYTE *)(a1 + 308) || *v4 != a3 )
    {
      *v4 = a3;
      v3 = 1;
      *(_BYTE *)(a1 + 308) = 1;
      KeSetTimer2(a1 + 320, -10000000LL * (a3 - a2 + 1), 0LL, 0LL);
    }
  }
  return v3;
}
