/*
 * XREFs of ??$MakeAndInitialize@VVirtualDesktopCollectionChangedEventArgs@@UIVirtualDesktopCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@W4VirtualDesktopCollectionChangedEventType@3456@PEAUIVirtualDesktop@3456@AEAIAEAI@Details@WRL@Microsoft@@YAJPEAPEAUIVirtualDesktopCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@$$QEAW4VirtualDesktopCollectionChangedEventType@4567@$$QEAPEAUIVirtualDesktop@4567@AEAI3@Z @ 0x180493E74
 * Callers:
 *     ?VirtualDesktopMoved@VirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@II@Z @ 0x1804954B0 (-VirtualDesktopMoved@VirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@II@Z.c)
 * Callees:
 *     ??1?$MakeAllocator@U?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAVCoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAVCoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@23456@@Foundation@Windows@@V_lambda_3d673f836d44ef639fe032b9aedce249_@@$0?0PEAUICoreKeyboardManager@Core@Text@Internal@UI@3@PEAUICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@67893@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVCoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManager@23456@@Internal@Foundation@Windows@@U?$AggregateType@PEAVCoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@23456@@234@@Foundation@Windows@@EAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@3@PEAUICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@56783@@Z@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18003E578 (--1-$MakeAllocator@U-$DelegateInvokeHelper@U-$ITypedEventHandler@PEAVCoreKeyboardManager@Core@Te.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180057770 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180063B10 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakRefe_ea_180063B10.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IIterator@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180216110 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IIterator@UDisp.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0VirtualDesktopCollectionChangedEventArgs@@QEAA@XZ @ 0x1804944E4 (--0VirtualDesktopCollectionChangedEventArgs@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VVirtualDesktopCollectionChangedEventArgs@@@WRL@Microsoft@@QEAAXPEAVVirtualDesktopCollectionChangedEventArgs@@@Z @ 0x1804947A0 (-Attach@-$ComPtr@VVirtualDesktopCollectionChangedEventArgs@@@WRL@Microsoft@@QEAAXPEAVVirtualDesk.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopCollectionChangedEventArgs,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs,enum Windows::Internal::ComposableShell::Multitasking::VirtualDesktopCollectionChangedEventType,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,unsigned int &,unsigned int &>(
        __int64 *a1,
        _DWORD *a2,
        __int64 *a3,
        int *a4,
        int *a5)
{
  void *v9; // rax
  int CanCastTo; // edi
  VirtualDesktopCollectionChangedEventArgs *v11; // rax
  int v12; // ebp
  int v13; // r15d
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rdi
  const struct _GUID *v17; // rcx
  const struct _GUID *v18; // rcx
  const struct _GUID *v19; // r9
  _DWORD *v20; // rdx
  void *v22; // [rsp+20h] [rbp-28h] BYREF
  __int64 v23; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v9 = operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  v22 = v9;
  if ( v9 )
  {
    v11 = VirtualDesktopCollectionChangedEventArgs::VirtualDesktopCollectionChangedEventArgs((VirtualDesktopCollectionChangedEventArgs *)v9);
    v23 = 0LL;
    Microsoft::WRL::ComPtr<VirtualDesktopCollectionChangedEventArgs>::Attach(&v23, v11);
    v22 = 0LL;
    v12 = *a5;
    v13 = *a4;
    v14 = *a3;
    v15 = v23;
    *(_DWORD *)(v23 + 64) = *a2;
    v16 = *(_QWORD *)(v15 + 72);
    *(_QWORD *)(v15 + 72) = v14;
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    *(_DWORD *)(v15 + 80) = v13;
    *(_DWORD *)(v15 + 84) = v12;
    *a1 = 0LL;
    if ( InlineIsEqualGUID(&GUID_441fc94f_1600_5938_827e_084d1252525e, &GUID_00000000_0000_0000_c000_000000000046)
      || InlineIsEqualGUID(v17, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
    {
      *a1 = v15;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
      CanCastTo = 0;
      goto LABEL_14;
    }
    if ( InlineIsEqualGUID(v18, v19) )
    {
      *a1 = v15;
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Microsoft::WRL::FtmBase>::CanCastTo(
                    v15 + 8,
                    v20,
                    a1);
      if ( CanCastTo < 0 )
      {
LABEL_14:
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>,Microsoft::WRL::FtmBase>::Release(v15);
        goto LABEL_15;
      }
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*a1 + 8LL))(*a1);
    goto LABEL_14;
  }
  CanCastTo = -2147024882;
LABEL_15:
  Microsoft::WRL::Details::MakeAllocator<Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>::*)(Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>,_lambda_3d673f836d44ef639fe032b9aedce249_,-1,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>::~MakeAllocator<Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>::*)(Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>,_lambda_3d673f836d44ef639fe032b9aedce249_,-1,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>(&v22);
  return (unsigned int)CanCastTo;
}
