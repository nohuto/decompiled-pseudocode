/*
 * XREFs of Feature_MSRC99192_58219319__private_IsEnabledNoReportingNoInline @ 0x14007F820
 * Callers:
 *     ?DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@EEEPEAX@Z @ 0x1403F49D0 (-DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@EEEPEAX@Z.c)
 * Callees:
 *     Feature_MSRC99192_58219319__private_IsEnabledFallback @ 0x14007F804 (Feature_MSRC99192_58219319__private_IsEnabledFallback.c)
 */

__int64 Feature_MSRC99192_58219319__private_IsEnabledNoReportingNoInline()
{
  if ( (Feature_MSRC99192_58219319__private_featureState & 2) != 0 )
    return Feature_MSRC99192_58219319__private_featureState & 1;
  else
    return Feature_MSRC99192_58219319__private_IsEnabledFallback(
             (unsigned int)Feature_MSRC99192_58219319__private_featureState,
             0);
}
