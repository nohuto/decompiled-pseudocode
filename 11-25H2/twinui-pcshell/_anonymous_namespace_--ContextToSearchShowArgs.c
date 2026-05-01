/*
 * XREFs of _anonymous_namespace_::ContextToSearchShowArgs @ 0x1800F1EAC
 * Callers:
 *     XamlLauncher::SearchShowRequested$_ResumeCoro$1 @ 0x180250D60 (XamlLauncher--SearchShowRequested$_ResumeCoro$1.c)
 * Callees:
 *     ??$_Traits_equal@U?$char_traits@G@std@@@std@@YA_NQEBG_K01@Z @ 0x1800F2370 (--$_Traits_equal@U-$char_traits@G@std@@@std@@YA_NQEBG_K01@Z.c)
 *     ??8winrt@@YA_NAEBUhstring@0@PEBG@Z @ 0x1801CCBE4 (--8winrt@@YA_NAEBUhstring@0@PEBG@Z.c)
 */

const wchar_t *__fastcall anonymous_namespace_::ContextToSearchShowArgs(__int64 *a1)
{
  __int64 v1; // rax
  const WCHAR *v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r11
  winrt::hstring *v6; // r11

  v1 = *a1;
  if ( *a1 )
  {
    v2 = *(const WCHAR **)(v1 + 16);
    v3 = *(unsigned int *)(v1 + 4);
  }
  else
  {
    v2 = &LocaleName;
    v3 = 0LL;
  }
  if ( (unsigned __int8)std::_Traits_equal<std::char_traits<unsigned short>>(v2, v3, L"TaskbarSearchBox", 16LL) )
    return L"StartMode=Proactive&QuerySource=TaskBarSearchBox";
  if ( (unsigned __int8)winrt::operator==(v4, L"SearchButton") )
    return L"StartMode=Proactive&QuerySource=SearchButton";
  return winrt::hstring::c_str(v6);
}
