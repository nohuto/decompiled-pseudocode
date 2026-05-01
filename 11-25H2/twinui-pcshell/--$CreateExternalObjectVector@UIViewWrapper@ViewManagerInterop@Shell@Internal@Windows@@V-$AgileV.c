/*
 * XREFs of ??$CreateExternalObjectVector@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@V?$AgileVector@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4785@$0A@@4Collections@Foundation@5@@detail@Internal@Collections@Foundation@Windows@@YAJP8IVectorStatics@Detail@234@EAAJPEBUObjectVectorInfo@6234@PEAPEAUIInspectable@@@ZPEAPEAV?$AgileVector@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4785@$0A@@1234@@Z @ 0x1802BBD34
 * Callers:
 *     ??$make_agile_vector@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@cshell@@YA?A_PXZ @ 0x1802BBCE0 (--$make_agile_vector@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@cshell@@YA-A_P.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z @ 0x18002D858 (-AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18004E0F4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802B86EC (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??_9IVectorStatics@Detail@Collections@Foundation@Windows@@$BPI@AA @ 0x1802BBF54 (--_9IVectorStatics@Detail@Collections@Foundation@Windows@@$BPI@AA.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::detail::CreateExternalObjectVector<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper,Windows::Foundation::Collections::Internal::AgileVector<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *>,0>>(
        __int64 a1,
        __int64 *a2,
        unsigned int a3)
{
  UINT32 v4; // eax
  int v5; // edx
  unsigned int v6; // r8d
  UINT32 v7; // eax
  int v8; // edx
  unsigned int v9; // r8d
  UINT32 v10; // eax
  HRESULT v11; // eax
  int ActivationFactory; // ebx
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v19; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD v20[3]; // [rsp+30h] [rbp-D0h] BYREF
  GUID v21; // [rsp+48h] [rbp-B8h]
  GUID v22; // [rsp+58h] [rbp-A8h]
  GUID v23; // [rsp+68h] [rbp-98h]
  GUID v24; // [rsp+78h] [rbp-88h]
  GUID v25; // [rsp+88h] [rbp-78h]
  HSTRING_HEADER hstringHeader; // [rsp+A0h] [rbp-60h] BYREF
  HSTRING string; // [rsp+B8h] [rbp-48h] BYREF
  HSTRING_HEADER v28; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v29; // [rsp+D8h] [rbp-28h]
  HSTRING_HEADER v30; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v31; // [rsp+F8h] [rbp-8h]
  HSTRING_HEADER v32; // [rsp+100h] [rbp+0h] BYREF
  __int64 v33; // [rsp+118h] [rbp+18h]

  v29 = 0LL;
  v4 = Microsoft::WRL::Wrappers::HStringReference::AddOne(0x60u, (int)a2, a3);
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v28,
    L"Windows.Foundation.Collections.IVector`1<Windows.Internal.Shell.ViewManagerInterop.IViewWrapper>",
    v4,
    0x60u);
  v31 = 0LL;
  v7 = Microsoft::WRL::Wrappers::HStringReference::AddOne(0x64u, v5, v6);
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v30,
    L"Windows.Foundation.Collections.IVectorView`1<Windows.Internal.Shell.ViewManagerInterop.IViewWrapper>",
    v7,
    0x64u);
  v33 = 0LL;
  v10 = Microsoft::WRL::Wrappers::HStringReference::AddOne(0x62u, v8, v9);
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v32,
    L"Windows.Foundation.Collections.IIterator`1<Windows.Internal.Shell.ViewManagerInterop.IViewWrapper>",
    v10,
    0x62u);
  v20[0] = v29;
  v20[1] = v31;
  v20[2] = v33;
  v21 = GUID_79eaeb1a_4280_4be7_b345_9f7a790149f5;
  v22 = GUID_24895650_1004_53ab_a6d7_782e0034ecb8;
  v23 = GUID_519aab1e_077e_5234_9550_ea36f7c09a61;
  v24 = GUID_96ce4c0d_4952_53ed_b14f_787621d6ab7a;
  v25 = GUID_d26a014c_3159_58ef_884a_8c67358adf8c;
  v19 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v19);
  string = 0LL;
  v11 = WindowsCreateStringReference(L"Windows.Foundation.Collections.Detail.Vector", 0x2Cu, &hstringHeader, &string);
  if ( v11 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v11);
    __debugbreak();
  }
  ActivationFactory = RoGetActivationFactory(string, &GUID_08c77958_89bf_5cf8_a9cd_c72147b9b3a9, &v19);
  if ( ActivationFactory < 0 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v19);
    return (unsigned int)ActivationFactory;
  }
  v18 = 0LL;
  v14 = v19;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
  ActivationFactory =  Windows::Foundation::Collections::Detail::IVectorStatics::`vcall'{248,{flat}}(v14, v20, &v18);
  if ( ActivationFactory < 0 )
  {
    v15 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    v16 = v19;
    if ( v19 )
    {
      v19 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
    return (unsigned int)ActivationFactory;
  }
  v17 = v18;
  v18 = 0LL;
  *a2 = v17;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v19);
  return 0LL;
}
