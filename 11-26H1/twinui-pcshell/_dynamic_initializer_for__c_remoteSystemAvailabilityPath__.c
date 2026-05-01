/*
 * XREFs of _dynamic_initializer_for__c_remoteSystemAvailabilityPath__ @ 0x18020F720
 * Callers:
 *     <none>
 * Callees:
 *     ?length@?$_WChar_traits@_W@std@@SA_KPEB_W@Z @ 0x18003062C (-length@-$_WChar_traits@_W@std@@SA_KPEB_W@Z.c)
 *     ?create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z @ 0x180032218 (-create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z.c)
 */

int dynamic_initializer_for__c_remoteSystemAvailabilityPath__()
{
  unsigned int v0; // eax
  winrt::impl *v1; // rcx

  v0 = std::_WChar_traits<wchar_t>::length((__int64)L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\RemoteSystemProviders\\");
  c_remoteSystemAvailabilityPath = (__int64)winrt::impl::create_hstring_on_heap(v1, (winrt::impl *)v0);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__c_remoteSystemAvailabilityPath__);
}
