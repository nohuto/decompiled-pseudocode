/*
 * XREFs of ?IsCortanaPackageInstalled@CortanaAvailability@@YAJPEAE@Z @ 0x1800A479C
 * Callers:
 *     ?CheckCortanaAvailability@CortanaAvailability@@YAJPEAE@Z @ 0x1800FB28C (-CheckCortanaAvailability@CortanaAvailability@@YAJPEAE@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?length@?$_WChar_traits@_W@std@@SA_KPEB_W@Z @ 0x18003062C (-length@-$_WChar_traits@_W@std@@SA_KPEB_W@Z.c)
 *     ?create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z @ 0x180032218 (-create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIPackageStatics@StateRepository@Internal@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPackageStatics@StateRepository@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800A48F8 (--$GetActivationFactory@V-$ComPtr@UIPackageStatics@StateRepository@Internal@Windows@@@WRL@Micros.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802AF344 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4 #try_helpers=1
__int64 __fastcall CortanaAvailability::IsCortanaPackageInstalled(CortanaAvailability *this, unsigned __int8 *a2)
{
  HRESULT v3; // eax
  int v4; // edx
  unsigned int v5; // r8d
  int v6; // eax
  winrt::impl *v7; // rdx
  winrt::impl *v8; // rcx
  struct winrt::impl::hstring_header *hstring_on_heap; // rax
  int v10; // eax
  __int64 v11; // rcx
  int v13; // [rsp+20h] [rbp-58h]
  _BYTE v14[8]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v15; // [rsp+38h] [rbp-40h] BYREF
  struct winrt::impl::hstring_header *v16; // [rsp+40h] [rbp-38h] BYREF
  HSTRING_HEADER v17; // [rsp+48h] [rbp-30h] BYREF
  HSTRING v18; // [rsp+60h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v15 = 0LL;
  v18 = 0LL;
  v3 = WindowsCreateStringReference(L"Windows.Internal.StateRepository.Package", 0x28u, &v17, &v18);
  if ( v3 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v3, v4, v5);
    return (unsigned int)v15;
  }
  else
  {
    v6 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackageStatics>>(
           v18,
           &v15);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x5B,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanaavailability.cpp",
        (const char *)(unsigned int)v6,
        v13);
    v7 = (winrt::impl *)(unsigned int)std::_WChar_traits<wchar_t>::length((__int64)L"Microsoft.549981C3F5F10_8wekyb3d8bbwe");
    hstring_on_heap = winrt::impl::create_hstring_on_heap(v8, v7);
    v16 = hstring_on_heap;
    if ( hstring_on_heap )
    {
      v14[0] = 0;
      v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct winrt::impl::hstring_header *, _BYTE *))(*(_QWORD *)v15 + 336LL))(
              v15,
              0LL,
              hstring_on_heap,
              v14);
      if ( v10 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x64,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanaavailability.cpp",
          (const char *)(unsigned int)v10,
          v13);
      *(_BYTE *)this = v14[0];
      winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v16);
      v11 = v15;
      if ( v15 )
      {
        v15 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
      return 0LL;
    }
    else
    {
      *(_BYTE *)this = 0;
      winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v16);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
      return 0LL;
    }
  }
}
