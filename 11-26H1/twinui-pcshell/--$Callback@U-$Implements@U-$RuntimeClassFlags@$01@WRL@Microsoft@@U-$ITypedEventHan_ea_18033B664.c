/*
 * XREFs of ??$Callback@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@_K@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@_K@Foundation@Windows@@$0?0V_lambda_f3f262429735ef682d84777a2934dc44_@@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@_K@Foundation@Windows@@EAAJPEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@3@_K@Z@Details@WRL@Microsoft@@SA?AV?$ComPtr@U?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@_K@Foundation@Windows@@@23@$$QEAV_lambda_f3f262429735ef682d84777a2934dc44_@@@Z @ 0x18033B664
 * Callers:
 *     ??$CreateAgileHelper@U?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@_K@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAU?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@_K@Foundation@Windows@@PEAPEAU345@@Z @ 0x18033B924 (--$CreateAgileHelper@U-$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@Gami_ea_18033B924.c)
 * Callees:
 *     ??1?$MakeAllocator@VNonAgileDispatcher@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18021EC08 (--1-$MakeAllocator@VNonAgileDispatcher@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@_K@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_f3f262429735ef682d84777a2934dc44_@@$0?0PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@_K@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@_K@Foundation@Windows@@EAAJPEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@3@_K@Z@Details@WRL@Microsoft@@QEAA@$$QEAV_lambda_f3f262429735ef682d84777a2934dc44_@@@Z @ 0x180341264 (--0-$DelegateInvokeHelper@U-$Implements@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$_ea_180341264.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager *,unsigned __int64>::*)(Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager *,unsigned __int64)>::Callback<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager *,unsigned __int64>,Microsoft::WRL::FtmBase>,Windows::Foundation::ITypedEventHandler<Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager *,unsigned __int64>,-1,_lambda_f3f262429735ef682d84777a2934dc44_>(
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
    v4 = Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager *,unsigned __int64>::*)(Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager *,unsigned __int64)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager *,unsigned __int64>,Microsoft::WRL::FtmBase>,_lambda_f3f262429735ef682d84777a2934dc44_,-1,Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager *,unsigned __int64>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager *,unsigned __int64>,Microsoft::WRL::FtmBase>,_lambda_f3f262429735ef682d84777a2934dc44_,-1,Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager *,unsigned __int64>(
           v5,
           a2);
    v7 = 0LL;
  }
  Microsoft::WRL::Details::MakeAllocator<NonAgileDispatcher>::~MakeAllocator<NonAgileDispatcher>(&v7);
  result = a1;
  *a1 = v4;
  return result;
}
