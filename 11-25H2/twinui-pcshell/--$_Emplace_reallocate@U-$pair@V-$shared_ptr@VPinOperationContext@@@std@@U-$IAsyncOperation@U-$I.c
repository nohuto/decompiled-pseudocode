/*
 * XREFs of ??$_Emplace_reallocate@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@std@@@?$vector@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@std@@V?$allocator@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@std@@@2@@std@@AEAAPEAU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@1@QEAU21@$$QEAU21@@Z @ 0x1805BD238
 * Callers:
 *     ??$emplace_back@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@std@@@?$vector@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@std@@V?$allocator@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@std@@@2@@std@@QEAA?A_T$$QEAU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@1@@Z @ 0x1805BDE4C (--$emplace_back@U-$pair@V-$shared_ptr@VPinOperationContext@@@std@@U-$IAsyncOperation@U-$IReferen.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x180029EEC (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180029F1C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@std@@@std@@@std@@YAXPEAU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@0@QEAU10@AEAV?$allocator@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@std@@@0@@Z @ 0x1805BD0FC (--$_Destroy_range@V-$allocator@U-$pair@V-$shared_ptr@VPinOperationContext@@@std@@U-$IAsyncOperat.c)
 *     ??$_Uninitialized_move@PEAU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@std@@V?$allocator@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@std@@@2@@std@@YAPEAU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@0@QEAU10@0PEAU10@AEAV?$allocator@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@std@@@0@@Z @ 0x1805BD66C (--$_Uninitialized_move@PEAU-$pair@V-$shared_ptr@VPinOperationContext@@@std@@U-$IAsyncOperation@U.c)
 */

char *__fastcall std::vector<std::pair<std::shared_ptr<PinOperationContext>,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>>>::_Emplace_reallocate<std::pair<std::shared_ptr<PinOperationContext>,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>>>(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v6; // r14
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  size_t size_of; // rax
  char *v13; // rax
  _QWORD *v14; // rsi
  char *v15; // r14
  __int64 v16; // rax
  __int64 v17; // rdx
  _QWORD *v18; // r8
  __int64 v19; // rcx
  char *result; // rax
  void *v21; // [rsp+20h] [rbp-48h]
  __int64 v22; // [rsp+70h] [rbp+8h]

  v6 = (a2 - *a1) / 24;
  v7 = 0xAAAAAAAAAAAAAAABuLL * ((a1[1] - *a1) >> 3);
  v8 = 0xAAAAAAAAAAAAAAALL;
  if ( v7 == 0xAAAAAAAAAAAAAAALL )
    std::_Xlength_error("vector too long");
  v9 = v7 + 1;
  v10 = 0xAAAAAAAAAAAAAAABuLL * ((a1[2] - *a1) >> 3);
  v11 = v10 >> 1;
  if ( v10 <= 0xAAAAAAAAAAAAAAALL - (v10 >> 1) )
  {
    v8 = v11 + v10;
    if ( v11 + v10 < v9 )
      v8 = v9;
  }
  size_of = std::_Get_size_of_n<24>(v8);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = v13;
  v21 = v13;
  v15 = &v13[24 * v6];
  try
  {
    *(_QWORD *)v15 = 0LL;
    *((_QWORD *)v15 + 1) = 0LL;
    *(_QWORD *)v15 = *a3;
    *((_QWORD *)v15 + 1) = a3[1];
    *a3 = 0LL;
    a3[1] = 0LL;
    v16 = a3[2];
    a3[2] = 0LL;
    *((_QWORD *)v15 + 2) = v16;
    v22 = (__int64)v15;
    v17 = a1[1];
    v18 = v14;
    v19 = *a1;
    if ( a2 != v17 )
    {
      std::_Uninitialized_move<std::pair<std::shared_ptr<PinOperationContext>,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>> *,std::allocator<std::pair<std::shared_ptr<PinOperationContext>,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>>>>(
        v19,
        a2,
        v14);
      v22 = (__int64)v14;
      v18 = v15 + 24;
      v17 = a1[1];
      v19 = a2;
    }
    std::_Uninitialized_move<std::pair<std::shared_ptr<PinOperationContext>,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>> *,std::allocator<std::pair<std::shared_ptr<PinOperationContext>,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>>>>(
      v19,
      v17,
      v18);
    if ( *a1 )
    {
      std::_Destroy_range<std::allocator<std::pair<std::shared_ptr<PinOperationContext>,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>>>>(
        *a1,
        a1[1]);
      std::_Deallocate<16,0>((void *)*a1, (const struct std::nothrow_t *)(8 * ((a1[2] - *a1) >> 3)));
    }
    *a1 = (__int64)v14;
    a1[1] = (__int64)&v14[3 * v9];
    a1[2] = (__int64)&v14[3 * v8];
    result = v15;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<std::pair<std::shared_ptr<PinOperationContext>,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>>>>(
      v22,
      (__int64)(v15 + 24));
    std::_Deallocate<16,0>(v21, (const struct std::nothrow_t *)(24 * v8));
    throw;
  }
  return result;
}
