/*
 * XREFs of ??$CreateAgileHelper@U?$ITypedEventHandler@PEAUIVirtualDesktopCollection@Multitasking@ComposableShell@Internal@Windows@@PEAUIVirtualDesktopCollectionChangedEventArgs@2345@@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAU?$ITypedEventHandler@PEAUIVirtualDesktopCollection@Multitasking@ComposableShell@Internal@Windows@@PEAUIVirtualDesktopCollectionChangedEventArgs@2345@@Foundation@Windows@@PEAPEAU345@@Z @ 0x1802A1778
 * Callers:
 *     ?Add@?$AgileEventSource@U?$ITypedEventHandler@PEAUIVirtualDesktopCollection@Multitasking@ComposableShell@Internal@Windows@@PEAUIVirtualDesktopCollectionChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAU?$ITypedEventHandler@PEAUIVirtualDesktopCollection@Multitasking@ComposableShell@Internal@Windows@@PEAUIVirtualDesktopCollectionChangedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x1801D4274 (-Add@-$AgileEventSource@U-$ITypedEventHandler@PEAUIVirtualDesktopCollection@Multitasking@Composa.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$ComPtr@UISecondaryTileFactory@StartScreen@UI@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180064C74 (--1-$ComPtr@UISecondaryTileFactory@StartScreen@UI@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180073448 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??0?$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z @ 0x1800A38E0 (--0-$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z.c)
 *     ??$Callback@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIVirtualDesktopCollection@Multitasking@ComposableShell@Internal@Windows@@PEAUIVirtualDesktopCollectionChangedEventArgs@2345@@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIVirtualDesktopCollection@Multitasking@ComposableShell@Internal@Windows@@PEAUIVirtualDesktopCollectionChangedEventArgs@2345@@Foundation@Windows@@$0?0V_lambda_626f6acbfed1306f6f5bec43fb0197fe_@@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@PEAUIVirtualDesktopCollection@Multitasking@ComposableShell@Internal@Windows@@PEAUIVirtualDesktopCollectionChangedEventArgs@2345@@Foundation@Windows@@EAAJPEAUIVirtualDesktopCollection@Multitasking@ComposableShell@Internal@3@PEAUIVirtualDesktopCollectionChangedEventArgs@5673@@Z@Details@WRL@Microsoft@@SA?AV?$ComPtr@U?$ITypedEventHandler@PEAUIVirtualDesktopCollection@Multitasking@ComposableShell@Internal@Windows@@PEAUIVirtualDesktopCollectionChangedEventArgs@2345@@Foundation@Windows@@@23@$$QEAV_lambda_626f6acbfed1306f6f5bec43fb0197fe_@@@Z @ 0x180493CB0 (--$Callback@U-$Implements@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHan_ea_180493CB0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::CreateAgileHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection *,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs *>>(
        __int64 a1,
        __int64 **a2)
{
  unsigned int v4; // ebx
  __int64 *v5; // rax
  __int64 *v6; // rdi
  int AgileReference; // edi
  __int64 v8; // rcx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  __int64 *v12; // rax
  __int64 v13; // [rsp+50h] [rbp+30h] BYREF
  __int64 *v14; // [rsp+58h] [rbp+38h] BYREF
  __int64 v15; // [rsp+60h] [rbp+40h] BYREF

  v4 = 0;
  *a2 = 0LL;
  v13 = 0LL;
  v14 = &v13;
  v5 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v14);
  v6 = v5;
  if ( a1 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v5);
    AgileReference = RoGetAgileReference(0LL, &GUID_124025da_b849_5830_8545_934fc7b8222f, a1, v6);
    if ( AgileReference < 0 )
    {
      v8 = v13;
      if ( v13 )
      {
        v13 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      }
      return (unsigned int)AgileReference;
    }
  }
  else
  {
    v10 = *v5;
    *v5 = 0LL;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = Microsoft::WRL::ComPtr<CFrameApplicationPresentation>::ComPtr<CFrameApplicationPresentation>(&v15, &v13);
  Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection *,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs *>::*)(Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection *,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs *)>::Callback<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection *,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs *>,Microsoft::WRL::FtmBase>,Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection *,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs *>,-1,_lambda_626f6acbfed1306f6f5bec43fb0197fe_>(
    &v14,
    v11);
  Microsoft::WRL::ComPtr<Windows::UI::StartScreen::ISecondaryTileFactory>::~ComPtr<Windows::UI::StartScreen::ISecondaryTileFactory>(&v15);
  v12 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    *a2 = v12;
  }
  else
  {
    v4 = -2147024882;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
  return v4;
}
