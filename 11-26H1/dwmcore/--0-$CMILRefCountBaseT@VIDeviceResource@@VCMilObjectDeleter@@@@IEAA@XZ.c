/*
 * XREFs of ??0?$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAA@XZ @ 0x180014460
 * Callers:
 *     ?Create@CReconstructableDrawListEntry@@SAJAEBUReconstructableDrawListEntryParams@@PEAPEAV1@@Z @ 0x18000FC50 (-Create@CReconstructableDrawListEntry@@SAJAEBUReconstructableDrawListEntryParams@@PEAPEAV1@@Z.c)
 *     ??0?$CMILCOMBaseT@UID2D1SimplifiedGeometrySink@@U1@VCMilObjectDeleter@@@@IEAA@XZ @ 0x180014448 (--0-$CMILCOMBaseT@UID2D1SimplifiedGeometrySink@@U1@VCMilObjectDeleter@@@@IEAA@XZ.c)
 *     ?GetNextRunningEffect@CCommonRenderingEffect@@UEAA?AV?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@PEAVCRenderingEffect@@PEA_N@Z @ 0x18007BC70 (-GetNextRunningEffect@CCommonRenderingEffect@@UEAA-AV-$com_ptr_t@VCRenderingEffect@@Uerr_returnc.c)
 *     ??0CCommonRenderingEffect@@QEAA@V?$span@PEBVCDrawListBrush@@$0?0@gsl@@@Z @ 0x18007C1A0 (--0CCommonRenderingEffect@@QEAA@V-$span@PEBVCDrawListBrush@@$0-0@gsl@@@Z.c)
 *     ?CreateRenderingEffect@CCommonRenderingEffectFactory@@UEAAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@PEAPEAVCRenderingEffect@@@Z @ 0x18007C360 (-CreateRenderingEffect@CCommonRenderingEffectFactory@@UEAAJV-$span@PEBVCDrawListBrush@@$0-0@gsl@.c)
 *     ?CreateRenderingEffect@CCommonRenderingEffectFactory@@QEAAJAEBVCDrawListBitmap@@USamplerMode@@01PEAPEAVCRenderingEffect@@@Z @ 0x18007C9C0 (-CreateRenderingEffect@CCommonRenderingEffectFactory@@QEAAJAEBVCDrawListBitmap@@USamplerMode@@01.c)
 *     ?CreateRenderingEffect@CBrushRenderingEffectFactory@@UEAAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@PEAPEAVCRenderingEffect@@@Z @ 0x18007CCB0 (-CreateRenderingEffect@CBrushRenderingEffectFactory@@UEAAJV-$span@PEBVCDrawListBrush@@$0-0@gsl@@.c)
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@@Z @ 0x18007D080 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache.c)
 *     ??0CInteractionContextWrapper@@QEAA@XZ @ 0x180111BD8 (--0CInteractionContextWrapper@@QEAA@XZ.c)
 *     ??0CDrawListEntryBatch@@AEAA@PEAVCD3DDevice@@PEAVCSharedDirect3DResources@0@@Z @ 0x180138914 (--0CDrawListEntryBatch@@AEAA@PEAVCD3DDevice@@PEAVCSharedDirect3DResources@0@@Z.c)
 *     ??0CClockBase@@IEAA@XZ @ 0x1801668C0 (--0CClockBase@@IEAA@XZ.c)
 *     ??0CSpringAccelerator@@QEAA@XZ @ 0x1801B7224 (--0CSpringAccelerator@@QEAA@XZ.c)
 *     ??0CScalarForce@@QEAA@PEAUIAccelerator@@@Z @ 0x18020E3E0 (--0CScalarForce@@QEAA@PEAUIAccelerator@@@Z.c)
 *     ?Initialize@CManipulationContext@@QEAAJ_NU_LUID@@@Z @ 0x180226FE0 (-Initialize@CManipulationContext@@QEAAJ_NU_LUID@@@Z.c)
 *     ??0CFrictionAccelerator@@QEAA@M@Z @ 0x18027B120 (--0CFrictionAccelerator@@QEAA@M@Z.c)
 *     ??0CGravityBounceAccelerator@@QEAA@MM@Z @ 0x18027B150 (--0CGravityBounceAccelerator@@QEAA@MM@Z.c)
 *     ??0CNaturalAnimationScalarForceAdapter@@QEAA@XZ @ 0x18027B1C8 (--0CNaturalAnimationScalarForceAdapter@@QEAA@XZ.c)
 *     ??0CSpringAccelerator@@QEAA@MM@Z @ 0x18027B1EC (--0CSpringAccelerator@@QEAA@MM@Z.c)
 *     ??0CExpressionForce@@QEAA@MMPEAVCConditionalExpression@@W4ScrollAxis@@@Z @ 0x18028E7B8 (--0CExpressionForce@@QEAA@MMPEAVCConditionalExpression@@W4ScrollAxis@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>(
        __int64 a1)
{
  *(_DWORD *)(a1 + 8) = 0;
  return a1;
}
