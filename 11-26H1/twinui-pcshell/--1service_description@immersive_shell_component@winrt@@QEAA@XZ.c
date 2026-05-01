/*
 * XREFs of ??1service_description@immersive_shell_component@winrt@@QEAA@XZ @ 0x1800DB450
 * Callers:
 *     _winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::TaskGroupsComponent_::_1_::dtor$26 @ 0x1806D8127 (_winrt--Windows--Internal--Shell--TaskGroups--implementation--TaskGroupsComponent--_ea_1806D8127.c)
 *     _winrt::Windows::Internal::Shell::implementation::CloudPCComponent::CloudPCComponent_::_1_::dtor$12 @ 0x180703598 (_winrt--Windows--Internal--Shell--implementation--CloudPCComponent--CloudPCComponen_ea_180703598.c)
 *     _winrt::Windows::Internal::Shell::implementation::CloudPCComponent::CloudPCComponent_::_1_::dtor$14 @ 0x1807035AA (_winrt--Windows--Internal--Shell--implementation--CloudPCComponent--CloudPCComponen_ea_1807035AA.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x18002694C (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 */

void __fastcall winrt::immersive_shell_component::service_description::~service_description(
        winrt::immersive_shell_component::service_description *this)
{
  __int64 *v1; // rcx

  v1 = (__int64 *)((char *)this + 16);
  if ( *v1 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(v1);
}
