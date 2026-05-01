/*
 * XREFs of ??$CreateAgileHelper@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAU?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@PEAPEAU345@@Z @ 0x180001910
 * Callers:
 *     ?Add@?$AgileEventSource@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAU?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x18000183C (-Add@-$AgileEventSource@U-$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800018E4 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180012D28 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_2a07431b028f5ee37e3077b9dff53ccb_@@$0?0PEAUIInspectable@@PEAUIAppMemoryUsageLimitChangingEventArgs@System@Windows@@@?$DelegateArgTraits@P8?$IEventHandler_impl@U?$AggregateType@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@PEAUIAppMemoryUsageLimitChangingEventArgs@23@@Internal@Foundation@Windows@@@Foundation@Windows@@EAAJPEAUIInspectable@@PEAUIAppMemoryUsageLimitChangingEventArgs@System@3@@Z@Details@WRL@Microsoft@@QEAA@$$QEAV_lambda_2a07431b028f5ee37e3077b9dff53ccb_@@@Z @ 0x1800171C4 (--0-$DelegateInvokeHelper@U-$Implements@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$_ea_1800171C4.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18001C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::CreateAgileHelper<Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>>(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // rax
  int AgileReference; // ebx
  void *v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v10; // rcx
  __int64 v11; // [rsp+40h] [rbp+20h] BYREF
  __int64 v12; // [rsp+48h] [rbp+28h] BYREF
  __int64 v13; // [rsp+50h] [rbp+30h] BYREF

  v2 = 0LL;
  *a2 = 0LL;
  v11 = 0LL;
  if ( !a1 )
  {
LABEL_4:
    v12 = v2;
    v11 = 0LL;
    v6 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v6 )
      v7 = Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::IEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::System::AppMemoryUsageLimitChangingEventArgs *,Windows::System::IAppMemoryUsageLimitChangingEventArgs *>>::*)(IInspectable *,Windows::System::IAppMemoryUsageLimitChangingEventArgs *)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Microsoft::WRL::FtmBase>,_lambda_2a07431b028f5ee37e3077b9dff53ccb_,-1,IInspectable *,Windows::System::IAppMemoryUsageLimitChangingEventArgs *>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Microsoft::WRL::FtmBase>,_lambda_2a07431b028f5ee37e3077b9dff53ccb_,-1,IInspectable *,Windows::System::IAppMemoryUsageLimitChangingEventArgs *>(
             v6,
             &v12);
    else
      v7 = 0LL;
    v13 = v7;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
    if ( v7 )
    {
      v8 = v11;
      *a2 = v7;
      if ( v8 )
      {
        v11 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      }
      return 0LL;
    }
    else
    {
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v11);
      return 2147942414LL;
    }
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v11);
  AgileReference = RoGetAgileReference(0LL, &GUID_6030e7c3_f93f_5e9c_9ba2_9a018d2b09c0, a1, &v11);
  if ( AgileReference >= 0 )
  {
    v2 = v11;
    goto LABEL_4;
  }
  v10 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return (unsigned int)AgileReference;
}
