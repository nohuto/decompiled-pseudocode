/*
 * XREFs of ??1PinConsentPromptContent@@QEAA@XZ @ 0x1805E35AC
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::PinManager::ShowPinDialog$_ResumeCoro$1 @ 0x1805E8F60 (winrt--Windows--Internal--Shell--implementation--PinManager--ShowPinDialog$_ResumeCoro$1.c)
 *     _winrt::Windows::Internal::Shell::implementation::PinManager::ShowPinDialog$_ResumeCoro$1_::_1_::dtor$2 @ 0x1806FE8A5 (_winrt--Windows--Internal--Shell--implementation--PinManager--ShowPinDialog$_ResumeCoro$1_--_1_-.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??1?$_Optional_destruct_base@V?$variant@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@URandomAccessStreamReference@Streams@Storage@Windows@winrt@@@std@@$0A@@std@@QEAA@XZ @ 0x1805E320C (--1-$_Optional_destruct_base@V-$variant@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEA.c)
 */

void __fastcall PinConsentPromptContent::~PinConsentPromptContent(PinConsentPromptContent *this)
{
  std::_Optional_destruct_base<std::variant<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>,winrt::Windows::Storage::Streams::RandomAccessStreamReference>,0>::~_Optional_destruct_base<std::variant<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>,winrt::Windows::Storage::Streams::RandomAccessStreamReference>,0>((__int64)this + 88);
  std::wstring::_Tidy_deallocate((_QWORD *)this + 7);
  std::_Optional_destruct_base<std::variant<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>,winrt::Windows::Storage::Streams::RandomAccessStreamReference>,0>::~_Optional_destruct_base<std::variant<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>,winrt::Windows::Storage::Streams::RandomAccessStreamReference>,0>((__int64)this + 32);
  std::wstring::_Tidy_deallocate(this);
}
