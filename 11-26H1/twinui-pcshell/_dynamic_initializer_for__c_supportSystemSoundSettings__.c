/*
 * XREFs of _dynamic_initializer_for__c_supportSystemSoundSettings__ @ 0x180012970
 * Callers:
 *     <none>
 * Callees:
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x18003046C (--0hstring@winrt@@QEAA@PEBG@Z.c)
 */

int dynamic_initializer_for__c_supportSystemSoundSettings__()
{
  winrt::hstring::hstring((winrt::hstring *)&c_supportSystemSoundSettings, L"supportSystemSoundSettings");
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__c_supportSystemSoundSettings__);
}
