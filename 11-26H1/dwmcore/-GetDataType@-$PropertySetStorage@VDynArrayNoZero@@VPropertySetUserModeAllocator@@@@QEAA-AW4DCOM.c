/*
 * XREFs of ?GetDataType@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA?AW4DCOMPOSITION_EXPRESSION_TYPE@@UDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180167820
 * Callers:
 *     ?GetPropertyValue@DataSourcePropertySet@@QEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x1801675CC (-GetPropertyValue@DataSourcePropertySet@@QEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@.c)
 *     ?NotifyCurrentPropertyValuesInternal@CPropertySet@@IEAAJI@Z @ 0x1801D3C9C (-NotifyCurrentPropertyValuesInternal@CPropertySet@@IEAAJI@Z.c)
 *     ??$UpdateProperty@UD2DQuaternion@@@CPropertySet@@AEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DQuaternion@@@Z @ 0x180214318 (--$UpdateProperty@UD2DQuaternion@@@CPropertySet@@AEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_.c)
 *     ??$SetProperty@M@DataSourcePropertySet@@QEAAJUDCOMPOSITION_PROPERTY_ID@@PEBMW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1802421D0 (--$SetProperty@M@DataSourcePropertySet@@QEAAJUDCOMPOSITION_PROPERTY_ID@@PEBMW4DCOMPOSITION_EXPRE.c)
 *     ??$SetProperty@UD2DMatrix@@@DataSourcePropertySet@@QEAAJUDCOMPOSITION_PROPERTY_ID@@PEBUD2DMatrix@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1802422AC (--$SetProperty@UD2DMatrix@@@DataSourcePropertySet@@QEAAJUDCOMPOSITION_PROPERTY_ID@@PEBUD2DMatrix.c)
 *     ??$SetProperty@UD2DQuaternion@@@DataSourcePropertySet@@QEAAJUDCOMPOSITION_PROPERTY_ID@@PEBUD2DQuaternion@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1802423E0 (--$SetProperty@UD2DQuaternion@@@DataSourcePropertySet@@QEAAJUDCOMPOSITION_PROPERTY_ID@@PEBUD2DQu.c)
 *     ??$SetProperty@UD2DVector2@@@DataSourcePropertySet@@QEAAJUDCOMPOSITION_PROPERTY_ID@@PEBUD2DVector2@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1802424BC (--$SetProperty@UD2DVector2@@@DataSourcePropertySet@@QEAAJUDCOMPOSITION_PROPERTY_ID@@PEBUD2DVecto.c)
 *     ??$SetProperty@UD2DVector3@@@DataSourcePropertySet@@QEAAJUDCOMPOSITION_PROPERTY_ID@@PEBUD2DVector3@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1802425A8 (--$SetProperty@UD2DVector3@@@DataSourcePropertySet@@QEAAJUDCOMPOSITION_PROPERTY_ID@@PEBUD2DVecto.c)
 *     ??$SetProperty@UD2DVector4@@@DataSourcePropertySet@@QEAAJUDCOMPOSITION_PROPERTY_ID@@PEBUD2DVector4@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18024269C (--$SetProperty@UD2DVector4@@@DataSourcePropertySet@@QEAAJUDCOMPOSITION_PROPERTY_ID@@PEBUD2DVecto.c)
 *     ??$SetProperty@UD2D_MATRIX_3X2_F@@@DataSourcePropertySet@@QEAAJUDCOMPOSITION_PROPERTY_ID@@PEBUD2D_MATRIX_3X2_F@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180242778 (--$SetProperty@UD2D_MATRIX_3X2_F@@@DataSourcePropertySet@@QEAAJUDCOMPOSITION_PROPERTY_ID@@PEBUD2.c)
 *     ??$SetProperty@U_D3DCOLORVALUE@@@DataSourcePropertySet@@QEAAJUDCOMPOSITION_PROPERTY_ID@@PEBU_D3DCOLORVALUE@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180242878 (--$SetProperty@U_D3DCOLORVALUE@@@DataSourcePropertySet@@QEAAJUDCOMPOSITION_PROPERTY_ID@@PEBU_D3D.c)
 *     ??$SetProperty@_N@DataSourcePropertySet@@QEAAJUDCOMPOSITION_PROPERTY_ID@@PEB_NW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180242954 (--$SetProperty@_N@DataSourcePropertySet@@QEAAJUDCOMPOSITION_PROPERTY_ID@@PEB_NW4DCOMPOSITION_EXP.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::GetDataType(
        __int64 a1,
        unsigned int a2)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 >= *(_DWORD *)(a1 + 24) )
    ModuleFailFastForHRESULT(-2147024809, retaddr);
  return *(unsigned int *)(*(_QWORD *)a1 + 8LL * a2);
}
