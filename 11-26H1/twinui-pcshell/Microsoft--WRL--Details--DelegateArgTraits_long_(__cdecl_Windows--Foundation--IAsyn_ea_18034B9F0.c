/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IAsyncActionCompletedHandler::_)(Windows::Foundation::IAsyncAction___enum_ABI::Windows::Foundation::AsyncStatus)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IAsyncActionCompletedHandler_IUnknown___lambda_be6b1a914f7b12eba76d69f77a72b4a6___1_Windows::Foundation::IAsyncAction___enum_ABI::Windows::Foundation::AsyncStatus_::Invoke @ 0x18034B9F0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x180057ED4 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 *     _lambda_be6b1a914f7b12eba76d69f77a72b4a6_::operator() @ 0x1803449E8 (_lambda_be6b1a914f7b12eba76d69f77a72b4a6_--operator().c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::IAsyncActionCompletedHandler::___Windows::Foundation::IAsyncAction___enum_ABI::Windows::Foundation::AsyncStatus__::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IAsyncActionCompletedHandler_IUnknown___lambda_be6b1a914f7b12eba76d69f77a72b4a6___1_Windows::Foundation::IAsyncAction___enum_ABI::Windows::Foundation::AsyncStatus_::Invoke(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        int a3)
{
  signed int v3; // eax
  unsigned int v4; // ebx

  v3 = lambda_be6b1a914f7b12eba76d69f77a72b4a6_::operator()(a1 + 40, a2, a3);
  v4 = v3;
  if ( v3 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(v3);
  return v4;
}
