/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IEventHandler_impl_IInspectable___::_)(IInspectable___IInspectable__)_::DelegateInvokeHelper_Windows::Foundation::IEventHandler_IInspectable_____lambda_820239a8925460678c838e86e23650d6___1_IInspectable___IInspectable___::_DelegateInvokeHelper_Windows::Foundation::IEventHandler_IInspectable_____lambda_820239a8925460678c838e86e23650d6___1_IInspectable___IInspectable___ @ 0x1800F32CC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_df999f07d52093701c0c38e9d5359aaf___::_scalar_deleting_destructor_ @ 0x1800F3290 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_df999f07d52093701c0c38e9d5359aaf___--_scala.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_bccacf824c0b35a20e4c1bcfbe66ad1f___::_scalar_deleting_destructor_ @ 0x1801A7EB0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_bccacf824c0b35a20e4c1bcfbe66ad1f___--_scala.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IEventHandler_impl_IInspectable___::_)(IInspectable___IInspectable__)_::DelegateInvokeHelper_Windows::Foundation::IEventHandler_IInspectable_____lambda_820239a8925460678c838e86e23650d6___1_IInspectable___IInspectable___::_scalar_deleting_destructor_ @ 0x1801BC7F0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IEven_ea_1801BC7F0.c)
 *     ObservablePropertyCallback__lambda_f388ba99653cfb86d5d2a92c071f58bb___::_scalar_deleting_destructor_ @ 0x1801BE340 (ObservablePropertyCallback__lambda_f388ba99653cfb86d5d2a92c071f58bb___--_scalar_deleting_destruc.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d0e8f4979c3957dc3bbaa4bdaf35eba2___::_scalar_deleting_destructor_ @ 0x1801FF720 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d0e8f4979c3957dc3bbaa4bdaf35eba2___--_scala.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8f781994c3342d231902f4bb64d9d854___::_scalar_deleting_destructor_ @ 0x18035E5B0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_8f781994c3342d231902f4bb64d9d854___--_scala.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::IEventHandler_impl_IInspectable___::___IInspectable___IInspectable____::DelegateInvokeHelper_Windows::Foundation::IEventHandler_IInspectable_____lambda_820239a8925460678c838e86e23650d6___1_IInspectable___IInspectable___::_DelegateInvokeHelper_Windows::Foundation::IEventHandler_IInspectable_____lambda_820239a8925460678c838e86e23650d6___1_IInspectable___IInspectable___(
        __int64 a1)
{
  __int64 result; // rax

  result = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 16));
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
