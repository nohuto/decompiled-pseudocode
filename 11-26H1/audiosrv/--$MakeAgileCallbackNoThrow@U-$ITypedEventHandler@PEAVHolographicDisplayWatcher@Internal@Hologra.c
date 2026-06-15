/*
 * XREFs of ??$MakeAgileCallbackNoThrow@U?$ITypedEventHandler@PEAVHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAVHolographicDisplay@345@@Foundation@Windows@@PEAVCExclusiveModeListener@@P84@EAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@Graphics@3@PEAUIHolographicDisplay@783@@Z@wil@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAVHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAVHolographicDisplay@345@@Foundation@Windows@@@WRL@Microsoft@@$$QEAPEAVCExclusiveModeListener@@$$QEAP84@EAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAUIHolographicDisplay@789@@Z@Z @ 0x1801500DC
 * Callers:
 *     ?OnHoloshellStateChange@CExclusiveModeListener@@AEAAXW4ShellState@Holographic@Shell@Internal@Windows@@@Z @ 0x180151588 (-OnHoloshellStateChange@CExclusiveModeListener@@AEAAXW4ShellState@Holographic@Shell@Internal@Win.c)
 * Callees:
 *     ??1?$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800ABBDC (--1-$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAVHolographicDisplay@345@@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_a11a470e7686d624c84238f12cb38e5c_@@$0?0PEAUIHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAUIHolographicDisplay@789@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAUIHolographicDisplayWatcher@2345@@Internal@Foundation@Windows@@U?$AggregateType@PEAVHolographicDisplay@Holographic@Graphics@Windows@@PEAUIHolographicDisplay@234@@234@@Foundation@Windows@@EAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@Graphics@3@PEAUIHolographicDisplay@673@@Z@Details@WRL@Microsoft@@QEAA@$$QEAV_lambda_a11a470e7686d624c84238f12cb38e5c_@@@Z @ 0x180150974 (--0-$DelegateInvokeHelper@U-$Implements@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHa.c)
 */

__int64 *__fastcall wil::MakeAgileCallbackNoThrow<Windows::Foundation::ITypedEventHandler<Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher *,Windows::Graphics::Holographic::HolographicDisplay *>,CExclusiveModeListener *,long (CExclusiveModeListener::*)(Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher *,Windows::Graphics::Holographic::IHolographicDisplay *)>(
        __int64 *a1,
        __int64 *a2,
        __int128 *a3)
{
  __int128 v4; // xmm0
  __int64 v5; // rbx
  void *v6; // rax
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  __int128 v9; // [rsp+28h] [rbp-20h]
  void *v10; // [rsp+50h] [rbp+8h] BYREF

  v4 = *a3;
  v5 = 0LL;
  v8 = *a2;
  v9 = v4;
  v6 = operator new[](0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v6;
  if ( v6 )
  {
    v5 = Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher *,Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher *>,Windows::Foundation::Internal::AggregateType<Windows::Graphics::Holographic::HolographicDisplay *,Windows::Graphics::Holographic::IHolographicDisplay *>>::*)(Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher *,Windows::Graphics::Holographic::IHolographicDisplay *)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher *,Windows::Graphics::Holographic::HolographicDisplay *>,Microsoft::WRL::FtmBase>,_lambda_a11a470e7686d624c84238f12cb38e5c_,-1,Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher *,Windows::Graphics::Holographic::IHolographicDisplay *>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher *,Windows::Graphics::Holographic::HolographicDisplay *>,Microsoft::WRL::FtmBase>,_lambda_a11a470e7686d624c84238f12cb38e5c_,-1,Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher *,Windows::Graphics::Holographic::IHolographicDisplay *>(
           v6,
           &v8);
    v10 = 0LL;
  }
  Microsoft::WRL::Details::MakeAllocator<CAudioRenderEndpointChangeDelegator>::~MakeAllocator<CAudioRenderEndpointChangeDelegator>(&v10);
  *a1 = v5;
  return a1;
}
