/*
 * XREFs of PopAdaptiveStandbyCheckRefreshableBudgetActionV2 @ 0x1407E3838
 * Callers:
 *     PopAdaptiveStandbyCheckHibernateBudgetAction @ 0x1407E2E8C (PopAdaptiveStandbyCheckHibernateBudgetAction.c)
 *     PopAdaptiveStandbyCheckRestrictedStandbyBudgetAction @ 0x1407E38AC (PopAdaptiveStandbyCheckRestrictedStandbyBudgetAction.c)
 * Callees:
 *     <none>
 */

char __fastcall PopAdaptiveStandbyCheckRefreshableBudgetActionV2(__int64 a1, int a2, unsigned int a3, int *a4)
{
  unsigned int v4; // edi
  int v5; // r11d
  char v6; // bl
  unsigned int v7; // r10d
  int v8; // r10d

  v4 = *(_DWORD *)(a1 + 32);
  v5 = 0;
  v6 = 0;
  if ( v4 && (v7 = *(_DWORD *)(a1 + 28)) != 0 )
  {
    if ( a3 / v4 < v7 )
      v7 = a3 / v4;
    v8 = v7 + 1;
  }
  else
  {
    v8 = 1;
  }
  if ( a2 >= *(_DWORD *)(a1 + 24) * v8 )
  {
    *(_BYTE *)a1 = 1;
    v6 = 1;
  }
  else
  {
    v5 = 3;
  }
  *a4 = v5;
  return v6;
}
