/*
 * XREFs of _anonymous_namespace_::ComputeInsightsPanelRect @ 0x18039F1F0
 * Callers:
 *     ?SizeViewOnCreation@CInsightsExperienceManager@@AEAAJXZ @ 0x18039FE68 (-SizeViewOnCreation@CInsightsExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?Mirror_IsThreadRTL@@YAHXZ @ 0x180082308 (-Mirror_IsThreadRTL@@YAHXZ.c)
 */

__int64 __fastcall anonymous_namespace_::ComputeInsightsPanelRect(__int64 a1, int a2, int a3, int *a4)
{
  int v8; // r10d
  int v9; // r8d
  int v10; // edx
  int v11; // eax
  int v12; // eax

  *(_OWORD *)a1 = 0LL;
  if ( (unsigned int)Mirror_IsThreadRTL() )
  {
    v8 = *a4;
    v9 = *a4;
  }
  else
  {
    v9 = *a4;
    v8 = a4[2] - a2;
  }
  *(_DWORD *)a1 = v8;
  v10 = a4[3] - a3;
  *(_DWORD *)(a1 + 12) = a4[3];
  v11 = a4[2];
  *(_DWORD *)(a1 + 8) = v8 + a2;
  *(_DWORD *)(a1 + 4) = v10;
  if ( v8 + a2 > v11 )
    *(_DWORD *)(a1 + 8) = v11;
  if ( v8 < v9 )
    *(_DWORD *)a1 = v9;
  v12 = a4[1];
  if ( v10 < v12 )
    *(_DWORD *)(a1 + 4) = v12;
  return a1;
}
