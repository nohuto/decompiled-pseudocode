/*
 * XREFs of _dynamic_initializer_for__c_remoteSystemSettingsUri__ @ 0x1802274B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0hstring@winrt@@QEAA@PEBGI@Z @ 0x1800AD050 (--0hstring@winrt@@QEAA@PEBGI@Z.c)
 */

int dynamic_initializer_for__c_remoteSystemSettingsUri__()
{
  winrt::hstring::hstring((winrt::hstring *)&c_remoteSystemSettingsUri, L"ms-remotedesktop:settings", 0x19u);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__c_remoteSystemSettingsUri__);
}
