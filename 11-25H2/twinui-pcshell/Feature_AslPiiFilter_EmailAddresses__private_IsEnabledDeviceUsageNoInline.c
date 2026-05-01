/*
 * XREFs of Feature_AslPiiFilter_EmailAddresses__private_IsEnabledDeviceUsageNoInline @ 0x180650294
 * Callers:
 *     PiiFilterEmbeddedPathsExecute @ 0x1806502D0 (PiiFilterEmbeddedPathsExecute.c)
 * Callees:
 *     <none>
 */

__int64 Feature_AslPiiFilter_EmailAddresses__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_AslPiiFilter_EmailAddresses__private_featureState & 0x10) != 0 )
    return Feature_AslPiiFilter_EmailAddresses__private_featureState & 1;
  else
    return Feature_AslPiiFilter_EmailAddresses__private_IsEnabledFallback(
             (unsigned int)Feature_AslPiiFilter_EmailAddresses__private_featureState,
             3LL);
}
