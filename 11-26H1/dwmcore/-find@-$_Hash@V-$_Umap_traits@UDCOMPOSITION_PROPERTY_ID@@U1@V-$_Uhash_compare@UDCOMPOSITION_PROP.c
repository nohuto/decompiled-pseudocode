/*
 * XREFs of ?find@?$_Hash@V?$_Umap_traits@UDCOMPOSITION_PROPERTY_ID@@U1@V?$_Uhash_compare@UDCOMPOSITION_PROPERTY_ID@@U?$hash@UDCOMPOSITION_PROPERTY_ID@@@std@@U?$equal_to@UDCOMPOSITION_PROPERTY_ID@@@3@@std@@V?$allocator@U?$pair@$$CBUDCOMPOSITION_PROPERTY_ID@@U1@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUDCOMPOSITION_PROPERTY_ID@@U1@@std@@@std@@@std@@@2@AEBUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180243D4C
 * Callers:
 *     ?GetPropertyValue@DataSourcePropertySet@@QEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x1801675CC (-GetPropertyValue@DataSourcePropertySet@@QEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@.c)
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
 *     ??$_Find_last@I@?$_Hash@V?$_Umap_traits@IVCFlipAwayFence@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIVCFlipAwayFence@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBIVCFlipAwayFence@@@std@@PEAX@std@@@1@AEBI_K@Z @ 0x1801DBCF0 (--$_Find_last@I@-$_Hash@V-$_Umap_traits@IVCFlipAwayFence@@V-$_Uhash_compare@IU-$hash@I@std@@U-$e.c)
 *     ??$?RUDCOMPOSITION_PROPERTY_ID@@@?$_Uhash_compare@UDCOMPOSITION_PROPERTY_ID@@U?$hash@UDCOMPOSITION_PROPERTY_ID@@@std@@U?$equal_to@UDCOMPOSITION_PROPERTY_ID@@@3@@std@@QEBA_KAEBUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x18021C3F4 (--$-RUDCOMPOSITION_PROPERTY_ID@@@-$_Uhash_compare@UDCOMPOSITION_PROPERTY_ID@@U-$hash@UDCOMPOSITI.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<DCOMPOSITION_PROPERTY_ID,DCOMPOSITION_PROPERTY_ID,std::_Uhash_compare<DCOMPOSITION_PROPERTY_ID,std::hash<DCOMPOSITION_PROPERTY_ID>,std::equal_to<DCOMPOSITION_PROPERTY_ID>>,std::allocator<std::pair<DCOMPOSITION_PROPERTY_ID const,DCOMPOSITION_PROPERTY_ID>>,0>>::find(
        _QWORD *a1,
        _QWORD *a2,
        int *a3)
{
  __int64 v5; // rax
  _DWORD *v6; // r10
  __int64 v7; // r8
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v5 = std::_Uhash_compare<DCOMPOSITION_PROPERTY_ID,std::hash<DCOMPOSITION_PROPERTY_ID>,std::equal_to<DCOMPOSITION_PROPERTY_ID>>::operator()<DCOMPOSITION_PROPERTY_ID>(
         (__int64)a1,
         a3);
  v7 = std::_Hash<std::_Umap_traits<unsigned int,CFlipAwayFence,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,CFlipAwayFence>>,0>>::_Find_last<unsigned int>(
         a1,
         v9,
         v6,
         v5)[1];
  if ( !v7 )
    v7 = a1[1];
  *a2 = v7;
  return a2;
}
