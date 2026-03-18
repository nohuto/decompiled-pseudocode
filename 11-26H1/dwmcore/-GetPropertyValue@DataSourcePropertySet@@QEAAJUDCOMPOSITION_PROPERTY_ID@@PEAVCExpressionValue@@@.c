/*
 * XREFs of ?GetPropertyValue@DataSourcePropertySet@@QEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x1801675CC
 * Callers:
 *     ?GetPropertyValue@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@UDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x180242DCC (-GetPropertyValue@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@UDCOMPOSITION_PROPERTY_ID@@PEAVCE.c)
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDataType@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA?AW4DCOMPOSITION_EXPRESSION_TYPE@@UDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180167820 (-GetDataType@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA-AW4DCOM.c)
 *     ??$GetPropertyValue@UD2DQuaternion@@@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAPEAUD2DQuaternion@@UDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180167AB0 (--$GetPropertyValue@UD2DQuaternion@@@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeA.c)
 *     ?find@?$_Hash@V?$_Umap_traits@UDCOMPOSITION_PROPERTY_ID@@U1@V?$_Uhash_compare@UDCOMPOSITION_PROPERTY_ID@@U?$hash@UDCOMPOSITION_PROPERTY_ID@@@std@@U?$equal_to@UDCOMPOSITION_PROPERTY_ID@@@3@@std@@V?$allocator@U?$pair@$$CBUDCOMPOSITION_PROPERTY_ID@@U1@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUDCOMPOSITION_PROPERTY_ID@@U1@@std@@@std@@@std@@@2@AEBUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180243D4C (-find@-$_Hash@V-$_Umap_traits@UDCOMPOSITION_PROPERTY_ID@@U1@V-$_Uhash_compare@UDCOMPOSITION_PROP.c)
 */

__int64 __fastcall DataSourcePropertySet::GetPropertyValue(__int64 a1, int a2, __int64 a3)
{
  __int64 v6; // rsi
  int DataType; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  _OWORD *v16; // rbx
  __int64 v17; // rbx
  _OWORD *v18; // rbx
  __int64 v19; // rbx
  _QWORD *Property; // rbx
  int v21; // xmm6_4
  char v22; // bl
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v24; // [rsp+40h] [rbp+8h] BYREF
  int v25; // [rsp+48h] [rbp+10h] BYREF

  v25 = a2;
  std::_Hash<std::_Umap_traits<DCOMPOSITION_PROPERTY_ID,DCOMPOSITION_PROPERTY_ID,std::_Uhash_compare<DCOMPOSITION_PROPERTY_ID,std::hash<DCOMPOSITION_PROPERTY_ID>,std::equal_to<DCOMPOSITION_PROPERTY_ID>>,std::allocator<std::pair<DCOMPOSITION_PROPERTY_ID const,DCOMPOSITION_PROPERTY_ID>>,0>>::find(
    a1,
    &v24,
    &v25);
  if ( v24 == *(_QWORD *)(a1 + 8) )
    return 2147483659LL;
  v6 = a1 + 64;
  DataType = PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::GetDataType(
               v6,
               *(unsigned int *)(v24 + 20));
  if ( !DataType )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5C,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\DataSourcePropertySet.h",
      (const char *)0x80004005LL);
    return 2147500037LL;
  }
  v8 = DataType - 17;
  if ( !v8 )
  {
    v22 = *(_BYTE *)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::GetPropertyValue<D2DQuaternion>(v6);
    CExpressionValue::DestroyCurrent((CExpressionValue *)a3);
    *(_DWORD *)(a3 + 64) = 17;
    *(_BYTE *)a3 = v22;
    return 0LL;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    v21 = *(_DWORD *)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::GetPropertyValue<D2DQuaternion>(v6);
    CExpressionValue::DestroyCurrent((CExpressionValue *)a3);
    *(_DWORD *)a3 = v21;
    *(_DWORD *)(a3 + 64) = 18;
    return 0LL;
  }
  v10 = v9 - 17;
  if ( !v10 )
  {
    Property = (_QWORD *)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::GetPropertyValue<D2DQuaternion>(v6);
    CExpressionValue::DestroyCurrent((CExpressionValue *)a3);
    *(_DWORD *)(a3 + 64) = 35;
    *(_QWORD *)a3 = *Property;
    return 0LL;
  }
  v11 = v10 - 17;
  if ( !v11 )
  {
    v19 = PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::GetPropertyValue<D2DQuaternion>(v6);
    CExpressionValue::DestroyCurrent((CExpressionValue *)a3);
    *(_DWORD *)(a3 + 64) = 52;
    *(_QWORD *)a3 = *(_QWORD *)v19;
    *(_DWORD *)(a3 + 8) = *(_DWORD *)(v19 + 8);
    return 0LL;
  }
  v12 = v11 - 17;
  if ( !v12 )
  {
    v18 = (_OWORD *)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::GetPropertyValue<D2DQuaternion>(v6);
    CExpressionValue::DestroyCurrent((CExpressionValue *)a3);
    *(_DWORD *)(a3 + 64) = 69;
    goto LABEL_20;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    v18 = (_OWORD *)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::GetPropertyValue<D2DQuaternion>(v6);
    CExpressionValue::DestroyCurrent((CExpressionValue *)a3);
    *(_DWORD *)(a3 + 64) = 70;
    goto LABEL_20;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    v18 = (_OWORD *)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::GetPropertyValue<D2DQuaternion>(v6);
    CExpressionValue::DestroyCurrent((CExpressionValue *)a3);
    *(_DWORD *)(a3 + 64) = 71;
LABEL_20:
    *(_OWORD *)a3 = *v18;
    return 0LL;
  }
  v15 = v14 - 33;
  if ( v15 )
  {
    if ( v15 != 161 )
      return 2147500037LL;
    v16 = (_OWORD *)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::GetPropertyValue<D2DQuaternion>(v6);
    CExpressionValue::DestroyCurrent((CExpressionValue *)a3);
    *(_DWORD *)(a3 + 64) = 265;
    *(_OWORD *)a3 = *v16;
    *(_OWORD *)(a3 + 16) = v16[1];
    *(_OWORD *)(a3 + 32) = v16[2];
    *(_OWORD *)(a3 + 48) = v16[3];
  }
  else
  {
    v17 = PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::GetPropertyValue<D2DQuaternion>(v6);
    CExpressionValue::DestroyCurrent((CExpressionValue *)a3);
    *(_DWORD *)(a3 + 64) = 104;
    *(_OWORD *)a3 = *(_OWORD *)v17;
    *(_QWORD *)(a3 + 16) = *(_QWORD *)(v17 + 16);
  }
  return 0LL;
}
