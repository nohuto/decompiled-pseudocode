/*
 * XREFs of ??_G?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$IEventHandler@_N@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_ad7f2d654b2bbc380aea48949c6850ae_@@$0?0PEAUIInspectable@@E@?$DelegateArgTraits@P8?$IEventHandler_impl@U?$AggregateType@_NE@Internal@Foundation@Windows@@@Foundation@Windows@@EAAJPEAUIInspectable@@E@Z@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180344FB0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1802C9C24 (--3@YAXPEAX@Z.c)
 *     ??1?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIGuidedSnapAssistController@WindowSnapping@Shell@Internal@Windows@@PEAVGuidedSnapAssistCompletedArgs@2345@@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_57817575995e7fe903c2022083be8f21_@@$0?0PEAUIGuidedSnapAssistController@WindowSnapping@Shell@Internal@Windows@@PEAUIGuidedSnapAssistCompletedArgs@6789@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@PEAUIGuidedSnapAssistController@WindowSnapping@Shell@Internal@Windows@@U?$AggregateType@PEAVGuidedSnapAssistCompletedArgs@WindowSnapping@Shell@Internal@Windows@@PEAUIGuidedSnapAssistCompletedArgs@2345@@4Foundation@5@@Foundation@Windows@@EAAJPEAUIGuidedSnapAssistController@WindowSnapping@Shell@Internal@3@PEAUIGuidedSnapAssistCompletedArgs@5673@@Z@Details@WRL@Microsoft@@UEAA@XZ @ 0x180341D14 (--1-$DelegateInvokeHelper@U-$Implements@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHa.c)
 */

void *__fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::IEventHandler_impl<Windows::Foundation::Internal::AggregateType<bool,unsigned char>>::*)(IInspectable *,unsigned char)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<bool>,Microsoft::WRL::FtmBase>,_lambda_ad7f2d654b2bbc380aea48949c6850ae_,-1,IInspectable *,unsigned char>::`scalar deleting destructor'(
        void *Block,
        char a2)
{
  Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistController *,Windows::Foundation::Internal::AggregateType<Windows::Internal::Shell::WindowSnapping::GuidedSnapAssistCompletedArgs *,Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistCompletedArgs *>>::*)(Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistController *,Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistCompletedArgs *)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistController *,Windows::Internal::Shell::WindowSnapping::GuidedSnapAssistCompletedArgs *>,Microsoft::WRL::FtmBase>,_lambda_57817575995e7fe903c2022083be8f21_,-1,Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistController *,Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistCompletedArgs *>::~DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistController *,Windows::Internal::Shell::WindowSnapping::GuidedSnapAssistCompletedArgs *>,Microsoft::WRL::FtmBase>,_lambda_57817575995e7fe903c2022083be8f21_,-1,Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistController *,Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistCompletedArgs *>((__int64)Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
