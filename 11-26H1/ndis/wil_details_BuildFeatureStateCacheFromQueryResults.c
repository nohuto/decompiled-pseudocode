/*
 * XREFs of wil_details_BuildFeatureStateCacheFromQueryResults @ 0x14013A268
 * Callers:
 *     wil_details_UpdateFeatureConfiguredStates @ 0x14013A5E0 (wil_details_UpdateFeatureConfiguredStates.c)
 *     wil_details_PopulateInitialConfiguredFeatureStates @ 0x14018ED4C (wil_details_PopulateInitialConfiguredFeatureStates.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil_details_BuildFeatureStateCacheFromQueryResults(int a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax
  int v4; // edx
  int v5; // edx

  if ( a1 == -2147483614 || a1 == -1073741275 )
  {
    result = 0LL;
    *a3 = 0LL;
    goto LABEL_9;
  }
  result = 0LL;
  *a3 = 0LL;
  if ( !a1 )
  {
    result = *(_DWORD *)(a2 + 4) & 0xB0;
    v4 = result | (4 * (*(_DWORD *)(a2 + 4) & 0x40));
    goto LABEL_7;
  }
  if ( a1 != 279 )
  {
LABEL_9:
    v5 = 518;
    goto LABEL_10;
  }
  v4 = *(_DWORD *)(a2 + 4) & 0x80;
LABEL_7:
  v5 = (8 * v4) | 0x206;
LABEL_10:
  *(_DWORD *)a3 = v5;
  return result;
}
