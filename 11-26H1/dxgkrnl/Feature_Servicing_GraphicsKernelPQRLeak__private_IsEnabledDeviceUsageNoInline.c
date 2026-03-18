/*
 * XREFs of Feature_Servicing_GraphicsKernelPQRLeak__private_IsEnabledDeviceUsageNoInline @ 0x14007C840
 * Callers:
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x14003D730 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAUVIDMM_MULTI_ALLOC@@IE@Z @ 0x140295E70 (-SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERS.c)
 *     ?SubmitCommand@DXGHWQUEUE@@QEAAJPEBU_D3DKMT_SUBMITCOMMANDTOHWQUEUE@@_N@Z @ 0x1402F9E60 (-SubmitCommand@DXGHWQUEUE@@QEAAJPEBU_D3DKMT_SUBMITCOMMANDTOHWQUEUE@@_N@Z.c)
 *     DxgkPresent @ 0x140323BB0 (DxgkPresent.c)
 * Callees:
 *     Feature_Servicing_GraphicsKernelPQRLeak__private_IsEnabledFallback @ 0x14007C87C (Feature_Servicing_GraphicsKernelPQRLeak__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_GraphicsKernelPQRLeak__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_GraphicsKernelPQRLeak__private_featureState & 0x10) != 0 )
    return Feature_Servicing_GraphicsKernelPQRLeak__private_featureState & 1;
  else
    return Feature_Servicing_GraphicsKernelPQRLeak__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_GraphicsKernelPQRLeak__private_featureState,
             3LL);
}
