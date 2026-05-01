/*
 * XREFs of ??$GetActivationFactory@UIApplicationStatics@StateRepository@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIApplicationStatics@StateRepository@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x1801B2864
 * Callers:
 *     ?LoadDataFromStateRepository@@YAJPEBGPEAUPER_APPLICATION_DATA@@@Z @ 0x1801B2640 (-LoadDataFromStateRepository@@YAJPEBGPEAUPER_APPLICATION_DATA@@@Z.c)
 *     ?TryGetForUriScheme@ProtocolLauncher@Utils@@SA?AV?$unique_ptr@VProtocolLauncher@Utils@@U?$default_delete@VProtocolLauncher@Utils@@@std@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@4@@Z @ 0x180283C64 (-TryGetForUriScheme@ProtocolLauncher@Utils@@SA-AV-$unique_ptr@VProtocolLauncher@Utils@@U-$defaul.c)
 * Callees:
 *     ?AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z @ 0x18002D858 (-AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802B86EC (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall wil::GetActivationFactory<Windows::Internal::StateRepository::IApplicationStatics>(
        _QWORD *a1,
        int a2,
        unsigned int a3)
{
  unsigned int v4; // eax
  UINT32 v5; // edx
  HRESULT v6; // eax
  int v7; // edx
  unsigned int v8; // r8d
  int ActivationFactory; // eax
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-38h] BYREF
  HSTRING string; // [rsp+48h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  *a1 = 0LL;
  string = 0LL;
  v4 = Microsoft::WRL::Wrappers::HStringReference::AddOne(0x2Cu, a2, a3);
  v5 = v4 - 1;
  if ( v4 > 0x2C )
    v5 = 44;
  v6 = WindowsCreateStringReference(L"Windows.Internal.StateRepository.Application", v5, &hstringHeader, &string);
  if ( v6 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v6, v7, v8);
    JUMPOUT(0x1801B292DLL);
  }
  ActivationFactory = RoGetActivationFactory(string, &GUID_07adcc9a_e505_48c2_b471_45af8561f6af, a1);
  if ( ActivationFactory < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x756,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/winrt.h",
      (const char *)(unsigned int)ActivationFactory,
      1);
  return a1;
}
