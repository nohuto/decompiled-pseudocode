/*
 * XREFs of ?RuntimeClassInitialize@CortanaSharedExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x180374FC0
 * Callers:
 *     ??$MakeAndInitialize@VCortanaSharedExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x180370698 (--$MakeAndInitialize@VCortanaSharedExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@D.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$MakeAllocator@U?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAVCoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAVCoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@23456@@Foundation@Windows@@V_lambda_3d673f836d44ef639fe032b9aedce249_@@$0?0PEAUICoreKeyboardManager@Core@Text@Internal@UI@3@PEAUICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@67893@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVCoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManager@23456@@Internal@Foundation@Windows@@U?$AggregateType@PEAVCoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@23456@@234@@Foundation@Windows@@EAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@3@PEAUICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@56783@@Z@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18003E578 (--1-$MakeAllocator@U-$DelegateInvokeHelper@U-$ITypedEventHandler@PEAVCoreKeyboardManager@Core@Te.c)
 *     ??0?$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAA@$$QEAV01@@Z @ 0x1800F6E2C (--0-$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAA@$$QEAV01@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILightDismissNotification@@UIInputHostLayoutChanges@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1802A9EE0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILig_ea_1802A9EE0.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$make_unique_nothrow@VCortanaPositionerSelector@Cortana@TwinUI@@AEAPEAUIServiceProvider@@PEAVCortanaExperienceManagerNotification@@@wil@@YA?AV?$unique_ptr@VCortanaPositionerSelector@Cortana@TwinUI@@U?$default_delete@VCortanaPositionerSelector@Cortana@TwinUI@@@wistd@@@wistd@@AEAPEAUIServiceProvider@@$$QEAPEAVCortanaExperienceManagerNotification@@@Z @ 0x180370E20 (--$make_unique_nothrow@VCortanaPositionerSelector@Cortana@TwinUI@@AEAPEAUIServiceProvider@@PEAVC.c)
 *     ??0CortanaExperienceManagerNotification@@QEAA@PEAVCortanaSharedExperienceManager@@@Z @ 0x1803713B4 (--0CortanaExperienceManagerNotification@@QEAA@PEAVCortanaSharedExperienceManager@@@Z.c)
 *     ??R?$default_delete@VIPositionerSelector@Cortana@TwinUI@@@wistd@@QEBAXPEAVIPositionerSelector@Cortana@TwinUI@@@Z @ 0x180371D78 (--R-$default_delete@VIPositionerSelector@Cortana@TwinUI@@@wistd@@QEBAXPEAVIPositionerSelector@Co.c)
 *     ?RuntimeClassInitialize@CortanaSharedExperienceManager@@QEAAJPEAUIServiceProvider@@PEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@V?$unique_ptr@VIPositionerSelector@Cortana@TwinUI@@U?$default_delete@VIPositionerSelector@Cortana@TwinUI@@@wistd@@@wistd@@@Z @ 0x1803750FC (-RuntimeClassInitialize@CortanaSharedExperienceManager@@QEAAJPEAUIServiceProvider@@PEAVICortanaE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CortanaSharedExperienceManager::RuntimeClassInitialize(
        CortanaSharedExperienceManager *this,
        struct IServiceProvider *a2)
{
  CortanaExperienceManagerNotification *v3; // rbx
  void *v4; // rax
  __int64 v5; // rdi
  __int64 *v6; // rax
  void *v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  __int64 v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+28h]
  void *v14; // [rsp+50h] [rbp+30h] BYREF
  struct IServiceProvider *v15; // [rsp+58h] [rbp+38h] BYREF
  CortanaExperienceManagerNotification *v16; // [rsp+60h] [rbp+40h]
  CortanaExperienceManagerNotification *v17; // [rsp+68h] [rbp+48h] BYREF

  v15 = a2;
  v3 = 0LL;
  v16 = 0LL;
  v4 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v14 = v4;
  v5 = 0LL;
  if ( v4 )
  {
    v3 = CortanaExperienceManagerNotification::CortanaExperienceManagerNotification(
           (CortanaExperienceManagerNotification *)v4,
           this);
    v16 = v3;
    v14 = 0LL;
    v5 = (__int64)v3;
  }
  Microsoft::WRL::Details::MakeAllocator<Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>::*)(Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>,_lambda_3d673f836d44ef639fe032b9aedce249_,-1,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>::~MakeAllocator<Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>::*)(Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>,_lambda_3d673f836d44ef639fe032b9aedce249_,-1,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>(&v14);
  v17 = v3;
  v6 = wil::make_unique_nothrow<TwinUI::Cortana::CortanaPositionerSelector,IServiceProvider * &,CortanaExperienceManagerNotification *>(
         &v14,
         (__int64 *)&v15,
         &v17);
  wistd::unique_ptr<void,wil::process_heap_deleter>::unique_ptr<void,wil::process_heap_deleter>((__int64)&v15, v6);
  v7 = v14;
  v14 = 0LL;
  if ( v7 )
    (*(void (__fastcall **)(void *, __int64))(*(_QWORD *)v7 + 40LL))(v7, 1LL);
  wistd::unique_ptr<void,wil::process_heap_deleter>::unique_ptr<void,wil::process_heap_deleter>(
    (__int64)&v17,
    (__int64 *)&v15);
  v8 = CortanaSharedExperienceManager::RuntimeClassInitialize(this);
  v10 = v8;
  if ( v8 >= 0 )
  {
    if ( v15 )
      wistd::default_delete<TwinUI::Cortana::IPositionerSelector>::operator()(v9, (__int64)v15);
    if ( v5 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ILightDismissNotification,IInputHostLayoutChanges>::Release(v5);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14A,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v8);
    if ( v15 )
      wistd::default_delete<TwinUI::Cortana::IPositionerSelector>::operator()(v11, (__int64)v15);
    if ( v5 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ILightDismissNotification,IInputHostLayoutChanges>::Release(v5);
    return v10;
  }
}
