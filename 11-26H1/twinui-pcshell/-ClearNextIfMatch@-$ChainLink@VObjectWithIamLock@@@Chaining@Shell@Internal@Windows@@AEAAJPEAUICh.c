/*
 * XREFs of ?ClearNextIfMatch@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@AEAAJPEAUIChainLink@2345@@Z @ 0x1802FCCD0
 * Callers:
 *     ?HandleChainLinkEvent@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@MEAAJPEAUIChainLink@2345@PEAUIChainLinkEventArgs@2345@@Z @ 0x18022C8D0 (-HandleChainLinkEvent@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@MEAAJPEA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$MakeAllocator@U?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAVCoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAVCoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@23456@@Foundation@Windows@@V_lambda_3d673f836d44ef639fe032b9aedce249_@@$0?0PEAUICoreKeyboardManager@Core@Text@Internal@UI@3@PEAUICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@67893@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVCoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManager@23456@@Internal@Foundation@Windows@@U?$AggregateType@PEAVCoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@23456@@234@@Foundation@Windows@@EAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@3@PEAUICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@56783@@Z@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18003E578 (--1-$MakeAllocator@U-$DelegateInvokeHelper@U-$ITypedEventHandler@PEAVCoreKeyboardManager@Core@Te.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180063200 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800A7308 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??4?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18020E5D4 (--4-$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIJumpViewExperienceEventArgs@Experience@Shell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180216960 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIJumpViewExperien.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1802C047C (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0ChainLinkEventArgs@Chaining@Shell@Internal@Windows@@QEAA@W4ChainLinkEventType@1234@@Z @ 0x1802FBC84 (--0ChainLinkEventArgs@Chaining@Shell@Internal@Windows@@QEAA@W4ChainLinkEventType@1234@@Z.c)
 *     ?Attach@?$ComPtr@VChainLinkEventArgs@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAXPEAVChainLinkEventArgs@Chaining@Shell@Internal@Windows@@@Z @ 0x1802FCB88 (-Attach@-$ComPtr@VChainLinkEventArgs@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAXPEAVC.c)
 *     ?LockExclusive@ObjectWithIamLock@@QEAA?AVCAutoSRWExclusiveLock@@XZ @ 0x1802FE6D4 (-LockExclusive@ObjectWithIamLock@@QEAA-AVCAutoSRWExclusiveLock@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ClearNextIfMatch(
        __int64 a1,
        struct IUnknown *a2)
{
  unsigned int v4; // esi
  struct IUnknown **v5; // rbx
  struct IUnknown **v6; // rdi
  struct IUnknown **v7; // rdi
  __int64 v8; // rdi
  RTL_SRWLOCK *v9; // rbx
  void *v10; // rax
  __int64 v11; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+28h]
  __int64 v14; // [rsp+50h] [rbp+30h] BYREF
  RTL_SRWLOCK *v15; // [rsp+58h] [rbp+38h] BYREF
  void *v16; // [rsp+60h] [rbp+40h] BYREF

  v4 = 0;
  v14 = 0LL;
  ObjectWithIamLock::LockExclusive(a1, &v15);
  v5 = *(struct IUnknown ***)(a1 + 32);
  v6 = *(struct IUnknown ***)(a1 + 40);
  while ( v5 != v6 && !SHIsSameObject(*v5, a2) )
    ++v5;
  v7 = *(struct IUnknown ***)(a1 + 40);
  if ( v5 == v7 )
  {
    v4 = -2147483636;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x24E,
      (int)"onecoreuap\\internal\\shell\\inc\\chaininghelpers.h",
      (const char *)0x8000000CLL);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v15);
  }
  else
  {
    while ( ++v5 != v7 )
      Microsoft::WRL::ComPtr<WeakReference::IWeakReference>::operator=((__int64 *)v5 - 1, (char *)v5);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(*(_QWORD *)(a1 + 40) - 8LL));
    *(_QWORD *)(a1 + 40) -= 8LL;
    Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v14, (_QWORD *)(a1 + 56));
    ++*(_DWORD *)(a1 + 64);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v15);
    v8 = v14;
    if ( v14 )
    {
      v9 = 0LL;
      v15 = 0LL;
      v10 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
      v16 = v10;
      if ( v10 )
      {
        v11 = Windows::Internal::Shell::Chaining::ChainLinkEventArgs::ChainLinkEventArgs((__int64)v10, 2);
        Microsoft::WRL::ComPtr<Windows::Internal::Shell::Chaining::ChainLinkEventArgs>::Attach((__int64 *)&v15, v11);
        v16 = 0LL;
        v9 = v15;
      }
      Microsoft::WRL::Details::MakeAllocator<Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>::*)(Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>,_lambda_3d673f836d44ef639fe032b9aedce249_,-1,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>::~MakeAllocator<Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>::*)(Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>,_lambda_3d673f836d44ef639fe032b9aedce249_,-1,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>(&v16);
      if ( v9 )
        (*(void (__fastcall **)(__int64, __int64, RTL_SRWLOCK *))(*(_QWORD *)v8 + 80LL))(v8, a1, v9);
      else
        wil::details::in1diag3::Log_Hr(
          retaddr,
          (void *)0x263,
          (int)"onecoreuap\\internal\\shell\\inc\\chaininghelpers.h",
          (const char *)0x8007000ELL);
      if ( v9 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::IJumpViewExperienceEventArgs,Microsoft::WRL::FtmBase>::Release((__int64)v9);
    }
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
  return v4;
}
