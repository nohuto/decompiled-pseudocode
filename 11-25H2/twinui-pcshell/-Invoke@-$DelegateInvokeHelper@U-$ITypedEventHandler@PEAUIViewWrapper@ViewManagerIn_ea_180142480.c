/*
 * XREFs of ?Invoke@?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@V_lambda_e70cde33cb0c7d1a2119e2b787893688_@@$0?0PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@3@PEAUIViewEventArgs@6783@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@EAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@3@PEAUIViewEventArgs@5673@@Z@Details@WRL@Microsoft@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@789Windows@@@Z @ 0x180142480
 * Callers:
 *     <none>
 * Callees:
 *     ??R_lambda_e70cde33cb0c7d1a2119e2b787893688_@@QEBA@$$QEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@$$QEAPEAUIViewEventArgs@2345@@Z @ 0x1801424C0 (--R_lambda_e70cde33cb0c7d1a2119e2b787893688_@@QEBA@$$QEAPEAUIViewWrapper@ViewManagerInterop@Shel.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x180142648 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *>::*)(Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *>,_lambda_e70cde33cb0c7d1a2119e2b787893688_,-1,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *>::Invoke(
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
  v3 = _lambda_e70cde33cb0c7d1a2119e2b787893688_::operator()(a1 + 16, &v6, &v7);
  v4 = v3;
  if ( v3 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot((unsigned int)v3);
  return v4;
}
