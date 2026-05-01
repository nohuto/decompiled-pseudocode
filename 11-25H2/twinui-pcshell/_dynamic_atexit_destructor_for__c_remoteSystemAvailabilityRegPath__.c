/*
 * XREFs of _dynamic_atexit_destructor_for__c_remoteSystemAvailabilityRegPath__ @ 0x1806DFB60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__c_remoteSystemAvailabilityRegPath__()
{
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&c_remoteSystemAvailabilityRegPath);
}
