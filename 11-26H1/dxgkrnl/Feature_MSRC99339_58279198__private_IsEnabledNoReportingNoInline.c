/*
 * XREFs of Feature_MSRC99339_58279198__private_IsEnabledNoReportingNoInline @ 0x1400850B8
 * Callers:
 *     ?VmBusBlt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140221A60 (-VmBusBlt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     Feature_MSRC99339_58279198__private_IsEnabledFallback @ 0x14008509C (Feature_MSRC99339_58279198__private_IsEnabledFallback.c)
 */

__int64 Feature_MSRC99339_58279198__private_IsEnabledNoReportingNoInline()
{
  if ( (Feature_MSRC99339_58279198__private_featureState & 2) != 0 )
    return Feature_MSRC99339_58279198__private_featureState & 1;
  else
    return Feature_MSRC99339_58279198__private_IsEnabledFallback(
             (unsigned int)Feature_MSRC99339_58279198__private_featureState,
             0);
}
