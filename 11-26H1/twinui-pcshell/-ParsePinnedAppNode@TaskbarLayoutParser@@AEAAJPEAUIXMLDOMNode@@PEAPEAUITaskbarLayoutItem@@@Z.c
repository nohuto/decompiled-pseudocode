/*
 * XREFs of ?ParsePinnedAppNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUITaskbarLayoutItem@@@Z @ 0x18031D19C
 * Callers:
 *     ?ParseTaskbarLayoutNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@AEAUParsedTaskbarLayout@@@Z @ 0x18031D9FC (-ParseTaskbarLayoutNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@AEAUParsedTaskbarLayout@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@_bstr_t@@AEAAXXZ @ 0x18015746C (-_Free@_bstr_t@@AEAAXXZ.c)
 *     ??0_bstr_t@@QEAA@PEBG@Z @ 0x1801578C0 (--0_bstr_t@@QEAA@PEBG@Z.c)
 *     ?TaskbarLayoutItem_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1801BED44 (-TaskbarLayoutItem_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetStringAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@AEAV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@Z @ 0x1801C6DA0 (-GetStringAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDO.c)
 *     ??$As@UITaskbarLayoutItemInternal@@@?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UITaskbarLayoutItemInternal@@@WRL@Microsoft@@@Details@12@@Z @ 0x1802B9E54 (--$As@UITaskbarLayoutItemInternal@@@-$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@QEBAJV-$ComPtr.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_PGTBPlaceholderPinning@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18031DE80 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_PGTBPlaceholderPinning@@@details@wil@@QEA.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_AllowEnterpriseUnpin@@@details@wil@@QEAA_NXZ @ 0x18031E1F0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_AllowEnterpriseUnpin@@@details@wi.c)
 *     ?GetBoolAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@PEA_N@Z @ 0x180676F84 (-GetBoolAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOME.c)
 *     ?GetIntAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@PEAH@Z @ 0x18067706C (-GetIntAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOMEl.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall TaskbarLayoutParser::ParsePinnedAppNode(
        const unsigned __int16 **this,
        struct IXMLDOMNode *a2,
        struct ITaskbarLayoutItem **a3)
{
  const struct _GUID *v6; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  HRESULT (__stdcall *QueryInterface)(IXMLDOMNode *, const IID *const, void **); // rbx
  int v11; // eax
  __int64 v12; // rdx
  bool *v13; // r9
  int BoolAttributeValue; // ebx
  unsigned int v15; // edx
  __int64 v16; // rdx
  int StringAttributeValue; // ebx
  unsigned int v18; // edx
  int v19; // eax
  __int64 v20; // rdx
  int v21; // ebx
  unsigned int v22; // edx
  int v23; // ebx
  unsigned int v24; // edx
  int v25; // eax
  __int64 v26; // rdx
  int *v27; // r9
  int IntAttributeValue; // ebx
  unsigned int v29; // edx
  _BYTE v31[8]; // [rsp+20h] [rbp-60h] BYREF
  IXMLDOMElement v32; // [rsp+28h] [rbp-58h] BYREF
  WindowsInternal::Shell::UnifiedTile::CuratedTileCollections *v33; // [rsp+30h] [rbp-50h] BYREF
  __int64 v34; // [rsp+38h] [rbp-48h] BYREF
  void *v35; // [rsp+40h] [rbp-40h] BYREF
  std::_Ref_count_base *v36[2]; // [rsp+48h] [rbp-38h] BYREF
  std::_Ref_count_base *v37[2]; // [rsp+58h] [rbp-28h] BYREF
  struct IXMLDOMElement v38; // [rsp+68h] [rbp-18h] BYREF
  __int128 v39; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  *a3 = 0LL;
  v35 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v35);
  v7 = TaskbarLayoutItem_CreateInstance(v6, &v35);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD1,
      (int)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
      (const char *)(unsigned int)v7);
LABEL_29:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v35);
    return v8;
  }
  v34 = 0LL;
  v9 = Microsoft::WRL::ComPtr<ITaskbarLayoutItem>::As<ITaskbarLayoutItemInternal>(
         (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v35,
         &v34);
  v8 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD4,
      (int)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
      (const char *)(unsigned int)v9);
LABEL_28:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v34);
    goto LABEL_29;
  }
  v33 = 0LL;
  QueryInterface = a2->lpVtbl->QueryInterface;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v33);
  v11 = ((__int64 (__fastcall *)(struct IXMLDOMNode *, GUID *, WindowsInternal::Shell::UnifiedTile::CuratedTileCollections **))QueryInterface)(
          a2,
          &GUID_2933bf86_7b36_11d2_b20e_00c04f983e60,
          &v33);
  v8 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD7,
      (int)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
      (const char *)(unsigned int)v11);
LABEL_27:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v33);
    goto LABEL_28;
  }
  LOBYTE(v12) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_PGTBPlaceholderPinning>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_PGTBPlaceholderPinning>::GetImpl'::`2'::impl,
    v12);
  v31[0] = 0;
  _bstr_t::_bstr_t((_bstr_t *)&v32, this[6]);
  BoolAttributeValue = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetBoolAttributeValue(
                         v33,
                         &v32,
                         (const struct _bstr_t *)v31,
                         v13);
  _bstr_t::_Free((volatile signed __int32 **)&v32, v15);
  if ( BoolAttributeValue >= 0 )
  {
    LOBYTE(v16) = v31[0];
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v34 + 104LL))(v34, v16);
  }
  *(_OWORD *)v36 = 0LL;
  *(_OWORD *)v37 = 0LL;
  v39 = 0LL;
  _bstr_t::_bstr_t((_bstr_t *)&v32, this[2]);
  StringAttributeValue = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetStringAttributeValue(
                           (__int64)v33,
                           (__int64 **)&v32,
                           v36);
  _bstr_t::_Free((volatile signed __int32 **)&v32, v18);
  if ( StringAttributeValue < 0 )
  {
    _bstr_t::_bstr_t((_bstr_t *)&v32, this[3]);
    v21 = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetStringAttributeValue(
            (__int64)v33,
            (__int64 **)&v32,
            v36);
    _bstr_t::_Free((volatile signed __int32 **)&v32, v22);
    if ( v21 < 0 )
    {
      _bstr_t::_bstr_t((_bstr_t *)&v32, this[4]);
      v23 = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetStringAttributeValue(
              (__int64)v33,
              (__int64 **)&v32,
              v37);
      _bstr_t::_Free((volatile signed __int32 **)&v32, v24);
      if ( v23 < 0 )
      {
        if ( v37[1] )
          std::_Ref_count_base::_Decref(v37[1]);
        if ( v36[1] )
          std::_Ref_count_base::_Decref(v36[1]);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v33);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v34);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v35);
        return 2147500037LL;
      }
      v25 = (*(__int64 (**)(void))(*(_QWORD *)v34 + 80LL))();
      v8 = v25;
      if ( v25 < 0 )
      {
        v26 = 254LL;
        goto LABEL_23;
      }
    }
    else
    {
      v19 = (*(__int64 (**)(void))(*(_QWORD *)v34 + 96LL))();
      v8 = v19;
      if ( v19 < 0 )
      {
        v20 = 250LL;
        goto LABEL_12;
      }
    }
  }
  else
  {
    v19 = (*(__int64 (**)(void))(*(_QWORD *)v34 + 72LL))();
    v8 = v19;
    if ( v19 < 0 )
    {
      v20 = 246LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v20,
        (int)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
        (const char *)(unsigned int)v19);
LABEL_25:
      if ( v36[1] )
        std::_Ref_count_base::_Decref(v36[1]);
      goto LABEL_27;
    }
  }
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_AllowEnterpriseUnpin>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_AllowEnterpriseUnpin>::GetImpl'::`2'::impl) )
  {
    LODWORD(v32.lpVtbl) = -1;
    _bstr_t::_bstr_t((_bstr_t *)&v38, this[7]);
    IntAttributeValue = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetIntAttributeValue(
                          v33,
                          &v38,
                          (const struct _bstr_t *)&v32,
                          v27);
    _bstr_t::_Free((volatile signed __int32 **)&v38, v29);
    if ( IntAttributeValue >= 0 )
    {
      v25 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v34 + 120LL))(v34, LODWORD(v32.lpVtbl));
      v8 = v25;
      if ( v25 < 0 )
      {
        v26 = 266LL;
LABEL_23:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v26,
          (int)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
          (const char *)(unsigned int)v25);
        if ( v37[1] )
          std::_Ref_count_base::_Decref(v37[1]);
        goto LABEL_25;
      }
    }
  }
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v35);
  *a3 = (struct ITaskbarLayoutItem *)v35;
  if ( v37[1] )
    std::_Ref_count_base::_Decref(v37[1]);
  if ( v36[1] )
    std::_Ref_count_base::_Decref(v36[1]);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v33);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v34);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v35);
  return 0LL;
}
