/*
 * XREFs of ??$CreateAgileHelper@U?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@H@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAU?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@H@Foundation@Windows@@PEAPEAU345@@Z @ 0x18033B6D4
 * Callers:
 *     ?add_AudioActiveSessionChanged@GamingOverlayExperienceManager@@UEAAJPEAU?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@H@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180358BC0 (-add_AudioActiveSessionChanged@GamingOverlayExperienceManager@@UEAAJPEAU-$ITypedEventHandler@PEA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180073448 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$Callback@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@H@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@H@Foundation@Windows@@$0?0V_lambda_0f084028f3f1fa8d0b79b72e591b23b1_@@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@H@Foundation@Windows@@EAAJPEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@3@H@Z@Details@WRL@Microsoft@@SA?AV?$ComPtr@U?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@H@Foundation@Windows@@@23@$$QEAV_lambda_0f084028f3f1fa8d0b79b72e591b23b1_@@@Z @ 0x18033B584 (--$Callback@U-$Implements@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEAUIGam.c)
 */

__int64 __fastcall Microsoft::WRL::Details::CreateAgileHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager *,int>>(
        __int64 a1,
        __int64 *a2)
{
  __int64 *v4; // rax
  __int64 *v5; // rbx
  int AgileReference; // ebx
  __int64 v7; // rax
  __int64 v9; // [rsp+20h] [rbp-20h] BYREF
  __int64 **v10; // [rsp+28h] [rbp-18h] BYREF
  __int64 *v11; // [rsp+30h] [rbp-10h] BYREF

  *a2 = 0LL;
  v11 = 0LL;
  v10 = &v11;
  v4 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *((__int64 **)&v10);
  v5 = v4;
  if ( a1 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v4);
    AgileReference = RoGetAgileReference(0LL, &GUID_5d12e0c1_6673_5064_b480_7b7a9f07cba1, a1, v5);
    if ( AgileReference < 0 )
      goto LABEL_8;
  }
  else
  {
    v10 = (__int64 **)*v4;
    v9 = 0LL;
    *v4 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v10);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v9);
  }
  v10 = (__int64 **)v11;
  v9 = 0LL;
  v11 = 0LL;
  Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager *,int>::*)(Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager *,int)>::Callback<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager *,int>,Microsoft::WRL::FtmBase>,Windows::Foundation::ITypedEventHandler<Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager *,int>,-1,_lambda_0f084028f3f1fa8d0b79b72e591b23b1_>(
    &v9,
    (__int64)&v10);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v10);
  v7 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    *a2 = v7;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v9);
    AgileReference = 0;
  }
  else
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v9);
    AgileReference = -2147024882;
  }
LABEL_8:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v11);
  return (unsigned int)AgileReference;
}
