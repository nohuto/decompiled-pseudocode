/*
 * XREFs of ?GetStringAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@AEAV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@Z @ 0x1801C6DA0
 * Callers:
 *     ?IsOverrideLayout@TaskbarLayoutPolicyManager@@AEAAHPEAUIXMLDOMNode@@@Z @ 0x18031A70C (-IsOverrideLayout@TaskbarLayoutPolicyManager@@AEAAHPEAUIXMLDOMNode@@@Z.c)
 *     ?ParsePinnedAppNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUITaskbarLayoutItem@@@Z @ 0x18031D19C (-ParsePinnedAppNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUITaskbarLayoutItem@@@Z.c)
 *     ?ParsePinnedAppNode@PWSLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUIPenWorkspaceLayoutItem@@@Z @ 0x1803F2760 (-ParsePinnedAppNode@PWSLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUIPenWorkspaceLayoutItem@@@Z.c)
 *     ?GetTokenizedStringAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@AEBV?$function@$$A6AXPEAG@Z@std@@@Z @ 0x180677144 (-GetTokenizedStringAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJP.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18013AB58 (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??1_variant_t@@QEAA@XZ @ 0x1801C6F28 (--1_variant_t@@QEAA@XZ.c)
 *     ??$make_shared@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAPEAG@std@@YA?AV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@AEAPEAG@Z @ 0x1802B9288 (--$make_shared@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAPEAG@std@@YA-AV-.c)
 *     ?_com_issue_error@@YAXJ@Z @ 0x1802D77C4 (-_com_issue_error@@YAXJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetStringAttributeValue(
        __int64 a1,
        __int64 **a2,
        _QWORD *a3)
{
  std::_Ref_count_base *v6; // rcx
  __int64 v7; // rdx
  int v8; // eax
  unsigned int v9; // ebx
  HRESULT v10; // eax
  HRESULT v12; // eax
  __int64 *v13; // rax
  HRESULT v14; // eax
  _BYTE v15[8]; // [rsp+20h] [rbp-30h] BYREF
  std::_Ref_count_base *v16; // [rsp+28h] [rbp-28h]
  VARIANTARG pvarg; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]

  *a3 = 0LL;
  v6 = (std::_Ref_count_base *)a3[1];
  a3[1] = 0LL;
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
  VariantInit(&pvarg);
  if ( *a2 )
    v7 = **a2;
  else
    v7 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64, VARIANTARG *))(*(_QWORD *)a1 + 352LL))(a1, v7, &pvarg);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x41,
      (int)"shellcommon\\shell\\tiles\\curatedtilecollections\\collectioninitialization\\helpers\\xmlhelpers.cpp",
      (const char *)(unsigned int)v8);
    v10 = VariantClear(&pvarg);
    if ( v10 < 0 )
      _com_issue_error((char *)(unsigned int)v10);
    return v9;
  }
  if ( pvarg.vt == 1 )
  {
    v9 = -2147023728;
LABEL_17:
    _variant_t::~_variant_t((_variant_t *)&pvarg);
    return v9;
  }
  if ( pvarg.vt != 8 )
  {
    v12 = VariantChangeType(&pvarg, &pvarg, 0, 8u);
    if ( v12 < 0 )
      _com_issue_error((char *)(unsigned int)v12);
    if ( pvarg.vt != 8 )
    {
      v9 = -2147418113;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x45,
        (int)"shellcommon\\shell\\tiles\\curatedtilecollections\\collectioninitialization\\helpers\\xmlhelpers.cpp",
        (const char *)0x8000FFFFLL);
      goto LABEL_17;
    }
  }
  v13 = (__int64 *)std::make_shared<std::wstring,unsigned short * &>(v15, &pvarg.decVal.Lo32);
  std::shared_ptr<KBViewInfo>::operator=(a3, v13);
  if ( v16 )
    std::_Ref_count_base::_Decref(v16);
  v14 = VariantClear(&pvarg);
  if ( v14 < 0 )
    _com_issue_error((char *)(unsigned int)v14);
  return 0LL;
}
