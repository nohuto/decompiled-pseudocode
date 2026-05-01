/*
 * XREFs of _dynamic_initializer_for__c_remoteSystemAvailabilityPath__ @ 0x1800AE360
 * Callers:
 *     <none>
 * Callees:
 *     ?create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z @ 0x1800AD118 (-create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z.c)
 */

int dynamic_initializer_for__c_remoteSystemAvailabilityPath__()
{
  c_remoteSystemAvailabilityPath = (__int64)winrt::impl::create_hstring_on_heap(
                                              (winrt::impl *)L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Rem"
                                                              "oteSystemProviders\\",
                                              (winrt::impl *)0x49);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__c_remoteSystemAvailabilityPath__);
}
