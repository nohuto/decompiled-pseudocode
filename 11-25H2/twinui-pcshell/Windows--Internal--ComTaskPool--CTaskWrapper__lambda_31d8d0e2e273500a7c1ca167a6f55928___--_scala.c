/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_31d8d0e2e273500a7c1ca167a6f55928___::_scalar_deleting_destructor_ @ 0x180357CA0
 * Callers:
 *     <none>
 * Callees:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IEventHandler_impl_IInspectable___::_)(IInspectable___IInspectable__)_::DelegateInvokeHelper_Windows::Foundation::IEventHandler_IInspectable_____lambda_820239a8925460678c838e86e23650d6___1_IInspectable___IInspectable___::_DelegateInvokeHelper_Windows::Foundation::IEventHandler_IInspectable_____lambda_820239a8925460678c838e86e23650d6___1_IInspectable___IInspectable___ @ 0x180082B0C (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IEventHandler_impl.c)
 *     ??3@YAXPEAX@Z @ 0x1802D2D4C (--3@YAXPEAX@Z.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_31d8d0e2e273500a7c1ca167a6f55928___::_scalar_deleting_destructor_(
        void *Block,
        char a2)
{
  Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::IEventHandler_impl_IInspectable___::___IInspectable___IInspectable____::DelegateInvokeHelper_Windows::Foundation::IEventHandler_IInspectable_____lambda_820239a8925460678c838e86e23650d6___1_IInspectable___IInspectable___::_DelegateInvokeHelper_Windows::Foundation::IEventHandler_IInspectable_____lambda_820239a8925460678c838e86e23650d6___1_IInspectable___IInspectable___((__int64)Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
