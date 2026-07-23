/*
 * XREFs of HvlpPowerStateCallback @ 0x1404E7E80
 * Callers:
 *     <none>
 * Callees:
 *     HvlpCheckTscSync @ 0x1404E7EA4 (HvlpCheckTscSync.c)
 */

void __fastcall HvlpPowerStateCallback(PVOID CallbackContext, PVOID Argument1, PVOID Argument2)
{
  if ( (_DWORD)Argument1 == 3 && (_DWORD)Argument2 == 1 )
    HvlpCheckTscSync(CallbackContext);
}
