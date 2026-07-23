/*
 * XREFs of TpCallbackUnloadDllOnCompletion @ 0x1800E8CF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl TpCallbackUnloadDllOnCompletion(PTP_CALLBACK_INSTANCE Instance, PVOID DllHandle)
{
  if ( !Instance || (char *)DllHandle - 1 > (char *)0xFFFFFFFFFFFFFFFDLL || Instance->DllHandle )
  {
    TppRaiseInvalidParameter();
  }
  else
  {
    Instance->CallbackEpilogFlags |= 0x80u;
    Instance->DllHandle = DllHandle;
  }
}
