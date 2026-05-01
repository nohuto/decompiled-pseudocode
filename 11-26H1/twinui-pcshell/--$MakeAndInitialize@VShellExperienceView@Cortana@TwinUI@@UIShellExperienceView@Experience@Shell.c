/*
 * XREFs of ??$MakeAndInitialize@VShellExperienceView@Cortana@TwinUI@@UIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIServiceProvider@@PEAUHSTRING__@@PEAUHSTRING__@@PEAUHSTRING__@@W4ZBID@@@Details@WRL@Microsoft@@YAJPEAPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@$$QEAPEAUIServiceProvider@@$$QEAPEAUHSTRING__@@22$$QEAW4ZBID@@@Z @ 0x180370848
 * Callers:
 *     ??$MakeAndInitialize@VShellExperienceView@Cortana@TwinUI@@UIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIServiceProvider@@PEAUHSTRING__@@PEAUHSTRING__@@PEAUHSTRING__@@W4ZBID@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIShellExperienceView@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@@012@$$QEAPEAUIServiceProvider@@$$QEAPEAUHSTRING__@@22$$QEAW4ZBID@@@Z @ 0x180370928 (--$MakeAndInitialize@VShellExperienceView@Cortana@TwinUI@@UIShellExperienceView@Exp_ea_180370928.c)
 * Callees:
 *     ??1?$MakeAllocator@U?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAVCoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAVCoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@23456@@Foundation@Windows@@V_lambda_3d673f836d44ef639fe032b9aedce249_@@$0?0PEAUICoreKeyboardManager@Core@Text@Internal@UI@3@PEAUICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@67893@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVCoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManager@23456@@Internal@Foundation@Windows@@U?$AggregateType@PEAVCoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@23456@@234@@Foundation@Windows@@EAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@3@PEAUICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@56783@@Z@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18003E578 (--1-$MakeAllocator@U-$DelegateInvokeHelper@U-$ITypedEventHandler@PEAVCoreKeyboardManager@Core@Te.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIShellExperienceView@Experience@Shell@Internal@Windows@@VIShellExperienceViewLifetime@Cortana@TwinUI@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIShellExperienceView@Experience@Shell@Internal@Windows@@VIShellExperienceViewLifetime@Cortana@TwinUI@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18036F8F0 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIShellExperience.c)
 *     ??0ShellExperienceView@Cortana@TwinUI@@QEAA@XZ @ 0x180371654 (--0ShellExperienceView@Cortana@TwinUI@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIShellExperienceView@Experience@Shell@Internal@Windows@@VIShellExperienceViewLifetime@Cortana@TwinUI@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1803749D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIShellExperienceV.c)
 *     ?RuntimeClassInitialize@ShellExperienceView@Cortana@TwinUI@@QEAAJPEAUIServiceProvider@@PEAUHSTRING__@@11W4ZBID@@@Z @ 0x1803BF750 (-RuntimeClassInitialize@ShellExperienceView@Cortana@TwinUI@@QEAAJPEAUIServiceProvider@@PEAUHSTRI.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<TwinUI::Cortana::ShellExperienceView,Windows::Internal::Shell::Experience::IShellExperienceView,IServiceProvider *,HSTRING__ *,HSTRING__ *,HSTRING__ *,enum ZBID>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5,
        _DWORD *a6)
{
  void *v10; // rax
  int v11; // edi
  __int64 v12; // rbx
  void *v14; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v10 = operator new(0x138uLL, (const struct std::nothrow_t *)&std::nothrow);
  v14 = v10;
  if ( v10 )
  {
    v12 = TwinUI::Cortana::ShellExperienceView::ShellExperienceView((TwinUI::Cortana::ShellExperienceView *)v10);
    v14 = 0LL;
    v11 = TwinUI::Cortana::ShellExperienceView::RuntimeClassInitialize(v12, *a2, *a3, *a4, *a5, *a6, v12);
    if ( v11 >= 0 )
      v11 = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IShellExperienceView,TwinUI::Cortana::IShellExperienceViewLifetime>>(
              v12,
              &GUID_9f8649aa_a188_4bda_a412_ecb6807c94d8,
              a1);
    if ( v12 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IShellExperienceView,TwinUI::Cortana::IShellExperienceViewLifetime>::Release(v12);
  }
  else
  {
    v11 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>::*)(Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>,_lambda_3d673f836d44ef639fe032b9aedce249_,-1,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>::~MakeAllocator<Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>::*)(Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>,_lambda_3d673f836d44ef639fe032b9aedce249_,-1,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>(&v14);
  return (unsigned int)v11;
}
