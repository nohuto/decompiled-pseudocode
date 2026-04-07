/*
 * XREFs of McGenEventRegister_EtwEventRegister @ 0x18007812C
 * Callers:
 *     DllMain @ 0x180077EFC (DllMain.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall McGenEventRegister_EtwEventRegister(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 result; // rax

  result = 0LL;
  if ( !Microsoft_Windows_Dwm_Udwm_Provider_Context )
    return EtwEventRegister(
             &Microsoft_Windows_Dwm_Udwm_Provider,
             McGenControlCallbackV2,
             &Microsoft_Windows_Dwm_Udwm_Provider_Context,
             &Microsoft_Windows_Dwm_Udwm_Provider_Context,
             a5,
             a6);
  return result;
}
