/*
 * XREFs of ?GetRuntimeClassName@?$produce_base@UXamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIClosable@Foundation@67@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x180450210
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce_base<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostWindow,winrt::Windows::Foundation::IClosable,void>::GetRuntimeClassName(
        __int64 a1)
{
  __int64 v1; // rax

  v1 = a1 + 8;
  if ( !a1 )
    v1 = 24LL;
  return winrt::impl::root_implements<TouchEdgeGestureManager,winrt::Windows::Foundation::IInspectable,ITouchEdgeGesture,IGameFocusEvents>::NonDelegatingGetRuntimeClassName(v1);
}
