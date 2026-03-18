/*
 * XREFs of Feature_MSRC99593_58389349__private_IsEnabledNoReportingNoInline @ 0x140081CE0
 * Callers:
 *     ?AddMapping@HOSTVMMONITORMAPPING@@QEAAJPEAUHOST_VMMONITOR_MAPPING@1@@Z @ 0x1400816C4 (-AddMapping@HOSTVMMONITORMAPPING@@QEAAJPEAUHOST_VMMONITOR_MAPPING@1@@Z.c)
 * Callees:
 *     Feature_MSRC99593_58389349__private_IsEnabledFallback @ 0x140081CC4 (Feature_MSRC99593_58389349__private_IsEnabledFallback.c)
 */

__int64 Feature_MSRC99593_58389349__private_IsEnabledNoReportingNoInline()
{
  if ( (Feature_MSRC99593_58389349__private_featureState & 2) != 0 )
    return Feature_MSRC99593_58389349__private_featureState & 1;
  else
    return Feature_MSRC99593_58389349__private_IsEnabledFallback(
             (unsigned int)Feature_MSRC99593_58389349__private_featureState,
             0);
}
