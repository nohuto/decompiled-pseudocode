/*
 * XREFs of ?CreateBoolean@?$consume_Windows_Foundation_IPropertyValueStatics@UIPropertyValueStatics@Foundation@Windows@winrt@@@impl@winrt@@QEBA@_N@Z @ 0x1804AB3C8
 * Callers:
 *     ??R_lambda_30c050dc9be2b5b829416e08712c22ad_@@QEBA@AEBUIPropertyValueStatics@Foundation@Windows@winrt@@@Z @ 0x1804AB39C (--R_lambda_30c050dc9be2b5b829416e08712c22ad_@@QEBA@AEBUIPropertyValueStatics@Foundation@Windows@.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_Foundation_IPropertyValueStatics<winrt::Windows::Foundation::IPropertyValueStatics>::CreateBoolean(
        __int64 **a1,
        _QWORD *a2,
        char a3)
{
  __int64 *v3; // rcx
  _QWORD *v4; // rbx
  __int64 v5; // rax
  int v6; // eax
  int v8; // [rsp+28h] [rbp-20h] BYREF
  __int128 v9; // [rsp+30h] [rbp-18h]
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v11; // [rsp+58h] [rbp+10h] BYREF

  v11 = a2;
  v3 = *a1;
  v10 = 0LL;
  v8 = 0;
  v4 = a2;
  v5 = *v3;
  LOBYTE(a2) = a3;
  v9 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64 *, _QWORD *, __int64 *))(v5 + 136))(v3, a2, &v10);
  winrt::check_hresult((int *)&v11, v6, (__int64)&v8);
  *v4 = v10;
  return v4;
}
