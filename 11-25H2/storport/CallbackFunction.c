/*
 * XREFs of CallbackFunction @ 0x1400C52C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CallbackFunction(PVOID CallbackContext, PVOID Argument1, PVOID Argument2)
{
  if ( (_DWORD)Argument1 )
  {
    if ( (_DWORD)Argument1 == 1 )
      byte_140168D6C = 0;
  }
  else
  {
    byte_140168D6C = 1;
  }
}
