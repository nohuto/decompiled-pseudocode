/*
 * XREFs of ??$MakeAndInitialize@VAppViewIconFactory@@V1@AEAPEAUIApplicationView@@AEAPEAUIApplicationViewIconLoader@@@Details@WRL@Microsoft@@YAJPEAPEAVAppViewIconFactory@@AEAPEAUIApplicationView@@AEAPEAUIApplicationViewIconLoader@@@Z @ 0x18023033C
 * Callers:
 *     ??$MakeAndInitializeOrThrow@VAppViewIconFactory@@AEAPEAUIApplicationView@@AEAPEAUIApplicationViewIconLoader@@@wil@@YA?AV?$ComPtr@VAppViewIconFactory@@@WRL@Microsoft@@AEAPEAUIApplicationView@@AEAPEAUIApplicationViewIconLoader@@@Z @ 0x18029209C (--$MakeAndInitializeOrThrow@VAppViewIconFactory@@AEAPEAUIApplicationView@@AEAPEAUIApplicationVie.c)
 * Callees:
 *     ??1?$MakeAllocator@U?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAVCoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAVCoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@23456@@Foundation@Windows@@V_lambda_3d673f836d44ef639fe032b9aedce249_@@$0?0PEAUICoreKeyboardManager@Core@Text@Internal@UI@3@PEAUICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@67893@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVCoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManager@23456@@Internal@Foundation@Windows@@U?$AggregateType@PEAVCoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@23456@@234@@Foundation@Windows@@EAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@3@PEAUICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@56783@@Z@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18003E578 (--1-$MakeAllocator@U-$DelegateInvokeHelper@U-$ITypedEventHandler@PEAVCoreKeyboardManager@Core@Te.c)
 *     ??4?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180058064 (--4-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QE.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180072320 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??0AppViewIconFactory@@QEAA@XZ @ 0x18020A5EC (--0AppViewIconFactory@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VAppViewIconFactory@@@WRL@Microsoft@@IEAAKXZ @ 0x180292128 (-InternalRelease@-$ComPtr@VAppViewIconFactory@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<AppViewIconFactory,AppViewIconFactory,IApplicationView * &,IApplicationViewIconLoader * &>(
        AppViewIconFactory **a1,
        __int64 *a2,
        __int64 *a3)
{
  AppViewIconFactory *v6; // rax
  AppViewIconFactory *v8; // rax
  __int64 v9; // rdx
  AppViewIconFactory *v10; // rdi
  __int64 v11; // rbx
  volatile int *v12; // rdx
  signed __int64 v13; // rax
  signed __int64 v14; // rtt
  AppViewIconFactory *v15; // [rsp+40h] [rbp+8h] BYREF
  void *v16; // [rsp+58h] [rbp+20h] BYREF

  *a1 = 0LL;
  v6 = (AppViewIconFactory *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v6 )
    return 2147942414LL;
  v8 = AppViewIconFactory::AppViewIconFactory(v6);
  v9 = *a2;
  v10 = v8;
  v11 = *a3;
  v15 = v8;
  v16 = 0LL;
  wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_exception_policy>::operator=(
    (__int64 *)v8 + 4,
    v9);
  wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_exception_policy>::operator=(
    (__int64 *)v10 + 5,
    v11);
  if ( v10 )
  {
    v13 = *((_QWORD *)v10 + 3);
    while ( v13 >= 0 )
    {
      if ( (_DWORD)v13 != 0x7FFFFFFF )
      {
        v14 = v13;
        v13 = _InterlockedCompareExchange64((volatile signed __int64 *)v10 + 3, v13 + 1, v13);
        if ( v14 != v13 )
          continue;
      }
      goto LABEL_10;
    }
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v13 + 16), v12);
  }
LABEL_10:
  *a1 = v10;
  Microsoft::WRL::ComPtr<AppViewIconFactory>::InternalRelease(&v15);
  Microsoft::WRL::Details::MakeAllocator<Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>::*)(Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>,_lambda_3d673f836d44ef639fe032b9aedce249_,-1,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>::~MakeAllocator<Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>::*)(Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>,_lambda_3d673f836d44ef639fe032b9aedce249_,-1,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>(&v16);
  return 0LL;
}
