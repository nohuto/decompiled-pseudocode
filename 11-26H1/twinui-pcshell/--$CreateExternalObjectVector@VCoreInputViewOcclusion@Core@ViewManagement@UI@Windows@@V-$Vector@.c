/*
 * XREFs of ??$CreateExternalObjectVector@VCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@V?$Vector@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@U?$DefaultEqualityPredicate@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@7895@U?$DefaultVectorOptions@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@7895@@Internal@Collections@Foundation@5@@detail@Internal@Collections@Foundation@Windows@@YAJP8IVectorStatics@Detail@234@EAAJPEBUObjectVectorInfo@6234@PEAPEAUIInspectable@@@ZPEAPEAV?$Vector@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@U?$DefaultEqualityPredicate@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@7895@U?$DefaultVectorOptions@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@7895@@1234@@Z @ 0x18003B344
 * Callers:
 *     ?GetOcclusionsVectorView@TabTipAdapter@KeyboardHosting@@AEAAJIAEBUtagRECT@@AEAV?$ComPtr@U?$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x180185E50 (-GetOcclusionsVectorView@TabTipAdapter@KeyboardHosting@@AEAAJIAEBUtagRECT@@AEAV-$ComPtr@U-$IVect.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z @ 0x18003A59C (-AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802AF344 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??_9IVectorStatics@Detail@Collections@Foundation@Windows@@$BPA@AA @ 0x180478B70 (--_9IVectorStatics@Detail@Collections@Foundation@Windows@@$BPA@AA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::detail::CreateExternalObjectVector<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion,Windows::Foundation::Collections::Internal::Vector<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>>(
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
  __int64 v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v31; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD v32[3]; // [rsp+30h] [rbp-D0h] BYREF
  GUID v33; // [rsp+48h] [rbp-B8h]
  GUID v34; // [rsp+58h] [rbp-A8h]
  GUID v35; // [rsp+68h] [rbp-98h]
  GUID v36; // [rsp+78h] [rbp-88h]
  GUID v37; // [rsp+88h] [rbp-78h]
  HSTRING_HEADER hstringHeader; // [rsp+A0h] [rbp-60h] BYREF
  HSTRING string; // [rsp+B8h] [rbp-48h] BYREF
  HSTRING_HEADER v40; // [rsp+C0h] [rbp-40h] BYREF
  HSTRING v41; // [rsp+D8h] [rbp-28h] BYREF
  HSTRING_HEADER v42; // [rsp+E0h] [rbp-20h] BYREF
  HSTRING v43; // [rsp+F8h] [rbp-8h] BYREF
  HSTRING_HEADER v44; // [rsp+100h] [rbp+0h] BYREF
  HSTRING v45; // [rsp+118h] [rbp+18h] BYREF

  string = 0LL;
  v4 = Microsoft::WRL::Wrappers::HStringReference::AddOne(0x5Fu, (int)a2, a3);
  v5 = v4 - 1;
  if ( v4 > 0x5F )
    v5 = 95;
  v6 = WindowsCreateStringReference(
         L"Windows.Foundation.Collections.IVector`1<Windows.UI.ViewManagement.Core.CoreInputViewOcclusion>",
         v5,
         &hstringHeader,
         &string);
  if ( v6 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v6, v7, v8);
    __debugbreak();
  }
  v41 = 0LL;
  v9 = Microsoft::WRL::Wrappers::HStringReference::AddOne(0x63u, v7, v8);
  v10 = v9 - 1;
  if ( v9 > 0x63 )
    v10 = 99;
  v11 = WindowsCreateStringReference(
          L"Windows.Foundation.Collections.IVectorView`1<Windows.UI.ViewManagement.Core.CoreInputViewOcclusion>",
          v10,
          &v40,
          &v41);
  if ( v11 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v11, v12, v13);
    __debugbreak();
  }
  v43 = 0LL;
  v14 = Microsoft::WRL::Wrappers::HStringReference::AddOne(0x61u, v12, v13);
  v15 = v14 - 1;
  if ( v14 > 0x61 )
    v15 = 97;
  v16 = WindowsCreateStringReference(
          L"Windows.Foundation.Collections.IIterator`1<Windows.UI.ViewManagement.Core.CoreInputViewOcclusion>",
          v15,
          &v42,
          &v43);
  if ( v16 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v16, v17, v18);
    __debugbreak();
  }
  v32[0] = string;
  v32[1] = v41;
  v32[2] = v43;
  v33 = GUID_cc36ce06_3865_4177_b5f5_8b65e0b9ce84;
  v34 = GUID_496abefc_24af_5e94_b857_b0f24db23ef6;
  v35 = GUID_e0963578_a246_5680_86d1_27519423e212;
  v36 = GUID_0a11958b_63da_5566_913a_180550dad26a;
  v37 = GUID_5bb57354_4f40_5ef3_a5d1_6a6049f905a1;
  v30 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v30);
  v45 = 0LL;
  v19 = WindowsCreateStringReference(L"Windows.Foundation.Collections.Detail.Vector", 0x2Cu, &v44, &v45);
  if ( v19 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v19, v20, v21);
    JUMPOUT(0x18003B5F5LL);
  }
  ActivationFactory = RoGetActivationFactory(v45, &GUID_08c77958_89bf_5cf8_a9cd_c72147b9b3a9, &v30);
  if ( ActivationFactory < 0 )
  {
    v29 = v30;
    if ( v30 )
    {
      v30 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
    }
    return (unsigned int)ActivationFactory;
  }
  v31 = 0LL;
  v23 = v30;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v31);
  ActivationFactory =  Windows::Foundation::Collections::Detail::IVectorStatics::`vcall'{240,{flat}}(v23, v32, &v31);
  if ( ActivationFactory < 0 )
  {
    v24 = v31;
    if ( v31 )
    {
      v31 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
    }
    v25 = v30;
    if ( v30 )
    {
      v30 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    }
    return (unsigned int)ActivationFactory;
  }
  v27 = v31;
  v31 = 0LL;
  *a2 = v27;
  v28 = v30;
  if ( v30 )
  {
    v30 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  }
  return 0LL;
}
