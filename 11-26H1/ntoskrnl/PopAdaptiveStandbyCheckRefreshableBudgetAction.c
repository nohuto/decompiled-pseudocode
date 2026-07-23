/*
 * XREFs of PopAdaptiveStandbyCheckRefreshableBudgetAction @ 0x1407E3724
 * Callers:
 *     PopAdaptiveStandbyCheckHibernateBudgetAction @ 0x1407E2E8C (PopAdaptiveStandbyCheckHibernateBudgetAction.c)
 *     PopAdaptiveStandbyCheckRestrictedStandbyBudgetAction @ 0x1407E38AC (PopAdaptiveStandbyCheckRestrictedStandbyBudgetAction.c)
 * Callees:
 *     <none>
 */

char __fastcall PopAdaptiveStandbyCheckRefreshableBudgetAction(__int64 a1, __int64 a2, unsigned int *a3, _DWORD *a4)
{
  char v4; // r11
  int v6; // r8d
  unsigned int v7; // eax
  unsigned int v8; // edi
  unsigned int v9; // ecx
  int v10; // ecx

  v4 = 0;
  if ( *(_BYTE *)a2 )
  {
    *a4 = 13;
  }
  else
  {
    v6 = *(_DWORD *)(a2 + 8);
    if ( v6 && (v7 = *(_DWORD *)(a2 + 4)) != 0 )
    {
      if ( *(_BYTE *)(a1 + 196) )
      {
        *a4 = 12;
      }
      else if ( v7 <= *a3 )
      {
        v8 = *(_DWORD *)(a2 + 16);
        if ( v8 && (v9 = *(_DWORD *)(a2 + 12)) != 0 )
        {
          if ( *a3 / v8 < v9 )
            v9 = *a3 / v8;
          v10 = v9 + 1;
        }
        else
        {
          v10 = 1;
        }
        if ( (int)a3[4] >= v10 * v6 )
        {
          *(_BYTE *)a2 = 1;
          v4 = 1;
          *a4 = 0;
        }
        else
        {
          *a4 = 3;
        }
      }
      else
      {
        *a4 = 2;
      }
    }
    else
    {
      *a4 = 1;
    }
  }
  return v4;
}
