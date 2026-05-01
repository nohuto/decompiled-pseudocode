/*
 * XREFs of ??$MakeAndInitialize@VWindowManagerBridge@@UIWindowManagerBridge@@PEAVWindowEventDispatcher@@@Details@WRL@Microsoft@@YAJPEAPEAUIWindowManagerBridge@@$$QEAPEAVWindowEventDispatcher@@@Z @ 0x180410958
 * Callers:
 *     ?RuntimeClassInitialize@WindowEventDispatcher@@QEAAJXZ @ 0x18041DA2C (-RuntimeClassInitialize@WindowEventDispatcher@@QEAAJXZ.c)
 * Callees:
 *     ??1?$MakeAllocator@U?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAVCoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAVCoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@23456@@Foundation@Windows@@V_lambda_3d673f836d44ef639fe032b9aedce249_@@$0?0PEAUICoreKeyboardManager@Core@Text@Internal@UI@3@PEAUICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@67893@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVCoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManager@23456@@Internal@Foundation@Windows@@U?$AggregateType@PEAVCoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@23456@@234@@Foundation@Windows@@EAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@3@PEAUICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@56783@@Z@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18003E578 (--1-$MakeAllocator@U-$DelegateInvokeHelper@U-$ITypedEventHandler@PEAVCoreKeyboardManager@Core@Te.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180057770 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ImplementsMarker@VFtmBase@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800E8D98 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00U-$ImplementsMarker@VFt.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIImmersiveShellCreationBehavior@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801F0660 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtm_ea_1801F0660.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0WindowManagerBridge@@QEAA@XZ @ 0x180412B68 (--0WindowManagerBridge@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@WindowManagerBridge@@QEAAJPEAUIWindowEventDispatcherInternal@@@Z @ 0x18042B968 (-RuntimeClassInitialize@WindowManagerBridge@@QEAAJPEAUIWindowEventDispatcherInternal@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<WindowManagerBridge,IWindowManagerBridge,WindowEventDispatcher *>(
        WindowManagerBridge **a1,
        _QWORD *a2)
{
  void *v4; // rax
  int CanCastTo; // edi
  WindowManagerBridge *v6; // rbx
  volatile int *v7; // rdx
  const struct _GUID *v8; // rcx
  const struct _GUID *v9; // r9
  _DWORD *v10; // rdx
  void *v12; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v4 = operator new(0x128uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v4;
  if ( !v4 )
  {
    CanCastTo = -2147024882;
    goto LABEL_12;
  }
  v6 = WindowManagerBridge::WindowManagerBridge((WindowManagerBridge *)v4);
  v12 = 0LL;
  CanCastTo = WindowManagerBridge::RuntimeClassInitialize(
                v6,
                (struct IWindowEventDispatcherInternal *)((*a2 + 16LL) & -(__int64)(*a2 != 0LL)));
  if ( CanCastTo >= 0 )
  {
    *a1 = 0LL;
    if ( InlineIsEqualGUID(&GUID_fd4a9568_9653_4679_88b2_d7d1f960e8e1, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      *a1 = v6;
      (*(void (__fastcall **)(WindowManagerBridge *))(*(_QWORD *)v6 + 8LL))(v6);
      CanCastTo = 0;
    }
    else
    {
      if ( InlineIsEqualGUID(v8, v9) )
      {
        *a1 = v6;
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>::CanCastTo(
                      (__int64)v6 + 8,
                      v10,
                      a1);
        if ( CanCastTo < 0 )
          goto LABEL_10;
      }
      (*(void (__fastcall **)(WindowManagerBridge *))(*(_QWORD *)*a1 + 8LL))(*a1);
    }
  }
LABEL_10:
  if ( v6 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,IImmersiveShellCreationBehavior>::Release(
      (__int64)v6,
      v7);
LABEL_12:
  Microsoft::WRL::Details::MakeAllocator<Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>::*)(Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>,_lambda_3d673f836d44ef639fe032b9aedce249_,-1,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>::~MakeAllocator<Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>::*)(Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>,_lambda_3d673f836d44ef639fe032b9aedce249_,-1,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>(&v12);
  return (unsigned int)CanCastTo;
}
