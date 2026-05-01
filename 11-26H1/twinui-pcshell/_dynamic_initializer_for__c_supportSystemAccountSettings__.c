/*
 * XREFs of _dynamic_initializer_for__c_supportSystemAccountSettings__ @ 0x1800129D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x18003046C (--0hstring@winrt@@QEAA@PEBG@Z.c)
 */

int dynamic_initializer_for__c_supportSystemAccountSettings__()
{
  winrt::hstring::hstring((winrt::hstring *)&c_supportSystemAccountSettings, L"supportSystemAccountSettings");
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__c_supportSystemAccountSettings__);
}
