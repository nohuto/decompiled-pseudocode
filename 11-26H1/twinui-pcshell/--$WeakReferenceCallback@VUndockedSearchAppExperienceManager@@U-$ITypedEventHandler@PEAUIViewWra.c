/*
 * XREFs of ??$WeakReferenceCallback@VUndockedSearchAppExperienceManager@@U?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@4@PEAUIViewEventArgs@6784@@WRL@Microsoft@@YAJPEAVUndockedSearchAppExperienceManager@@P82@EAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@4567@@ZPEAPEAU?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@7@@Z @ 0x180160974
 * Callers:
 *     ?RegisterViewEventDispatcherHandler@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x18023E718 (-RegisterViewEventDispatcherHandler@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?GetWeakReference@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@UIInitializeTrustedComponentForegroundControl@@VIDeferralMessage@@@Details@WRL@Microsoft@@UEAAJPEAPEAUIWeakReference@@@Z @ 0x180160D40 (-GetWeakReference@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UICortana.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@V_lambda_e70cde33cb0c7d1a2119e2b787893688_@@$0?0PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@3@PEAUIViewEventArgs@6783@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@EAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@3@PEAUIViewEventArgs@5673@@Z@Details@WRL@Microsoft@@QEAA@$$QEAV_lambda_e70cde33cb0c7d1a2119e2b787893688_@@@Z @ 0x1803AD528 (--0-$DelegateInvokeHelper@U-$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Intern.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::WeakReferenceCallback<UndockedSearchAppExperienceManager,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *>,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *>(
        __int64 a1,
        __int128 *a2,
        _QWORD *a3)
{
  signed int WeakReference; // ebx
  void *v7; // rax
  __int64 v8; // rcx
  __int64 v10[2]; // [rsp+20h] [rbp-20h] BYREF
  __int128 v11; // [rsp+30h] [rbp-10h]
  __int64 v12; // [rsp+60h] [rbp+20h] BYREF

  *a3 = 0LL;
  v12 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
  WeakReference = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::ICortanaExperienceManager,IInitializeTrustedComponentForegroundControl,IDeferralMessage>::GetWeakReference(
                    a1 + 8,
                    &v12);
  if ( WeakReference >= 0 )
  {
    v10[0] = v12;
    v12 = 0LL;
    v10[1] = a1;
    v11 = *a2;
    v7 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v7 )
      v7 = (void *)Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *>::*)(Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *>,_lambda_e70cde33cb0c7d1a2119e2b787893688_,-1,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *>,_lambda_e70cde33cb0c7d1a2119e2b787893688_,-1,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *>(
                     v7,
                     v10);
    *a3 = v7;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v10);
    WeakReference = *a3 == 0LL ? 0x8007000E : 0;
  }
  v8 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return (unsigned int)WeakReference;
}
