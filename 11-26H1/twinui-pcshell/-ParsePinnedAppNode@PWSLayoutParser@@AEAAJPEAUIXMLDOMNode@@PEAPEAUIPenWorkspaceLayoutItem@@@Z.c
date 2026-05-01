/*
 * XREFs of ?ParsePinnedAppNode@PWSLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUIPenWorkspaceLayoutItem@@@Z @ 0x1803F2760
 * Callers:
 *     ?ParsePWSLayoutCollectionNode@PWSLayoutParser@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAV?$CCoSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x1803F2120 (-ParsePWSLayoutCollectionNode@PWSLayoutParser@@UEAAJAEAV-$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@A.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x1800AD1FC (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@IEBAXXZ @ 0x180129DB4 (-InternalAddRef@-$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Free@_bstr_t@@AEAAXXZ @ 0x18015746C (-_Free@_bstr_t@@AEAAXXZ.c)
 *     ??0_bstr_t@@QEAA@PEBG@Z @ 0x1801578C0 (--0_bstr_t@@QEAA@PEBG@Z.c)
 *     ?GetStringAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@AEAV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@Z @ 0x1801C6DA0 (-GetStringAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDO.c)
 *     ?PWSLayoutItem_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1803F2EC4 (-PWSLayoutItem_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall PWSLayoutParser::ParsePinnedAppNode(
        const unsigned __int16 **this,
        struct IXMLDOMNode *a2,
        struct IPenWorkspaceLayoutItem **a3)
{
  const struct _GUID *v6; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  void *v9; // rbx
  __int64 (__fastcall *v10)(void *, GUID *, __int64 *); // rdi
  int v11; // eax
  HRESULT (__stdcall *QueryInterface)(IXMLDOMNode *, const IID *const, void **); // rbx
  int v13; // eax
  int StringAttributeValue; // ebx
  unsigned int v15; // edx
  int v16; // eax
  int v17; // ebx
  unsigned int v18; // edx
  int v19; // eax
  void *v21; // [rsp+20h] [rbp-30h] BYREF
  __int64 *v22; // [rsp+28h] [rbp-28h] BYREF
  std::_Ref_count_base *v23[2]; // [rsp+30h] [rbp-20h] BYREF
  std::_Ref_count_base *v24[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 v26; // [rsp+90h] [rbp+40h] BYREF
  __int64 v27; // [rsp+98h] [rbp+48h] BYREF

  *a3 = 0LL;
  v21 = 0LL;
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v21);
  v7 = PWSLayoutItem_CreateInstance(v6, &v21);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCE,
      (int)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
      (const char *)(unsigned int)v7);
LABEL_18:
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v21);
    return v8;
  }
  v26 = 0LL;
  v9 = v21;
  v10 = **(__int64 (__fastcall ***)(void *, GUID *, __int64 *))v21;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v26);
  v11 = v10(v9, &GUID_ec14b3b3_3cd8_428a_a455_490250210fd2, &v26);
  v8 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD1,
      (int)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
      (const char *)(unsigned int)v11);
LABEL_17:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v26);
    goto LABEL_18;
  }
  v27 = 0LL;
  QueryInterface = a2->lpVtbl->QueryInterface;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v27);
  v13 = ((__int64 (__fastcall *)(struct IXMLDOMNode *, GUID *, __int64 *))QueryInterface)(
          a2,
          &GUID_2933bf86_7b36_11d2_b20e_00c04f983e60,
          &v27);
  v8 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD4,
      (int)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
      (const char *)(unsigned int)v13);
LABEL_16:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v27);
    goto LABEL_17;
  }
  *(_OWORD *)v23 = 0LL;
  *(_OWORD *)v24 = 0LL;
  _bstr_t::_bstr_t((_bstr_t *)&v22, this[2]);
  StringAttributeValue = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetStringAttributeValue(
                           v27,
                           &v22,
                           v23);
  _bstr_t::_Free((volatile signed __int32 **)&v22, v15);
  if ( StringAttributeValue >= 0 )
  {
    v16 = (*(__int64 (**)(void))(*(_QWORD *)v26 + 40LL))();
    v8 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD9,
        (int)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
        (const char *)(unsigned int)v16);
LABEL_14:
      if ( v23[1] )
        std::_Ref_count_base::_Decref(v23[1]);
      goto LABEL_16;
    }
LABEL_19:
    Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>::InternalAddRef((__int64 *)&v21);
    *a3 = (struct IPenWorkspaceLayoutItem *)v21;
    if ( v24[1] )
      std::_Ref_count_base::_Decref(v24[1]);
    if ( v23[1] )
      std::_Ref_count_base::_Decref(v23[1]);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v27);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v26);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v21);
    return 0LL;
  }
  _bstr_t::_bstr_t((_bstr_t *)&v22, this[3]);
  v17 = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetStringAttributeValue(v27, &v22, v24);
  _bstr_t::_Free((volatile signed __int32 **)&v22, v18);
  if ( v17 >= 0 )
  {
    v19 = (*(__int64 (**)(void))(*(_QWORD *)v26 + 48LL))();
    v8 = v19;
    if ( v19 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xDD,
        (int)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
        (const char *)(unsigned int)v19);
      if ( v24[1] )
        std::_Ref_count_base::_Decref(v24[1]);
      goto LABEL_14;
    }
    goto LABEL_19;
  }
  if ( v24[1] )
    std::_Ref_count_base::_Decref(v24[1]);
  if ( v23[1] )
    std::_Ref_count_base::_Decref(v23[1]);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v27);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v26);
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v21);
  return 2147500037LL;
}
