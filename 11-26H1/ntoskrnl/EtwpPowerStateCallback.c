/*
 * XREFs of EtwpPowerStateCallback @ 0x140B55F30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall EtwpPowerStateCallback(PVOID CallbackContext, PVOID Argument1, PVOID Argument2)
{
  if ( (_DWORD)Argument1 == 3 )
  {
    if ( (_DWORD)Argument2 )
    {
      if ( (_DWORD)Argument2 == 1 )
        BYTE1(stru_140F03830.CycleTime) = 0;
    }
    else
    {
      BYTE1(stru_140F03830.CycleTime) = 1;
    }
  }
}
