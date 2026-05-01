/*
 * XREFs of ??0?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@H@Foundation@Windows@@V_lambda_58306c87c7aac00e6738fbed50386c69_@@$0?0PEAUIStartExperienceManager@Experience@Shell@Internal@3@H@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIStartExperienceManager@2345@@Internal@Foundation@Windows@@H@Foundation@Windows@@EAAJPEAUIStartExperienceManager@Experience@Shell@Internal@3@H@Z@Details@WRL@Microsoft@@QEAA@$$QEAV_lambda_58306c87c7aac00e6738fbed50386c69_@@@Z @ 0x180460730
 * Callers:
 *     ?Initialize@XamlLauncherState@@UEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaExperienceManager@3456@PEAUIRealmActivationHistory@@PEAUIXamlLauncherStateCallback@@@Z @ 0x180246900 (-Initialize@XamlLauncherState@@UEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Window.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::Internal::Shell::Experience::StartExperienceManager *,Windows::Internal::Shell::Experience::IStartExperienceManager *>,int>::*)(Windows::Internal::Shell::Experience::IStartExperienceManager *,int)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,int>,_lambda_58306c87c7aac00e6738fbed50386c69_,-1,Windows::Internal::Shell::Experience::IStartExperienceManager *,int>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,int>,_lambda_58306c87c7aac00e6738fbed50386c69_,-1,Windows::Internal::Shell::Experience::IStartExperienceManager *,int>(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,int>>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_OWORD *)(a1 + 16) = *(_OWORD *)a2;
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)a1 = &Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::Internal::Shell::Experience::StartExperienceManager *,Windows::Internal::Shell::Experience::IStartExperienceManager *>,int>::*)(Windows::Internal::Shell::Experience::IStartExperienceManager *,int)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,int>,_lambda_58306c87c7aac00e6738fbed50386c69_,-1,Windows::Internal::Shell::Experience::IStartExperienceManager *,int>::`vftable';
  return a1;
}
