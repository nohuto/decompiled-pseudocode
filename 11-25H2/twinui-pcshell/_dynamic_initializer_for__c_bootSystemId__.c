/*
 * XREFs of _dynamic_initializer_for__c_bootSystemId__ @ 0x180224690
 * Callers:
 *     <none>
 * Callees:
 *     ??0hstring@winrt@@QEAA@PEBGI@Z @ 0x1800AD050 (--0hstring@winrt@@QEAA@PEBGI@Z.c)
 */

int dynamic_initializer_for__c_bootSystemId__()
{
  winrt::hstring::hstring((winrt::hstring *)&c_bootSystemId, L"SystemId_boot", 0xDu);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__c_bootSystemId__);
}
