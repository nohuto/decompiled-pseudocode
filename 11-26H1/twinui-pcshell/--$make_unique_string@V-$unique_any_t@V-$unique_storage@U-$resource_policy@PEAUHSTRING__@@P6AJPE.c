/*
 * XREFs of ??$make_unique_string@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x18050E8DC
 * Callers:
 *     ?TryGetSnapRectForAppView@CDesktopPositioner@@AEAA_NPEAUIApplicationView@@PEAUIUnknown@@PEAURect@Foundation@Windows@@@Z @ 0x180511E64 (-TryGetSnapRectForAppView@CDesktopPositioner@@AEAA_NPEAUIApplicationView@@PEAUIUnknown@@PEAURect.c)
 * Callees:
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802E77A0 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
HSTRING *__fastcall wil::make_unique_string<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>>>(
        HSTRING *string,
        PCNZWCH sourceString)
{
  __int64 v4; // rdx
  const char *v5; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = -1LL;
  do
    ++v4;
  while ( sourceString[v4] );
  *string = 0LL;
  WindowsCreateString(sourceString, v4, string);
  if ( !*string )
    wil::details::in1diag3::_Throw_NullAlloc(
      retaddr,
      4065LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
      v5);
  return string;
}
