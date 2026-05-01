/*
 * XREFs of ??$CreateAgileHelper@U?$ITypedEventHandler@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@W4VirtualDesktopProperty@2345@@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAU?$ITypedEventHandler@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@W4VirtualDesktopProperty@2345@@Foundation@Windows@@PEAPEAU345@@Z @ 0x180208E64
 * Callers:
 *     ?Add@?$AgileEventSource@U?$ITypedEventHandler@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@W4VirtualDesktopProperty@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAU?$ITypedEventHandler@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@W4VirtualDesktopProperty@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180495B2C (-Add@-$AgileEventSource@U-$ITypedEventHandler@PEAUIVirtualDesktop@Multitasking@ComposableShell@I.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$ComPtr@UISecondaryTileFactory@StartScreen@UI@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180064C74 (--1-$ComPtr@UISecondaryTileFactory@StartScreen@UI@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180073448 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??0?$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z @ 0x1800A38E0 (--0-$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z.c)
 *     ??$AsAgile@U?$ITypedEventHandler@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@W4VirtualDesktopProperty@2345@@Foundation@Windows@@@WRL@Microsoft@@YAJPEAU?$ITypedEventHandler@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@W4VirtualDesktopProperty@2345@@Foundation@Windows@@PEAVAgileRef@01@@Z @ 0x180208F44 (--$AsAgile@U-$ITypedEventHandler@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windo.c)
 *     ??$Callback@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@W4VirtualDesktopProperty@2345@@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@W4VirtualDesktopProperty@2345@@Foundation@Windows@@$0?0V_lambda_24f4d56dca417a7cce59563af8e04663_@@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@W4VirtualDesktopProperty@2345@@Foundation@Windows@@EAAJPEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@3@W4VirtualDesktopProperty@5673@@Z@Details@WRL@Microsoft@@SA?AV?$ComPtr@U?$ITypedEventHandler@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@W4VirtualDesktopProperty@2345@@Foundation@Windows@@@23@$$QEAV_lambda_24f4d56dca417a7cce59563af8e04663_@@@Z @ 0x180495970 (--$Callback@U-$Implements@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHan_ea_180495970.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::CreateAgileHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,enum Windows::Internal::ComposableShell::Multitasking::VirtualDesktopProperty>>(
        __int64 a1,
        __int64 **a2)
{
  __int64 *v4; // rax
  int v5; // ebx
  __int64 v6; // rcx
  _QWORD *v8; // rax
  __int64 *v9; // rax
  __int64 v10; // rcx
  __int64 *v11; // [rsp+48h] [rbp+28h] BYREF
  __int64 **v12; // [rsp+50h] [rbp+30h] BYREF
  __int64 v13; // [rsp+58h] [rbp+38h] BYREF

  *a2 = 0LL;
  v11 = 0LL;
  v12 = &v11;
  v4 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *((__int64 **)&v12);
  v5 = Microsoft::WRL::AsAgile<Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,enum Windows::Internal::ComposableShell::Multitasking::VirtualDesktopProperty>>(
         a1,
         v4);
  if ( v5 >= 0 )
  {
    v8 = Microsoft::WRL::ComPtr<CFrameApplicationPresentation>::ComPtr<CFrameApplicationPresentation>(&v13, &v11);
    Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,enum Windows::Internal::ComposableShell::Multitasking::VirtualDesktopProperty>::*)(Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,enum Windows::Internal::ComposableShell::Multitasking::VirtualDesktopProperty)>::Callback<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,enum Windows::Internal::ComposableShell::Multitasking::VirtualDesktopProperty>,Microsoft::WRL::FtmBase>,Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,enum Windows::Internal::ComposableShell::Multitasking::VirtualDesktopProperty>,-1,_lambda_24f4d56dca417a7cce59563af8e04663_>(
      &v12,
      v8);
    Microsoft::WRL::ComPtr<Windows::UI::StartScreen::ISecondaryTileFactory>::~ComPtr<Windows::UI::StartScreen::ISecondaryTileFactory>(&v13);
    v9 = (__int64 *)v12;
    if ( v12 )
    {
      v12 = 0LL;
      *a2 = v9;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v12);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v11);
      return 0LL;
    }
    else
    {
      v10 = (__int64)v11;
      if ( v11 )
      {
        v11 = (__int64 *)v12;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
      return 2147942414LL;
    }
  }
  else
  {
    v6 = (__int64)v11;
    if ( v11 )
    {
      v11 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    return (unsigned int)v5;
  }
}
