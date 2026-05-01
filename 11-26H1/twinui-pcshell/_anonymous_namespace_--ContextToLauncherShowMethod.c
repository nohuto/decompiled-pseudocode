/*
 * XREFs of _anonymous_namespace_::ContextToLauncherShowMethod @ 0x1801F41C4
 * Callers:
 *     XamlLauncher::LauncherShowRequested$_ResumeCoro$1 @ 0x180243FD0 (XamlLauncher--LauncherShowRequested$_ResumeCoro$1.c)
 * Callees:
 *     ??$_Traits_equal@U?$char_traits@G@std@@@std@@YA_NQEBG_K01@Z @ 0x1800303B8 (--$_Traits_equal@U-$char_traits@G@std@@@std@@YA_NQEBG_K01@Z.c)
 *     ?length@?$_WChar_traits@_W@std@@SA_KPEB_W@Z @ 0x18003062C (-length@-$_WChar_traits@_W@std@@SA_KPEB_W@Z.c)
 */

__int64 __fastcall anonymous_namespace_::ContextToLauncherShowMethod(__int64 *a1)
{
  __int64 v2; // rax
  const wchar_t *v3; // r8
  __int64 v4; // rdx
  const wchar_t *v5; // rdi
  size_t v6; // rbx
  const wchar_t *v7; // rcx
  size_t v8; // rdx
  __int64 v9; // rax
  const wchar_t *v10; // r8
  __int64 v11; // rcx

  v2 = std::_WChar_traits<wchar_t>::length((__int64)L"StartButton");
  v4 = *a1;
  v5 = &pvData;
  v6 = 0LL;
  if ( *a1 )
  {
    v7 = *(const wchar_t **)(v4 + 16);
    v8 = *(unsigned int *)(v4 + 4);
  }
  else
  {
    v7 = &pvData;
    v8 = 0LL;
  }
  if ( std::_Traits_equal<std::char_traits<unsigned short>>(v7, v8, v3, v2) )
    return 11LL;
  v9 = std::_WChar_traits<wchar_t>::length((__int64)L"Drag");
  v11 = *a1;
  if ( *a1 )
  {
    v5 = *(const wchar_t **)(v11 + 16);
    v6 = *(unsigned int *)(v11 + 4);
  }
  return std::_Traits_equal<std::char_traits<unsigned short>>(v5, v6, v10, v9) ? 0x10 : 0;
}
