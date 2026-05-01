/*
 * XREFs of ?Invoke@?$delegate@U?$EventHandler@UUINavigationController@Input@Gaming@Windows@winrt@@@Foundation@Windows@winrt@@V_lambda_9bad360c2d5cdf62d5e8b629670e02ce_@@@impl@winrt@@UEAAHPEAX0@Z @ 0x18034BAC0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::delegate<winrt::Windows::Foundation::EventHandler<winrt::Windows::Gaming::Input::UINavigationController>,_lambda_9bad360c2d5cdf62d5e8b629670e02ce_>::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rbx
  void (__fastcall *v4)(__int64, __int64 *, __int64 *); // rdi
  __int64 result; // rax
  __int64 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+28h] [rbp-20h] BYREF

  v7 = a3;
  v3 = *(_QWORD *)(a1 + 16) + *(int *)(a1 + 32);
  v4 = *(void (__fastcall **)(__int64, __int64 *, __int64 *))(a1 + 24);
  v6 = a2;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(&v6);
  try
  {
    v4(v3, &v6, &v7);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v6);
  }
  return result;
}
