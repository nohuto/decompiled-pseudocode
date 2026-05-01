/*
 * XREFs of ??$CreateExternalObjectVector@VCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@V?$Vector@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@U?$DefaultEqualityPredicate@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@7895@U?$DefaultVectorOptions@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@7895@@Internal@Collections@Foundation@5@@detail@Internal@Collections@Foundation@Windows@@YAJP8IVectorStatics@Detail@234@EAAJPEBUObjectVectorInfo@6234@PEAPEAUIInspectable@@@ZPEAPEAV?$Vector@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@U?$DefaultEqualityPredicate@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@7895@U?$DefaultVectorOptions@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@7895@@1234@@Z @ 0x18002D204
 * Callers:
 *     ?GetOcclusionsVectorView@TabTipAdapter@KeyboardHosting@@AEAAJIAEBUtagRECT@@AEAV?$ComPtr@U?$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x18002CF90 (-GetOcclusionsVectorView@TabTipAdapter@KeyboardHosting@@AEAAJIAEBUtagRECT@@AEAV-$ComPtr@U-$IVect.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z @ 0x18002D858 (-AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802B86EC (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??_9IVectorStatics@Detail@Collections@Foundation@Windows@@$BPA@AA @ 0x18046B4F0 (--_9IVectorStatics@Detail@Collections@Foundation@Windows@@$BPA@AA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::detail::CreateExternalObjectVector<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion,Windows::Foundation::Collections::Internal::Vector<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>>(
        __int64 a1,
        __int64 *a2)
{
  unsigned int v3; // eax
  UINT32 v4; // edx
  HRESULT v5; // eax
  int v6; // edx
  unsigned int v7; // r8d
  unsigned int v8; // eax
  UINT32 v9; // edx
  HRESULT v10; // eax
  int v11; // edx
  unsigned int v12; // r8d
  unsigned int v13; // eax
  UINT32 v14; // edx
  HRESULT v15; // eax
  int v16; // edx
  unsigned int v17; // r8d
  HRESULT v18; // eax
  int v19; // edx
  unsigned int v20; // r8d
  int ActivationFactory; // ebx
  __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v30; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD v31[3]; // [rsp+30h] [rbp-D0h] BYREF
  GUID v32; // [rsp+48h] [rbp-B8h]
  GUID v33; // [rsp+58h] [rbp-A8h]
  GUID v34; // [rsp+68h] [rbp-98h]
  GUID v35; // [rsp+78h] [rbp-88h]
  GUID v36; // [rsp+88h] [rbp-78h]
  HSTRING_HEADER hstringHeader; // [rsp+A0h] [rbp-60h] BYREF
  HSTRING string; // [rsp+B8h] [rbp-48h] BYREF
  HSTRING_HEADER v39; // [rsp+C0h] [rbp-40h] BYREF
  HSTRING v40; // [rsp+D8h] [rbp-28h] BYREF
  HSTRING_HEADER v41; // [rsp+E0h] [rbp-20h] BYREF
  HSTRING v42; // [rsp+F8h] [rbp-8h] BYREF
  HSTRING_HEADER v43; // [rsp+100h] [rbp+0h] BYREF
  HSTRING v44; // [rsp+118h] [rbp+18h] BYREF

  string = 0LL;
  v3 = Microsoft::WRL::Wrappers::HStringReference::AddOne(0x5Fu);
  v4 = v3 - 1;
  if ( v3 > 0x5F )
    v4 = 95;
  v5 = WindowsCreateStringReference(
         L"Windows.Foundation.Collections.IVector`1<Windows.UI.ViewManagement.Core.CoreInputViewOcclusion>",
         v4,
         &hstringHeader,
         &string);
  if ( v5 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v5, v6, v7);
    __debugbreak();
  }
  v40 = 0LL;
  v8 = Microsoft::WRL::Wrappers::HStringReference::AddOne(0x63u);
  v9 = v8 - 1;
  if ( v8 > 0x63 )
    v9 = 99;
  v10 = WindowsCreateStringReference(
          L"Windows.Foundation.Collections.IVectorView`1<Windows.UI.ViewManagement.Core.CoreInputViewOcclusion>",
          v9,
          &v39,
          &v40);
  if ( v10 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v10, v11, v12);
    __debugbreak();
  }
  v42 = 0LL;
  v13 = Microsoft::WRL::Wrappers::HStringReference::AddOne(0x61u);
  v14 = v13 - 1;
  if ( v13 > 0x61 )
    v14 = 97;
  v15 = WindowsCreateStringReference(
          L"Windows.Foundation.Collections.IIterator`1<Windows.UI.ViewManagement.Core.CoreInputViewOcclusion>",
          v14,
          &v41,
          &v42);
  if ( v15 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v15, v16, v17);
    __debugbreak();
  }
  v31[0] = string;
  v31[1] = v40;
  v31[2] = v42;
  v32 = GUID_cc36ce06_3865_4177_b5f5_8b65e0b9ce84;
  v33 = GUID_496abefc_24af_5e94_b857_b0f24db23ef6;
  v34 = GUID_e0963578_a246_5680_86d1_27519423e212;
  v35 = GUID_0a11958b_63da_5566_913a_180550dad26a;
  v36 = GUID_5bb57354_4f40_5ef3_a5d1_6a6049f905a1;
  v29 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v29);
  v44 = 0LL;
  v18 = WindowsCreateStringReference(L"Windows.Foundation.Collections.Detail.Vector", 0x2Cu, &v43, &v44);
  if ( v18 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v18, v19, v20);
    JUMPOUT(0x18002D494LL);
  }
  ActivationFactory = RoGetActivationFactory(v44, &GUID_08c77958_89bf_5cf8_a9cd_c72147b9b3a9, &v29);
  if ( ActivationFactory < 0 )
  {
    v28 = v29;
    if ( v29 )
    {
      v29 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
    }
    return (unsigned int)ActivationFactory;
  }
  v30 = 0LL;
  v22 = v29;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v30);
  ActivationFactory =  Windows::Foundation::Collections::Detail::IVectorStatics::`vcall'{240,{flat}}(v22, v31, &v30);
  if ( ActivationFactory < 0 )
  {
    v23 = v30;
    if ( v30 )
    {
      v30 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    }
    v24 = v29;
    if ( v29 )
    {
      v29 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
    }
    return (unsigned int)ActivationFactory;
  }
  v26 = v30;
  v30 = 0LL;
  *a2 = v26;
  v27 = v29;
  if ( v29 )
  {
    v29 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  }
  return 0LL;
}
