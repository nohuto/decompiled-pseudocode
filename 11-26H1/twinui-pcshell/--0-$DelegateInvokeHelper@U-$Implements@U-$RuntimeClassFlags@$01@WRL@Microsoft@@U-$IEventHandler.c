/*
 * XREFs of ??0?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$IEventHandler@_N@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_ad7f2d654b2bbc380aea48949c6850ae_@@$0?0PEAUIInspectable@@E@?$DelegateArgTraits@P8?$IEventHandler_impl@U?$AggregateType@_NE@Internal@Foundation@Windows@@@Foundation@Windows@@EAAJPEAUIInspectable@@E@Z@Details@WRL@Microsoft@@QEAA@$$QEAV_lambda_ad7f2d654b2bbc380aea48949c6850ae_@@@Z @ 0x180341060
 * Callers:
 *     ??$Callback@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$IEventHandler@_N@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@U?$IEventHandler@_N@Foundation@Windows@@$0?0V_lambda_ad7f2d654b2bbc380aea48949c6850ae_@@@?$DelegateArgTraits@P8?$IEventHandler_impl@U?$AggregateType@_NE@Internal@Foundation@Windows@@@Foundation@Windows@@EAAJPEAUIInspectable@@E@Z@Details@WRL@Microsoft@@SA?AV?$ComPtr@U?$IEventHandler@_N@Foundation@Windows@@@23@$$QEAV_lambda_ad7f2d654b2bbc380aea48949c6850ae_@@@Z @ 0x18033B514 (--$Callback@U-$Implements@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$IEventHandler@_N@Foundation.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x1800463AC (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::IEventHandler_impl<Windows::Foundation::Internal::AggregateType<bool,unsigned char>>::*)(IInspectable *,unsigned char)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<bool>,Microsoft::WRL::FtmBase>,_lambda_ad7f2d654b2bbc380aea48949c6850ae_,-1,IInspectable *,unsigned char>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<bool>,Microsoft::WRL::FtmBase>,_lambda_ad7f2d654b2bbc380aea48949c6850ae_,-1,IInspectable *,unsigned char>(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v4; // rsi

  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  v4 = (_QWORD *)(a1 + 8);
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(a1 + 8));
  *(_DWORD *)(a1 + 60) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<bool>,Microsoft::WRL::FtmBase>>::`vftable'{for `Windows::Foundation::IEventHandler<bool>'};
  *v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<bool>,Microsoft::WRL::FtmBase>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( (_QWORD *)(a1 + 64) != a2 )
  {
    *(_QWORD *)(a1 + 64) = *a2;
    *a2 = 0LL;
  }
  *(_QWORD *)a1 = &Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::IEventHandler_impl<Windows::Foundation::Internal::AggregateType<bool,unsigned char>>::*)(IInspectable *,unsigned char)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<bool>,Microsoft::WRL::FtmBase>,_lambda_ad7f2d654b2bbc380aea48949c6850ae_,-1,IInspectable *,unsigned char>::`vftable'{for `Windows::Foundation::IEventHandler<bool>'};
  *v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<bool>,Microsoft::WRL::FtmBase>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  return a1;
}
