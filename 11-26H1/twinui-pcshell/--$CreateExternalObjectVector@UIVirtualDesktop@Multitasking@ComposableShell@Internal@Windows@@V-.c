/*
 * XREFs of ??$CreateExternalObjectVector@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@V?$Vector@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4785@U?$DefaultVectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4785@@4Collections@Foundation@5@@detail@Internal@Collections@Foundation@Windows@@YAJP8IVectorStatics@Detail@234@EAAJPEBUObjectVectorInfo@6234@PEAPEAUIInspectable@@@ZPEAPEAV?$Vector@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4785@U?$DefaultVectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4785@@1234@@Z @ 0x1800CDFE4
 * Callers:
 *     ?GetVirtualDesktops@VirtualDesktopCollection@@AEAAJW4DesktopKind@@PEAPEAU?$IVectorView@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@@Z @ 0x1802523B0 (-GetVirtualDesktops@VirtualDesktopCollection@@AEAAJW4DesktopKind@@PEAPEAU-$IVectorView@PEAUIVirt.c)
 *     ?GetCurrentVirtualDesktop@VirtualDesktopDataSource@@UEAAJPEAPEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18048FBA0 (-GetCurrentVirtualDesktop@VirtualDesktopDataSource@@UEAAJPEAPEAUIVirtualDesktop@Multitasking@Com.c)
 *     ?GetVirtualDesktops@VirtualDesktopDataSource@@AEAAJW4DesktopKind@@PEAPEAU?$IVectorView@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@@Z @ 0x18048FE54 (-GetVirtualDesktops@VirtualDesktopDataSource@@AEAAJW4DesktopKind@@PEAPEAU-$IVectorView@PEAUIVirt.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z @ 0x18003A59C (-AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802AF344 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??_9IVectorStatics@Detail@Collections@Foundation@Windows@@$BPA@AA @ 0x180478B70 (--_9IVectorStatics@Detail@Collections@Foundation@Windows@@$BPA@AA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::detail::CreateExternalObjectVector<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop,Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>>>(
        __int64 a1,
        __int64 *a2,
        unsigned int a3)
{
  unsigned int v4; // eax
  UINT32 v5; // edx
  HRESULT v6; // eax
  int v7; // edx
  unsigned int v8; // r8d
  unsigned int v9; // eax
  UINT32 v10; // edx
  HRESULT v11; // eax
  int v12; // edx
  unsigned int v13; // r8d
  unsigned int v14; // eax
  UINT32 v15; // edx
  HRESULT v16; // eax
  int v17; // edx
  unsigned int v18; // r8d
  HRESULT v19; // eax
  int v20; // edx
  unsigned int v21; // r8d
  int ActivationFactory; // ebx
  __int64 v23; // rcx
  __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v28; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD v29[3]; // [rsp+30h] [rbp-D0h] BYREF
  GUID v30; // [rsp+48h] [rbp-B8h]
  GUID v31; // [rsp+58h] [rbp-A8h]
  GUID v32; // [rsp+68h] [rbp-98h]
  GUID v33; // [rsp+78h] [rbp-88h]
  GUID v34; // [rsp+88h] [rbp-78h]
  HSTRING_HEADER hstringHeader; // [rsp+A0h] [rbp-60h] BYREF
  HSTRING string; // [rsp+B8h] [rbp-48h] BYREF
  HSTRING_HEADER v37; // [rsp+C0h] [rbp-40h] BYREF
  HSTRING v38; // [rsp+D8h] [rbp-28h] BYREF
  HSTRING_HEADER v39; // [rsp+E0h] [rbp-20h] BYREF
  HSTRING v40; // [rsp+F8h] [rbp-8h] BYREF
  HSTRING_HEADER v41; // [rsp+100h] [rbp+0h] BYREF
  HSTRING v42; // [rsp+118h] [rbp+18h] BYREF

  string = 0LL;
  v4 = Microsoft::WRL::Wrappers::HStringReference::AddOne(0x67u, (int)a2, a3);
  v5 = v4 - 1;
  if ( v4 > 0x67 )
    v5 = 103;
  v6 = WindowsCreateStringReference(
         L"Windows.Foundation.Collections.IVector`1<Windows.Internal.ComposableShell.Multitasking.IVirtualDesktop>",
         v5,
         &hstringHeader,
         &string);
  if ( v6 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v6, v7, v8);
    __debugbreak();
  }
  v38 = 0LL;
  v9 = Microsoft::WRL::Wrappers::HStringReference::AddOne(0x6Bu, v7, v8);
  v10 = v9 - 1;
  if ( v9 > 0x6B )
    v10 = 107;
  v11 = WindowsCreateStringReference(
          L"Windows.Foundation.Collections.IVectorView`1<Windows.Internal.ComposableShell.Multitasking.IVirtualDesktop>",
          v10,
          &v37,
          &v38);
  if ( v11 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v11, v12, v13);
    __debugbreak();
  }
  v40 = 0LL;
  v14 = Microsoft::WRL::Wrappers::HStringReference::AddOne(0x69u, v12, v13);
  v15 = v14 - 1;
  if ( v14 > 0x69 )
    v15 = 105;
  v16 = WindowsCreateStringReference(
          L"Windows.Foundation.Collections.IIterator`1<Windows.Internal.ComposableShell.Multitasking.IVirtualDesktop>",
          v15,
          &v39,
          &v40);
  if ( v16 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v16, v17, v18);
    __debugbreak();
  }
  v29[0] = string;
  v29[1] = v38;
  v29[2] = v40;
  v30 = GUID_c9f125fc_77cc_5ce0_87f4_f94b7a67d80b;
  v31 = GUID_ea11c0c6_873d_52c7_a499_e843b39d3ccd;
  v32 = GUID_90d0e58c_446b_5f4e_b49f_ddeedb0d1e74;
  v33 = GUID_53734c23_b216_575b_b5ea_a003bc18dcf8;
  v34 = GUID_7e597465_42fc_5296_93e3_ddd76b5208ac;
  v27 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v27);
  v42 = 0LL;
  v19 = WindowsCreateStringReference(L"Windows.Foundation.Collections.Detail.Vector", 0x2Cu, &v41, &v42);
  if ( v19 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v19, v20, v21);
    __debugbreak();
  }
  ActivationFactory = RoGetActivationFactory(v42, &GUID_08c77958_89bf_5cf8_a9cd_c72147b9b3a9, &v27);
  if ( ActivationFactory < 0 )
  {
    v23 = v27;
    if ( v27 )
    {
      v27 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    }
    return (unsigned int)ActivationFactory;
  }
  v28 = 0LL;
  v25 = v27;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v28);
  ActivationFactory =  Windows::Foundation::Collections::Detail::IVectorStatics::`vcall'{240,{flat}}(v25, v29, &v28);
  if ( ActivationFactory < 0 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v28);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v27);
    return (unsigned int)ActivationFactory;
  }
  v26 = v28;
  v28 = 0LL;
  *a2 = v26;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v28);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v27);
  return 0LL;
}
