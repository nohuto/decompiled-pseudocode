/*
 * XREFs of ??$CreateAgileHelper@U?$ITypedEventHandler@PEAUIGuidedSnapAssistController@WindowSnapping@Shell@Internal@Windows@@PEAVGuidedSnapAssistCompletedArgs@2345@@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAU?$ITypedEventHandler@PEAUIGuidedSnapAssistController@WindowSnapping@Shell@Internal@Windows@@PEAVGuidedSnapAssistCompletedArgs@2345@@Foundation@Windows@@PEAPEAU345@@Z @ 0x1805A55AC
 * Callers:
 *     ?Add@?$AgileEventSource@U?$ITypedEventHandler@PEAUIGuidedSnapAssistController@WindowSnapping@Shell@Internal@Windows@@PEAVGuidedSnapAssistCompletedArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAU?$ITypedEventHandler@PEAUIGuidedSnapAssistController@WindowSnapping@Shell@Internal@Windows@@PEAVGuidedSnapAssistCompletedArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x1805A6D7C (-Add@-$AgileEventSource@U-$ITypedEventHandler@PEAUIGuidedSnapAssistController@WindowSnapping@She.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$ComPtr@UISecondaryTileFactory@StartScreen@UI@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180064C74 (--1-$ComPtr@UISecondaryTileFactory@StartScreen@UI@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180073448 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??0?$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z @ 0x1800A38E0 (--0-$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z.c)
 *     ??$Callback@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIGuidedSnapAssistController@WindowSnapping@Shell@Internal@Windows@@PEAVGuidedSnapAssistCompletedArgs@2345@@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIGuidedSnapAssistController@WindowSnapping@Shell@Internal@Windows@@PEAVGuidedSnapAssistCompletedArgs@2345@@Foundation@Windows@@$0?0V_lambda_57817575995e7fe903c2022083be8f21_@@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@PEAUIGuidedSnapAssistController@WindowSnapping@Shell@Internal@Windows@@U?$AggregateType@PEAVGuidedSnapAssistCompletedArgs@WindowSnapping@Shell@Internal@Windows@@PEAUIGuidedSnapAssistCompletedArgs@2345@@4Foundation@5@@Foundation@Windows@@EAAJPEAUIGuidedSnapAssistController@WindowSnapping@Shell@Internal@3@PEAUIGuidedSnapAssistCompletedArgs@5673@@Z@Details@WRL@Microsoft@@SA?AV?$ComPtr@U?$ITypedEventHandler@PEAUIGuidedSnapAssistController@WindowSnapping@Shell@Internal@Windows@@PEAVGuidedSnapAssistCompletedArgs@2345@@Foundation@Windows@@@23@$$QEAV_lambda_57817575995e7fe903c2022083be8f21_@@@Z @ 0x1805A553C (--$Callback@U-$Implements@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEAUIGui.c)
 */

__int64 __fastcall Microsoft::WRL::Details::CreateAgileHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistController *,Windows::Internal::Shell::WindowSnapping::GuidedSnapAssistCompletedArgs *>>(
        __int64 a1,
        __int64 **a2)
{
  __int64 *v4; // rax
  __int64 *v5; // rbx
  int AgileReference; // ebx
  _QWORD *v7; // rax
  __int64 *v8; // rax
  __int64 *v10; // [rsp+40h] [rbp+20h] BYREF
  __int64 v11; // [rsp+48h] [rbp+28h] BYREF
  __int64 v12; // [rsp+50h] [rbp+30h] BYREF

  *a2 = 0LL;
  v11 = 0LL;
  v10 = &v11;
  v4 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v10);
  v5 = v4;
  if ( a1 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v4);
    AgileReference = RoGetAgileReference(0LL, &GUID_df0e62eb_f053_5e02_8da4_f3e5f35c9191, a1, v5);
    if ( AgileReference < 0 )
      goto LABEL_8;
  }
  else
  {
    v10 = (__int64 *)*v4;
    v12 = 0LL;
    *v4 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v10);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
  }
  v7 = Microsoft::WRL::ComPtr<CFrameApplicationPresentation>::ComPtr<CFrameApplicationPresentation>(&v12, &v11);
  Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistController *,Windows::Foundation::Internal::AggregateType<Windows::Internal::Shell::WindowSnapping::GuidedSnapAssistCompletedArgs *,Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistCompletedArgs *>>::*)(Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistController *,Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistCompletedArgs *)>::Callback<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistController *,Windows::Internal::Shell::WindowSnapping::GuidedSnapAssistCompletedArgs *>,Microsoft::WRL::FtmBase>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistController *,Windows::Internal::Shell::WindowSnapping::GuidedSnapAssistCompletedArgs *>,-1,_lambda_57817575995e7fe903c2022083be8f21_>(
    (__int64 *)&v10,
    (__int64)v7);
  Microsoft::WRL::ComPtr<Windows::UI::StartScreen::ISecondaryTileFactory>::~ComPtr<Windows::UI::StartScreen::ISecondaryTileFactory>(&v12);
  v8 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    *a2 = v8;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v10);
    AgileReference = 0;
  }
  else
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v10);
    AgileReference = -2147024882;
  }
LABEL_8:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v11);
  return (unsigned int)AgileReference;
}
