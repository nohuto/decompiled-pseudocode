/*
 * XREFs of HalpKsrCallbackRoutine @ 0x140788BB0
 * Callers:
 *     <none>
 * Callees:
 *     HalpSetShutdownResetHandler @ 0x140581F4C (HalpSetShutdownResetHandler.c)
 */

void __fastcall HalpKsrCallbackRoutine(PVOID CallbackContext, PVOID Argument1, PVOID Argument2)
{
  int v3; // edx
  int v4; // edx
  int v5; // edx
  void (__fastcall __noreturn *v6)(__int64, __int64, __int64, __int64, volatile signed __int32 *); // rcx

  if ( !(_DWORD)Argument1 )
    goto LABEL_7;
  v3 = (_DWORD)Argument1 - 1;
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( !v4 )
      return;
    v5 = v4 - 1;
    if ( v5 )
    {
      if ( v5 != 1 )
        return;
      goto LABEL_6;
    }
LABEL_7:
    v6 = HalpShutdownReset;
    goto LABEL_8;
  }
LABEL_6:
  v6 = 0LL;
LABEL_8:
  HalpSetShutdownResetHandler((__int64)v6);
}
