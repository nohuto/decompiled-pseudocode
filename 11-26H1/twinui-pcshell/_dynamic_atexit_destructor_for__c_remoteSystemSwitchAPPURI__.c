/*
 * XREFs of _dynamic_atexit_destructor_for__c_remoteSystemSwitchAPPURI__ @ 0x180708E90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__c_remoteSystemSwitchAPPURI__()
{
  winrt::handle_type<winrt::impl::hstring_traits>::close(&c_remoteSystemSwitchAPPURI);
}
