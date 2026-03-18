/*
 * XREFs of ?_Tidy@?$vector@PEAVCLight@@V?$allocator@PEAVCLight@@@std@@@std@@AEAAXXZ @ 0x180024CE4
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x18002456C (--1CVisual@@MEAA@XZ.c)
 *     ??1?$vector@PEAVCCompositionSurfaceBitmap@@V?$allocator@PEAVCCompositionSurfaceBitmap@@@std@@@std@@QEAA@XZ @ 0x18015168C (--1-$vector@PEAVCCompositionSurfaceBitmap@@V-$allocator@PEAVCCompositionSurfaceBitmap@@@std@@@st.c)
 *     ??1CKeyframeAnimation@@UEAA@XZ @ 0x18015294C (--1CKeyframeAnimation@@UEAA@XZ.c)
 *     ??1CConditionalExpression@@UEAA@XZ @ 0x180200054 (--1CConditionalExpression@@UEAA@XZ.c)
 *     ??1CBaseExpression@@MEAA@XZ @ 0x180200110 (--1CBaseExpression@@MEAA@XZ.c)
 *     ??1CPrimitiveGroup@@MEAA@XZ @ 0x180200284 (--1CPrimitiveGroup@@MEAA@XZ.c)
 *     ?ProcessSetSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOURCE_SETCOLLECTIONPROPERTY@@PEBXI_N@Z @ 0x180205398 (-ProcessSetSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOURCE_S.c)
 *     ??1?$CAnimationTriggerGeneratedT@VCAnimationTrigger@@VCPropertyChangeResource@@@@MEAA@XZ @ 0x180216E38 (--1-$CAnimationTriggerGeneratedT@VCAnimationTrigger@@VCPropertyChangeResource@@@@MEAA@XZ.c)
 *     ??1CFilterEffect@@MEAA@XZ @ 0x180245F14 (--1CFilterEffect@@MEAA@XZ.c)
 *     ??1?$_Tidy_guard@V?$vector@PEAVCLight@@V?$allocator@PEAVCLight@@@std@@@std@@@std@@QEAA@XZ @ 0x18025A6C4 (--1-$_Tidy_guard@V-$vector@PEAVCLight@@V-$allocator@PEAVCLight@@@std@@@std@@@std@@QEAA@XZ.c)
 *     ??1CSpectreCallbackRenderer@@UEAA@XZ @ 0x18025A6E4 (--1CSpectreCallbackRenderer@@UEAA@XZ.c)
 *     ??4?$vector@PEAVCBaseExpression@@V?$allocator@PEAVCBaseExpression@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18026B88C (--4-$vector@PEAVCBaseExpression@@V-$allocator@PEAVCBaseExpression@@@std@@@std@@QEAAAEAV01@$$QEAV.c)
 *     ?ProcessSetExpressions@CConditionalExpression@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOURCE_SETCOLLECTIONPROPERTY@@PEBXI_N@Z @ 0x18026C254 (-ProcessSetExpressions@CConditionalExpression@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOURCE.c)
 *     ?ProcessSetNestedExpressions@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOURCE_SETCOLLECTIONPROPERTY@@PEBXI_N@Z @ 0x180279DDC (-ProcessSetNestedExpressions@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOUR.c)
 *     ?ProcessSetInitialValueExpressions@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOURCE_SETCOLLECTIONPROPERTY@@PEBXI_N@Z @ 0x18027C838 (-ProcessSetInitialValueExpressions@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RES.c)
 * Callees:
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1801513C8 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<CLight *>::_Tidy(__int64 a1)
{
  void *v2; // rcx
  __int64 v3; // rdx
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  void *v6; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(void **)a1;
  if ( v2 )
  {
    v3 = *(_QWORD *)(a1 + 16) - (_QWORD)v2;
    v6 = v2;
    v4 = v3 & 0xFFFFFFFFFFFFFFF8uLL;
    v5 = v4;
    if ( v4 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v6, &v5);
      v4 = v5;
      v2 = v6;
    }
    operator delete(v2, v4);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
