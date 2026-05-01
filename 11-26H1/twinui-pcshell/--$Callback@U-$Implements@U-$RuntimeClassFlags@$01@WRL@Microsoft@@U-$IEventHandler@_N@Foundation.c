/*
 * XREFs of ??$Callback@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$IEventHandler@_N@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@U?$IEventHandler@_N@Foundation@Windows@@$0?0V_lambda_ad7f2d654b2bbc380aea48949c6850ae_@@@?$DelegateArgTraits@P8?$IEventHandler_impl@U?$AggregateType@_NE@Internal@Foundation@Windows@@@Foundation@Windows@@EAAJPEAUIInspectable@@E@Z@Details@WRL@Microsoft@@SA?AV?$ComPtr@U?$IEventHandler@_N@Foundation@Windows@@@23@$$QEAV_lambda_ad7f2d654b2bbc380aea48949c6850ae_@@@Z @ 0x18033B514
 * Callers:
 *     ??$CreateAgileHelper@U?$IEventHandler@_N@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAU?$IEventHandler@_N@Foundation@Windows@@PEAPEAU345@@Z @ 0x1802345F4 (--$CreateAgileHelper@U-$IEventHandler@_N@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAU-$IE.c)
 * Callees:
 *     ??1?$MakeAllocator@VNonAgileDispatcher@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18021EC08 (--1-$MakeAllocator@VNonAgileDispatcher@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$IEventHandler@_N@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_ad7f2d654b2bbc380aea48949c6850ae_@@$0?0PEAUIInspectable@@E@?$DelegateArgTraits@P8?$IEventHandler_impl@U?$AggregateType@_NE@Internal@Foundation@Windows@@@Foundation@Windows@@EAAJPEAUIInspectable@@E@Z@Details@WRL@Microsoft@@QEAA@$$QEAV_lambda_ad7f2d654b2bbc380aea48949c6850ae_@@@Z @ 0x180341060 (--0-$DelegateInvokeHelper@U-$Implements@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$IEventHandler.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::IEventHandler_impl<Windows::Foundation::Internal::AggregateType<bool,unsigned char>>::*)(IInspectable *,unsigned char)>::Callback<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<bool>,Microsoft::WRL::FtmBase>,Windows::Foundation::IEventHandler<bool>,-1,_lambda_ad7f2d654b2bbc380aea48949c6850ae_>(
        __int64 *a1,
        __int64 a2)
{
  __int64 v4; // rbx
  void *v5; // rax
  __int64 *result; // rax
  void *v7; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0LL;
  v5 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v5;
  if ( v5 )
  {
    v4 = Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::IEventHandler_impl<Windows::Foundation::Internal::AggregateType<bool,unsigned char>>::*)(IInspectable *,unsigned char)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<bool>,Microsoft::WRL::FtmBase>,_lambda_ad7f2d654b2bbc380aea48949c6850ae_,-1,IInspectable *,unsigned char>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<bool>,Microsoft::WRL::FtmBase>,_lambda_ad7f2d654b2bbc380aea48949c6850ae_,-1,IInspectable *,unsigned char>(
           v5,
           a2);
    v7 = 0LL;
  }
  Microsoft::WRL::Details::MakeAllocator<NonAgileDispatcher>::~MakeAllocator<NonAgileDispatcher>(&v7);
  result = a1;
  *a1 = v4;
  return result;
}
