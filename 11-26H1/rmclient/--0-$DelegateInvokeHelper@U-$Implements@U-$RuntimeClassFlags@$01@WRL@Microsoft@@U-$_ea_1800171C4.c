/*
 * XREFs of ??0?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_2a07431b028f5ee37e3077b9dff53ccb_@@$0?0PEAUIInspectable@@PEAUIAppMemoryUsageLimitChangingEventArgs@System@Windows@@@?$DelegateArgTraits@P8?$IEventHandler_impl@U?$AggregateType@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@PEAUIAppMemoryUsageLimitChangingEventArgs@23@@Internal@Foundation@Windows@@@Foundation@Windows@@EAAJPEAUIInspectable@@PEAUIAppMemoryUsageLimitChangingEventArgs@System@3@@Z@Details@WRL@Microsoft@@QEAA@$$QEAV_lambda_2a07431b028f5ee37e3077b9dff53ccb_@@@Z @ 0x1800171C4
 * Callers:
 *     ??$CreateAgileHelper@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAU?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@PEAPEAU345@@Z @ 0x180001910 (--$CreateAgileHelper@U-$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18000A910 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18001C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::IEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::System::AppMemoryUsageLimitChangingEventArgs *,Windows::System::IAppMemoryUsageLimitChangingEventArgs *>>::*)(IInspectable *,Windows::System::IAppMemoryUsageLimitChangingEventArgs *)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Microsoft::WRL::FtmBase>,_lambda_2a07431b028f5ee37e3077b9dff53ccb_,-1,IInspectable *,Windows::System::IAppMemoryUsageLimitChangingEventArgs *>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Microsoft::WRL::FtmBase>,_lambda_2a07431b028f5ee37e3077b9dff53ccb_,-1,IInspectable *,Windows::System::IAppMemoryUsageLimitChangingEventArgs *>(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v3; // rsi
  struct Microsoft::WRL::Details::ModuleBase *v5; // rcx

  v3 = (_QWORD *)(a1 + 8);
  *(_QWORD *)a1 = &Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>::`vftable';
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(a1 + 8));
  v5 = Microsoft::WRL::Details::ModuleBase::module_;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Microsoft::WRL::FtmBase>>::`vftable'{for `Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>'};
  *v3 = &Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::IEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::System::AppMemoryUsageLimitChangingEventArgs *,Windows::System::IAppMemoryUsageLimitChangingEventArgs *>>::*)(IInspectable *,Windows::System::IAppMemoryUsageLimitChangingEventArgs *)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Microsoft::WRL::FtmBase>,_lambda_2a07431b028f5ee37e3077b9dff53ccb_,-1,IInspectable *,Windows::System::IAppMemoryUsageLimitChangingEventArgs *>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *(_DWORD *)(a1 + 60) = 1;
  if ( v5 )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v5 + 8LL))(v5);
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( (_QWORD *)(a1 + 64) != a2 )
  {
    *(_QWORD *)(a1 + 64) = *a2;
    *a2 = 0LL;
  }
  *(_QWORD *)a1 = &Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::IEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::System::AppMemoryUsageLimitChangingEventArgs *,Windows::System::IAppMemoryUsageLimitChangingEventArgs *>>::*)(IInspectable *,Windows::System::IAppMemoryUsageLimitChangingEventArgs *)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Microsoft::WRL::FtmBase>,_lambda_2a07431b028f5ee37e3077b9dff53ccb_,-1,IInspectable *,Windows::System::IAppMemoryUsageLimitChangingEventArgs *>::`vftable'{for `Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>'};
  *v3 = &Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::IEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::System::AppMemoryUsageLimitChangingEventArgs *,Windows::System::IAppMemoryUsageLimitChangingEventArgs *>>::*)(IInspectable *,Windows::System::IAppMemoryUsageLimitChangingEventArgs *)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Microsoft::WRL::FtmBase>,_lambda_2a07431b028f5ee37e3077b9dff53ccb_,-1,IInspectable *,Windows::System::IAppMemoryUsageLimitChangingEventArgs *>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  return a1;
}
