/*
 * XREFs of _dynamic_initializer_for__c_correlationIdQueryParam__ @ 0x180012B20
 * Callers:
 *     <none>
 * Callees:
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x18003046C (--0hstring@winrt@@QEAA@PEBG@Z.c)
 */

int dynamic_initializer_for__c_correlationIdQueryParam__()
{
  winrt::hstring::hstring((winrt::hstring *)&c_correlationIdQueryParam, L"correlationId");
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__c_correlationIdQueryParam__);
}
