/*
 * XREFs of Feature_GraphicsKernel2602BugFixes__private_IsEnabledDeviceUsageNoInline @ 0x14005618C
 * Callers:
 *     VidSchInitializeAdapter @ 0x1400C2230 (VidSchInitializeAdapter.c)
 * Callees:
 *     Feature_GraphicsKernel2602BugFixes__private_IsEnabledFallback @ 0x1400561C8 (Feature_GraphicsKernel2602BugFixes__private_IsEnabledFallback.c)
 */

__int64 Feature_GraphicsKernel2602BugFixes__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_GraphicsKernel2602BugFixes__private_featureState & 0x10) != 0 )
    return Feature_GraphicsKernel2602BugFixes__private_featureState & 1;
  else
    return Feature_GraphicsKernel2602BugFixes__private_IsEnabledFallback(
             (unsigned int)Feature_GraphicsKernel2602BugFixes__private_featureState,
             3LL);
}
