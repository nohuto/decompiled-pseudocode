/*
 * XREFs of _dynamic_atexit_destructor_for__c_bootModeTypeQueryParam__ @ 0x180708EB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__c_bootModeTypeQueryParam__()
{
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&c_bootModeTypeQueryParam);
}
