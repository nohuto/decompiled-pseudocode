/*
 * XREFs of ?GetTrustLevel@?$produce_base@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@UIUserResizeVisual@345@X@impl@winrt@@UEAAHPEAW4TrustLevel@Foundation@Windows@3@@Z @ 0x1800D1060
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce_base<winrt::Udwm::Transitions::implementation::UserResizeVisual,winrt::Udwm::Transitions::IUserResizeVisual,void>::GetTrustLevel(
        __int64 a1)
{
  __int64 v1; // rax

  v1 = a1 + 8;
  if ( !a1 )
    v1 = 16LL;
  return winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::UserResizeVisual,winrt::Udwm::Transitions::UserResizeVisual,IUserResizeVisualNative>::NonDelegatingGetTrustLevel(v1);
}
