/*
 * XREFs of Feature_MSRC98117_57713533__private_IsEnabledNoReportingNoInline @ 0x140081F58
 * Callers:
 *     ?DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@HPEAX2@Z @ 0x1403C442C (-DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC.c)
 * Callees:
 *     Feature_MSRC98117_57713533__private_IsEnabledFallback @ 0x140081F3C (Feature_MSRC98117_57713533__private_IsEnabledFallback.c)
 */

__int64 Feature_MSRC98117_57713533__private_IsEnabledNoReportingNoInline()
{
  if ( (Feature_MSRC98117_57713533__private_featureState & 2) != 0 )
    return Feature_MSRC98117_57713533__private_featureState & 1;
  else
    return Feature_MSRC98117_57713533__private_IsEnabledFallback(
             (unsigned int)Feature_MSRC98117_57713533__private_featureState,
             0);
}
