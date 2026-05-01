/*
 * XREFs of ?Add@?$AgileEventSource@U?$IEventHandler@_N@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAU?$IEventHandler@_N@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x1802164B4
 * Callers:
 *     ?add_OverlayDisplayFullscreenChanged@GamingOverlayExperienceManager@@UEAAJPEAU?$IEventHandler@_N@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180216450 (-add_OverlayDisplayFullscreenChanged@GamingOverlayExperienceManager@@UEAAJPEAU-$IEventHandler@_N.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$CreateAgileHelper@U?$IEventHandler@_N@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAU?$IEventHandler@_N@Foundation@Windows@@PEAPEAU345@@Z @ 0x180243464 (--$CreateAgileHelper@U-$IEventHandler@_N@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAU-$IE.c)
 *     ?AddInternal@?$EventSource@U?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x1802443AC (-AddInternal@-$EventSource@U-$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverl.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

__int64 __fastcall Microsoft::WRL::AgileEventSource<Windows::Foundation::IEventHandler<bool>,Microsoft::WRL::InvokeModeOptions<-2>>::Add(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  int v7; // ebx
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF

  if ( !a2 )
    return 2147942487LL;
  v8 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v8);
  v7 = Microsoft::WRL::Details::CreateAgileHelper<Windows::Foundation::IEventHandler<bool>>(a2, &v8);
  if ( v7 >= 0 )
  {
    if ( v8 )
      v7 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::AddInternal(
             a1,
             v8,
             *(_QWORD *)(*(_QWORD *)a2 + 24LL),
             a3);
    else
      v7 = -2147024809;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v8);
  return (unsigned int)v7;
}
