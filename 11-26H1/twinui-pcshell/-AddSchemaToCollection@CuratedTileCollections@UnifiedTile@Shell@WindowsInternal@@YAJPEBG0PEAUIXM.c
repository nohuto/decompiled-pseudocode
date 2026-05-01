/*
 * XREFs of ?AddSchemaToCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEBG0PEAUIXMLDOMSchemaCollection@@@Z @ 0x1801575B4
 * Callers:
 *     ?LoadSchema@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJV?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@PEAPEAUIXMLDOMSchemaCollection@@@Z @ 0x1801574A8 (-LoadSchema@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJV-$vector@U-$pair@PEBGP.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@_bstr_t@@AEAAXXZ @ 0x18015746C (-_Free@_bstr_t@@AEAAXXZ.c)
 *     ??0Data_t@_bstr_t@@QEAA@PEBG@Z @ 0x180157914 (--0Data_t@_bstr_t@@QEAA@PEBG@Z.c)
 *     ??_GData_t@_bstr_t@@AEAAPEAXI@Z @ 0x180157970 (--_GData_t@_bstr_t@@AEAAPEAXI@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     ?_com_issue_error@@YAXJ@Z @ 0x1802D77C4 (-_com_issue_error@@YAXJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::AddSchemaToCollection(
        WindowsInternal::Shell::UnifiedTile::CuratedTileCollections *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        struct IXMLDOMSchemaCollection *a4)
{
  HRESULT v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  volatile signed __int32 *v10; // rax
  volatile signed __int32 *v11; // rsi
  unsigned int v12; // edx
  LPVOID v13; // rcx
  LPVOID v14; // rbx
  __int64 (__fastcall *v15)(LPVOID, LONGLONG *); // rdi
  int v16; // eax
  unsigned __int64 v17; // r9
  __int64 v18; // rdx
  __int64 (__fastcall *v19)(const unsigned __int16 *, _QWORD, __int128 *); // rbx
  _bstr_t::Data_t *v20; // rax
  volatile signed __int32 *v21; // rdi
  unsigned int v22; // edx
  HRESULT v23; // eax
  unsigned int v24; // edx
  unsigned int v25; // edx
  LONGLONG v27; // rcx
  LPVOID v28; // rcx
  LPVOID ppv; // [rsp+38h] [rbp-39h] BYREF
  LONGLONG v30; // [rsp+40h] [rbp-31h] BYREF
  IRecordInfo *pRecInfo; // [rsp+48h] [rbp-29h]
  _bstr_t::Data_t *v32; // [rsp+50h] [rbp-21h] BYREF
  _bstr_t::Data_t *v33; // [rsp+58h] [rbp-19h]
  __int128 v34; // [rsp+68h] [rbp-9h] BYREF
  IRecordInfo *v35; // [rsp+78h] [rbp+7h]
  VARIANTARG pvarg; // [rsp+88h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]
  __int16 v38; // [rsp+F0h] [rbp+7Fh] BYREF

  ppv = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
  v7 = CoCreateInstance(
         &GUID_88d96a05_f192_11d4_a65f_0040963251e5,
         0LL,
         1u,
         &GUID_2933bf81_7b36_11d2_b20e_00c04f983e60,
         &ppv);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 25LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"shellcommon\\shell\\tiles\\curatedtilecollections\\collectioninitialization\\helpers\\layoutxmlvalidationhelper.cpp",
      (const char *)(unsigned int)v7);
LABEL_27:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
    return v8;
  }
  v7 = (*(__int64 (__fastcall **)(LPVOID, _QWORD))(*(_QWORD *)ppv + 504LL))(ppv, 0LL);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 26LL;
    goto LABEL_5;
  }
  v32 = (_bstr_t::Data_t *)operator new(0x18uLL);
  v10 = (volatile signed __int32 *)_bstr_t::Data_t::Data_t(v32, a2);
  v11 = v10;
  v32 = (_bstr_t::Data_t *)v10;
  if ( !v10 )
    _com_issue_error((char *)0x8007000ELL);
  v38 = 0;
  (*(void (__fastcall **)(LPVOID, _QWORD, __int16 *))(*(_QWORD *)ppv + 520LL))(ppv, *(_QWORD *)v10, &v38);
  if ( v38 != -1 )
  {
    v8 = -2147467259;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F,
      (int)"shellcommon\\shell\\tiles\\curatedtilecollections\\collectioninitialization\\helpers\\layoutxmlvalidationhelper.cpp",
      (const char *)0x80004005LL);
    if ( _InterlockedExchangeAdd(v11 + 4, 0xFFFFFFFF) == 1 )
      _bstr_t::Data_t::`scalar deleting destructor'((_bstr_t::Data_t *)v11, v12);
    v13 = ppv;
    if ( ppv )
    {
      ppv = 0LL;
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v13 + 16LL))(v13);
    }
    return v8;
  }
  v30 = 0LL;
  v14 = ppv;
  v15 = *(__int64 (__fastcall **)(LPVOID, LONGLONG *))(*(_QWORD *)ppv + 360LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v30);
  v16 = v15(v14, &v30);
  v8 = v16;
  if ( v16 < 0 )
  {
    v17 = (unsigned int)v16;
    v18 = 34LL;
LABEL_26:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (int)"shellcommon\\shell\\tiles\\curatedtilecollections\\collectioninitialization\\helpers\\layoutxmlvalidationhelper.cpp",
      (const char *)v17);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v30);
    _bstr_t::_Free((volatile signed __int32 **)&v32, v25);
    goto LABEL_27;
  }
  v19 = *(__int64 (__fastcall **)(const unsigned __int16 *, _QWORD, __int128 *))(*(_QWORD *)a3 + 56LL);
  pvarg.vt = 9;
  pvarg.llVal = v30;
  if ( v30 )
    (*(void (__fastcall **)(LONGLONG))(*(_QWORD *)v30 + 8LL))(v30);
  v34 = *(_OWORD *)&pvarg.vt;
  pRecInfo = pvarg.pRecInfo;
  v33 = (_bstr_t::Data_t *)operator new(0x18uLL);
  v20 = (_bstr_t::Data_t *)_bstr_t::Data_t::Data_t(v33, (const unsigned __int16 *)this);
  v21 = (volatile signed __int32 *)v20;
  v33 = v20;
  if ( !v20 )
    _com_issue_error((char *)0x8007000ELL);
  v35 = pRecInfo;
  v8 = v19(a3, *(_QWORD *)v20, &v34);
  if ( _InterlockedExchangeAdd(v21 + 4, 0xFFFFFFFF) == 1 )
    _bstr_t::Data_t::`scalar deleting destructor'((_bstr_t::Data_t *)v21, v22);
  v23 = VariantClear(&pvarg);
  if ( v23 < 0 )
    _com_issue_error((char *)(unsigned int)v23);
  if ( (v8 & 0x80000000) != 0 )
  {
    v17 = v8;
    v18 = 35LL;
    goto LABEL_26;
  }
  v27 = v30;
  if ( v30 )
  {
    v30 = 0LL;
    (*(void (__fastcall **)(LONGLONG))(*(_QWORD *)v27 + 16LL))(v27);
  }
  if ( _InterlockedExchangeAdd(v11 + 4, 0xFFFFFFFF) == 1 )
    _bstr_t::Data_t::`scalar deleting destructor'((_bstr_t::Data_t *)v11, v24);
  v28 = ppv;
  if ( ppv )
  {
    ppv = 0LL;
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v28 + 16LL))(v28);
  }
  return 0LL;
}
