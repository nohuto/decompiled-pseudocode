/*
 * XREFs of _dynamic_atexit_destructor_for__c_correlationIdQueryParam__ @ 0x180708C70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__c_correlationIdQueryParam__()
{
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&c_correlationIdQueryParam);
}
