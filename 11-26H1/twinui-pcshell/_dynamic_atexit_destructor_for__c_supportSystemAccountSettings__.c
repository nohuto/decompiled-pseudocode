/*
 * XREFs of _dynamic_atexit_destructor_for__c_supportSystemAccountSettings__ @ 0x180708D10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__c_supportSystemAccountSettings__()
{
  winrt::handle_type<winrt::impl::hstring_traits>::close(&c_supportSystemAccountSettings);
}
