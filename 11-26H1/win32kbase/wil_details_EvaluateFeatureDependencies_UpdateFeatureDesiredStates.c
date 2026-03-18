/*
 * XREFs of wil_details_EvaluateFeatureDependencies_UpdateFeatureDesiredStates @ 0x1402D3338
 * Callers:
 *     wil_details_EvaluateFeatureDependencies @ 0x1402D32BC (wil_details_EvaluateFeatureDependencies.c)
 * Callees:
 *     wil_details_FeatureDescriptors_SkipPadding @ 0x1401750CC (wil_details_FeatureDescriptors_SkipPadding.c)
 */

int **wil_details_EvaluateFeatureDependencies_UpdateFeatureDesiredStates()
{
  int **result; // rax
  int **v1; // rdx
  int v2; // r9d
  int v3; // r8d
  int v4; // eax

  result = (int **)wil_details_FeatureDescriptors_SkipPadding(&wil_details_featureDescriptors_a);
  v1 = result;
  if ( result )
  {
    v2 = 0;
    do
    {
      v3 = **v1;
      if ( (v3 & 0x200) != 0 )
      {
        if ( (v3 & 0x180) != 0 )
          v4 = (**v1 & 0x180) == 256;
        else
          v4 = *((_BYTE *)v1 + 31) != 0;
        _InterlockedXor(*v1, v2 & 0xFFFFFFBF | (v4 << 6) ^ **v1 & 0x40);
      }
      result = (int **)wil_details_FeatureDescriptors_SkipPadding(v1 + 7);
      v1 = result;
    }
    while ( result );
  }
  return result;
}
