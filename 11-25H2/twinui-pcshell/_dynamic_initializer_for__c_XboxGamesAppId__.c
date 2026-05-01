/*
 * XREFs of _dynamic_initializer_for__c_XboxGamesAppId__ @ 0x18022B190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_initializer_for__c_XboxGamesAppId__()
{
  if ( WindowsCreateStringReference(
         L"Microsoft.XboxApp_8wekyb3d8bbwe!Microsoft.XboxApp",
         0x31u,
         &stru_180899F08,
         &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
}
