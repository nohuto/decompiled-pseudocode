/*
 * XREFs of _dynamic_initializer_for__c_GameDVRConfigFolderName__ @ 0x1800127F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_initializer_for__c_GameDVRConfigFolderName__()
{
  if ( WindowsCreateStringReference(L"\\Microsoft\\GameDVR", 0x12u, &hstringHeader, &string2) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
}
