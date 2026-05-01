/*
 * XREFs of ?ParseSelectionAttributes@SelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAUSelectionData@2345@@Z @ 0x180677D60
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@PEBU?$vector_view_base@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@UMeetAndChatFallbackProp@Shell@Internal@Windows@3@Ucollection_version@23@@5@@Z @ 0x180221268 (--0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Wi.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$As@UIXMLDOMElement@@@?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIXMLDOMElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x180319390 (--$As@UIXMLDOMElement@@@-$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIXML.c)
 *     ?GetBoolAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@PEA_N@Z @ 0x180676F84 (-GetBoolAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOME.c)
 *     ?GetTokenizedStringAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@AEBV?$function@$$A6AXPEAG@Z@std@@@Z @ 0x180677144 (-GetTokenizedStringAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJP.c)
 *     ?GetUintAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@PEAI@Z @ 0x180677228 (-GetUintAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOME.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser::ParseSelectionAttributes(
        __int64 a1,
        __int64 (__fastcall ****a2)(_QWORD, GUID *, __int64 *),
        __int64 a3)
{
  int v5; // eax
  unsigned int v6; // esi
  _QWORD *v7; // rax
  unsigned int *v8; // r9
  __int64 (__fastcall ***v9)(); // rdx
  bool *v10; // r9
  _QWORD *v11; // rdx
  bool *v12; // r9
  bool *v13; // r9
  bool *v14; // r9
  bool *v15; // r9
  _QWORD *v16; // rax
  __int64 (__fastcall ***v17)(); // rdx
  _BYTE v19[8]; // [rsp+20h] [rbp-E0h] BYREF
  WindowsInternal::Shell::UnifiedTile::CuratedTileCollections *v20; // [rsp+28h] [rbp-D8h] BYREF
  int v21; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v22[3]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 (__fastcall **v23)(); // [rsp+50h] [rbp-B0h] BYREF
  __int128 v24; // [rsp+58h] [rbp-A8h]
  __int64 (__fastcall ***v25)(); // [rsp+88h] [rbp-78h]
  __int64 (__fastcall **v26)(); // [rsp+90h] [rbp-70h] BYREF
  __int128 v27; // [rsp+98h] [rbp-68h]
  __int64 (__fastcall ***v28)(); // [rsp+C8h] [rbp-38h]
  _QWORD v29[7]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD *v30; // [rsp+108h] [rbp+8h]
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+38h]

  v20 = 0LL;
  v5 = Microsoft::WRL::ComPtr<IXMLDOMNode>::As<IXMLDOMElement>(a2, (__int64 *)&v20);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v7 = _lambda_6b6168dda817c5975ee7d3438d2331fe_::_lambda_6b6168dda817c5975ee7d3438d2331fe_(v22, a1, a3);
    v25 = 0LL;
    v23 = off_18075ECB0;
    v24 = *(_OWORD *)v7;
    v25 = &v23;
    WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetTokenizedStringAttributeValue(
      (__int64)v20,
      (__int64 **)(a1 + 72),
      (__int64)&v23);
    if ( v25 )
    {
      v9 = &v23;
      LOBYTE(v9) = v25 != &v23;
      ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64 (__fastcall ***)()))(*v25)[4])(v25, v9);
    }
    v21 = 0;
    if ( (int)WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetUintAttributeValue(
                v20,
                (struct IXMLDOMElement *)(a1 + 16),
                (const struct _bstr_t *)&v21,
                v8) >= 0 )
    {
      *(_DWORD *)(a3 + 88) = v21;
      *(_BYTE *)(a3 + 1) = 1;
    }
    v29[0] = off_18075ECE0;
    v29[1] = a3;
    v30 = v29;
    WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetTokenizedStringAttributeValue(
      (__int64)v20,
      (__int64 **)(a1 + 56),
      (__int64)v29);
    if ( v30 )
    {
      v11 = v29;
      LOBYTE(v11) = v30 != v29;
      (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v30 + 32LL))(v30, v11);
    }
    v19[0] = 0;
    if ( (int)WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetBoolAttributeValue(
                v20,
                (struct IXMLDOMElement *)(a1 + 24),
                (const struct _bstr_t *)v19,
                v10) >= 0 )
    {
      *(_BYTE *)(a3 + 93) = v19[0];
      *(_BYTE *)(a3 + 5) = 1;
    }
    v19[0] = 0;
    if ( (int)WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetBoolAttributeValue(
                v20,
                (struct IXMLDOMElement *)(a1 + 32),
                (const struct _bstr_t *)v19,
                v12) >= 0 )
    {
      *(_BYTE *)(a3 + 94) = v19[0];
      *(_BYTE *)(a3 + 6) = 1;
    }
    v19[0] = 0;
    if ( (int)WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetBoolAttributeValue(
                v20,
                (struct IXMLDOMElement *)(a1 + 40),
                (const struct _bstr_t *)v19,
                v13) >= 0 )
    {
      *(_BYTE *)(a3 + 95) = v19[0];
      *(_BYTE *)(a3 + 7) = 1;
    }
    v19[0] = 0;
    if ( (int)WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetBoolAttributeValue(
                v20,
                (struct IXMLDOMElement *)(a1 + 48),
                (const struct _bstr_t *)v19,
                v14) >= 0 )
    {
      *(_BYTE *)(a3 + 96) = v19[0];
      *(_BYTE *)(a3 + 8) = 1;
    }
    v19[0] = 0;
    if ( (int)WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetBoolAttributeValue(
                v20,
                (struct IXMLDOMElement *)(a1 + 64),
                (const struct _bstr_t *)v19,
                v15) >= 0 )
    {
      *(_BYTE *)(a3 + 92) = v19[0];
      *(_BYTE *)(a3 + 2) = 1;
    }
    v16 = _lambda_6b6168dda817c5975ee7d3438d2331fe_::_lambda_6b6168dda817c5975ee7d3438d2331fe_(v22, a1, a3);
    v28 = 0LL;
    v26 = off_18075ED10;
    v27 = *(_OWORD *)v16;
    v28 = &v26;
    WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetTokenizedStringAttributeValue(
      (__int64)v20,
      (__int64 **)(a1 + 80),
      (__int64)&v26);
    if ( v28 )
    {
      v17 = &v26;
      LOBYTE(v17) = v28 != &v26;
      ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64 (__fastcall ***)()))(*v28)[4])(v28, v17);
    }
    v6 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3B,
      (int)"shellcommon\\shell\\tiles\\curatedtilecollections\\collectioninitialization\\helpers\\selectiondataparser.cpp",
      (const char *)(unsigned int)v5);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v20);
  return v6;
}
