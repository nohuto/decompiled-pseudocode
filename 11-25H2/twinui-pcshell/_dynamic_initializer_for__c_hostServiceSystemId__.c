/*
 * XREFs of _dynamic_initializer_for__c_hostServiceSystemId__ @ 0x180227570
 * Callers:
 *     <none>
 * Callees:
 *     ??0hstring@winrt@@QEAA@PEBGI@Z @ 0x1800AD050 (--0hstring@winrt@@QEAA@PEBGI@Z.c)
 */

int dynamic_initializer_for__c_hostServiceSystemId__()
{
  winrt::hstring::hstring((winrt::hstring *)&c_hostServiceSystemId, L"systemId_remote", 0xFu);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__c_hostServiceSystemId__);
}
