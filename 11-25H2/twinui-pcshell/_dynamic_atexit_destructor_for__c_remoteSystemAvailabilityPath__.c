/*
 * XREFs of _dynamic_atexit_destructor_for__c_remoteSystemAvailabilityPath__ @ 0x1806E0340
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__c_remoteSystemAvailabilityPath__()
{
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&c_remoteSystemAvailabilityPath);
}
