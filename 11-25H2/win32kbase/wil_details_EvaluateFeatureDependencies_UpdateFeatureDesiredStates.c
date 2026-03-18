/*
 * XREFs of wil_details_EvaluateFeatureDependencies_UpdateFeatureDesiredStates @ 0x1402C9F74
 * Callers:
 *     wil_details_EvaluateFeatureDependencies @ 0x1402C9EFC (wil_details_EvaluateFeatureDependencies.c)
 * Callees:
 *     wil_details_FeatureDescriptors_SkipPadding @ 0x14013EA14 (wil_details_FeatureDescriptors_SkipPadding.c)
 */

int **wil_details_EvaluateFeatureDependencies_UpdateFeatureDesiredStates()
{
  int **result; // rax
  int **v1; // rdx
  int v2; // r9d
  int v3; // r10d
  int v4; // r8d
  int v5; // ecx

  result = (int **)wil_details_FeatureDescriptors_SkipPadding(&wil_details_featureDescriptors_a);
  v1 = result;
  if ( result )
  {
    v2 = 0;
    v3 = 384;
    do
    {
      v4 = **v1;
      if ( (v4 & 0x200) != 0 )
      {
        v5 = 0;
        if ( (v4 & v3) != 0 )
          LOBYTE(v5) = (v3 & v4) == 256;
        else
          LOBYTE(v5) = *((_BYTE *)v1 + 31) != 0;
        _InterlockedXor(*v1, v2 & 0xFFFFFFBF | (v5 << 6) ^ **v1 & 0x40);
      }
      result = (int **)wil_details_FeatureDescriptors_SkipPadding(v1 + 7);
      v1 = result;
    }
    while ( result );
  }
  return result;
}
