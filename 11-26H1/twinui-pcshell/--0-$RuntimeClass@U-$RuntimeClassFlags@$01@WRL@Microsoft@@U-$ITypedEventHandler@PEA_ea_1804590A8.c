/*
 * XREFs of ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1804590A8
 * Callers:
 *     Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::Internal::Shell::Experience::ICortanaShownEventArgs_____lambda_ca2e54acfe7c58ca62c84e151e601d9f___ @ 0x1802B4C48 (Microsoft--WRL--Callback_Windows--Foundation--ITypedEventHandler_Windows--Internal-_ea_1802B4C48.c)
 *     ??$Make@U?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@2345@@Foundation@Windows@@V_lambda_87aaf567390e6606f9b7ae3af32a962e_@@$0?0PEAUICortanaExperienceManager@Experience@Shell@Internal@3@PEAUICortanaShownEventArgs@6783@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaExperienceManager@2345@@Internal@Foundation@Windows@@PEAUICortanaShownEventArgs@Experience@Shell@24@@Foundation@Windows@@EAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@3@PEAUICortanaShownEventArgs@5673@@Z@Details@WRL@Microsoft@@V_lambda_87aaf567390e6606f9b7ae3af32a962e_@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@U?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@2345@@Foundation@Windows@@V_lambda_87aaf567390e6606f9b7ae3af32a962e_@@$0?0PEAUICortanaExperienceManager@Experience@Shell@Internal@3@PEAUICortanaShownEventArgs@6783@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaExperienceManager@2345@@Internal@Foundation@Windows@@PEAUICortanaShownEventArgs@Experience@Shell@24@@Foundation@Windows@@EAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@3@PEAUICortanaShownEventArgs@5673@@Z@Details@WRL@Microsoft@@@12@$$QEAV_lambda_87aaf567390e6606f9b7ae3af32a962e_@@@Z @ 0x18045F6F8 (--$Make@U-$DelegateInvokeHelper@U-$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Sh.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Internal::Shell::Experience::ICortanaShownEventArgs *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Internal::Shell::Experience::ICortanaShownEventArgs *>>(
        __int64 a1)
{
  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Internal::Shell::Experience::ICortanaShownEventArgs *>>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}
