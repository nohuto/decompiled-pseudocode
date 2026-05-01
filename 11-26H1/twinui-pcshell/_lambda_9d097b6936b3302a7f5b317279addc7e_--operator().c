/*
 * XREFs of _lambda_9d097b6936b3302a7f5b317279addc7e_::operator() @ 0x180460E24
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IAsyncActionCompletedHandler::_)(Windows::Foundation::IAsyncAction___enum_ABI::Windows::Foundation::AsyncStatus)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IAsyncActionCompletedHandler_IUnknown___lambda_9d097b6936b3302a7f5b317279addc7e___1_Windows::Foundation::IAsyncAction___enum_ABI::Windows::Foundation::AsyncStatus_::Invoke @ 0x180461950 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IAsyn_ea_180461950.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     wil::details::CallAndHandleErrorsWithReturnType_void__lambda_7d8ec5034082e9a06c60a2b58ed48b70__&_long_&_0_ @ 0x18045F3B4 (wil--details--CallAndHandleErrorsWithReturnType_void__lambda_7d8ec5034082e9a06c60a2b58ed48b70__-.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_9d097b6936b3302a7f5b317279addc7e_::operator()(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        int a3)
{
  __int64 (__fastcall *v5)(_QWORD, GUID *, __int64 *); // rbx
  int v6; // eax
  __int64 v8; // [rsp+40h] [rbp+20h] BYREF
  int v9; // [rsp+50h] [rbp+30h] BYREF

  v9 = 0;
  if ( a3 != 1 )
  {
    v8 = 0LL;
    v5 = **a2;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v8);
    v9 = v5(a2, &GUID_00000036_0000_0000_c000_000000000046, &v8);
    if ( v9 >= 0 )
    {
      v9 = -2147418113;
      v6 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v8 + 64LL))(v8, &v9);
      if ( v6 >= 0 )
        v6 = v9;
      v9 = v6;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v8);
  }
  return wil::details::CallAndHandleErrorsWithReturnType_void__lambda_7d8ec5034082e9a06c60a2b58ed48b70____long___0_(
           a1,
           &v9);
}
