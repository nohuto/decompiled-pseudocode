/*
 * XREFs of _dynamic_atexit_destructor_for__c_hostSystemId__ @ 0x1806E0380
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__c_hostSystemId__()
{
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&c_hostSystemId);
}
