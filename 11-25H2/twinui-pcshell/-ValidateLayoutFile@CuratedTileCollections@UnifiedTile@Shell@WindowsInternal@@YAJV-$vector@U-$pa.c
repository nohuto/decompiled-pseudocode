/*
 * XREFs of ?ValidateLayoutFile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJV?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@PEAUIXMLDOMDocument@@@Z @ 0x18016A49C
 * Callers:
 *     ?ValidateLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x180297D10 (-ValidateLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 *     ?ValidateDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x180297E88 (-ValidateDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 *     ?ValidateDefaultLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x1803E7A7C (-ValidateDefaultLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 *     ?ValidateLayoutModificationXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x1803E7BA0 (-ValidateLayoutModificationXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LoadSchema@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJV?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@PEAPEAUIXMLDOMSchemaCollection@@@Z @ 0x18016A758 (-LoadSchema@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJV-$vector@U-$pair@PEBGP.c)
 *     ?_Free@_bstr_t@@AEAAXXZ @ 0x18016ABE0 (-_Free@_bstr_t@@AEAAXXZ.c)
 *     ??1?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@QEAA@XZ @ 0x18016AC54 (--1-$vector@URect@Foundation@Windows@winrt@@V-$allocator@URect@Foundation@Windows@winrt@@@std@@@.c)
 *     ??0?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@QEAA@AEBV01@@Z @ 0x180297FB8 (--0-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEBG@std@@@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     ?_com_issue_error@@YAXJ@Z @ 0x1802DEAD4 (-_com_issue_error@@YAXJ@Z.c)
 *     McTemplateU0z_EventWriteTransfer @ 0x180650FE0 (McTemplateU0z_EventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ValidateLayoutFile(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *))
{
  __int64 v4; // rax
  int v5; // eax
  unsigned int v6; // ebx
  __int64 (__fastcall *v7)(_QWORD, GUID *, __int64 *); // rbx
  int v8; // eax
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, VARIANTARG *); // rdi
  HRESULT v13; // eax
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, __int64 *); // rdi
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rcx
  LONGLONG v19; // rcx
  __int64 v21; // rbx
  void (__fastcall *v22)(__int64, _QWORD *); // r14
  _QWORD *v23; // rax
  _QWORD *v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // rcx
  LONGLONG v27; // [rsp+20h] [rbp-50h] BYREF
  _QWORD *v28; // [rsp+28h] [rbp-48h] BYREF
  VARIANTARG pvarg; // [rsp+30h] [rbp-40h] BYREF
  VARIANTARG v30; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  __int64 v32; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v33; // [rsp+B8h] [rbp+48h] BYREF

  v27 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v27);
  v4 = std::vector<std::pair<unsigned short const *,unsigned short const *>>::vector<std::pair<unsigned short const *,unsigned short const *>>(
         &v30,
         a1);
  v5 = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::LoadSchema(v4, &v27);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A,
      (int)"shellcommon\\shell\\tiles\\curatedtilecollections\\collectioninitialization\\helpers\\layoutxmlvalidationhelper.cpp",
      (const char *)(unsigned int)v5);
LABEL_30:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v27);
    goto LABEL_20;
  }
  v32 = 0LL;
  v7 = **a2;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v32);
  v8 = v7(a2, &GUID_2933bf95_7b36_11d2_b20e_00c04f983e60, &v32);
  v6 = v8;
  if ( v8 < 0 )
  {
    v9 = (unsigned int)v8;
    v10 = 62LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"shellcommon\\shell\\tiles\\curatedtilecollections\\collectioninitialization\\helpers\\layoutxmlvalidationhelper.cpp",
      (const char *)v9);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v32);
    goto LABEL_30;
  }
  v11 = v32;
  v12 = *(__int64 (__fastcall **)(__int64, VARIANTARG *))(*(_QWORD *)v32 + 624LL);
  pvarg.vt = 9;
  pvarg.llVal = v27;
  if ( v27 )
    (*(void (__fastcall **)(LONGLONG))(*(_QWORD *)v27 + 8LL))(v27);
  v30 = pvarg;
  v6 = v12(v11, &v30);
  v13 = VariantClear(&pvarg);
  if ( v13 < 0 )
    _com_issue_error((char *)(unsigned int)v13);
  if ( (v6 & 0x80000000) != 0 )
  {
    v9 = v6;
    v10 = 63LL;
    goto LABEL_5;
  }
  v33 = 0LL;
  v14 = v32;
  v15 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v32 + 632LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v33);
  v16 = v15(v14, &v33);
  v6 = v16;
  if ( v16 >= 0 )
  {
    if ( v16 == 1 )
    {
      v28 = 0LL;
      v21 = v33;
      v22 = *(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v33 + 72LL);
      _bstr_t::_Free((_bstr_t *)&v28);
      v23 = operator new(0x18uLL);
      v24 = v23;
      v28 = v23;
      if ( v23 )
      {
        v23[1] = 0LL;
        *((_DWORD *)v23 + 4) = 1;
        *v23 = 0LL;
      }
      else
      {
        v24 = 0LL;
      }
      v28 = v24;
      if ( !v24 )
        _com_issue_error((char *)0x8007000ELL);
      v22(v21, v24);
      if ( (Microsoft_Windows_ShellCommon_StartLayoutPopulationEnableBits & 4) != 0 )
        McTemplateU0z_EventWriteTransfer(v26, v25, *v24);
      _bstr_t::_Free((_bstr_t *)&v28);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v33);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v32);
      v6 = -2147023431;
      goto LABEL_30;
    }
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x42,
      (int)"shellcommon\\shell\\tiles\\curatedtilecollections\\collectioninitialization\\helpers\\layoutxmlvalidationhelper.cpp",
      (const char *)(unsigned int)v16);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4B,
      (int)"shellcommon\\shell\\tiles\\curatedtilecollections\\collectioninitialization\\helpers\\layoutxmlvalidationhelper.cpp",
      (const char *)v6);
  }
  v17 = v33;
  if ( v33 )
  {
    v33 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  v18 = v32;
  if ( v32 )
  {
    v32 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  v19 = v27;
  if ( v27 )
  {
    v27 = 0LL;
    (*(void (__fastcall **)(LONGLONG))(*(_QWORD *)v19 + 16LL))(v19);
  }
LABEL_20:
  std::vector<winrt::Windows::Foundation::Rect>::~vector<winrt::Windows::Foundation::Rect>(a1);
  return v6;
}
