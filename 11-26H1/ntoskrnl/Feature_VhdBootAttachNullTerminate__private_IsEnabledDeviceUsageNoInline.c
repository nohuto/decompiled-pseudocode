/*
 * XREFs of Feature_VhdBootAttachNullTerminate__private_IsEnabledDeviceUsageNoInline @ 0x14071EA90
 * Callers:
 *     VhdiAutoAttachOneVhd @ 0x1408A614C (VhdiAutoAttachOneVhd.c)
 *     VhdiMountVhdFile @ 0x1408A63B0 (VhdiMountVhdFile.c)
 *     VhdAutoAttachVirtualDisks @ 0x140D02604 (VhdAutoAttachVirtualDisks.c)
 *     VhdInitialize @ 0x140D02894 (VhdInitialize.c)
 * Callees:
 *     Feature_VhdBootAttachNullTerminate__private_IsEnabledFallback @ 0x14071EACC (Feature_VhdBootAttachNullTerminate__private_IsEnabledFallback.c)
 */

__int64 Feature_VhdBootAttachNullTerminate__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_VhdBootAttachNullTerminate__private_featureState & 0x10) != 0 )
    return Feature_VhdBootAttachNullTerminate__private_featureState & 1;
  else
    return Feature_VhdBootAttachNullTerminate__private_IsEnabledFallback(
             (unsigned int)Feature_VhdBootAttachNullTerminate__private_featureState,
             3LL);
}
