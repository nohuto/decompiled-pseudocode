/*
 * XREFs of ??$SetProperty@UD2DMatrix@@@DataSourcePropertySet@@QEAAJUDCOMPOSITION_PROPERTY_ID@@PEBUD2DMatrix@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1802422AC
 * Callers:
 *     ?SetMatrix4x4Value@DataSourceProxy@@MEAAJIAEBU_D3DMATRIX@@@Z @ 0x180243720 (-SetMatrix4x4Value@DataSourceProxy@@MEAAJIAEBU_D3DMATRIX@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDataType@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA?AW4DCOMPOSITION_EXPRESSION_TYPE@@UDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180167820 (-GetDataType@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA-AW4DCOM.c)
 *     ??$GetPropertyValue@UD2DQuaternion@@@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAPEAUD2DQuaternion@@UDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180167AB0 (--$GetPropertyValue@UD2DQuaternion@@@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeA.c)
 *     ??$AddProperty@UD2DMatrix@@@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DMatrix@@PEAUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x1801689E8 (--$AddProperty@UD2DMatrix@@@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@.c)
 *     ??$emplace@AEAUDCOMPOSITION_PROPERTY_ID@@AEAU1@@?$_Hash@V?$_Umap_traits@UDCOMPOSITION_PROPERTY_ID@@U1@V?$_Uhash_compare@UDCOMPOSITION_PROPERTY_ID@@U?$hash@UDCOMPOSITION_PROPERTY_ID@@@std@@U?$equal_to@UDCOMPOSITION_PROPERTY_ID@@@3@@std@@V?$allocator@U?$pair@$$CBUDCOMPOSITION_PROPERTY_ID@@U1@@std@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUDCOMPOSITION_PROPERTY_ID@@U1@@std@@@std@@@std@@@std@@_N@1@AEAUDCOMPOSITION_PROPERTY_ID@@0@Z @ 0x180242A28 (--$emplace@AEAUDCOMPOSITION_PROPERTY_ID@@AEAU1@@-$_Hash@V-$_Umap_traits@UDCOMPOSITION_PROPERTY_I.c)
 *     ?find@?$_Hash@V?$_Umap_traits@UDCOMPOSITION_PROPERTY_ID@@U1@V?$_Uhash_compare@UDCOMPOSITION_PROPERTY_ID@@U?$hash@UDCOMPOSITION_PROPERTY_ID@@@std@@U?$equal_to@UDCOMPOSITION_PROPERTY_ID@@@3@@std@@V?$allocator@U?$pair@$$CBUDCOMPOSITION_PROPERTY_ID@@U1@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUDCOMPOSITION_PROPERTY_ID@@U1@@std@@@std@@@std@@@2@AEBUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180243D4C (-find@-$_Hash@V-$_Umap_traits@UDCOMPOSITION_PROPERTY_ID@@U1@V-$_Uhash_compare@UDCOMPOSITION_PROP.c)
 */

__int64 __fastcall DataSourcePropertySet::SetProperty<D2DMatrix>(__int64 a1, int a2, __int128 *a3)
{
  __int64 v5; // rdi
  __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // edi
  unsigned int v10; // ebx
  _OWORD *Property; // rax
  __int128 v12; // xmm1
  __int128 v13; // [rsp+20h] [rbp-58h]
  __int128 v14; // [rsp+30h] [rbp-48h]
  __int128 v15; // [rsp+40h] [rbp-38h]
  __int128 v16; // [rsp+50h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v18; // [rsp+80h] [rbp+8h] BYREF
  int v19; // [rsp+88h] [rbp+10h] BYREF
  unsigned int v20; // [rsp+98h] [rbp+20h] BYREF

  v19 = a2;
  v20 = 0;
  std::_Hash<std::_Umap_traits<DCOMPOSITION_PROPERTY_ID,DCOMPOSITION_PROPERTY_ID,std::_Uhash_compare<DCOMPOSITION_PROPERTY_ID,std::hash<DCOMPOSITION_PROPERTY_ID>,std::equal_to<DCOMPOSITION_PROPERTY_ID>>,std::allocator<std::pair<DCOMPOSITION_PROPERTY_ID const,DCOMPOSITION_PROPERTY_ID>>,0>>::find(
    a1,
    &v18,
    &v19);
  v5 = a1 + 64;
  v6 = a1 + 64;
  if ( v18 == *(_QWORD *)(a1 + 8) )
  {
    v7 = PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::AddProperty<D2DMatrix>(v6, 265, a3, &v20);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x25,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\DataSourcePropertySet.h",
        (const char *)(unsigned int)v7);
      return v8;
    }
    std::_Hash<std::_Umap_traits<DCOMPOSITION_PROPERTY_ID,DCOMPOSITION_PROPERTY_ID,std::_Uhash_compare<DCOMPOSITION_PROPERTY_ID,std::hash<DCOMPOSITION_PROPERTY_ID>,std::equal_to<DCOMPOSITION_PROPERTY_ID>>,std::allocator<std::pair<DCOMPOSITION_PROPERTY_ID const,DCOMPOSITION_PROPERTY_ID>>,0>>::emplace<DCOMPOSITION_PROPERTY_ID &,DCOMPOSITION_PROPERTY_ID &>(
      a1,
      &v16,
      &v19,
      &v20);
  }
  else
  {
    v10 = *(_DWORD *)(v18 + 20);
    if ( (unsigned int)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::GetDataType(v6, v10) != 265 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x30,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\DataSourcePropertySet.h",
        (const char *)0x80070057LL);
      return 2147942487LL;
    }
    v13 = *a3;
    v14 = a3[1];
    v15 = a3[2];
    v16 = a3[3];
    Property = (_OWORD *)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::GetPropertyValue<D2DQuaternion>(
                           v5,
                           v10);
    *Property = v13;
    Property[1] = v14;
    v12 = v16;
    Property[2] = v15;
    Property[3] = v12;
  }
  return 0LL;
}
