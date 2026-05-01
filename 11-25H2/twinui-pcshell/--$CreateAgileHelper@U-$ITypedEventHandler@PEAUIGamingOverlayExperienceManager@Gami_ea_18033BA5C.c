/*
 * XREFs of ??$CreateAgileHelper@U?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAU?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAPEAU345@@Z @ 0x18033BA5C
 * Callers:
 *     ?Add@?$AgileEventSource@U?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAU?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180342CEC (-Add@-$AgileEventSource@U-$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@G_ea_180342CEC.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18001A30C (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$IEventHandler@PEAVRemoteDesktopConnectedEventArgs@Shell@Internal@Windows@@@Foundation@Windows@@VFtmBase@23@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180203900 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$I_ea_180203900.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$Make@U?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_1b429e164c77cafcbbae232a6eea0515_@@$0?0PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@PEAUIInspectable@@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@EAAJPEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@3@PEAUIInspectable@@@Z@Details@WRL@Microsoft@@V_lambda_1b429e164c77cafcbbae232a6eea0515_@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@U?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_1b429e164c77cafcbbae232a6eea0515_@@$0?0PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@PEAUIInspectable@@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@EAAJPEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@3@PEAUIInspectable@@@Z@Details@WRL@Microsoft@@@12@$$QEAV_lambda_1b429e164c77cafcbbae232a6eea0515_@@@Z @ 0x18033C540 (--$Make@U-$DelegateInvokeHelper@U-$Implements@U-$RuntimeClassFlags@$01@WRL@Microsof_ea_18033C540.c)
 */

__int64 __fastcall Microsoft::WRL::Details::CreateAgileHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager *,IInspectable *>>(
        __int64 a1,
        __int64 *a2)
{
  __int64 *v4; // rax
  __int64 *v5; // rbx
  int AgileReference; // ebx
  __int64 *v7; // rax
  __int64 *v8; // rax
  __int64 *v9; // rax
  volatile int *v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 *v14; // [rsp+20h] [rbp-30h] BYREF
  __int64 v15; // [rsp+28h] [rbp-28h] BYREF
  __int64 *v16; // [rsp+30h] [rbp-20h] BYREF
  __int64 v17; // [rsp+38h] [rbp-18h] BYREF

  *a2 = 0LL;
  v16 = 0LL;
  v14 = (__int64 *)&v16;
  v4 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v14);
  v5 = v4;
  if ( a1 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v4);
    AgileReference = RoGetAgileReference(0LL, &GUID_e68faa72_52a3_5bc4_b581_d65a15f3e561, a1, v5);
    if ( AgileReference < 0 )
      goto LABEL_10;
  }
  else
  {
    v7 = (__int64 *)*v4;
    v15 = 0LL;
    *v5 = 0LL;
    v14 = v7;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
  }
  v8 = v16;
  v16 = 0LL;
  v14 = v8;
  v9 = (__int64 *)Microsoft::WRL::Details::Make<Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager *,IInspectable *>::*)(Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager *,IInspectable *)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager *,IInspectable *>,Microsoft::WRL::FtmBase>,_lambda_1b429e164c77cafcbbae232a6eea0515_,-1,Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager *,IInspectable *>,_lambda_1b429e164c77cafcbbae232a6eea0515_>(
                    &v15,
                    &v14);
  v11 = *v9;
  *v9 = 0LL;
  v12 = v15;
  v17 = v11;
  if ( v15 )
  {
    v15 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<Windows::Internal::Shell::RemoteDesktopConnectedEventArgs *>,Microsoft::WRL::FtmBase>>::Release(
      v12,
      v10);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
  if ( v11 )
  {
    v17 = 0LL;
    *a2 = v11;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
    AgileReference = 0;
  }
  else
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
    AgileReference = -2147024882;
  }
LABEL_10:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
  return (unsigned int)AgileReference;
}
