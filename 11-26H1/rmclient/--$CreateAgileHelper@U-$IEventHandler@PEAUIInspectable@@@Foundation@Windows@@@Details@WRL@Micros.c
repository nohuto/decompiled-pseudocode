/*
 * XREFs of ??$CreateAgileHelper@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAPEAU345@@Z @ 0x180001720
 * Callers:
 *     ?Add@?$AgileEventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180001500 (-Add@-$AgileEventSource@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U-$InvokeModeOpt.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800018E4 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180012D28 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_ab78ac3a848141b5f56954aedecd34c8_@@$0?0PEAUIInspectable@@PEAU5@@?$DelegateArgTraits@P8?$IEventHandler_impl@PEAUIInspectable@@@Foundation@Windows@@EAAJPEAUIInspectable@@0@Z@Details@WRL@Microsoft@@QEAA@$$QEAV_lambda_ab78ac3a848141b5f56954aedecd34c8_@@@Z @ 0x180017118 (--0-$DelegateInvokeHelper@U-$Implements@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$IEventHandler.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18001C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::CreateAgileHelper<Windows::Foundation::IEventHandler<IInspectable *>>(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // rax
  int AgileReference; // ebx
  __int64 v6; // rcx
  void *v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // [rsp+30h] [rbp+10h] BYREF
  __int64 v12; // [rsp+38h] [rbp+18h] BYREF

  v2 = 0LL;
  *a2 = 0LL;
  v11 = 0LL;
  if ( a1 )
  {
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v11);
    AgileReference = RoGetAgileReference(0LL, &GUID_c50898f6_c536_5f47_8583_8b2c2438a13b, a1, &v11);
    if ( AgileReference < 0 )
    {
      v6 = v11;
      if ( v11 )
      {
        v11 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      }
      return (unsigned int)AgileReference;
    }
    v2 = v11;
  }
  v12 = v2;
  v11 = 0LL;
  v8 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
    v9 = Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::IEventHandler_impl<IInspectable *>::*)(IInspectable *,IInspectable *)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::FtmBase>,_lambda_ab78ac3a848141b5f56954aedecd34c8_,-1,IInspectable *,IInspectable *>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::FtmBase>,_lambda_ab78ac3a848141b5f56954aedecd34c8_,-1,IInspectable *,IInspectable *>(
           v8,
           &v12);
  else
    v9 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
  v10 = v11;
  if ( v9 )
  {
    *a2 = v9;
    if ( v10 )
    {
      v11 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    return 0LL;
  }
  else
  {
    if ( v11 )
    {
      v11 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    return 2147942414LL;
  }
}
