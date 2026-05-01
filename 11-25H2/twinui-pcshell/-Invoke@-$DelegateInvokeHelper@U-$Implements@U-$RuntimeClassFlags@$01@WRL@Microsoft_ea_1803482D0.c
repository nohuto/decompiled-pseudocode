/*
 * XREFs of ?Invoke@?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@H@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_bda40f208add80671c741db162d8e880_@@$0?0PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@H@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@H@Foundation@Windows@@EAAJPEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@3@H@Z@Details@WRL@Microsoft@@UEAAJPEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@H@Z @ 0x1803482D0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x180142648 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$?RPEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@H@_lambda_bda40f208add80671c741db162d8e880_@@QEBA?A_P$$QEAPEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@$$QEAH@Z @ 0x18033B33C (--$-RPEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@H@_lambda_bda40f208add8.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager *,int>::*)(Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager *,int)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager *,int>,Microsoft::WRL::FtmBase>,_lambda_bda40f208add80671c741db162d8e880_,-1,Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager *,int>::Invoke(
        __int64 a1,
        __int64 a2,
        unsigned int a3)
{
  signed int v3; // eax
  unsigned int v4; // ebx
  __int64 v6; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v7; // [rsp+28h] [rbp-20h] BYREF

  v6 = a2;
  v7 = a3;
  v3 = _lambda_bda40f208add80671c741db162d8e880_::operator()<Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager *,int>(
         (Microsoft::WRL::AgileRef *)(a1 + 64),
         &v6,
         &v7);
  v4 = v3;
  if ( v3 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(v3);
  return v4;
}
