/*
 * XREFs of ?Add@?$AgileEventSource@U?$ITypedEventHandler@PEAUIGuidedSnapAssistController@WindowSnapping@Shell@Internal@Windows@@PEAVGuidedSnapAssistCompletedArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAU?$ITypedEventHandler@PEAUIGuidedSnapAssistController@WindowSnapping@Shell@Internal@Windows@@PEAVGuidedSnapAssistCompletedArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x1805A6D7C
 * Callers:
 *     ?add_GuidedSnapAssistCompletedEvent@CSnapAssistControllerBase@@UEAAJPEAU?$ITypedEventHandler@PEAUIGuidedSnapAssistController@WindowSnapping@Shell@Internal@Windows@@PEAVGuidedSnapAssistCompletedArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x1805A9190 (-add_GuidedSnapAssistCompletedEvent@CSnapAssistControllerBase@@UEAAJPEAU-$ITypedEventHandler@PEA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?AddInternal@?$EventSource@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@H@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@H@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x1801BE958 (-AddInternal@-$EventSource@U-$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Int.c)
 *     ??$CreateAgileHelper@U?$ITypedEventHandler@PEAUIGuidedSnapAssistController@WindowSnapping@Shell@Internal@Windows@@PEAVGuidedSnapAssistCompletedArgs@2345@@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAU?$ITypedEventHandler@PEAUIGuidedSnapAssistController@WindowSnapping@Shell@Internal@Windows@@PEAVGuidedSnapAssistCompletedArgs@2345@@Foundation@Windows@@PEAPEAU345@@Z @ 0x1805A55AC (--$CreateAgileHelper@U-$ITypedEventHandler@PEAUIGuidedSnapAssistController@WindowSnapping@Shell@.c)
 */

__int64 __fastcall Microsoft::WRL::AgileEventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistController *,Windows::Internal::Shell::WindowSnapping::GuidedSnapAssistCompletedArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::Add(
        __int64 a1,
        __int64 a2,
        struct IUnknown **a3)
{
  int v7; // ebx
  struct IUnknown *v8; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
    return 2147942487LL;
  v8 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v8);
  v7 = Microsoft::WRL::Details::CreateAgileHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistController *,Windows::Internal::Shell::WindowSnapping::GuidedSnapAssistCompletedArgs *>>(
         a2,
         (__int64 **)&v8);
  if ( v7 >= 0 )
  {
    if ( v8 )
      v7 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,int>,Microsoft::WRL::InvokeModeOptions<2>>::AddInternal(
             a1,
             v8,
             *(void **)(*(_QWORD *)a2 + 24LL),
             a3);
    else
      v7 = -2147024809;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v8);
  return (unsigned int)v7;
}
