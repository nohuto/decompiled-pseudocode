/*
 * XREFs of Feature_GraphicsKernelBr2601BugFixes__private_IsEnabledDeviceUsageNoInline @ 0x140080768
 * Callers:
 *     ?NotifyProcessDefaultQosChangeCallback@@YAXPEAU_EPROCESS@@E@Z @ 0x1401F6B90 (-NotifyProcessDefaultQosChangeCallback@@YAXPEAU_EPROCESS@@E@Z.c)
 *     ?DxgkSetProcessStatus@@YAXPEAU_D3DKMT_PROCESS_STATUS_INTERNAL@@@Z @ 0x140440110 (-DxgkSetProcessStatus@@YAXPEAU_D3DKMT_PROCESS_STATUS_INTERNAL@@@Z.c)
 * Callees:
 *     Feature_GraphicsKernelBr2601BugFixes__private_IsEnabledFallback @ 0x1400807A4 (Feature_GraphicsKernelBr2601BugFixes__private_IsEnabledFallback.c)
 */

__int64 Feature_GraphicsKernelBr2601BugFixes__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_GraphicsKernelBr2601BugFixes__private_featureState & 0x10) != 0 )
    return Feature_GraphicsKernelBr2601BugFixes__private_featureState & 1;
  else
    return Feature_GraphicsKernelBr2601BugFixes__private_IsEnabledFallback(
             (unsigned int)Feature_GraphicsKernelBr2601BugFixes__private_featureState,
             3LL);
}
