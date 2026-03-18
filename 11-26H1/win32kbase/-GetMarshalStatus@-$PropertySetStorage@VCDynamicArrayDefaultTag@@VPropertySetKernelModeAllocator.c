/*
 * XREFs of ?GetMarshalStatus@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAA?AW4MarshalStatus@@UDCOMPOSITION_PROPERTY_ID@@@Z @ 0x1401278E8
 * Callers:
 *     ??$EmitSetProperty@UPropertySetMatrix4x4Value@@UD2DMatrix@@@CPropertySetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@1@UDCOMPOSITION_PROPERTY_ID@@@Z @ 0x1401270F8 (--$EmitSetProperty@UPropertySetMatrix4x4Value@@UD2DMatrix@@@CPropertySetMarshaler@DirectComposit.c)
 *     ??$EmitSetProperty@UPropertySetMatrix3x2Value@@UD2D_MATRIX_3X2_F@@@CPropertySetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@1@UDCOMPOSITION_PROPERTY_ID@@@Z @ 0x140127214 (--$EmitSetProperty@UPropertySetMatrix3x2Value@@UD2D_MATRIX_3X2_F@@@CPropertySetMarshaler@DirectC.c)
 *     ?EmitSetProperties@CPropertySetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1401275A8 (-EmitSetProperties@CPropertySetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ??$EmitSetProperty@UPropertySetScalarValue@@M@CPropertySetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@1@UDCOMPOSITION_PROPERTY_ID@@@Z @ 0x140127720 (--$EmitSetProperty@UPropertySetScalarValue@@M@CPropertySetMarshaler@DirectComposition@@AEAA_NPEA.c)
 *     ??$UpdateProperty@_N@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEB_N@Z @ 0x140127820 (--$UpdateProperty@_N@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEB_N@Z.c)
 *     ??$EmitSetProperty@UPropertySetBooleanValue@@_N@CPropertySetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@1@UDCOMPOSITION_PROPERTY_ID@@@Z @ 0x1402419E0 (--$EmitSetProperty@UPropertySetBooleanValue@@_N@CPropertySetMarshaler@DirectComposition@@AEAA_NP.c)
 *     ??$EmitSetProperty@UPropertySetVector4Value@@UD2DVector4@@@CPropertySetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@1@UDCOMPOSITION_PROPERTY_ID@@@Z @ 0x140241AE0 (--$EmitSetProperty@UPropertySetVector4Value@@UD2DVector4@@@CPropertySetMarshaler@DirectCompositi.c)
 *     ??$EmitSetProperty@UPropertySetVector2Value@@UD2DVector2@@@CPropertySetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@1@UDCOMPOSITION_PROPERTY_ID@@@Z @ 0x140241BE4 (--$EmitSetProperty@UPropertySetVector2Value@@UD2DVector2@@@CPropertySetMarshaler@DirectCompositi.c)
 *     ??$EmitSetProperty@UPropertySetVector3Value@@UD2DVector3@@@CPropertySetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@1@UDCOMPOSITION_PROPERTY_ID@@@Z @ 0x140241CE8 (--$EmitSetProperty@UPropertySetVector3Value@@UD2DVector3@@@CPropertySetMarshaler@DirectCompositi.c)
 *     ??$UpdateProperty@UD2DVector2@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBUD2DVector2@@@Z @ 0x140241DF4 (--$UpdateProperty@UD2DVector2@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetVal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::GetMarshalStatus(
        __int64 a1,
        unsigned int a2)
{
  ULONG_PTR BugCheckParameter4; // rcx

  BugCheckParameter4 = *(unsigned int *)(a1 + 8);
  if ( a2 >= (unsigned int)BugCheckParameter4 )
    KeBugCheckEx(0x164u, 0x1EuLL, 0xFFFFFFFF80070057uLL, a2, BugCheckParameter4);
  return (unsigned int)(*(int *)(*(_QWORD *)a1 + 8LL * a2 + 4) >> 29);
}
