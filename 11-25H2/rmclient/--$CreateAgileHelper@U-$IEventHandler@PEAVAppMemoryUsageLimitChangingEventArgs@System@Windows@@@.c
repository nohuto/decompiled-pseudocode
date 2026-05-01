/*
 * XREFs of ??$CreateAgileHelper@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAU?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@PEAPEAU345@@Z @ 0x180001B0C
 * Callers:
 *     ?Add@?$AgileEventSource@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAU?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180001A3C (-Add@-$AgileEventSource@U-$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180001AE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x1800020C0 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180013CF8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18001D010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::CreateAgileHelper<Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>>(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rdi
  int AgileReference; // ebx
  _QWORD *v6; // rbx
  struct Microsoft::WRL::Details::ModuleBase *v7; // rcx
  __int64 v8; // rcx
  __int64 v10; // rcx
  __int64 v11[2]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v12; // [rsp+50h] [rbp+20h] BYREF
  _QWORD *v13; // [rsp+58h] [rbp+28h] BYREF

  *a2 = 0LL;
  v2 = 0LL;
  v12 = 0LL;
  if ( !a1 )
    goto LABEL_4;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
  AgileReference = RoGetAgileReference(0LL, &GUID_6030e7c3_f93f_5e9c_9ba2_9a018d2b09c0, a1, &v12);
  if ( AgileReference >= 0 )
  {
    v2 = v12;
LABEL_4:
    v12 = 0LL;
    v11[0] = v2;
    v6 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v6 )
    {
      *v6 = &Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>::`vftable';
      Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v6 + 1));
      v7 = Microsoft::WRL::Details::ModuleBase::module_;
      *v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Microsoft::WRL::FtmBase>>::`vftable'{for `Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>'};
      v6[1] = &Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::IEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::System::AppMemoryUsageLimitChangingEventArgs *,Windows::System::IAppMemoryUsageLimitChangingEventArgs *>>::*)(IInspectable *,Windows::System::IAppMemoryUsageLimitChangingEventArgs *)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Microsoft::WRL::FtmBase>,_lambda_19c629caca3fc168e565f554a8149559_,-1,IInspectable *,Windows::System::IAppMemoryUsageLimitChangingEventArgs *>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
      *((_DWORD *)v6 + 15) = 1;
      if ( v7 )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v7 + 8LL))(v7);
      v6[8] = 0LL;
      if ( v6 + 8 != v11 )
      {
        v11[0] = 0LL;
        v6[8] = v2;
      }
      *v6 = &Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::IEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::System::AppMemoryUsageLimitChangingEventArgs *,Windows::System::IAppMemoryUsageLimitChangingEventArgs *>>::*)(IInspectable *,Windows::System::IAppMemoryUsageLimitChangingEventArgs *)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Microsoft::WRL::FtmBase>,_lambda_19c629caca3fc168e565f554a8149559_,-1,IInspectable *,Windows::System::IAppMemoryUsageLimitChangingEventArgs *>::`vftable'{for `Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>'};
      v6[1] = &Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::IEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::System::AppMemoryUsageLimitChangingEventArgs *,Windows::System::IAppMemoryUsageLimitChangingEventArgs *>>::*)(IInspectable *,Windows::System::IAppMemoryUsageLimitChangingEventArgs *)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Microsoft::WRL::FtmBase>,_lambda_19c629caca3fc168e565f554a8149559_,-1,IInspectable *,Windows::System::IAppMemoryUsageLimitChangingEventArgs *>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    }
    else
    {
      v6 = 0LL;
    }
    v13 = v6;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v11);
    if ( v6 )
    {
      v8 = v12;
      *a2 = v6;
      if ( v8 )
      {
        v12 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      }
      return 0LL;
    }
    else
    {
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v13);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
      return 2147942414LL;
    }
  }
  v10 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return (unsigned int)AgileReference;
}
