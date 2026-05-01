/*
 * XREFs of _anonymous_namespace_::ContextToSearchShowArgs @ 0x1801D0F98
 * Callers:
 *     XamlLauncher::SearchShowRequested$_ResumeCoro$1 @ 0x1802452C0 (XamlLauncher--SearchShowRequested$_ResumeCoro$1.c)
 * Callees:
 *     ??8winrt@@YA_NAEBUhstring@0@PEBG@Z @ 0x1801D0FF4 (--8winrt@@YA_NAEBUhstring@0@PEBG@Z.c)
 */

const wchar_t *__fastcall anonymous_namespace_::ContextToSearchShowArgs(winrt::hstring *this)
{
  if ( (unsigned __int8)winrt::operator==(this, L"TaskbarSearchBox") )
    return L"StartMode=Proactive&QuerySource=TaskBarSearchBox";
  if ( (unsigned __int8)winrt::operator==(this, L"SearchButton") )
    return L"StartMode=Proactive&QuerySource=SearchButton";
  return winrt::hstring::c_str(this);
}
