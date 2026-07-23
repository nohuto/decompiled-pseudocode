/*
 * XREFs of wil_details_ShouldRegisterFeatureStagingChangeNotification @ 0x14085B590
 * Callers:
 *     CmFcInitSystem1 @ 0x140CF3E50 (CmFcInitSystem1.c)
 * Callees:
 *     wil_details_FeatureDescriptors_SkipPadding @ 0x1404F78A8 (wil_details_FeatureDescriptors_SkipPadding.c)
 */

__int64 *wil_details_ShouldRegisterFeatureStagingChangeNotification()
{
  __int64 *result; // rax
  char v1; // dl

  result = wil_details_FeatureDescriptors_SkipPadding((__int64 *)&wil_details_featureDescriptors_a);
  v1 = 0;
  while ( result )
  {
    if ( *((_BYTE *)result + 29) == v1 && *((_BYTE *)result + 30) == v1 && *((_BYTE *)result + 28) == v1 )
      return (__int64 *)1;
    result = wil_details_FeatureDescriptors_SkipPadding(result + 7);
  }
  return result;
}
