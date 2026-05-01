/*
 * XREFs of _lambda_ac2a839fec59629fce3443c282716c2d_::__lambda_ac2a839fec59629fce3443c282716c2d_ @ 0x1805956EC
 * Callers:
 *     winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback__lambda_ac2a839fec59629fce3443c282716c2d___::_ImmersiveShellThreadDispatcherCallback__lambda_ac2a839fec59629fce3443c282716c2d___ @ 0x18059576C (winrt--Windows--Internal--Shell--SnapComponent--implementation--ImmersiveShellThrea_ea_18059576C.c)
 *     ?SnapWindow@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAX_KAEBURect@Foundation@67@U?$array_view@$$CBURect@Foundation@Windows@winrt@@@7@@Z @ 0x1805970DC (-SnapWindow@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@.c)
 *     _winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::SnapWindow_::_1_::dtor$1 @ 0x1806D225D (_winrt--Windows--Internal--Shell--SnapComponent--implementation--DesktopSnapLayoutM_ea_1806D225D.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x1800286D0 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 */

void __fastcall lambda_ac2a839fec59629fce3443c282716c2d_::__lambda_ac2a839fec59629fce3443c282716c2d_(__int64 a1)
{
  __int64 *v2; // rcx

  v2 = (__int64 *)(a1 + 48);
  if ( *v2 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(v2);
  std::vector<Geometry::CRect>::_Tidy(a1 + 24);
}
