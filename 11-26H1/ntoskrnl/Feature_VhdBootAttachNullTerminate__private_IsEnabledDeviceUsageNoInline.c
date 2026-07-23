/*
 * XREFs of Feature_VhdBootAttachNullTerminate__private_IsEnabledDeviceUsageNoInline @ 0x140723720
 * Callers:
 *     VhdiAutoAttachOneVhd @ 0x1408AC5BC (VhdiAutoAttachOneVhd.c)
 *     VhdiMountVhdFile @ 0x1408AC820 (VhdiMountVhdFile.c)
 *     VhdAutoAttachVirtualDisks @ 0x140D089A4 (VhdAutoAttachVirtualDisks.c)
 *     VhdInitialize @ 0x140D08C34 (VhdInitialize.c)
 * Callees:
 *     Feature_VhdBootAttachNullTerminate__private_IsEnabledFallback @ 0x14072375C (Feature_VhdBootAttachNullTerminate__private_IsEnabledFallback.c)
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
