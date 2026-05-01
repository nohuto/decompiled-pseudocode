/*
 * XREFs of _dynamic_atexit_destructor_for__c_miracastDiscoveryRegPath__ @ 0x180708D50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__c_miracastDiscoveryRegPath__()
{
  winrt::handle_type<winrt::impl::hstring_traits>::close(&c_miracastDiscoveryRegPath);
}
