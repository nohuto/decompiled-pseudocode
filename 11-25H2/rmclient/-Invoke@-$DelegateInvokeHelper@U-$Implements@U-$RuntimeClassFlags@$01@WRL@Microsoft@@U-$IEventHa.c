/*
 * XREFs of ?Invoke@?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_19c629caca3fc168e565f554a8149559_@@$0?0PEAUIInspectable@@PEAUIAppMemoryUsageLimitChangingEventArgs@System@Windows@@@?$DelegateArgTraits@P8?$IEventHandler_impl@U?$AggregateType@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@PEAUIAppMemoryUsageLimitChangingEventArgs@23@@Internal@Foundation@Windows@@@Foundation@Windows@@EAAJPEAUIInspectable@@PEAUIAppMemoryUsageLimitChangingEventArgs@System@3@@Z@Details@WRL@Microsoft@@UEAAJPEAUIInspectable@@PEAUIAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Z @ 0x180012300
 * Callers:
 *     <none>
 * Callees:
 *     ??$?RPEAUIInspectable@@PEAUIAppMemoryUsageLimitChangingEventArgs@System@Windows@@@_lambda_19c629caca3fc168e565f554a8149559_@@QEBA?A_P$$QEAPEAUIInspectable@@$$QEAPEAUIAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Z @ 0x180012340 (--$-RPEAUIInspectable@@PEAUIAppMemoryUsageLimitChangingEventArgs@System@Windows@@@_lambda_19c629.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1800185C8 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::IEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::System::AppMemoryUsageLimitChangingEventArgs *,Windows::System::IAppMemoryUsageLimitChangingEventArgs *>>::*)(IInspectable *,Windows::System::IAppMemoryUsageLimitChangingEventArgs *)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Microsoft::WRL::FtmBase>,_lambda_19c629caca3fc168e565f554a8149559_,-1,IInspectable *,Windows::System::IAppMemoryUsageLimitChangingEventArgs *>::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = a3;
  v6 = a2;
  v3 = _lambda_19c629caca3fc168e565f554a8149559_::operator()<IInspectable *,Windows::System::IAppMemoryUsageLimitChangingEventArgs *>(
         a1 + 64,
         &v6,
         &v7);
  v4 = v3;
  if ( v3 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot((unsigned int)v3);
  return v4;
}
