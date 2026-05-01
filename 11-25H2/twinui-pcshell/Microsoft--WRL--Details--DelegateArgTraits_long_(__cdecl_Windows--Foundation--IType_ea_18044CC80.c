/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::Internal::Shell::Experience::ICortanaExperienceManager____Windows::Internal::Shell::Experience::IFocusNavigateEventArgs___::_)(Windows::Internal::Shell::Experience::ICortanaExperienceManager___Windows::Internal::Shell::Experience::IFocusNavigateEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::Internal::Shell::Experience::IFocusNavigateEventArgs_____lambda_81f5b2a3d951a59171196d8907d5bddd___1_Windows::Internal::Shell::Experience::ICortanaExperienceManager___Windows::Internal::Shell::Experience::IFocusNavigateEventArgs___::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::Internal::Shell::Experience::IFocusNavigateEventArgs_____lambda_81f5b2a3d951a59171196d8907d5bddd___1_Windows::Internal::Shell::Experience::ICortanaExperienceManager___Windows::Internal::Shell::Experience::IFocusNavigateEventArgs___ @ 0x18044CC80
 * Callers:
 *     Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::Internal::Shell::Experience::IFocusNavigateEventArgs_____lambda_81f5b2a3d951a59171196d8907d5bddd___ @ 0x18044933C (Microsoft--WRL--Callback_Windows--Foundation--ITypedEventHandler_Windows--Internal-_ea_18044933C.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::Internal::Shell::Experience::ICortanaExperienceManager____Windows::Internal::Shell::Experience::IFocusNavigateEventArgs___::___Windows::Internal::Shell::Experience::ICortanaExperienceManager___Windows::Internal::Shell::Experience::IFocusNavigateEventArgs____::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::Internal::Shell::Experience::IFocusNavigateEventArgs_____lambda_81f5b2a3d951a59171196d8907d5bddd___1_Windows::Internal::Shell::Experience::ICortanaExperienceManager___Windows::Internal::Shell::Experience::IFocusNavigateEventArgs___::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::Internal::Shell::Experience::IFocusNavigateEventArgs_____lambda_81f5b2a3d951a59171196d8907d5bddd___1_Windows::Internal::Shell::Experience::ICortanaExperienceManager___Windows::Internal::Shell::Experience::IFocusNavigateEventArgs___(
        __int64 a1,
        _QWORD *a2)
{
  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Internal::Shell::Experience::IFocusNavigateEventArgs *>>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)(a1 + 16) = *a2;
  *(_QWORD *)a1 = &off_18071AF40;
  return a1;
}
