/*
 * XREFs of ??$GetActivationFactory@UICoreKeyboardInputProfileManagerStatics@Core@Text@Internal@UI@Windows@@@wil@@YA?AV?$com_ptr_t@UICoreKeyboardInputProfileManagerStatics@Core@Text@Internal@UI@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x1801FAE30
 * Callers:
 *     ??0InputAppPreloader@KeyboardHosting@@QEAA@PEAVTouchKeyboardExperienceManager@@@Z @ 0x1802A6CA4 (--0InputAppPreloader@KeyboardHosting@@QEAA@PEAVTouchKeyboardExperienceManager@@@Z.c)
 * Callees:
 *     ?AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z @ 0x18003A59C (-AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802AF344 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall wil::GetActivationFactory<Windows::UI::Internal::Text::Core::ICoreKeyboardInputProfileManagerStatics>(
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
  v4 = Microsoft::WRL::Wrappers::HStringReference::AddOne(0x3Du, a2, a3);
  v5 = v4 - 1;
  if ( v4 > 0x3D )
    v5 = 61;
  v6 = WindowsCreateStringReference(
         L"Windows.UI.Internal.Text.Core.CoreKeyboardInputProfileManager",
         v5,
         &hstringHeader,
         &string);
  if ( v6 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v6, v7, v8);
  ActivationFactory = RoGetActivationFactory(string, &GUID_d0380bbe_201e_4a70_8eff_bb52f7996cae, a1);
  if ( ActivationFactory < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x744,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/winrt.h",
      (const char *)(unsigned int)ActivationFactory,
      1);
  return a1;
}
