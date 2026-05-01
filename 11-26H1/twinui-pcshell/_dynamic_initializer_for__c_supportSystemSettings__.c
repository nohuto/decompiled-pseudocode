/*
 * XREFs of _dynamic_initializer_for__c_supportSystemSettings__ @ 0x180012A60
 * Callers:
 *     <none>
 * Callees:
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x18003046C (--0hstring@winrt@@QEAA@PEBG@Z.c)
 */

int dynamic_initializer_for__c_supportSystemSettings__()
{
  winrt::hstring::hstring((winrt::hstring *)&c_supportSystemSettings, L"supportSystemSettings");
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__c_supportSystemSettings__);
}
