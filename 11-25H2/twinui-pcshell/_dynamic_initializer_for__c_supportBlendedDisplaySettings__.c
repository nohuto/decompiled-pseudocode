/*
 * XREFs of _dynamic_initializer_for__c_supportBlendedDisplaySettings__ @ 0x180011770
 * Callers:
 *     <none>
 * Callees:
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800AD16C (--0hstring@winrt@@QEAA@PEBG@Z.c)
 */

int dynamic_initializer_for__c_supportBlendedDisplaySettings__()
{
  winrt::hstring::hstring((winrt::hstring *)&c_supportBlendedDisplaySettings, L"supportBlendedDisplaySettings");
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__c_supportBlendedDisplaySettings__);
}
