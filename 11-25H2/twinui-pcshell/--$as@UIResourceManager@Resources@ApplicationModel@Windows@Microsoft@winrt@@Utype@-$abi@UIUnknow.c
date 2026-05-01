/*
 * XREFs of ??$as@UIResourceManager@Resources@ApplicationModel@Windows@Microsoft@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@6@$0A@@impl@winrt@@YA?AUIResourceManager@Resources@ApplicationModel@Windows@Microsoft@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1802CBD7C
 * Callers:
 *     _lambda_15672423cac2dd604ea608161d721589_::operator() @ 0x18044637C (_lambda_15672423cac2dd604ea608161d721589_--operator().c)
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::as<winrt::Microsoft::Windows::ApplicationModel::Resources::IResourceManager,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
        _QWORD *a1,
        __int64 (__fastcall ***a2)(_QWORD, void *, _QWORD **))
{
  __int64 (__fastcall **v3)(_QWORD, void *, _QWORD **); // rax
  unsigned int v4; // eax
  char v6[4]; // [rsp+24h] [rbp-34h] BYREF
  int v7; // [rsp+28h] [rbp-30h] BYREF
  __int128 v8; // [rsp+30h] [rbp-28h]
  _QWORD *v9; // [rsp+40h] [rbp-18h] BYREF

  v9 = a1;
  if ( a2 )
  {
    v9 = 0LL;
    v7 = 0;
    v3 = *a2;
    v8 = 0LL;
    v4 = (*v3)(a2, &winrt::impl::guid_v<winrt::Microsoft::Windows::ApplicationModel::Resources::IResourceManager>, &v9);
    winrt::check_hresult(v6, v4, &v7);
    *a1 = v9;
  }
  else
  {
    *a1 = 0LL;
  }
  return a1;
}
